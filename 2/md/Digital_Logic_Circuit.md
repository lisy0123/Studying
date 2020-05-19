# 디지털논리회로 - Digital Logic Circuit

[TOC]

# :one: 컴퓨터와 디지털 논리회로

## 1. 디지털 시스템

### - 시스템 정의

1. **검은상자형 시스템**

   입력(input)과 출력(output)이 있는 검은상자(black box)로 표현

   검은 상자란 그 내부에 대해서는 큰 의미를 부여하지 않는다는 뜻 내포

   입력과 출력에 관심을 갖고 해당 시스템을 고려하는 것

2. **구성요소의 집합으로서의 시스템**

   주로 검은상자 내부에 관해 규정하는 것

- **시스템**

  시스템에 부여된**목적(goal)**을 달성하기 위해 **상호작용(interaction)**하는 **구성요소(component)**들의 집합

## 2. 아날로그와 디지털 비교

### - 데이터 표현 방법

## 3. 컴퓨터의 구성

### - 컴퓨터 시스템의 구성요소

하드웨어, 소프트웨어, 데이터, 프로시저, 사람

### - 컴퓨터 하드웨어 5대 구성요소

입력장치, 기억장치, 연산장치, 제어장치, 출력장치

### - 디지털 커퓨터의 소개

- **디지털 컴퓨터**

  대표적인 디지털 시스템의 예로 하드웨어 구성을 따름

- **입력장치**

  컴퓨터에 들어가는 정보의 형태에 따라 여러 가지 형태를 띰

  ex) 자기테이프, 키보드, 마우스, 스캐너

- **출력장치**

  프린터, 플로터(plotter), CRT(Cathode Ray Tube) 모니터(monitor) 또는 LCD 채널

- **연산장치와 제어장치(처리기 또는 프로세서)**

  수치연산 및 논리연산(가산, 감산, 승산, 제산, AND, OR, NOT 등)

  자료의 전송(레지스터, 기억장치 사이 및 입출력 장치 사이의 자료 교환)

  다음에 행하는 연산의 결정

## 4. 집적회로

디지털 게이트(digital gate)의 기능을 수행하는 전자소자를포함하는 작은 실리콘 반도체 크리스털(silicon semiconductor crystal)로 칩(chip)이라고도 함

### - 집적도

단위 실리콘칩에 집적할 수 있는 게이트의 수

- **소규모 집적(SSI: Small Scale Integration)**

  단위 패캐지 내에 몇 개의 독립된 게이트를 내장하고 있는 게이트

  내장한 게이트의 수는 대체로 10개 이하

- **중규모 집적(MSI: Medium Scale Integration)**

  단위 패키지 내에 대략 10 ~ 100개의 게이트를 내장한 복잡한 구조

  대체로 특정 디지털 함수, 디코더(decoder), 가산기(adder), 레지스터(register)로서의 기능 수행

- **대규모 집적(LSI: Large Scale Integration)**

  단위 패키지당 수백 ~ 수천 개의 게이트 내장

  프로세서(processor), 기억장치 칩(memory chip), 프로그램 가능한 모듈(programmable module) 등과 같은 디지털 시스템 포함

- **초대규모 집적(VLSI: Very LSI)**

  단위 패키지 내에 수천 개의 게이트 내장

  대규모 기억장치 배열과 복잡한 마이크로컴퓨터칩, 등

### -표준특성

평가에 사용되는 주요 기준

1. **팬-아웃(fan-out)**

   정상동작에 영향을 주지 않고 게이트 출력부에 연결할 수 있는 표준부하의 수

2. **전력소모(power dissipation)**

   게이트가 동작할 때 필요한 전력

3. **전파지연시간(propagation delay)**

   2진 신호가 그 값이 바뀌었을 때 입력에서 출력까지 신호의 변화가 전달되는 데 걸리는 평균시간

4. **잡음여유(noise margin)**

   회로의 출력을 바꾸지 않으면서 입력에 첨가되는 최대 잡음전압

## 5. 양논리와 음논리

게이트의 입력과 출력에 대한 2진 신호는 상태가 변하는 동안을 제외하고 두 값 중에 한 값을 가짐

- **양논리 시스템(positive logic system)**

  높은 신호값 H를 논리값 1로 하고 낮은 신호값 L을 논리값 0으로 할당하는 것

- **음논리 시스템(negative logic system)**

  H를 논리값 0, L을 논리값 1로 할당하는 것

양, 음은 단지 두 신호값에 논리값을 할당하는 방법을 나타낸 것

---

# :two: 데이터 표현

## 1. 수치데이터

## 2. 디지털 코드

==**컴퓨터시스템구조 > :two: 데이터 표현 및 연산 참고**==

---

# :three: 부울대수와 논리게이트

## 1. 논리연산과 논리게이트

### - 논리연산

2개의 이산값에 적용되는, 논리적 의미를 갖는 연산

### - 논리연산의 종류

- **AND 연산** :  $XY=F$

- **OR 연산**    :  $X+Y=F$

- **NOT 연산** :  $\overline{B}=F$

### - 논리게이트의 종류 및 특성

#### - 논리회로

적절하게 입력된 신호를 가지고 논리적 조작을 수행

출력신호를 생성하는 전자적 회로로 이때 사용되는 정보는 0이나 1을 나타내는 2진 신호로 표시

각각 2개의 분리된 전압 레벨의 출력으로 나타낼 수 있음

#### - 기본 논리게이트

- **AND 게이트**: 논리적 곱 수행
- **OR 게이트**: 논리적 합 수행
- **NOT 게이트**: 인버터(inverter) 수행

#### - 기타 논리게이트

- **NAND 게이트**: 논리적 곱의 보수(AND-NOT) 수행
- **NOR 게이트**: 논리적 합의 보수(OR-NOT) 수행
- **XOR 게이트**: 비교연산 수행
- **XNOR 게이트**: XOR 보수, 비교연산 수행

|       기호이름        |                       변별기호                        | 대수식                                                       |                            진리표                            |
| :-------------------: | :---------------------------------------------------: | ------------------------------------------------------------ | :----------------------------------------------------------: |
|         $AND$         |    ![and](/Users/sangeunlee/lisy/타임랩스/and.png)    | $F=XY$                                                       | $\begin{array}{cc|c}X&Y&F\\\hline0&0&0\\0&1&0\\1&0&0\\1&1&1\end{array}$ |
|         $OR$          |     ![or](/Users/sangeunlee/lisy/타임랩스/or.png)     | $F=X+Y$                                                      | $\begin{array}{cc|c}X&Y&F\\\hline0&0&0\\0&1&1\\1&0&1\\1&1&1\end{array}$ |
|         $NOT$         |    ![not](/Users/sangeunlee/lisy/타임랩스/not.png)    | $F=\overline{X}$                                             |      $\begin{array}{c|c}X&F\\\hline0&1\\1&0\end{array}$      |
|         버퍼          | ![buffer](/Users/sangeunlee/lisy/타임랩스/buffer.png) | $F=X$                                                        |      $\begin{array}{c|c}X&F\\\hline0&0\\1&1\end{array}$      |
|        $NAND$         |   ![nand](/Users/sangeunlee/lisy/타임랩스/nand.png)   | $F=\overline{XY}$                                            | $\begin{array}{cc|c}X&Y&F\\\hline0&0&1\\0&1&1\\1&0&1\\1&1&0\end{array}$ |
|         $NOR$         |    ![nor](/Users/sangeunlee/lisy/타임랩스/nor.png)    | $F=\overline{X+Y}$                                           | $\begin{array}{cc|c}X&Y&F\\\hline0&0&1\\0&1&0\\1&0&0\\1&1&0\end{array}$ |
|  $XOR$ (배타적$-OR$)  |    ![xor](/Users/sangeunlee/lisy/타임랩스/xor.png)    | $F=X\overline{Y}+\overline{X}Y=X\oplus Y$                    | $\begin{array}{cc|c}X&Y&F\\\hline0&0&0\\0&1&1\\1&0&1\\1&1&0\end{array}$ |
| $XNOR$ (배타적$-NOR$) |   ![xnor](/Users/sangeunlee/lisy/타임랩스/xnor.png)   | $F=XY+\overline{X}\overline{Y}=\overline{X}\overline{\oplus}\overline{Y}$ | $\begin{array}{cc|c}X&Y&F\\\hline0&0&1\\0&1&0\\1&0&0\\1&1&1\end{array}$ |

## 2. 부울대수 (Boolean algebra)

2진 변수와 논리연산을 다루는 대수

변수는 영문자로 표시

논리연산에는 AND, OR와 보수의 세 가지 연산이 있음

- **부울함수**(Boolean function)

  논리변수와 상호관계를 나타내기 위해 부울변수, 부울상수(0, 1), 부울연산기호($\cdot,\;+,\;-$), 괄호 및 등호 등으로 나타내는 대수적인 표현

부울함수를 진리표로 나타날 때는 진리표 하나로 결정

부울함수를 대수식으로 나타낼 때는 다양한 형태의 식으로 표현할 수 있음

### - 부울대수의 기본공식

| 번호 | 기본공식                                        | 번호 | 기본공식                                        |                 |
| :--: | ----------------------------------------------- | :--: | ----------------------------------------------- | :-------------: |
|  1   | $X+0=X$                                         |  2   | $X\cdot 1=X$                                    |                 |
|  3   | $X+1=1$                                         |  4   | $X\cdot 0=0$                                    |                 |
|  5   | $X+X=X$                                         |  6   | $X\cdot X=X$                                    |                 |
|  7   | $X+\overline{X}=1$                              |  8   | $X\cdot \overline{X}=0$                         |                 |
|  9   | $\overline{\overline{X}}=X$                     |      |                                                 |                 |
|  10  | $X+Y=Y+X$                                       |  11  | $XY=YX$                                         |    교환법칙     |
|  12  | $X+(Y+Z)=(X+Y)+Z$                               |  13  | $X(YZ)=(XY)Z$                                   |    결합법칙     |
|  14  | $X(Y+Z)=XY+XZ$                                  |  15  | $X+YZ=(X+Y)(X+Z)$                               |    분배법칙     |
|  16  | $\overline{X+Y}=\overline{X}\cdot \overline{Y}$ |  17  | $\overline{X\cdot Y}=\overline{X}+\overline{Y}$ | 드모르간의 법칙 |
|  18  | $X+X\cdot Y=X$                                  |  19  | $X\cdot (X+Y)=X$                                |    흡수정리     |

### - 부울함수의 대수적 간소화

부울대수의 공식을 이용하여 변환한 후, 변환된 여러 함수 중에서 가장 간단한 형태의 함수를 찾아내는 것

### - 대수적 간소화에서 주로 사용되는 방법

- **항 결합**

  $XY=X\overline{Y}=X(Y+\overline{Y})=X\cdot 1=X$

- **문자 소거**

  $X+\overline{X}Y=(X+\overline{X})(X+Y)=1\cdot (X+Y)=X+Y$

  $X(\overline{X}+Y)=X\overline{X}+XY=0+XY=XY$

- **중복항 첨가**

  $F=X\overline{Y}Z+XYZ+\overline{X}YZ$

  $\;\;\;=X\overline{Y}Z+XYZ+XYZ+\overline{X}YZ$

  $\;\;\;=XZ(\overline{Y}+Y)+YZ(X+\overline{X})$

  $\;\;\;=XZ+YZ$

## 3. 부울함수의 정규형 및 표준형

### - 정규형

부울함수를 표현하는 대표적인 방법 중 하나

함수의 항이 **최소항의 합(sum of minterm)**이나 **최대항의 곱(product of maxterm)**으로 표현된 식

이 외의 함수는 비정규형(non-canonical form)

#### - 최소항과 최대항

- **최소항**

  n개의 논리변수로 구성되는 부울함수에서 최소항이란 각 변수의 문자 1개씩 모두 n개의 문자의 논리곱항으로서 그 결과 논리-1인 경우

- **최대항**

  n개의 논리변수로 구성되는 부울함수에서 최대항이란 각 변수의 문자 1개씩 모두 n개의 문자의 논리합항으로써 그 결과 논리-1인 경우

  | $X$  | $Y$  | $Z$  |               최소항-항                | 최소항-표시 |                최대항-항                 | 최대항-표시 |
  | :--: | :--: | :--: | :------------------------------------: | :---------: | :--------------------------------------: | :---------: |
  |  0   |  0   |  0   | $\overline{X}\overline{Y}\overline{Z}$ |    $m_0$    |                 $X+Y+Z$                  |    $M_0$    |
  |  0   |  0   |  1   |      $\overline{X}\overline{Y}Z$       |    $m_1$    |            $X+Y+\overline{Z}$            |    $M_1$    |
  |  0   |  1   |  0   |      $\overline{X}Y\overline{Z}$       |    $m_2$    |            $X+\overline{Y}+Z$            |    $M_2$    |
  |  0   |  1   |  1   |            $\overline{X}YZ$            |    $m_3$    |      $X+\overline{Y}+\overline{Z}$       |    $M_3$    |
  |  1   |  0   |  0   |      $X\overline{Y}\overline{Z}$       |    $m_4$    |            $\overline{X}+Y+Z$            |    $M_4$    |
  |  1   |  0   |  1   |            $X\overline{Y}Z$            |    $m_5$    |      $\overline{X}+Y+\overline{Z}$       |    $M_5$    |
  |  1   |  1   |  0   |            $XY\overline{Z}$            |    $m_6$    |      $\overline{X}+\overline{Y}+Z$       |    $M_6$    |
  |  1   |  1   |  1   |                 $XYZ$                  |    $m_7$    | $\overline{X}+\overline{Y}+\overline{Z}$ |    $M_7$    |

#### - 최소항의 합

부울함수에서 n개의 2진 변수는 최대 $2^n$개의 서로 다른 최소항(AND 연산) 구성할 수 있음

구성된 최소항을 OR 연산으로 결함하여 곱의 합으로 표시

ex) 부울함수 $F=X+Y\overline{Z}$를 최소항의 합으로 표현

$F=X+Y\overline{Z}$

$\;\;\;=X(Y+\overline{Y})+(X+\overline{X})Y\overline{Z}$

$\;\;\;=XY+X\overline{Y}+XY\overline{Z}+\overline{X}Y\overline{Z}$

$\;\;\;=XY(Z+\overline{Z})+X\overline{Y}(Z+\overline{Z})+XY\overline{Z}+\overline{X}Y\overline{Z}$

$\;\;\;=XYZ+XY\overline{Z}+X\overline{Y}Z+X\overline{Y}\overline{Z}+XY\overline{Z}+\overline{X}Y\overline{Z}$

$\;\;\;=XYZ+XY\overline{Z}+X\overline{Y}Z+X\overline{Y}\overline{Z}+\overline{X}Y\overline{Z}$

$\;\;\;=m_2+m_4+m_5+m_6+m_7$

$\therefore F(X,\;Y,\;Z)=\sum m(2,\;4,\;5,\;6,\;7)$

#### - 최대항의 곱

n개의 변수로 구성된 $2^n$가지 함수들의 각각은 최대항의 곱으로 표현 가능

ex) 부울함수 $F=XY+\overline{X}Z$를 최소항의 합으로 표현

$F=XY+\overline{X}Z$

$\;\;\;=(XY+\overline{X})+(XY+Z)$

$\;\;\;=(X+\overline{X})(Y+\overline{X})(X+Z)(Y+Z)$

$\;\;\;=(\overline{X}+Y)(X+Z)(Y+Z)$

$\;\;\;=(\overline{X}+Y+Z\overline{Z})(X+Y\overline{Y}+Z)(X\overline{X}+Y+Z)$

$\;\;\;=(\overline{X}+Y+Z)(\overline{X}+Y+\overline{Z})(X+Y+Z)(X+\overline{Y}+Z)(X+Y+Z)(\overline{X}+Y+Z)$

$\;\;\;=(X+Y+Z)(X+\overline{Y}+Z)(\overline{X}+Y+Z)(\overline{X}+Y+\overline{Z})$

$\;\;\;=M_0\cdot M_1\cdot M_2\cdot M_3$

$\therefore F(X,\;Y,\;Z)=\prod M(0,\;2,\;4,\;5)$

#### -정규형 간의 관계

최소항의 합으로 표시된 함수의 보수는 원래 함수에서 제외된 최소항의 합으로, 

어떤 함수를 표현하는 최소항은 함수를 1로 하지만, 그것의 보수를 표현하는 최소값은 처음 함수를 0으로 함

$F=(X,\;Y,\;Z)=\sum m(2,\;4,\;5,\;6,\;7)=m_2+m_4+m_5+m_6+m_7$

$\overline{F}=(X,\;Y,\;Z)=\sum m(0,\;1,\;3)=m_0+m_1+m_3$

$F=(X,\;Y,\;Z)=\overline{\overline{F}}(X,\;Y,\;Z)=\prod M(0,\;1,\;3)=\sum m(2,\;4,\;5,\;6,\;7)$

$\therefore \overline{m_i}=M_i$

### - 표준형 (standard form)

부울함수를 표현하는 또다른 방법

표준형의 각 항은 하나 또는 그 이상의 문자로 구성

곱의 합(sum of products)과 합의 곱(product of sums) 있음

#### - 곱의 합

부울함수에서 n개의 2진 변수는 최대 $2^n$개의 서로 다른 최소항(AND 연산)을 구성할 수 있음

구성된 최소항을 OR 연산으로 결합

<img src="/Users/sangeunlee/lisy/타임랩스/sum.png" alt="sum" style="zoom:90%;" /> - $F=\overline{Y}+\overline{X}Y\overline{Z}+XY$

#### - 합의 곱

합항의 논리곱 형태

각 논리합 항은 임의 개수의 리터럴(literal)을 가짐

<img src="/Users/sangeunlee/lisy/타임랩스/product.png" alt="product" style="zoom:90%;" /> - $F=X(\overline{Y}+Z)(Z+Y+\overline{Z})$

## 4. 집적회로

---

# :four: 부울함수의 간소화 및 구현

## 1. 개요

### - 부울함수의 간소화 방법

- **대수적인 방법(algebraic method)**

  주어진 부울함수에 대해 부울대수의 정리를 대수적으로 적용하는 방법

- **도표방법(map method)**

  카르노도표(Karnaugh Map)라 불리는 도표를 사용하는 방법

  부울함수의 각항은 하나의 곱형태로 쉽게 간소화

  변수 많아짐에 따라 구성 복잡해져, 실제로 6개 또는 그 이하의 변수를 가진 변수만 대상으로 함

- **테이블 방법(tabular method)**

  퀸-맥클러스키 방법(Quine-Mcluskey Method)이라 함

  테이블을 사용하여 간소화 알고리즘(minimization algorithm)을 쉽게 궆현

  많은 변수를 갖고 있는 부울함수의 간소화에 적당

## 2. 카르노도표 도표방법

### - 개요

여러 개의 사각형으로 된 그림

사각형은 각각 하나의 최소항 또는 최대항 나타냄

직관적으로 부울함수 간소화

입력변수의 수가 n인 경우 **n수 카르노도표**라고 하며 $2^n$개의 사각형으로 구성

### - 인접 사각형

#### - 인접 사각형의 정의

카르노도표에서 각 정사각형은 하나의 최소항

부울공식인 $X+\overline{X}=1$을 이용해 간소화함

#### - 인접 사각형끼리 묶는 방법

한 묶음 내의 정사각형 수는 $2n(n=0.\;1,\;2,\;...,\;n)$개가 되도록 묶음

한 묶음은 크게, 전체 묶음의 수는 작게 묶음

### - 2변수 카르노도표

![2](/Users/sangeunlee/lisy/타임랩스/2.png) ex) $F(X,\;Y)=\sum m(1,\;2,\;3)=\overline{X}Y+X\overline{Y}+XY=X+Y$

### - 3변수 카르노도표

<img src="/Users/sangeunlee/lisy/타임랩스/3.png" alt="3" style="zoom:90%;" /> ex) $F(X,\;Y,\;Z)=\sum m(0,\;1,\;2,\;6)=\overline{X}\overline{Y}+Y\overline{Z}$

### - 4변수 카르노도표

<img src="/Users/sangeunlee/lisy/타임랩스/4.png" alt="4" style="zoom:90%;" /> ex) $F(W,\;X,\;Y,\;Z)=\sum m(1,\;3,\;4,\;5,\;11,\;12,\;13)=X\overline{Y}+\overline{W}\overline{X}Z+\overline{W}YZ$

### - 5변수 카르노도표

### - 6변수 카르노도표

### - 무관조건

논리회로에서는 입력변수들의 조합에 따라서 함숫값이 발생하지 않는 경우나 0인나 1 중 어떠한 함숫값이 출력값으로 나와도 무관한 경우가 있음

이 무관조건(don't care condition)은 함수를 더욱 간소화하는 데 사용됨

 ex) $F(W,\;X,\;Y,\;Z)=\sum m(0,\;3,\;6,\;9)$

​	   단, 무관조건은 $d(W,\;X,\;Y,\;Z)=\sum m(10,\;11,\;12,\;13,\;14,\;15)$

<img src="/Users/sangeunlee/lisy/타임랩스/5.png" alt="5" style="zoom:90%;" /> - 곱의 합형 $F=\overline{W}\overline{X}\overline{Y}\overline{Z}+WZ+\overline{X}\overline{Y}\overline{Z}+XY\overline{Z}$

<img src="/Users/sangeunlee/lisy/타임랩스/6.png" alt="6" style="zoom:90%;" /> - 합의 곱형 $(\overline{X}+Y)(\overline{X}+\overline{Z}) (\overline{W}+\overline{Z})(X+\overline{Y}+Z)$

### - 기타 카르노도표

**XOR 논리게이트**는 등가의 논리식으로 바꾸어 일반의 논리함수로 변환 가능

<img src="/Users/sangeunlee/lisy/타임랩스/7.png" alt="7" style="zoom:72%;" /> - $X \oplus Y\oplus Z=(X\overline{Y}+\overline{X}Y)\overline{Z}+(XY+\overline{X}\overline{Y})Z=X\overline{Y}Z+\overline{X}Y\overline{Z}+\overline{X}\overline{Y}Z+XYZ$

<img src="/Users/sangeunlee/lisy/타임랩스/8.png" alt="8" style="zoom:90%;" /> - $A\oplus B\oplus C\oplus D$

<img src="/Users/sangeunlee/lisy/타임랩스/xyz.png" alt="xyz" style="zoom:90%;" />		<img src="/Users/sangeunlee/lisy/타임랩스/abcd.png" alt="abcd" style="zoom:90%;" />

:arrow_up_small: $P=X\oplus Y\oplus Z$												:arrow_up_small: $P=A\oplus B\oplus C\oplus D$

## 3. NAND 게이트와 NOR 게이트

### - NAND 게이트

논리적 곱의 보수(AND-NOT) 수행하는 기능

|   NOT   | <img src="/Users/sangeunlee/lisy/타임랩스/not.png" alt="not" style="zoom:90%;" /> | $\overline{X}$                            |
| :-----: | :----------------------------------------------------------: | ----------------------------------------- |
| **AND** | <img src="/Users/sangeunlee/lisy/타임랩스/nand1.png" alt="8" style="zoom:90%;" /> | $\overline{\overline{XY}}=XY$             |
| **OR**  | <img src="/Users/sangeunlee/lisy/타임랩스/nand2.png" alt="8" style="zoom:90%;" /> | $\overline{\overline{X}\overline{Y}}=X+Y$ |

<img src="/Users/sangeunlee/lisy/타임랩스/nand3.png" alt="nand3" style="zoom:90%;" /> - AND-NOT $\overline{XYZ}$		![nand4](/Users/sangeunlee/lisy/타임랩스/nand4.png) - NOT-OR $\overline{X}+\overline{Y}=\overline{XY}$

ex) $F=XYZ+WX$

<img src="/Users/sangeunlee/lisy/타임랩스/nand5.png" alt="nand5" style="zoom:90%;" />	<img src="/Users/sangeunlee/lisy/타임랩스/nand6.png" alt="nand6" style="zoom:90%;" />

### - NOR 게이트

논리적 합의 보수(OR-NOT) 수행하는 기능

|   NOT   | <img src="/Users/sangeunlee/lisy/타임랩스/not.png" alt="not" style="zoom:90%;" /> | $\overline{X}$                            |
| :-----: | :----------------------------------------------------------: | ----------------------------------------- |
| **OR**  | <img src="/Users/sangeunlee/lisy/타임랩스/nor1.png" alt="8" style="zoom:90%;" /> | $\overline{\overline{X}\overline{Y}}=X+Y$ |
| **AND** | <img src="/Users/sangeunlee/lisy/타임랩스/nor2.png" alt="8" style="zoom:90%;" /> | $\overline{\overline{XY}}=XY$             |

<img src="/Users/sangeunlee/lisy/타임랩스/nor3.png" alt="nor3" style="zoom:90%;" /> - OR-NOT $\overline{X+Y+Z}$			![nor4](/Users/sangeunlee/lisy/타임랩스/nor4.png) - NOT-AND $\overline{X}\overline{Y}=\overline{X+Y}$

ex) $F=W(XY+Z)(\overline{Y}\overline{Z}+\overline{W})$

<img src="/Users/sangeunlee/lisy/타임랩스/nor5.png" alt="nor5" style="zoom:90%;" />	<img src="/Users/sangeunlee/lisy/타임랩스/nor6.png" alt="nor6" style="zoom:90%;" />

---

# :five: 조합논리회로

## 1. 개요

### - 디지털 시스템을 구성하는 논리회로

- **조합논리회로**

  현재의 입력에 대해 현재 입력의 논리조합에 의해서만 출력값이 결정되는 회로

  부울대수의 집합에 의해 표현되는 논리연산을 수행하는 여러 논리게이트(AND, OR, NOT)로 구성

- **순서논리회로**

- 조합 논리게이트에 플립플롭(flip-flop)이라는 저장요소 추가한 회로

- 저장요소의 상태와 입력변수에 의해 출력이 결정됨

### - 조합논리회로의 구성

입력변수와 논리게이트, 출력변수로 구성

각 출력변수에 해당하는 m개의 부울함수로 나타낼 수 있음

각각의 출력 부울함수는 n개의 입력변수의 함수로 표현

## 2. 조합논리회로의 분석과 설계

- **조합논리회로의 분석**

  논리도로부터 출력 부울함수나 진리표를 구하는 것

- **조합논리회로의 설계**

  주어진 회로에 대한 설명으로부터 논리도를 구하는 것

### - 조합논리회로의 분석

#### - 부울함수의 유도

1. 모든 게이트의 출력에 임의의 기호를 부여, 부울함수 구함
2. 1에서 만든 출력을 입력으로 하는 게이트의 출력에 다시 임의의 기호를 붙여, 각 게이트에 대한 부울함수를 구함
3. 입력변수의 함수로 된 회로출력을 얻을 때까지 과정 2 반복

#### - 진리표 작성

1. 회로에서 입력변수의 개수를 정하고, n개의 입력에 대해 표에 0부터 $2^n-1$까지 모두 $2^n$개의 2진수 리스트 작성
2. 선택한 중간 출력게이트에 임의의 기호 붙임
3. 입력변수로만 이루어진 출력게이트에 대해 진리표 작성
4. 모든 출력란을 작성할 때까지 중간 출력함수 정리

#### - 조합논리회로의 설계

1. 입력, 출력 변수를 적당한 기호로 표시, 블록도 그림
2. 입력, 출력 변수의 관계를 정의하는 진리표 작성
3. 각각의 출력을 입력변수의 함수로 나타내고 간소화
4. 논리회로도 그림

## 3. 기본 연산회로

### - 가산기

#### - 반가산기

한 비트의 2진수에 다른 한 비트 2진수를 더하는 산술회로

2개의 입력, 2개의 출력을 가짐

- 반가산기의 진리표

| 입력-$X$ | 입력-$Y$ | 출력-$S$ | 출력-$C$ |
| :------: | :------: | :------: | :------: |
|    0     |    0     |    0     |    0     |
|    0     |    1     |    1     |    0     |
|    1     |    0     |    1     |    0     |
|    1     |    1     |    0     |    1     |

$S=\overline{X}Y+X\overline{Y}=X\oplus Y$

$C=XY$

#### - 전가산기

세 입력 비트의 합을 계산하는 조합논리회로

입력변수를 X, Y, Z로 할때 X, Y는 더해질 현재 위치의 자릿수, Z는 올림수

| 입력-$X$ | 입력-$Y$ | 입력-$Z(=C_i)$ | 출력-$S$ | 출력-$C$ |
| :------: | :------: | :------------: | :------: | -------- |
|    0     |    0     |       0        |    0     | 0        |
|    0     |    0     |       1        |    1     | 0        |
|    0     |    1     |       0        |    1     | 0        |
|    0     |    1     |       1        |    0     | 1        |
|    1     |    0     |       0        |    1     | 0        |
|    1     |    0     |       1        |    0     | 1        |
|    1     |    1     |       0        |    0     | 1        |
|    1     |    1     |       1        |    1     | 1        |

$S=\overline{X}\overline{Y}Z+\overline{X}Y\overline{Z}+X\overline{Y}\overline{Z}+XYZ=X\oplus Y\oplus Z$

$C=XY+XZ+YZ=XY+Z(X\oplus Y)$



#### - 직병렬 가산기

## 4. 여러가지 조합논리회로

## 5. MSI를 이용한 조합논리회로

---

# :six: 순서논리회로

## 1. 개요

## 2. 플립폴롭

## 3. 플립플롭의 트리거링

## 4. 순서논리회로의 분석

## 5. 순서논리회로의 설계

---

# :seven: 레지스터와 카운터

## 1. 레지스터

## 2. 카운터

## 3. 메모리셀

---

# :eight: 기억장치와 PLD

## 1. 개요

## 2. RAM

## 3. ROM

## 4. PLD

