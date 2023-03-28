from setuptools import find_packages
from setuptools import setup

setup(
    name='custom_hydra_message',
    version='0.0.0',
    packages=find_packages(
        include=('custom_hydra_message', 'custom_hydra_message.*')),
)
