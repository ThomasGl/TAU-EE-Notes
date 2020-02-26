# Mathematical Supplement for Physics

Gabriel Domingues {#name}

- [Mathematical Supplement for Physics](#mathematical-supplement-for-physics)
- [Integrals](#integrals)
  - [Indefinite Integrals](#indefinite-integrals)
    - [Substitution](#substitution)
    - [Integration by Parts Table](#integration-by-parts-table)
    - [Inverse Function](#inverse-function)
  - [Definite Integrals](#definite-integrals)
- [Multivariable Integrals](#multivariable-integrals)
  - [Double and Triple Integrals](#double-and-triple-integrals)
    - [General Solving Technique](#general-solving-technique)
  - [Change of Coordinates](#change-of-coordinates)
  - [Center of Mass and other Applications](#center-of-mass-and-other-applications)
- [ODES](#odes)
  - [Separation of Variables](#separation-of-variables)
  - [Constant Coefficients](#constant-coefficients)
  - [Inhomogeneous](#inhomogeneous)
- [Vector Calculus](#vector-calculus)
  - [Gradients, Curls, Divergences and Laplacians](#gradients-curls-divergences-and-laplacians)
  - [Line Integrals and Gradient Theorem](#line-integrals-and-gradient-theorem)
  - [Flux Integrals](#flux-integrals)
  - [Theorems](#theorems)
    - [Gradient Theorem](#gradient-theorem)
    - [Stokes' Theorem and Green's Theorem](#stokes-theorem-and-greens-theorem)
    - [Gauss' Theorem](#gauss-theorem)
- [Extra Credits](#extra-credits)
  - [Solvability of Integrals](#solvability-of-integrals)
    - [Parity and Symmetric Integrals](#parity-and-symmetric-integrals)
  - [Trigonometric Functions](#trigonometric-functions)
  - [Reduction of Order](#reduction-of-order)
  - [Exact Particular Solution](#exact-particular-solution)
  - [Orientation](#orientation)
  - [Curvilinear Coordinates](#curvilinear-coordinates)
  - [Helmholtz Decomposition (Fundamental Theorem of Vector Calculus)](#helmholtz-decomposition-fundamental-theorem-of-vector-calculus)

# Integrals

General idea: $\displaystyle F(x)=\int f(x)\,dx$ is a function such that $F'(x)=f(x)$.

## Indefinite Integrals

| Technique                      | Operation                                                                                                                                                                                                                                                                                                                             |
|--------------------------------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Substitution                   | $\displaystyle\int f\big(g(x))\,g'(x)\,dx=\left\{\begin{array}{lr}u=g(x)\\du=g'(x)\,dx\end{array}\right\}=\int f(u)\,du\,$                                                                                                                                                                                                            |
| Integration by Parts           | $\displaystyle\int f(x)\,g'(x)\,dx=\left\{\begin{array}{lr}u=f(x)\Rightarrow du= f'(x)\,dx\\dv=g'(x)\,dx\Leftarrow v=g(x)\end{array}\right\}=f(x)\cdot g(x)-\int g(x)\,f'(x)\,dx\,$                                                                                                                                                   |
| Partial Fraction Decomposition | $\displaystyle \begin{aligned}\int \frac{P(x)}{Q(x)}\,dx=\,\int R(x)\,dx+\sum_{i=1}^N\sum_{j=1}^{\mu_i}\int\frac{A_{i,j}}{(x-\alpha_i)^j}\,dx+\sum_{i=1}^M\sum_{j=1}^{\nu_i}\int\frac{B_{i,j}\,x+C_{i,j}}{(x^2+p_i\,x+q_i)^j}\,dx\\ Q(x)=\prod_{i=0}^N(x-\alpha_i)^{\mu_i}\cdot \prod_{j=0}^M(x^2+p_j\,x+q_j)^{\nu_j}\end{aligned}\,$ |

### Substitution

**Simple Substituiton:** $\displaystyle\int \dfrac{f'(x)}{f(x)^n}\,dx=\left\{\begin{array}{lr}u=f(x)\\ du= f'(x)\,dx\end{array}\right\}=\int \frac{du}{u^n}=\begin{cases}-\dfrac{1}{(n-1)\,u^{n-1}}&\text{ if }n\neq 1\\\ln|u|&\text{ if }n=1\end{cases}=\begin{cases}-\dfrac{1}{(n-1)\,f(x)^{n-1}}&\text{ if }n\neq 1\\\ln|f(x)|&\text{ if }n= 1\end{cases}\,$

**General:**

| Expression             | Substitution                                                                                          | Differential                                | Identity                                                                                         |
|------------------------|-------------------------------------------------------------------------------------------------------|---------------------------------------------|--------------------------------------------------------------------------------------------------|
| $ax^2+bx+c\,$          | $t=x+\dfrac{b}{2a}\,$                                                                                 | $dt=dx$                                     | $\begin{aligned}ax^2+bx+c=at^2-\dfrac{\Delta}{4a}\\\text{where }\;\Delta=b^2-4ac\end{aligned}\,$ |
| $\sqrt[n]{x^m}\,$      | $u=\sqrt[n]{x}\,$                                                                                     | $dx=n\,u^{n-1}\,du$                         | $\sqrt[n]{x^m}=u^m$                                                                              |
| $\sqrt{a^2-x^2}\,$     | $\begin{aligned}x&=a\sin{\theta}\\ &\theta\in\big[-\tfrac{\pi}{2},\tfrac{\pi}{2}\big]\end{aligned}\,$ | $dx=a\cos{\theta}\,d\theta\,$               | $\sqrt{1-\sin^2{\theta}}=\cos{\theta}\,$                                                         |
| $\sqrt{a^2+x^2}\,$     | $\begin{aligned}x&=a\sinh{\beta}\\ &\beta\in\R\end{aligned}\,$                                        | $dx=a\cosh{\beta}\,d\beta\,$                | $\sqrt{1+\sinh^2{\beta}}=\cosh{\beta}\,$                                                         |
| $\sqrt{x^2-a^2}\,$     | $\begin{aligned}x&=a\cosh{\beta}\\ &\beta\in\big[0,\infty\big)\end{aligned}\,$                        | $dx=a\sinh{\beta}\,d\beta\,$                | $\sqrt{\cosh^2{\beta}-1}=\sinh{\beta}\,$                                                         |
| $\dfrac{1}{a^2+x^2}\,$ | $\begin{aligned}x&=a\tan{\theta}\\ &\theta\in\big(-\tfrac{\pi}{2},\tfrac{\pi}{2}\big)\end{aligned}\,$ | $dx=a\sec^2{\theta}\,d\theta\,$             | $1+\tan^2{\theta}=\sec^2{\theta}\,$                                                              |
| $\sqrt{x^2-a^2}\,$     | $\begin{aligned}x&=a\sec{\theta}\\ &\theta\in\big[0,\tfrac{\pi}{2}\big)\end{aligned}\,$               | $dx=a\tan{\theta}\,\sec{\theta}\,d\theta\,$ | $\sqrt{\sec^2{\theta}-1}=\tan{\theta}\,$                                                         |

**Example:** ($4q<p^2$)

$$
\begin{aligned}
  \int\frac{Ax+B}{x^2+px+q}\,dx=\int\dfrac{Ax+B}{\Big(x+\frac{p}{2}\Big)^2+\sqrt{q-\frac{p^2}{4}}^2}=\left\{\begin{array}{lr}a=\sqrt{q-\frac{p^2}{4}}\\t=x+\frac{p}{2}\\dt=dx\end{array}\right\}=A\int \frac{t\,dt}{t^2+a^2}+\bigg(B-\frac{Ap}{2}\bigg)\int\frac{dt}{t^2+a^2}\\=\frac{A}{2}\,\ln|t^2+a^2|+\bigg(B-\frac{Ap}{2}\bigg)\frac{1}{a}\,\arctan\bigg(\frac{t}{a}\bigg)+C=\boxed{\dfrac{A}{2}\,\ln\vert x^2+px+q\vert+\dfrac{2B-Ap}{\sqrt{4q-p^2}}\,\arctan\bigg(\dfrac{2x+p}{\sqrt{4q-p^2}}\bigg)+C}
\end{aligned}
$$

**Weierstrass Substitution**:

$$
\begin{aligned}
  z&=\tan\frac{x}{2}\;&dx&=\frac{2\,dz}{1+z^2}\\
  \sin{x}&=\frac{2z}{1+z^2}&\cos{x}&=\frac{1-z^2}{1+z^2}
\end{aligned}
$$

**Example:**

$$
\begin{aligned}
  \int\sec{x}\,dx&=\int\frac{1+z^2}{1-z^2}\,\frac{2\,dz}{1+z^2}=\int\frac{2}{1-z^2}\,dz=\ln\bigg|\frac{1+z}{1-z}\bigg|+C=\ln\bigg|\frac{(1+z)^2}{1-z^2}\bigg|+C\\
  &=\ln\bigg|\frac{1+z^2}{1-z^2}+\frac{2z}{1-z^2}\bigg|+C=\ln\big|\tan{x}+\sec{x}\big|+C
\end{aligned}
$$

We can also plug in: $z=\dfrac{\sin{x}}{1+\cos{x}}=\dfrac{1-\cos{x}}{\sin{x}}\,$

### Integration by Parts Table

To do repeated IBP, we create a table:

| Sign | $D$ (Differentiate) | $I$ (Integrate) |
|------|---------------------|-----------------|
| $+$  | $f(x)$              | $g'''(x)$       |
| $-$  | $f'(x)$             | $g''(x)$        |
| $+$  | $f''(x)$            | $g'(x)$         |
| $-$  | $f'''(x)$           | $g(x)$          |

$$
\int f(x)\,g'''(x)\,dx=f'(x)\,g''(x)-f'(x)\,g'(x)+f''(x)\,g(x)-\int f'''(x)\,g(x)\,dx
$$

where the products are taken diagonally $\searrow$ with alternating signs, except for the last one, where we take $\to$ product and integrate. This is particularly useful for $x^n$ terms.

**Example:** $\displaystyle \int x^3\,e^x\,dx$

| Sign | $D$    | $I$   |
|------|--------|-------|
| $+$  | $x^3$  | $e^x$ |
| $-$  | $3x^2$ | $e^x$ |
| $+$  | $6x$   | $e^x$ |
| $-$  | $6$    | $e^x$ |
| $+$  | $0$    | $e^x$ |

$\Rightarrow\displaystyle \int x^3\,e^x\,dx=x^3\,e^x-3x^2\,e^x+6x\,e^x-6\,e^x+\int 0\,e^x\,dx=(x^3-3x^2+6x-6)\,e^x+C$

### Inverse Function

$$
\int f^{-1}(x)\,dx=x\cdot f^{-1}(x)-F\big(f^{-1}(x)\big)+C
$$

where $\displaystyle F(x)=\int f(x)\,dx$

**Proof:** $\displaystyle \int f^{-1}(x)\,dx=\left\{\begin{array}{lr}u=f^{-1}(x)\Rightarrow f(u)=v\\dv=dx\Leftarrow v=x\end{array}\right\}=x\cdot f^{-1}(x)-\int f(u)\,du=x\cdot f^{-1}(x)-F(u)+C=x\cdot f^{-1}(x)-F\big(f^{-1}(x)\big)+C\quad \Box$

**Example:** $\displaystyle\int \arcsin{x}\,dx=x\cdot \arcsin{x}+\cos{(\arcsin{x})}=x\cdot\arcsin{x}+\sqrt{1-x^2}\,$

**Prosthaphaeresis formulae:**

$$
\begin{aligned}
 \sin(\alpha)\cdot\sin(\beta)&=\frac{1}{2}\Big(\cos(\alpha-\beta)-\cos(\alpha+\beta)\Big)\\
 \cos(\alpha)\cdot\cos(\beta)&=\frac{1}{2}\Big(\cos(\alpha-\beta)+\cos(\alpha+\beta)\Big)\\
 \sin(\alpha)\cdot\cos(\beta)&=\frac{1}{2}\Big(\sin(\alpha+\beta)+\sin(\alpha-\beta)\Big)\\
 \cos(\alpha)\cdot\sin(\beta)&=\frac{1}{2}\Big(\sin(\alpha+\beta)-\sin(\alpha-\beta)\Big)
\end{aligned}
$$

Example: $\displaystyle\int\sin(3x)\cos(x)\,dx=\frac{1}{2}\int\Big[\sin(4x)+\sin(2x)\Big]\,dx=-\frac{\cos(4x)}{8}-\frac{\cos(2x)}{4}+C$

## Definite Integrals

For definite integrals, we only need to use the Newton-Leibnitz Formula. If $F$ is an antiderivative of $f$:

$$
\int_a^b\,f(x)\,dx=F(b)-F(a)
$$

Applications:

1. Area $S$ of the region which is situated between two piecewise continuous functions $f$ and $g$ on $[a,b]$.

   $$
   S=\int_a^b\Big|f(x)-g(x)\Big|\,dx
   $$

   in particular, the area between the function $f$ and the $x$-axis is $\displaystyle\int_a^b\Big|f(x)\Big|\,dx$

2. The length $L$ of a curve $y=f(x)$ over $x\in[a,b]$, or given parametrically $(x,y)=\big(x(t),y(t)\big)$ for $t\in[a,b]$:

   $$
   L=\int_a^b\,\sqrt{1+\big[f'(x)\big]^2}\,dx=\int_a^b\,\sqrt{\big[x'(t)\big]^2+\big[y'(t)\big]^2}\,dt
   $$

# Multivariable Integrals

## Double and Triple Integrals

Instead of using 2D Riemann sums in a region $R$, we can simply rely on Fubini's Theorem (that states that the order of integration does not matter) and write/calculate 2D integrals as iterated integration:

$$
\iint\limits_R\,f(x,y)\,dA=\int_a^b\bigg(\int_{\alpha(x)}^{\beta(x)}\,f(x,y)\,dy\bigg)\,dx=\int_\alpha^\beta\bigg(\int_{a(y)}^{b(y)}\,f(x,y)\,dx\bigg)\,dy
$$

for a continuous function $f$, where

$$
R=\big\{(x,y)\;|\;a\leq x\leq b\;,\;\alpha(x)\leq y\leq \beta(x)\big\}=\big\{(x,y)\;|\;\alpha\leq y\leq \beta\;,\;a(y)\leq x\leq b(y)\big\}
$$

The idea behind this is to think about integrating the length of line of $y$'s with constant $x$, and then summing (integrating) those lengths to get the area. Or, by Fubini, integrating the length of line of $x$'s with constant $y$, and then summing to get the area. It is the same to integrate the area between to curves $f$, $g$ in the interval $[a,b]$, as we've seen, we calculate $\displaystyle S=\int_a^b\Big|f(x)-g(x)\Big|\,dx$, we can rewrite it as nested integrals as: $\displaystyle\int_{x_\text{min}}^{x_\text{max}}\int_{y_\text{min}(x)}^{y_\text{max}(x)}\,dy\,dx$.

**Example:** Calculate the integral $\displaystyle\iint\limits_R\,2x^2y\,dA$ where $R$ is the region between the lines $x=0$, $y=0$ and $y=1-x$.

$$
R=\big\{(x,y)\;|\;0\leq x\leq 1\;,\;0\leq y\leq 1-x\big\}
$$

$$
\iint\limits_R\,2x^2y\,dA=\int\limits_{x=0}^1\int\limits_{y=0}^{1-x}2x^2\,y\,dy\,dx=\int\limits_{x=0}^12x^2\,\overbrace{\bigg(\int\limits_{y=0}^{1-x}\,y\,dy\bigg)}^{\frac{1}{2}(1-x)^2}\,dx=\int_0^1 x^2(1-x)^2\,dx=\frac{1}{30}
$$

Note: We write which variable the integral sign corresponds to avoid confusion.

Analogously, we calculate the triple integral as three iterated integrals:

$$
\iiint\limits_Q f(x,y,z)\,dV=\int_h^H\bigg(\iint\limits_{R(z)}\,f(x,y,z)\,dA\bigg)\,dz
$$

for a continuous function $f$, where

$$
Q=\big\{(x,y,z)\;|\;h\leq z\leq H\;,\;(x,y)\in R(z)\big\}
$$

we usually call $R(z)$ the cross-section.

**Example:** Calculate the volume between of the pyramid with vertices $(0,0,0)\;,\;(1,0,0),\;(0,1,0),\;(0,0,1)$.

Equation of plane: $x+y+z=1$

$$
\begin{aligned}
Q=\big\{(x,y,z)\;|\;0\leq z\leq 1\;,\;(x,y)\in R(z)\big\}\\
R(z)=\big\{(x,y)\;|\;0\leq y\leq 1-z\;,\;0\leq x\leq 1-y-z\big\}\\\text{( the region of the triangle slice at height }z \text{ )}
\end{aligned}
$$

$$
\begin{aligned}
V=\iiint\limits_Q\,1\,dV=\int\limits_{z=0}^1\underbrace{\bigg(\int\limits_{y=0}^{1-z}\int\limits_{x=0}^{1-y-z}\,dx\,dy\bigg)}_{\text{ area of a triangle with sides }(1-z)}\,dz=\int_0^1\,\frac{1}{2}\big(1-z\big)^2\,dz=\frac{1}{6}
\end{aligned}
$$

### General Solving Technique

In general, we have the boundary curve(s) of the surface. We define a free variable $q$ the can go along its min and max. Then, we find the integral of what we want keeping that variable fixed. Notice this process is recursive.

**Example:** Find the area inside the curve $\rho=1-\cos{\varphi}\,$.

Our free variable it $\varphi\in[0,2\pi)$, with a $\varphi$ fixed, the $\rho$ can go from $0$ to $1-\cos{\varphi}$. Hence: $R=\{(\rho,\varphi)\;|\;\varphi\in[0,2\pi)\;,\;0\leq\rho\leq 1-\cos{\varphi}\}\,$.

$$
\begin{aligned}
S=\iint\limits_R 1\,dA=\int\limits_{\varphi=0}^{2\pi}\int\limits_{\rho=0}^{1-\cos{\varphi}}\,\rho\,d\rho\,d\varphi=\int_0^{2\pi}\,\frac{1}{2}\,(1-\cos{\varphi})^2\,d\varphi\\
=\frac{1}{2}\,\int_0^{2\pi}\Big[1-\underset{\text{integrates to } 0}{\cancel{2\cos{\varphi}}}+\cos^2{\varphi}\Big]\,d\varphi=\frac{1}{4}\int_0^{2\pi}\Big[3+\underset{\text{integrates to } 0}{\cancel{\cos(2\varphi)}}\Big]\,d\varphi=\frac{3\pi}{2}
\end{aligned}
$$

**Example:** Find the volume of a sphere with radius $R\;$ ($x^2+y^2+z^2=R^2$).

Let $z\in[-R, R]$ be our free variable.

$$
\begin{aligned}
Q=\big\{(x,y,z)\;|\;-R\leq z\leq R\;,\;(x,y)\in R(z)\big\}\\
R(z)=\big\{(x,y)\;|\;-\sqrt{R^2-z^2}\leq y\leq \sqrt{R^2-z^2}\;,\;-\sqrt{R^2-z^2-y^2}\leq x\leq \sqrt{R^2-z^2-y^2}\big\}\\\text{( the region of the circular slice at height }z \text{ )}
\end{aligned}
$$

$$
\begin{aligned}
V=\iiint\limits_Q\,1\,dV=\int\limits_{z=-R}^R\underbrace{\Bigg[\;\;\int\limits_{y=-\sqrt{R^2-z^2}}^{\sqrt{R^2-z^2}}\quad \int\limits_{x=-\sqrt{R^2-z^2-y^2}}^{\sqrt{R^2-z^2-y^2}}\,dx\,dy\Bigg]}_{\text{ area of a circle with radius }\sqrt{R^2-z^2}}\,dz=\int_{-R}^R\,\pi(R^2-z^2)\,dz=\frac{4\pi\,R^3}{3}
\end{aligned}
$$

## Change of Coordinates

Cylindrical System: $\rho\in[0,\infty)\;$ and $\;\varphi\in [0,2\pi)$

$$
\begin{aligned}
  x&=\rho\,\cos{\varphi}\\
  y&=\rho\,\sin{\varphi}\\
  z&=z
\end{aligned}
$$

Spherical System: $r\in[0,\infty)\;$, $\;\varphi\in [0,2\pi)\;$, $\;\theta\in[0,\pi]$

$$
\begin{aligned}
  x&=r\,\sin{\theta}\,\cos{\varphi}\\
  y&=r\,\sin{\theta}\,\sin{\varphi}\\
  z&=r\,\cos{\theta}
\end{aligned}
$$

It is also useful to remember $\rho=r\,\sin{\theta}\,$

If we change our variables of integration, the areas and volumes might stretch in unconventional ways. To draw a parallel to the one-dimensional case, when we introduce a $u$ substitution, $x=f(u)\Rightarrow dx=f'(u)\,du$ the integrand is multiplied by $f'(u)$, which is this scaling factor we are looking for.

$$
dA=dx\,dy=\,\rho\,d\rho\,d\varphi
$$

$$
dV=dx\,dy\,dz=\rho\,d\rho\,d\varphi\,dz=r^2\,\sin{\theta}\,dr\,d\theta\,d\varphi
$$

**Example:** Integrate $\rho^2=x^2+y^2$ over a sphere centered at $(0,0,0)$ with radius $R$.

In cylindrical coordinates:

$$
\begin{aligned}
Q=\big\{(\rho,\varphi,z)\;|\;-R\leq z\leq R\;,\;(\rho,\varphi)\in R(z)\big\}\\
R(z)=\big\{(\rho,\varphi)\;|\;0\leq \rho\leq \sqrt{R^2-z^2}\;,\;\varphi\in[0,2\pi)\big\}\\\text{( the region of the circular slice at height }z \text{ )}
\end{aligned}
$$

$$
\iiint\limits_Q\,\rho^2\,dV=\int\limits_{z\, =-R}^R\int\limits_{\rho=0}^{\sqrt{R^2-z^2}}\int\limits_{\varphi=0}^{2\pi}\,\rho^2\;\rho\,d\rho\,d\varphi\,dz\\=\bigg(\int_0^{2\pi}\,d\varphi\bigg)\,\int_{-R}^R\,\frac{1}{4}\,\big(R^2-z^2\big)^2\,dz=2\pi\cdot\frac{4R^5}{15}=\frac{8\pi\,R^5}{15}
$$

In spherical coordinates:

$$
Q=\big\{(r,\varphi,\theta)\;|\;0\leq r\leq R\;,\;0\leq \theta\leq \pi\;,\;\varphi\in[0,2\pi)\big\}
$$

$$
\begin{aligned}
\iiint\limits_Q\,\rho^2\,dV=\int\limits_{r\, =0}^R\;\,\int\limits_{\varphi=0}^{2\pi}\;\,\int\limits_{\theta=0}^{\pi}\,\big(r\sin{\theta}\big)^2\;r^2\,\sin{\theta}\,dr\,d\theta\,d\varphi\\=\bigg(\int_0^{2\pi}\,d\varphi\bigg)\,\cdot\,\bigg(\int_0^R r^4\,dr\bigg)\,\cdot\,\bigg(\int_0^\pi \sin^3{\theta}\,d\theta\bigg)=2\pi\cdot\,\frac{R^5}{5}\,\cdot\,\frac{4}{3}=\frac{8\pi\,R^5}{15}
\end{aligned}
$$

Notice that if a variable is integrated independently and the bounds doesn't depend on that variable, we can simply multiply the integrals. **Example:** $\displaystyle\int\limits_{x=a}^b\;\,\int\limits_{y=\alpha}^\beta f(x)\cdot g(y)\;dx\,dy=\bigg(\int_a^b f(x)\,dx\bigg)\cdot\bigg(\int_\alpha^\beta g(y)\,dy\bigg)$

Also, when, we are in a different coordinate system we may want to integrate over the constant surface of some coordinate.

$$
\begin{aligned}
  dS_\rho&=\rho\big|_{\rho=\text{const.}}\,d\varphi\,dz\\
  dS_r&=r^2\,\sin{\theta}\big|_{r=\text{const.}}\,d\varphi\,d\theta\\
  dS_\theta&=r\,\sin{\theta}\big|_{\theta=\text{const.}}\,dr\,d\varphi\\
  dS_\varphi&=\,d\rho\,dz=r\big|_{\varphi=\text{const.}}\,dr\,d\theta\\
\end{aligned}
$$

The easier way to remember all these formulas is to remember these functions:

$$
\begin{aligned}
  h_x&=h_y=h_z\\
  h_r&=h_\rho=1\\
  h_{\varphi}&=\rho=r\,\sin{\theta}\\
  h_{\theta}&=r
\end{aligned}
$$

We immediately get everything free: $dS_q=\dfrac{1}{h_q}\dfrac{dV}{dq}\,$, where $q$ is any coordinate, and

$$
dV=h_\rho\,h_\varphi\,h_z\,d\rho\,d\varphi\,dz=h_r\,h_\varphi\,h_\theta\,dr\,d\varphi\,d\theta
$$

$\boxed{\text{The idea is: whenever you have a differential }dq \text{, we need to multiply by }h_q}$

## Center of Mass and other Applications

We define: $\displaystyle \vec{r}_G=\frac{\displaystyle\iint\vec{r}\,\sigma(\vec{r})\,dA}{\displaystyle\iint\,\sigma(\vec{r})\,dA}=\frac{\displaystyle\iiint\vec{r}\,\mu(\vec{r})\,dV}{\displaystyle\iiint\,\mu(\vec{r})\,dV}$, where $\sigma$ and $\mu$ are the surface and volume mass densities, respectively. If they are constant, they do not matter for the caclulation of the center of mass.

If we want to calculate the surface area of the surface $z=f(x,y)$ over the region $R$, we calculate:

$$
S=\iint\limits_R \sqrt{1+\big[f_x(x,y)\big]^2+\big[f_y(x,y)\big]^2}\,dA
$$

where $f_x=\frac{\partial f}{\partial x}$ and $f_y=\frac{\partial f}{\partial y}\,$

# ODES

In general, am ODE is the following:

$$
y^{(n)}=\mathcal{F}(x,y,y',y'',\cdots,y^{(n-1)})
$$

where $n$ is called the order of the ODE. For first order:

$$
y'=\mathcal{F}(x,y)
$$

In all cases, what we want to find is $y(x)$ that solves that. Or, at least find an implicit equation.

## Separation of Variables

For a first order ODE, if $y'=\mathcal{F}(x,y)=\dfrac{g(x)}{f(y)}\,$, we have:

$$
\frac{dy}{dx}=\frac{g(x)}{f(y)}\Rightarrow \int f(y)\,dy=\int g(x)\,dx\Rightarrow F(y)=G(x)+C\Rightarrow y=F^{-1}\big(G(x)+C\big)
$$

where $F$ and $G$ are the primitive of $f$ and $g$, respectively, and the last step is done if it is possible.

## Constant Coefficients

For the form: $\displaystyle a_n\,y^{(n)}+a_{n-1}\,y^{(n-1)}+\cdots+a_1\,y'+a_0\,y=\sum_{k=0}^n a_k\,y^{(k)} =0$, i.e. $y$ is a linear combination of its derivatives, we write the characteristic polynomial $\chi(s)=\displaystyle a_n\,s^n+a_{n-1}\,s^{n-1}+\cdots+a_1\,s+a_0=\sum_{k=0}^n a_k\,s^k\,$. The solution is:

$$
y(x)=\sum_{i=1}^N \sum_{j=0}^{\mu_i-1} A_{i,j}\,x^j\,e^{\gamma_i\,x}
$$

where $\displaystyle\chi(s)=a_n\,\prod_{i=0}^N(s-\gamma_i)^{\mu_i}\;,\;\gamma_i\in \mathbb{C}\,$

In real form (avoiding all complex numbers):

$$
y(x)=\sum_{i=1}^N \sum_{j=0}^{\mu_i-1} A_{i,j}\,x^j\,e^{\alpha_i\,x}+\sum_{i=1}^M \sum_{j=0}^{\nu_i-1} \Big[B_{i,j}\sin(\omega_j\,x)+C_{i,j}\cos(\omega_j\,x)\Big]\,x^j\,e^{\beta_i\,x}
$$

where $\displaystyle\chi(s)=a_n\,\prod_{i=0}^N(s-\alpha_i)^{\mu_i}\cdot \prod_{j=0}^M\Big[(s-\beta_j)^2+\omega^2_j\Big]^{\nu_j}\;,\;\alpha_i,\beta_i,\omega_i\in\R\,$

For the following common cases:

| $\chi(s)$                  | $y(x)$                                                        |
|----------------------------|---------------------------------------------------------------|
| $(s-\alpha)$               | $A\,e^{\alpha\,x}\,$                                          |
| $(s-\alpha_1)(s-\alpha_2)$ | $A\,e^{\alpha_1\,x}+B\,e^{\alpha_2\,x}\,$                     |
| $(s-\beta)^2+\omega^2$     | $\Big[A\sin(\omega\,x)+B\cos(\omega\,x)\Big]\,e^{\beta\,x}\,$ |
| $(s-\alpha)^2$             | $A\,e^{\alpha\,x}+B\,x\,e^{\alpha\,x}\,$                      |

With initial/boundary conditions we determine those coefficients.

## Inhomogeneous

For the form: $\displaystyle a_n\,y^{(n)}+a_{n-1}\,y^{(n-1)}+\cdots+a_1\,y'+a_0\,y=\sum_{k=0}^n a_k\,y^{(k)} =f(x)$, there is homogeneous solution $y_h(x)$, that shall do the job to fit the inital conditions, we just need to solve/guess the particular solution $y_p(x)$. With that, $y(x)=y_h(x)+y_p(x)$

Method of Undermined Coefficients

| Terms in $f(x)$                               | Terms in $y_p(x)$                             |
|-----------------------------------------------|-----------------------------------------------|
| $a\,e^{s\,x}\,$                               | $A\,e^{s\,x}\,$                               |
| $a\,\sin(\omega\,x)+b\,\cos(\omega\,x)\,$     | $A\,\sin(\omega\,x)+B\,\cos(\omega\,x)\,$     |
| $a_n\,x^n+a_{n-1}\,x^{n-1}+\cdots+a_1\,x+a_0$ | $A_n\,x^n+A_{n-1}\,x^{n-1}+\cdots+A_1\,x+A_0$ |

where you determine the coefficients by plugging it into the ODE. Nnotice all these function have derivatives which are a linear combination of themselves, e.g. $\frac{d}{dx}\Big[A\,\sin(\omega\,x)+B\,\cos(\omega\,x)\Big]=(-\omega B)\,\sin(\omega\,x)+(A\omega)\,\cos(\omega\,x)$

If we have a multiplication of two cases, we just multiply our guesses.

**Resonance:** If the guess for $y_p$ is already a homogeneous solution, we multiply the guess by $x$ until it is no longer a homogeneous solution (as many times as necessary, that is, at most $n$ times).

**Example:** $y''+y=\sin{x}\,$. $y_h(x)=A_1\,\sin{x}+B_1\,\cos{x}\;,\;y_p(x)=x\,(A\,\sin{x}+B\,\cos{x})\Rightarrow \sin{x}=y_p''+y_p=2A\,\cos{x}-2B\,\sin{x}\Rightarrow A=0\;,\;B=-\frac{1}{2}\Rightarrow y_p(x)=-\frac{1}{2}\,x\,\cos{x}$.

This happens because of the following idea: If $y(x)$ is a solution for $\chi(D)\,y=0$, then $\chi(D)\,(x\cdot y)=f$ if, and only if, $\chi'(D)\,y=f$. Here, $D$ is the differentiation operator.

# Vector Calculus

## Gradients, Curls, Divergences and Laplacians

In cartesian coordinates, we have these definitions:

| Operator   | Formula                                                                                                                                           |
|------------|---------------------------------------------------------------------------------------------------------------------------------------------------|
| Gradient   | $\nabla\phi=\dfrac{\partial\phi}{\partial x}\,\hat{x}+\dfrac{\partial\phi}{\partial y}\,\hat{y}+\dfrac{\partial\phi}{\partial z}\,\hat{z}\,$      |
| Curl       | $\displaystyle\nabla\times \vec{F}=\begin{vmatrix}\hat{x}&\hat{y}&\hat{z}\\\partial_{x}&\partial_{y}&\partial_{z}\\F_x&F_y&F_z\end{vmatrix}\,$    |
| Divergence | $\displaystyle\nabla\cdot\vec{F}=\frac{\partial F_x}{\partial x}+\frac{\partial F_y}{\partial y}+\frac{\partial F_z}{\partial z}\,$               |
| Laplacian  | $\nabla^2\phi=\nabla\cdot\nabla\phi=\dfrac{\partial^2\phi}{\partial x^2}+\dfrac{\partial^2\phi}{\partial y}+\dfrac{\partial^2\phi}{\partial z}\,$ |

## Line Integrals and Gradient Theorem

A curve $\Gamma$ is a 1-dimensional subset of $\mathbb{R}^n$. A parametrization is function $\vec{\gamma}:[a,b]\to\mathbb{R}^3$ such that the image $\vec{\gamma}[a,b]=\Gamma$. Given a vector field $\vec{F}$, the line integral of $\vec{F}$ along $\Gamma$ is:

$$
\int_\Gamma\,\vec{F}(\vec{r})\cdot d\vec{r}=\int_a^b\,\vec{F}\big(\,\vec{\gamma}(\lambda)\,\big)\cdot\vec{\gamma}'(\lambda)\,d\lambda
$$

since $\vec{\gamma}'(\lambda)=\dfrac{d\vec{r}}{d\lambda}\,$. The vector $d\vec{r}$ is tangent to the curve.

**Example:** Calculate the line integral of $\vec{F}(x,y)=(-y,x)$ around the circle $S^1$ of radius $1$ centered at the origin (starting from $(1,0)$).

We parameterize as follows:

$$
\begin{aligned}
  \vec{\gamma}:[0,2\pi]&\to S^1\subseteq \R^2\\
  \lambda&\mapsto (\cos{\lambda},\sin{\lambda})
\end{aligned}
$$

So that $\vec{\gamma}'(\lambda)=(-\sin{\lambda},\cos{\lambda})$ and $\vec{F}\big(\,\vec{\gamma}(\lambda)\,\big)=(-\sin{\lambda},\cos{\lambda})\Rightarrow \vec{F}\big(\,\vec{\gamma}(\lambda)\,\big)\cdot\vec{\gamma}'(\lambda)=\sin^2{\lambda}+\cos^2{\lambda}=1$.

$$
\oint_\Gamma\,\vec{F}(\vec{r})\cdot d\vec{r}=\int_0^{2\pi}\,d\lambda=2\pi
$$

**Example:** Find the line integral of the curve $\vec{F}(x,y,z)=-3(x-y)^2\,\hat{x}+3(x-y)^2\,\hat{y}+2z\,\hat{z}$ through the curve $\Gamma$ (straight line from $(0,0,0)$ to $(x_0,y_0,z_0)$)

We parameterize as follows:

$$
\begin{aligned}
  \vec{\gamma}:[0,1]&\to \Gamma\subseteq \R^3\\
  \lambda&\mapsto (\lambda x_0,\lambda y_0, \lambda z_0)
\end{aligned}
$$

So that $\vec{\gamma}'(\lambda)=(x_0,y_0,z_0)$ and $\vec{F}(\vec{\gamma}(\lambda))=\lambda^2\big(-3(x_0-y_0)^2\,\hat{x}+3(x_0-y_0)^2\,\hat{y}\big)+\lambda\,2z_0\,\hat{z}\Rightarrow \vec{F}(\vec{\gamma}(\lambda))\cdot\vec{\gamma}'(\lambda)=-3(x_0-y_0)^3\,\lambda^2+2z_0^2\,\lambda$.

$$
\int_\Gamma \vec{F}\cdot\,d\vec{r}=\int_0^1\vec{F}(\vec{\gamma}(\lambda))\cdot\vec{\gamma}'(\lambda)\,d\lambda
=-3(x_0-y_0)^3\,\frac{\lambda^3}{3}\bigg|_0^1+2z_0^2\,\frac{\lambda^2}{2}\bigg|_0^1=-(x_0-y_0)^3+z_0^2
$$

In other coordinate systems, the curve may be very simple to describe. To change coordinates, we write:

$$
d\vec{r}=dx\,\hat{x}+dy\,\hat{y}+dz\,\hat{z}=d\rho\,\hat{\rho}+\rho\,d\varphi\,\hat{\varphi}+dz\,\hat{z}=dr\,\hat{r}+r\,\sin{\theta}\,d\varphi\,\hat{\varphi}+r\,d\theta\,\hat{\theta}
$$

**Example:** Integrate $\vec{F}=\dfrac{k}{\rho^2}\,\hat{\varphi}\,$ around the circle $S^1$ of radius $1$ centered at the origin (starting from $(1,0)$).

There is no change in $\rho$, so $d\vec{r}=\rho\,d\varphi\,\hat{\varphi}\,$

$$
\oint_{S^1}\vec{F}\cdot d\vec{r}=\int_0^{2\pi}\dfrac{k}{\rho^2}\,\rho\bigg|_{\rho=R}\,\overbrace{\hat{\varphi}\cdot\hat{\varphi}}^{1}\,d\varphi=\frac{2\pi k}{R}
$$

## Flux Integrals

A curve $\Sigma$ is a 2-dimensional subset of $\mathbb{R}^n$. A parametrization is function $\vec{\sigma}:[a,b]\times[\alpha,\beta]\to\mathbb{R}^3$ such that the image $\vec{\sigma}\big([a,b]\times[\alpha,\beta]\big)=\Sigma$. Given a vector field $\vec{F}$, the flux/surface integral of $\vec{F}$ along $\Sigma$ is:

$$
\iint\limits_\Sigma\,\vec{F}(\vec{r})\cdot d\vec{S}=\int\limits_{\lambda=a}^b\;\;\int\limits_{\mu=\alpha}^\beta\,\vec{F}\big(\,\vec{\sigma}(\lambda,\mu)\,\big)\cdot\bigg[\frac{\partial\,\vec{\sigma}}{\partial \lambda}\times\frac{\partial\,\vec{\sigma}}{\partial \mu}\bigg]\,d\lambda\,d\mu
$$

since $\dfrac{\partial\,\vec{\sigma}}{\partial \lambda}\times\dfrac{\partial\,\vec{\sigma}}{\partial \mu}=\dfrac{d\vec{S}}{d\lambda\,d\mu}\,$. The vector $d\vec{S}$ is normal to the surface.

**Example:** Integrate $\vec{F}=(x,y,z)$ over the lateral surface of a cylinder with height $h$ and radius $R$.

We parameterize as follows:

$$
\begin{aligned}
  \vec{\sigma}:[0,2\pi]\times[0,h]&\to \Sigma\subseteq \R^3\\
  (\lambda,\mu)&\mapsto (R\cos{\lambda},R\sin{\lambda},\mu)
\end{aligned}
$$

So that $\dfrac{\partial\,\vec{\sigma}}{\partial \lambda}\times\dfrac{\partial\,\vec{\sigma}}{\partial \mu}=(-R\sin{\lambda},R\cos{\lambda},0)\times(0,0,1)=(R\cos{\lambda},R\sin{\lambda},0)$ and $\vec{F}\big(\,\vec{\sigma}(\lambda,\mu)\,\big)=(R\cos{\lambda},R\sin{\lambda},\mu)\Rightarrow \vec{F}\big(\,\vec{\sigma}(\lambda,\mu)\,\big)\cdot\bigg[\dfrac{\partial\,\vec{\sigma}}{\partial \lambda}\times\dfrac{\partial\,\vec{\sigma}}{\partial \mu}\bigg]=R^2\big(\cos^2{\lambda}+\sin^2{\lambda}\big)=R^2$.

$$
\iint\limits_\Sigma\,\vec{F}(\vec{r})\cdot d\vec{S}=\int\limits_{\lambda=0}^{2\pi}\;\;\int\limits_{\mu=0}^h\,R^2\,d\lambda\,d\mu=2\pi\,h\,R^2
$$

We essentially used $\lambda=\varphi$ and $\mu=z$, cylindrical coordinates.

**Example:** Calculate the flux of $\vec{F}(x,y,z)=(x,y,0)$ over the curve $\rho^2+2z=R^2$.

We parameterize as follows:

$$
\begin{aligned}
  \vec{\sigma}:[0,R]\times[0,2\pi]&\to \Sigma\subseteq \R^3\\
  (\rho,\varphi)&\mapsto \bigg(\rho\cos{\varphi},\rho\sin{\varphi},\frac{R^2-\rho^2}{2}\bigg)
\end{aligned}
$$

So that $\dfrac{\partial\,\vec{\sigma}}{\partial \rho}\times\dfrac{\partial\,\vec{\sigma}}{\partial \varphi}=(\cos{\varphi},\sin{\varphi},-\rho)\times(-\rho\sin{\varphi},\rho\cos{\varphi},0)=(\rho^2\cos{\varphi},\rho^2\sin{\varphi},\rho)$ and $\vec{F}\big(\,\vec{\sigma}(\rho,\varphi)\,\big)=(\rho\cos{\varphi},\rho\sin{\varphi},0)\Rightarrow \vec{F}\big(\,\vec{\sigma}(\rho,\varphi)\,\big)\cdot\bigg[\dfrac{\partial\,\vec{\sigma}}{\partial \rho}\times\dfrac{\partial\,\vec{\sigma}}{\partial \varphi}\bigg]=\rho^3\big(\cos^2{\varphi}+\sin^2{\varphi}\big)=\rho^3$.

$$
\iint\limits_\Sigma\,\vec{F}(\vec{r})\cdot d\vec{S}=\int\limits_{\rho=0}^R\;\;\int\limits_{\varphi=0}^{2\pi}\,\rho^3\,d\rho\,d\varphi=2\pi\cdot\,\frac{R^4}{4}=\frac{\pi\,R^4}{2}
$$

In other coordinate systems, the curve may be very simple to describe. To change coordinates, we write:

$$
\begin{aligned}
d\vec{S}=dS_x\,\hat{x}+dS_y\,\hat{y}+dS_z\,\hat{z}=dS_\rho\,\hat{\rho}+dS_\varphi\,\hat{\varphi}+dS_z\,\hat{z}=dr\,\hat{r}+dS_\varphi\,\hat{\varphi}+dS_\theta\,\hat{\theta}\\
=dy\,dz\,\hat{x}+dx\,dz\,\hat{y}+dx\,dy\,\hat{z}=\rho\,d\varphi\,dz\,\hat{\rho}+d\rho\,dz\,\hat{\varphi}+\rho\,d\rho\,d\varphi\,\hat{z}\\
=r^2\sin{\theta}\,d\varphi\,d\theta\,\hat{r}+r\,dr\,d\theta\,\hat{\varphi}+r\,\sin{\theta}\,dr\,d\varphi\,\hat{\theta}
\end{aligned}
$$

**Example:** Integrate $\vec{F}=\hat{\theta}\,$ over the cone with vertex at the origin, angle $\theta_0$ of the $z$-axis and distance from the edge to the centre $g$. Further, add the restriction that $y\geq 0$.

There is no change in $\theta$, so $d\vec{S}=r\sin{\theta}\,dr\,d\varphi\,\hat{\theta}\,$.

$$
\iint\limits_\Sigma\vec{F}\cdot d\vec{r}=\int\limits_{r=0}^g\;\int\limits_{\varphi=0}^\pi r\sin{\theta}\bigg|_{\theta=\theta_0}\,\overbrace{\hat{\theta}\cdot\hat{\theta}}^{1}\,dr\,d\varphi=\pi\cdot\frac{g^2}{2}\,\sin{\theta_0}=\frac{1}{2}\,\pi g^2\,\sin{\theta_0}
$$

## Theorems

### Gradient Theorem

Let the curve $\Gamma$ go from point $A$ to point $B$. Then:

$$
\int_\Gamma \nabla\phi\,\cdot d\vec{r}=\phi(B)-\phi(A)
$$

_Proof_: Let $\vec{\gamma}(\lambda)$ be a parametrization of $\Gamma$ with $\vec{\gamma}(a)=A$ and $\vec{\gamma}(b)=B$. Notice: $\dfrac{d}{d\lambda}\Big[\phi\big(\,\vec{\gamma}(\lambda)\,\big)\Big]=\nabla\phi\big(\,\vec{\gamma}(\lambda)\,\big)\cdot \vec{\gamma}'(\lambda)$, therefore:

$$
\int_\Gamma \nabla\phi\,\cdot d\vec{r}=\int_a^b\nabla\phi\big(\,\vec{\gamma}(\lambda)\,\big)\cdot \vec{\gamma}'(\lambda)\,d\lambda=\phi\big(\,\vec{\gamma}(\lambda)\,\big)\Big|_a^b=\phi\big(\,\vec{\gamma}(b)\,\big)-\phi\big(\,\vec{\gamma}(a)\,\big)=\phi(B)-\phi(A)
$$

we can also think $\nabla\phi\,\cdot d\vec{r}=d\phi\;$, a perfect differential. $\;\Box$

### Stokes' Theorem and Green's Theorem

Let $\Gamma$ be a curve and $\Sigma$ be a surface with boundary at $\Gamma\;$, denoted $\Gamma=\partial \Sigma$. Then, for any smooth vector field $\vec{F}$, we get:

$$
\oint\limits_{\partial \Sigma}\,\vec{F}\cdot d\vec{r}=\iint\limits_\Sigma\,\big(\nabla\times\vec{F}\big)\cdot\,d\vec{S}
$$

**Example:** Calculate the line integral of $\vec{F}=\vec{r}$ over the circle centered at $(1,0)$ with radius $1$.

$$
\oint\limits_{\partial \Sigma}\,\vec{r}\cdot d\vec{r}=\iint\limits_\Sigma\,\overbrace{\big(\nabla\times\vec{r}\big)}^{\vec{0}}\cdot\,d\vec{S}=0
$$

**Corollary:**

$$
\forall \Gamma\text{ closed}\;,\;\oint_\Gamma \vec{F}\,d\vec{r}=0\Leftrightarrow \nabla\times\vec{F}=\vec{0}\Leftrightarrow \vec{F}=\nabla\phi
$$

For $2D$, $\vec{F}=(F_x,F_y,0)$ and $d\vec{S}=dA\,\hat{z}$ so that $\big(\nabla\times\vec{F}\big)\cdot\hat{z}=\dfrac{\partial F_y}{\partial x}-\dfrac{\partial F_x}{\partial y}\,$. Therefore:

$$
\oint\limits_{\partial \Sigma}\,\vec{F}\cdot d\vec{r}=\iint\limits_\Sigma\,\bigg(\dfrac{\partial F_y}{\partial x}-\dfrac{\partial F_x}{\partial y}\bigg)\cdot\,dA
$$

**Example:** Calculate the line integral of $\vec{F}(x,y)=(-y,x)$ around the circle $S^1$ of radius $1$ centered at the origin (starting from $(1,0)$).

By Green's Theorem:

$$
\oint\limits_{\partial \Sigma}\,\vec{F}\cdot d\vec{r}=\iint\limits_\Sigma\,\bigg(\dfrac{\partial x}{\partial x}-\dfrac{\partial (-y)}{\partial y}\bigg)\cdot\,dA=2A=2\pi
$$

### Gauss' Theorem

Let $\Sigma$ be a closed surface and $Q$ be a 3D solid with the boundary at $\Sigma\;$, which is denoted $S=\partial Q$. Then, for any smooth vector field $\vec{F}$, we get:

$$
\oiint\limits_{\partial Q}\,\vec{F}\cdot d\vec{S}=\iiint\limits_Q\,\big(\nabla\cdot\vec{F}\big)\;dV
$$

**Example:** Integrate $\vec{F}=(x,y,z)$ over a sphere of radius $R$.

$$
\oiint\limits_{\partial Q}\,\vec{F}\cdot d\vec{S}=\iiint\limits_Q\,\overbrace{\big(\nabla\cdot\vec{F}\big)}^3\;dV=3V=4\pi\,R^3
$$

# Extra Credits

## Solvability of Integrals

Let $R(x_1,x_2,\cdots,x_n)$ be a ration function of $n$ variables.

Examples: $R_1(\sin{x},\cos{x})=\dfrac{\sin{x}\cos{x}+1}{2\sin^2{x}\cos{x}+\cos^2{x}-1}\;,\quad R_2(x,\sqrt{x},\sqrt[3]{x})=\dfrac{x+1}{\sqrt{x}(1+\sqrt[3]{x})}$

An integral is said to be **solvable** if has an elementary antiderivative (i.e. in closed form).

**Rational Function Theorem**: Every Rational Function integral is solvable.

This can be shown by Partial Fraction Decomposition.

A rational function in the following variables is solvable by:

| Variables                                                                      | Substitution                                                                                                | Differential                  | Changed Variables                                                                                                                                                                        |
|--------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------|-------------------------------|------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| $e^x$                                                                          | $u=e^x$                                                                                                     | $dx=\dfrac{du}{u}\,$          | $u$                                                                                                                                                                                      |
| $x,\,\sqrt{ax+b}\,$                                                            | $t=\sqrt{ax+b}\,$                                                                                           | $dx=\dfrac{2t\,dt}{a}\,$      | $\dfrac{t^2-b}{a},\,t$                                                                                                                                                                   |
| $\sin{x},\,\cos{x}\,$                                                          | $z=\tan\dfrac{x}{2}\,$                                                                                      | $dx=\dfrac{2\,dz}{1+z^2}\,$   | $\dfrac{2z}{1+z^2}\,,\;\dfrac{1-z^2}{1+z^2}\,$                                                                                                                                           |
| $x,\,x^{\frac{r_1}{s_1}},\,x^{\frac{r_2}{s_2}},\cdots,\,x^{\frac{r_n}{s_n}}\,$ | $\begin{aligned}u&=x^{\frac{1}{m}}\\\text{with }\,m&=\operatorname{lcm}(s_1,s_2,\cdots,s_n)\end{aligned}\,$ | $dx=m\,u^{m-1}\,du$           | $\begin{aligned}u^m,\,u^{m_1},\,u^{m_2},\cdots,\,u^{m_n}\\\text{where }\; m_i=r_i\cdot\frac{m}{s_i}\in\Z\end{aligned}\,$                                                                 |
| $\sinh{x},\,\cosh{x}\,$                                                        | $u=e^x$                                                                                                     | $dx=\dfrac{du}{u}\,$          | $\dfrac{u^2-1}{2u}\,,\;\dfrac{u^2+1}{2u}\,$                                                                                                                                              |
| $x,\,\sqrt{a^2-x^2}\,$                                                         | $\theta=\arcsin\dfrac{x}{a}\,$                                                                              | $dx=a\cos{\theta}\,d\theta\,$ | $a\,\sin{\theta},\,a\cos{\theta}\,$                                                                                                                                                      |
| $x,\,\sqrt{a^2+x^2}\,$                                                         | $\beta=\operatorname{arcsinh}\dfrac{x}{a}\,$                                                                | $dx=a\cosh{\beta}\,d\beta\,$  | $a\sinh{\beta},\,a\cosh{\beta}\,$                                                                                                                                                        |
| $x,\,\sqrt{x^2-a^2}\,$                                                         | $\beta=\operatorname{arccosh}\dfrac{x}{a}\,$                                                                | $dx=a\sinh{\beta}\,d\beta\,$  | $a\cosh{\beta},\,a\sinh{\beta}\,$                                                                                                                                                        |
| $x,\,\sqrt{ax^2+bx+c}\,$                                                       | $t=\dfrac{1}{\sqrt{\vert a\vert}}\bigg(x+\dfrac{b}{2a}\bigg)\,$                                             | $dx=\sqrt{\vert a\vert}\,dt$  | $\begin{aligned}t\sqrt{\vert a\vert}-\dfrac{b}{2a},\;\sqrt{\operatorname{sgn}(a)\;t^2+\dfrac{4ac-b^2}{4a}}\\\text{where }\,\operatorname{sgn}(a)=\dfrac{a}{\vert a\vert}\end{aligned}\,$ |

### Parity and Symmetric Integrals

A function is:

- Even if: $f(-x)=f(x)$

- Odd if: $f(-x)=-f(x)$

Every function is a unique sum of even and odd function

$$
f(x)=f_\text{even}(x)+f_\text{odd}(x)
$$

$$
f_\text{even}(x)=\frac{f(x)+f(-x)}{2}\quad,\quad f_\text{odd}(x)=\frac{f(x)-f(-x)}{2}
$$

_Proof_: Those two choices work, but to prove it is unique:

$$
\begin{aligned}
  f(x)&=f_\text{even}(x)+f_\text{odd}(x)\\
  f(-x)&=f_\text{even}(x)-f_\text{odd}(x)\\
  \text{--------}&\text{------------------------------ }\\
  f(x)+f(-x)&=2\,f_\text{even}(x)\\
  f(x)-f(-x)&=2\,f_\text{odd}(x)\\
\end{aligned}
$$

Therefore, it is uniquely determined. $\;\Box$

Properties:

- Symmetric Integrals: $\displaystyle\int_{-a}^a\,f_\text{odd}(x)\,dx=0$

- Symmetric Integrals: $\displaystyle\int_{-a}^a\,f_\text{even}(x)\,dx=2\int_0^a\,f_\text{even}(x)\,dx$

- The derivative and the antiderivative of an even function is odd.

- The derivative and the antiderivative of an odd function is even.

**In general:**

Let $a,b\in\R$, we say $f$ is:

- Symmetric on $a,b$ if: $f(a+b-x)=f(x)$

- Antisymmetric on $a,b$ if: $f(a+b-x)=-f(x)$

$$
f(x)=\frac{f(x)+f(a+b-x)}{2}+\frac{f(x)-f(a+b-x)}{2}
$$

Properties:

- Symmetric Integrals: $\displaystyle\int_a^b\,f_\text{anti}(x)\,dx=0$

- Symmetric Integrals: $\displaystyle\int_a^b\,f_\text{sym}(x)\,dx=2\int_a^{\frac{a+b}{2}}\,f_\text{sym}(x)\,dx=2\int_{\frac{a+b}{2}}^b\,f_\text{sym}(x)\,dx$

## Trigonometric Functions

$$
\int \sin^{2k+1}{x}\,\cos^n{x}\,dx=\left\{\begin{array}{lr}u=\cos{x}\\du=-\sin{x}\,dx\end{array}\right\}=-\int u^n\,(1-u^2)^k\,du
$$

$$
\int \cos^{2k+1}{x}\,\sin^n{x}\,dx=\left\{\begin{array}{lr}u=\sin{x}\\du=\cos{x}\,dx\end{array}\right\}=\int u^n\,(1-u^2)^k\,du
$$

then, we can just use repeated integration by parts or any other method.

Example: $\displaystyle \int \sin^3{x}\,\cos^2{x}\,dx=\left\{\begin{array}{lr}u=\cos{x}\\du=-\sin{x}\,dx\end{array}\right\}=-\int u^2\,(1-u^2)\,du=\frac{u^5}{5}-\frac{u^3}{3}+C=\frac{\cos^5{x}}{5}-\frac{\cos^3{x}}{3}+C$

Remember the double angle formula: $\cos(2x)=2\cos^2{x}-1=1-2\sin^2{x}\,$

$$
\begin{aligned}
\int \sin^{2k}{x}\,\cos^{2n}{x}\,dx=\int\bigg(\frac{1-\cos(2x)}{2}\bigg)^k\,\bigg(\frac{1+\cos(2x)}{2}\bigg)^n\,dx=\frac{1}{2^{n+k}}\int\big(1-\cos(2x)\big)^k\,\big(1+\cos(2x) \big)^n\,dx\\ =\left\{\begin{array}{lr}u=2x\\du=2\,dx\end{array}\right\}=\frac{1}{2^{n+k+1}}\,\int \big(1-\cos{u}\big)^k\,\big(1+\cos{u}\big)^n\,du\\
\text{ or }\\
=\left\{\begin{array}{lr}z=\tan{x}\\du=\sec^2{x}\,dx\end{array}\right\}=\int\frac{z^{2k}\,dz}{(1+z^2)^{n+k+1}}
\end{aligned}
$$

## Reduction of Order

In a second-order ODE, we have:

$$
y''=\mathcal{F}(x,y,y')
$$

If $\mathcal{F}$ does not depend on all three variables, we may reduce to a first-order ODE by:

| $\mathcal{F}\,$ of | Substitution | ODE                          |
|--------------------|--------------|------------------------------|
| $x,y'$             | $p(x)=y'(x)$ | $p'=\mathcal{F}(x,p)$        |
| $y,y'$             | $y'=p(y)$    | $p\cdot p'=\mathcal{F}(y,p)$ |
| $x$                | $p(x)=y'(x)$ | $p'=\mathcal{F}(x)$          |
| $y'$               | $p(x)=y'(x)$ | $p'=\mathcal{F}(p)$          |
| $y$                | $y'=p(y)$    | $p\cdot p'=\mathcal{F}(y)$   |

## Exact Particular Solution

For a linear ODE: $\displaystyle \sum_{k=0}^n a_k\,y^{(k)} =f(x)$, with characterstic polynomial $\chi(s)=\displaystyle\sum_{k=0}^n a_k\,s^k\,$. A particular solution is:

$$
y_p(x)=\frac{1}{a_n}\int_0^x\rho(x-t)\,f(t)\,dt
$$

where $\rho$ is the homogeneous solution with $\rho(0)=\rho'(0)=\cdots=\rho^{(n-2)}(x)=0$ and $\rho^{(n-1)}(0)=1$, that is, dependens only on $\chi$. This can be proven using the Leibnitz Rule.

For the following common cases:

| $\chi(s)$                  | $\rho(x)$                                                        |
|----------------------------|------------------------------------------------------------------|
| $(s-\alpha)$               | $e^{\alpha\,x}\,$                                                |
| $(s-\alpha_1)(s-\alpha_2)$ | $\dfrac{e^{\alpha_1\,x}-\,e^{\alpha_2\,x}}{\alpha_1-\alpha_2}\,$ |
| $(s-\beta)^2+\omega^2$     | $\dfrac{\sin(\omega\,x)}{\omega}\,e^{\beta\,x}\,$                |
| $(s-\alpha)^2$             | $x\,e^{\alpha\,x}\,$                                             |

## Orientation

In one-dimension, the orientation of the curve is very simple, it is directed from the starting point towards the endpoint.

A closed curve is said to be positively oriented if it is counterclockwise.

## Curvilinear Coordinates

Given an orthogonal coordinate system $(q_1,q_2,q_3)$ and the Cartesian $(x_1,x_2,x_3)$, we have the following formulas:

Chain Rule:

$$
\frac{\partial f}{\partial q_i}=\sum_j\frac{\partial x_j}{\partial q_i}\,\frac{\partial f}{\partial x_j}=\frac{\partial x}{\partial q_i}\,\frac{\partial f}{\partial x}+\frac{\partial y}{\partial q_i}\,\frac{\partial f}{\partial y}+\frac{\partial z}{\partial q_i}\,\frac{\partial f}{\partial z}
$$

Total Differential:

$$
df=\sum_i\,dx_i\,\frac{\partial f}{\partial x_i}=dx\,\frac{\partial f}{\partial x}+dy\,\frac{\partial f}{\partial y}+dz\,\frac{\partial f}{\partial z}=\sum_i\,dq_i\,\frac{\partial f}{\partial q_i}=dq_1\,\frac{\partial f}{\partial q_1}+dq_2\,\frac{\partial f}{\partial q_2}+dq_3\,\frac{\partial f}{\partial q_3}
$$

We define the unit vectors and the Lamè coefficient:

$$
\begin{aligned}
  \widehat{q}_i&=\frac{1}{h_i}\frac{\partial\vec{r}}{\partial q_i}=\frac{1}{h_i}\sum_j\frac{\partial x_j}{\partial q_i}\,\widehat{x}_j=\frac{1}{h_i}\bigg[\frac{\partial x}{\partial q_i}\,\hat{x}+\frac{\partial y}{\partial q_i}\,\hat{y}+\frac{\partial z}{\partial q_i}\,\hat{z}\bigg]\\
  h_i&=\bigg\|\frac{\partial\vec{r}}{\partial q_i}\bigg\|=\sqrt{\sum_j\bigg(\frac{\partial x_j}{\partial q_i}\bigg)^2}=\sqrt{\bigg(\frac{\partial x}{\partial q_i}\bigg)^2+\bigg(\frac{\partial y}{\partial q_i}\bigg)^2+\bigg(\frac{\partial z}{\partial q_i}\bigg)^2}
\end{aligned}
$$

Some of those $h_i$ we calculate before:

$$
\begin{aligned}
  h_x&=h_y=h_z=1\\
  h_r&=h_\rho=1\\
  h_{\varphi}&=\rho=r\,\sin{\theta}\\
  h_{\theta}&=r
\end{aligned}
$$

The idea is: whenever you have a differential $dq$, we need to multiply by $h_q$

Further, we get these general formulas for common calculations:

| Quantity        | General Form                                                                                                                                                                                                                                                                               |
|-----------------|--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| Line Element    | $\displaystyle d\vec{r}=\sum_i\,h_i\,\widehat{q}_i\,dq_i=h_1\,\widehat{q}_1\,dq_1+h_2\,\widehat{q}_2\,dq_2+h_3\,\widehat{q}_3\,dq_3\,$                                                                                                                                                     |
| Surface Element | $\displaystyle d\vec{S}=h_2\,h_3\,\widehat{q}_1\,dq_2\,dq_3+h_1\,h_3\,\widehat{q}_2\,dq_1\,dq_3+h_1\,h_2\,\widehat{q}_3\,dq_1\,dq_2\,$                                                                                                                                                     |
| Gradient        | $\displaystyle \nabla f=\sum_i\,\frac{1}{h_i}\,\frac{\partial f}{\partial q_i}\,\widehat{q}_i=\frac{1}{h_1}\,\frac{\partial f}{\partial q_1}\,\widehat{q}_1+\frac{1}{h_2}\,\frac{\partial f}{\partial q_2}\,\widehat{q}_2+\frac{1}{h_3}\,\frac{\partial f}{\partial q_3}\,\widehat{q}_3\,$ |
| Curl            | $\displaystyle\nabla\times \vec{F}=\frac{1}{h_1\,h_2\,h_3}\begin{vmatrix}h_1\,\widehat{q}_1&h_2\,\widehat{q}_2&h_3\,\widehat{q}_3\\\partial_{q_1}&\partial_{q_2}&\partial_{q_3}\\h_1\,F_1&h_2\,F_2&h_3\,F_3\end{vmatrix}\,$                                                                |
| Divergence      | $\displaystyle\nabla\cdot\vec{F}=\frac{1}{h_1\,h_2\,h_3}\bigg[\frac{\partial\,(F_1\,h_2\,h_3\,)}{\partial q_1}+\frac{\partial\,(h_1\,F_2\,h_3\,)}{\partial q_2}+\frac{\partial\,(h_1\,h_2\,F_3\,)}{\partial q_3}\bigg]\,$                                                                  |

## Helmholtz Decomposition (Fundamental Theorem of Vector Calculus)

For any smooth vector field $\vec{F}$, there are functions $\phi:\R^3\to\R$ and $\vec{A}:\R^3\to\R^3$ such that:

$$
\vec{F}=-\nabla\phi+\nabla\times\vec{A}
$$

Moreover, $\phi$ can be retrieved uniquely from $\nabla\cdot\vec{F}$ and $\vec{A}$ can be retrieved uniquely from $\nabla\times\vec{F}$.
