SWYFT Core integration/staging tree
=====================================


SWYFT Home
----------------

https://swyft.network

What is SWYFT?
----------------

SWYFT is an experimental digital currency that enables instant payments to
anyone, anywhere in the world. SWYFT uses peer-to-peer technology to operate
with no central authority: managing transactions and issuing money are carried
out collectively by the network. SWYFT Core is the name of open source
software which enables the use of this currency.

For more information, as well as an immediately useable, binary version of
the XSN Core software, see https://swyft.network/, or read the
[original whitepaper](https://www.apple.com).

License
-------

SWYFT Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/swyft-project/swyft-core/tags) are created
regularly to indicate new official, stable release versions of SWYFT Core.

The contribution workflow is described in [CONTRIBUTING.md](CONTRIBUTING.md).

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.

### Automated Testing

Developers are strongly encouraged to write [unit tests](src/test/README.md) for new code, and to
submit new unit tests for old code. Unit tests can be compiled and run
(assuming they weren't disabled in configure) with: `make check`. Further details on running
and extending unit tests can be found in [/src/test/README.md](/src/test/README.md).

There are also [regression and integration tests](/test), written
in Python, that are run automatically on the build server.
These tests can be run (if the [test dependencies](/test) are installed) with: `test/functional/test_runner.py`

The Travis CI system makes sure that every pull request is built for Windows, Linux, and OS X, and that unit/sanity tests are run automatically.

### Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the
code. This is especially important for large or high-risk changes. It is useful
to add a test plan to the pull request description if testing the changes is
not straightforward.

Running with Docker
-------

If you are already familiar with Docker, then running SWYFT with Docker might be the the easier method for you. To run XSN using this method, first install [Docker](https://docs.docker.com/install/). After this you may
continue with the following instructions.

Please note that we currently don't support the GUI when running with Docker. Therefore, you can only use RPC (via HTTP or the `swyft-cli` utility) to interact with SWYFT via this method.

Right now we don't store the image in docker hub, so you need to build it on your own:

```sh
docker build . -t swyft
```

Start SWYFT daemon: ( you might consider to bind custom ports in case you want to run a node or make usage of the json-rpc api [https://docs.docker.com/engine/reference/run/](https://docs.docker.com/engine/reference/run/))

```sh
docker run -d -P --name swyft swyft:latest
```

View current block count (this might take a while since the daemon needs to find other nodes and download blocks first):

```sh
docker exec swyft swyft-cli getblockcount
```

View connected nodes:

```sh
docker exec swyft swyft-cli getpeerinfo
```

Stop daemon:

```sh
docker stop swyft
```

Backup wallet:

```sh
docker cp swyft:/home/swyft/.swyftcore/wallet.dat .
```

Start daemon again:

```sh
docker start swyft
```
