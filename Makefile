dev:
	python3 -m pip install --upgrade pip
	python3 -m pip install -e .[all]

test:
	python3 -m pytest