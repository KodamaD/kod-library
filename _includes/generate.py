import os
import pathlib
import shutil

def main():
    if pathlib.Path('kodlib').exists():
        shutil.rmtree('kodlib')
    os.mkdir('kodlib')

    for dirname in ['algo', 'container', 'graph', 'math', 'random', 'traits', 'util']:
        for dirs in pathlib.Path('../').joinpath(dirname).glob('**'):
            os.makedirs(str(dirs).replace('../', 'kodlib/'), exist_ok=True)
        for src in pathlib.Path('../').joinpath(dirname).glob('**/*.cpp'):
            with open(str(src).replace('../', 'kodlib/').replace('.cpp', ''), 'w') as include:
                include.write('#include \"' + str(src).replace('../', '/Users/kodamankod/procon/library/kod-library/') + '\"')

if __name__ == '__main__':
    main()