from setuptools import find_packages
from setuptools import setup

setup(
    name='pal_fib_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('pal_fib_interfaces', 'pal_fib_interfaces.*')),
)
