## TIL : push and PR

### 1. push - you upload code directly to the branch.
- your local code -> git push -> main branch - > CI runs here

### 2. pull_request - you request to merge one branch into another.
- feature brach -> open PR - > CI rens here -> someone reviews -> merge -> main branch

### 3. Practice #1 : make PR
> ### 1) branch naming 
> - add function : feature/add-filter
> - fix bug : fix/log-encoding
> - fix doc : docs/update-readme
> - refactoring : refactor/clean-zippy
```bash
> git checkout -b feature/add-filter # no exist
> git checkout feature/add-filter # already exist
> git add .
> git commit -m "add filter"
> git push origin feature/add-filter
```
> ### 2) In the Github web, open PR.
> - base : master <- compare : feature/add-filter
> - Create pull request
> ### 3) Check the CI in actions.
> - open the tigger of PR.
> - check the green 'check'.
> ### 4) Merge
> - do Merge.
```bash
> git checkout master
> git pull origin master
> git branch -d feature/add-filter # delete
```


