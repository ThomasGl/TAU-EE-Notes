# Classical Mechanics

Gabriel Domingues{#name}

- [Classical Mechanics](#classical-mechanics)
  - [Kinematics and Cylindrical/Polar Coordinates](#kinematics-and-cylindricalpolar-coordinates)
    - [Relative Motion](#relative-motion)
    - [Cylindrical/Polar Coordinates](#cylindricalpolar-coordinates)
      - [Acceleration and Velocity on Polar](#acceleration-and-velocity-on-polar)
    - [Solving ODEs](#solving-odes)
  - [Newton's 2nd Law](#newtons-2nd-law)
    - [Inertial Frame and Center of Mass](#inertial-frame-and-center-of-mass)
    - [Conservation of the String](#conservation-of-the-string)
    - [Friction](#friction)
    - [Rotating / Non-Inertial Reference Frame](#rotating--non-inertial-reference-frame)
  - [Linear Momentum](#linear-momentum)
    - [Conservation of Momentum](#conservation-of-momentum)
    - [Force and Changing Mass Systems](#force-and-changing-mass-systems)
  - [Work and Energy](#work-and-energy)
    - [Conservative Forces and Potential](#conservative-forces-and-potential)
    - [Kinetic Energy and Conservation of Energy](#kinetic-energy-and-conservation-of-energy)
  - [Rotational Dynamics](#rotational-dynamics)
    - [Torque and Angular Momentum](#torque-and-angular-momentum)
    - [Moment of Inertia](#moment-of-inertia)
    - [Rotational Energy and Work](#rotational-energy-and-work)
  - [Common Physical Systems](#common-physical-systems)
    - [In a moving trolley](#in-a-moving-trolley)
    - [Rolling without Slipping](#rolling-without-slipping)
    - [Conservation of Angular Momentum](#conservation-of-angular-momentum)
      - [Using Impluse](#using-impluse)
    - [Changing Mass](#changing-mass)
  - [Simple Harmonic Oscillator](#simple-harmonic-oscillator)
    - [Second Order Linear ODE](#second-order-linear-ode)
    - [Potential Stable Equilibrium](#potential-stable-equilibrium)
    - [Hooke's Law](#hookes-law)
    - [Energy and Amplitude](#energy-and-amplitude)
  - [Special Relativity](#special-relativity)
    - [Lorentz Transformations](#lorentz-transformations)
    - [Hyperbolic Rotations](#hyperbolic-rotations)
    - [Addition of Velocities](#addition-of-velocities)
    - [Break of Simultaneity](#break-of-simultaneity)
    - [Time Dilation, Length Contraction](#time-dilation-length-contraction)
- [Appendix](#appendix)
  - [Vectors](#vectors)
    - [Dot Product](#dot-product)
    - [Cross Product](#cross-product)
  - [Angular Velocity](#angular-velocity)
    - [Collisions](#collisions)
      - [Conservation Linear Momentum](#conservation-linear-momentum)
      - [1D Case](#1d-case)
  - [Line Integrals and Gradient Theorem](#line-integrals-and-gradient-theorem)
  - [Geometry of Torque](#geometry-of-torque)
  - [Formulas for Rotation](#formulas-for-rotation)
  - [Forced Harmonic Motion](#forced-harmonic-motion)
- [Extra Credits](#extra-credits)
  - [Frenet-Serret Frame](#frenet-serret-frame)
  - [Moment of Inertia Tensor](#moment-of-inertia-tensor)
    - [Parallel Axis Theorem](#parallel-axis-theorem)
    - [Principal Axes](#principal-axes)
  - [Derivations on Relativity](#derivations-on-relativity)
    - [Conservation of the Minkowski Metric](#conservation-of-the-minkowski-metric)
    - [Lorentzian Transformations](#lorentzian-transformations)

## Kinematics and Cylindrical/Polar Coordinates

---

### Relative Motion

For the discussion, let $O$ be an inertial point.

We describe the position our particle $B$ by a vector $\mech{r}{B}{O}\,$. This is read: "the position of $B$ wrt $O$".

We can take advantage of our notation and write:

$$
\boxed{\mech{r}{B}{O}=\mech{r}{B}{A}+\mech{r}{A}{O}}
$$

where $A$ is some point.

**If $A$ is not rotating wrt $O$**, that is, it does not change direction, we can safely differentiate both sides and properly call $\mech{v}{B}{A}=\dfrac{d}{dt}\,\mech{r}{B}{A}\,$

$$
\boxed{
\begin{aligned}
  \mech{v}{B}{O}&=\mech{v}{B}{A}+\mech{v}{A}{O}\\
  \mech{a}{B}{O}&=\mech{a}{B}{A}+\mech{a}{A}{O}\\
\end{aligned}}
$$

---

### Cylindrical/Polar Coordinates

For a Cartesian System attached to $O$, we have the simple way to calculate derivatives of vectors:

$$
\vec{q}(t)=q_x(t)\,\hat{x}+q_y(t)\,\hat{y}+q_z(t)\,\hat{z}\Rightarrow \frac{d\vec{q}}{dt}=\dot{q}_x(t)\,\hat{x}+\dot{q}_y(t)\,\hat{y}+\dot{q}_z(t)\,\hat{z}
$$

Why? Because the unit vectors $\hat{x}$,$\,\hat{y}$,$\,\hat{z}\,$ don't depend on time.

**Position and Velocity:**

$$
\mech{r}{B}{O}=x(t)\,\hat{x}+y(t)\,\hat{y}+z(t)\,\hat{z}\Rightarrow \mech{v}{B}{O}=\frac{d}{dt}\,\mech{r}{B}{O}=\dot{x}(t)\,\hat{x}+\dot{y}(t)\,\hat{y}+\dot{z}(t)\,\hat{z}
$$

$$
\mech{v}{B}{O}=\dot{x}(t)\,\hat{x}+\dot{y}(t)\,\hat{y}+\dot{z}(t)\,\hat{z}\Rightarrow \mech{a}{B}{O}=\frac{d}{dt}\,\mech{v}{B}{O}=\ddot{x}(t)\,\hat{x}+\ddot{y}(t)\,\hat{y}+\ddot{z}(t)\,\hat{z}
$$

However, if we wish to express the trajectory of the particle $B$ wrt $O$ in cylindrical/polar coordinates, we have a problem, since the unit vectors **do** change with time. By definition:

$$
\left\{\begin{aligned}
  x(t)&=r(t)\cdot\cos\big(\,\theta(t)\,\big)\\
  y(t)&=r(t)\cdot\sin\big(\,\theta(t)\,\big)\\
  z(t)&=z(t)
\end{aligned}\right\}\Leftrightarrow
\left\{\begin{aligned}
  r(t)&=\sqrt{\big[x(t)\big]^2+\big[y(t)\big]^2+\big[z(t)\big]^2}\\
  \theta(t)&=\operatorname{atan2}\Big(x(t)\,,\,y(t)\Big)\\
  z(t)&=z(t)
\end{aligned}\right\}
$$

where $\operatorname{atan2}(x,y)$ is like $\arctan\bigg(\dfrac{y}{x}\bigg)$, but we choose if we add or subtract $\pi$, depending on the quadrant (Wiki: [atan2](https://en.wikipedia.org/wiki/Atan2)).

<blockquote>

**Example:** Spiraling Cones

$$
\left\{\begin{aligned}
  x(t)&=2t\cdot\cos\big(2\pi t\big)\\
  y(t)&=2t\cdot\sin\big(2\pi t\big)\\
  z(t)&=t
\end{aligned}\right\}\Leftrightarrow
\left\{\begin{aligned}
  r(t)&=2t\\
  \theta(t)&=2\pi\,t\\
  z(t)&=t
\end{aligned}\right\}
$$

</blockquote>

**Disclaimer**: Some physicists use $(\rho,\varphi)$ instead of $(r,\theta)$ to reduced confusion if we use spherical coordinates. However, we will not do kinematics spherical coordinates, so it's fine.

From vector calculus, we know how to compute the unit vectors:

$$
\begin{aligned}
  \hat{r}&=\cos{\theta}\,\hat{x}+\sin{\theta}\,\hat{y}\\
  \hat{\theta}&=-\sin{\theta}\,\hat{x}+\cos{\theta}\,\hat{y}
\end{aligned}
$$

Since $\theta$ depends on time, in general, we can no longer just take the derivative of the components in each direction. We calculate:

$$
\begin{aligned}
  \frac{d}{dt}\hat{r}&=-\dot{\theta}\,\sin{\theta}\,\hat{x}+\dot{\theta}\,\cos{\theta}\,\hat{y}=\dot{\theta}\,\hat{\theta}\\
  \frac{d}{dt}\hat{\theta}&=-\dot{\theta}\,\cos{\theta}\,\hat{x}-\dot{\theta}\,\sin{\theta}\,\hat{y}=-\dot{\theta}\,\hat{r}
\end{aligned}
$$

Hence, we have a simple way to calculate derivatives of any vector $\vec{q}$ by using the product rule:

$$
\begin{aligned}
 \vec{q}(t)=q_r(t)\,\hat{r}+q_\theta(t)\,\hat{\theta}\Rightarrow \frac{d\vec{q}}{dt}&=\dot{q}_r(t)\,\hat{r}+q_r(t)\cdot\dot{\theta}(t)\,\hat{\theta}+\dot{q}_\theta(t)\,\hat{\theta}-q_\theta(t)\cdot\dot{\theta}(t)\,\hat{r} \\
 &=\Big[\dot{q}_r(t)-q_\theta(t)\cdot\dot{\theta}(t)\Big]\,\hat{r}+\Big[\dot{q}_\theta(t)+q_r(t)\cdot\dot{\theta}(t)\Big]\,\hat{\theta}
\end{aligned}
$$

#### Acceleration and Velocity on Polar

$$
\boxed{
\begin{aligned}
  \mech{r}{B}{O}&=r(t)\,\hat{r}+z(t)\,\hat{z}\\
  \mech{v}{B}{O}&=\frac{d}{dt}\,\mech{r}{B}{O}=\dot{r}(t)\,\hat{r}+r(t)\cdot\dot{\theta}(t)\,\hat{\theta}+\dot{z}(t)\,\hat{z}\\
  \mech{a}{B}{O}&=\frac{d}{dt}\,\mech{v}{B}{O}=\Big[\ddot{r}(t)-\dot{\theta}(t)^2\cdot r(t)\Big]\,\hat{r}+\Big[2\dot{r}(t)\cdot\dot{\theta}(t)+\ddot{\theta}(t)\cdot r(t)\Big]\,\hat{\theta}+\ddot{z}(t)\,\hat{z}
\end{aligned}
}
$$

*Comment (Angular Momentum):* $\;\dfrac{1}{r}\dfrac{d}{dt}\Big[\dot{\theta}\,r^2\Big]=2\dot{r}\,\dot{\theta}+\ddot{\theta}\, r$

<blockquote>

**Problem:** We have a particle that moves according to:
$$
\left\{\begin{aligned}
  x(t)&=2t\cdot\cos\big(2\pi t\big)\\
  y(t)&=2t\cdot\sin\big(2\pi t\big)\\
  z(t)&=t
\end{aligned}\right\}
$$

find the radial acceleration (acceleration in the direction of $\hat{r}$).

*Solution*: We have: $\left\{\begin{aligned}r(t)&=2t\\\theta(t)&=2\pi\,t\\z(t)&=t\end{aligned}\right\}$, so we simply calculate $a_r=\ddot{r}-\dot{\theta}\,r=2-4\pi\,t$.

</blockquote>
<blockquote>

**Problem:** We have a particle that moves according to:
$$
\left\{\begin{aligned}
  x(t)&=A\,e^{\gamma\,t}\cos\big(\omega t\big)\\
  y(t)&=A\,e^{\gamma\,t}\sin\big(\omega t\big)
\end{aligned}\right\}
$$

find the tangential acceleration (acceleration in the direction of $\vec{v}$, i.e. the projection) and the normal acceleration (the one perpendicular to the tangential, i.e. the rejection).

*Solution*: We have:

$$
\left\{\begin{aligned}r(t)&=A\,e^{\gamma\,t}\\\theta(t)&=\omega\,t\\\end{aligned}\right\}\Rightarrow \left\{\begin{aligned}\dot{r}(t)&=\gamma\,A\,e^{\gamma\,t}\\\ddot{r}(t)&=\gamma^2\,A\,e^{\gamma\,t}\\\dot{\theta}(t)&=\omega\\\ddot{\theta}(t)&=0\\\end{aligned}\right\}
$$

so we simply calculate:

$$
\begin{aligned}
  \vec{v}&=\gamma\,A\,e^{\gamma\,t}\,\hat{r}+\omega\,A\,e^{\gamma\,t}\,\hat{\theta}=A\,e^{\gamma\,t}\,\Big[\gamma\,\hat{r}+\omega\,\hat{\theta}\Big]\\
  \vec{a}&=(\gamma^2-\omega^2)\,A\,e^{\gamma\,t}\,\hat{r}+2\gamma\omega\,A\,e^{\gamma\,t}\,\hat{\theta}=A\,e^{\gamma\,t}\,\Big[(\gamma^2-\omega^2)\,\hat{r}+2\omega\gamma\,\hat{\theta}\Big]
\end{aligned}
$$

$$
\Rightarrow\vec{a}_{\,\parallel}=\dfrac{\vec{a}\cdot \vec{v}}{\|v\|^2}\,\vec{v}=\frac{\gamma\,(\gamma^2-\omega^2)+2\omega^2\,\gamma}{\gamma^2+\omega^2}\;A\,e^{\gamma\,t}\,\Big[\gamma\,\hat{r}+\omega\,\hat{\theta}\Big]=\gamma\,A\,e^{\gamma\,t}\,\Big[\gamma\,\hat{r}+\omega\,\hat{\theta}\Big]
$$

$$
\Rightarrow\vec{a}_{\,\perp}=\vec{a}-\vec{a}_{\,\parallel}=\omega\,A\,e^{\gamma\,t}\,\Big[-\omega\,\hat{r}+\gamma\,\hat{\theta}\Big]
$$

</blockquote>

---

### Solving ODEs

**Ballistics** : We simply use direct integration

$$
\vec{a}=-g\,\hat{y}\Rightarrow
\begin{cases}
  \displaystyle\vec{v}=\vec{v}_0+\int_0^t\vec{a}(\tau)\,d\tau=\vec{v}_0-gt\,\hat{y}\\
  \displaystyle\vec{r}=\vec{r}_0+\int_0^t\vec{v}(\tau)\,d\tau=\vec{r}_0+\vec{v}_0\,t-\frac{1}{2}\,gt^2\,\hat{y}
\end{cases}

$$

In Newton's 2nd Law, we may encounter some situations where converting to polar/cylindrical will ease the problem drastically.

<blockquote>

**Problem:** $m\vec{a}=-\beta\,\vec{v}-\dfrac{k}{r^2}\,\hat{r}\,$, calculate $\vec{h}=\vec{r}\times\vec{v}\,$ for $r(0)=R_0$ and $\dot{\theta}(0)=\omega_0$.

*Solution*: In polar:

$$
m\,\bigg[\big(\ddot{r}-\dot{\theta}^2\,r\big)\,\hat{r}+\big(2\,\dot{\theta}\,\dot{r}+\ddot{\theta}\,r\big)\,\hat{\theta}\bigg]=-\frac{k}{r^2}\,\hat{r}-\beta\Big[\dot{r}\,\hat{r}+\dot{\theta}\,r\,\hat{\theta}\Big]
$$

$$
\begin{cases}
  m\,\ddot{r}+\beta\,\dot{r}+\dfrac{k}{r^2}-m\,\dot{\theta}^2\,r=0\\
  m\,\ddot{\theta}\,r+(2m\,\dot{r}+\beta\,r)\,\dot{\theta}=0
\end{cases}
$$

$$
\vec{h}=r\,\hat{r}\times \Big[\dot{r}\,\hat{r}+\dot{\theta}\,r\,\hat{\theta}\Big]=\dot{\theta}\,r^2\,\hat{z}
$$

Solving the last equation:

$$
\frac{\ddot{\theta}}{\dot{\theta}}=-\frac{2\dot{r}}{r}-\frac{\beta}{m}\Rightarrow \ln\dot{\theta}=-2\ln r-\frac{\beta}{m}\,t+C\Rightarrow \dot{\theta}\,r^2=A\,e^{-\frac{\beta}{m}\,t}
$$

Moreover, $A=\omega_0\,R_0^2\Rightarrow\vec{h}(t)=\omega_0\,R_0^2\,e^{-\frac{\beta}{m}\,t}\,\hat{z}\,$

</blockquote>
<blockquote>

**Problem (200PPP):** Three snails are in a triangle $\big(R,0\big)\,,\;\big(-\frac{R}{2},\frac{\sqrt{3}R}{2}\big)\,,\;\big(-\frac{R}{2},-\frac{\sqrt{3}R}{2}\big)$ they move with constant velocity $v$ towards their leftmost neighbour. How much time until they meet and what is the path of the snail initally at $(2,0)$?

*Solution*: We describe in polar: $\Big(r\cos{\theta},r\sin{\theta}\Big)=r\,\hat{r}\,,\;\Big(r\cos\big(\theta+\frac{2\pi}{3}\big),r\sin\big(\theta+\frac{2\pi}{3}\big)\Big)=-\frac{1}{2}\,r\,\hat{r}+\frac{\sqrt{3}}{2}\,r\,\hat{\theta}\,,\;\Big(r\cos\big(\theta+\frac{4\pi}{3}\big),r\sin\big(\theta+\frac{4\pi}{3}\big)\Big)=-\frac{1}{2}\,r\,\hat{r}-\frac{\sqrt{3}}{2}\,r\,\hat{\theta}\,$

Hence: $\Delta\,\vec{r}=-\frac{1}{2}\,r\,\hat{r}+\frac{\sqrt{3}}{2}\,r\,\hat{\theta}-r\,\hat{r}=\sqrt{3}r\,\Big[-\frac{\sqrt{3}}{2}\,\hat{r}+\frac{1}{2}\,\hat{\theta}\Big]\Rightarrow \dfrac{\vec{v}}{v}=\hat{v}=\widehat{\Delta\,\vec{r}}=-\frac{\sqrt{3}}{2}\,\hat{r}+\frac{1}{2}\,\hat{\theta}\,$

$$
\vec{v}=\dot{r}\,\hat{r}+\dot{\theta}\,r\,\hat{\theta}=-\frac{\sqrt{3}}{2}\,v\,\hat{r}+\frac{1}{2}\,v\,\hat{\theta}
$$

$$
\begin{aligned}
  \dot{r}&=-\frac{\sqrt{3}}{2}\,v\Rightarrow r(t)=R-\frac{\sqrt{3}}{2}\,v\,t\\
  \dot{\theta}\,r&=\frac{1}{2}\,v\Rightarrow \theta(t)=\frac{v}{2}\int_0^t\,\frac{d\tau}{R-\frac{\sqrt{3}}{2}\,v\,\tau}=-\frac{1}{\sqrt{3}}\,\ln\bigg|1-\frac{\sqrt{3}v\,t}{2R}\bigg|
\end{aligned}
$$

Therefore, $r(T)=0\Leftrightarrow T=\dfrac{2R}{\sqrt{3}\,v}\,$.
Parametrically: $r=R\,e^{-\sqrt{3}\,\theta}\,$, this is called a logarithmic spiral. Notice, it revolves around the origin infinitely many times but reaches the centre in a finite time.

</blockquote>

---

## Newton's 2nd Law

---

### Inertial Frame and Center of Mass

The statement of the Second Law for a single particle $B$ is:

$$
\sum_{\text{acting on }B}\vec{F}=m\,\mech{a}{B}{O}
$$

For a system of particles $S$ / rigid body $Q$, we define the (position of the) centre of mass:

$$
\mech{r}{G}{O}=\frac{1}{m_S}\sum_i\,m_i\,\mech{r}{i}{O}=\frac{1}{m_Q}\qint{\mech{r}{q}{O}}
$$

where $\rho$ is the mass density on the body.

<blockquote>

**Problem:** Calculate the centre of mass of a uniformly dense half-circle centred at the origin $O$ with radius $R$.

*Solution*: $\displaystyle m_Q=\iint_Q\rho\;dq=\frac{1}{2}\,\rho\,\pi\,R^2$

$$
\begin{aligned}
  \mech{r}{G}{O}&=\frac{1}{m_Q}\qint{\mech{r}{q}{O}}=\frac{2}{\rho\,\pi\,R^2}\,\rho\int\limits_{\theta=0}^\pi\;\int\limits_{r=0}^{R}\,r\big(\cos{\theta}\,\hat{x}+\sin{\theta}\,\hat{y}\big)\;r\,dr\,d\theta\\
  &=\frac{2}{\pi\,R^2}\int\limits_{r=0}^{R}\,r^2\,dr\;\int\limits_{\theta=0}^\pi\big(\cos{\theta}\,\hat{x}+\sin{\theta}\,\hat{y}\big)\,d\theta=\frac{2}{\pi\,R^2}\;\frac{r^3}{3}\bigg|_{r=0}^R\;\bigg[\big(\sin{\theta}\,\hat{x}-\cos{\theta}\,\hat{y}\big)\bigg]_{\theta=0}^\pi\\
  &=\frac{2}{\pi\,R^2}\;\frac{R^3}{3}\;2\,\hat{y}=\frac{4R}{3\pi}\,\hat{y}
\end{aligned}
$$

</blockquote>

Using the Third Law (that states that the sum of the internal forces of a system is zero), we can write the Second Law as follows:

$$
m\,\mech{a}{G}{O}=\sum_i\,m_i\,\mech{a}{i}{O}=\sum_i\sum_{\text{acting on }i}\vec{F}=\sum_\text{external}\vec{F}+\cancel{\sum_\text{internal}\vec{F}}=\sum_\text{external}\vec{F}
$$

$$
\boxed{m\,\mech{a}{G}{O}=\sum_\text{ext}\vec{F}}
$$

<blockquote>

**Problem:** A block of mass $m$ is on top of a trolley of mass $M$. They are sliding down a (stationary) inclined ramp with angle $\theta$. What is the normal force between the block and the trolley? Suppose that the block is truck to the trolley, that is, is does not slide sideways.

*Solution*: First, we define the directions $\hat{x}'$ (down the ramp) and $\hat{y}'$ (normal to the ramp). Since they are stuck: $\mech{a}{G}{O}=\mech{a}{B}{O}=\mech{a}{T}{O}=a\,\hat{x}'+0\,\hat{y}'=a\cos{\theta}\,\hat{x}-a\,\sin{\theta}\,\hat{y}\,$

We write Newton's II:

- Centre of mass $(\hat{x}')\,:\;\;(M+m)\,a=(M+m)\,g\,\sin{\theta}\,$
- Block $(\hat{y})\,:\;\;-ma\sin{\theta}=N-mg$

Therefore: $N=mg\,\cos^2{\theta}\;$

Notice we used the fact that the system is not moving in the $\hat{y}'$ direction implicitly.

</blockquote>

<blockquote>

**Problem:** Same problem as the previous, but the block is allowed to move sideways

*Solution*: Since they are stuck on the $y$ direction:  $\mech{a}{T}{O}=a\,\hat{x}'=a\cos{\theta}\,\hat{x}-a\,\sin{\theta}\,\hat{y}\,\Rightarrow\mech{a}{B}{O}=-a\sin{\theta}\,\hat{y}\,$

We write Newton's II:

- Trolley $(\hat{x}')\,:\;\;M\,a=M\,g\,\sin{\theta}+N\sin{\theta}\,$
- Block $(\hat{y})\,:\;\;-ma\sin{\theta}=N-mg$

Therefore: $N=\cfrac{mg\,\cos^2{\theta}}{1+\frac{m\sin^2{\theta}}{M}}\;$

Notice, again, we used the fact that the block is not moving in the $\hat{x}$ direction and that the trolley is not moving in $\hat{y}'$ direction implicitly.

</blockquote>

In general, we need to:

- Pick the axes
- Write Geometrical relations on the accelerations
- Figure out how many equations we need
- Write Newton's II Law on those axes

### Conservation of the String

If we have a string, we can try to calculate its length (up to a constant term) in terms of the positions. By taking the derivative of both sides twice, we get a relation on the accelerations.

<blockquote>

**Problem (Morin)**: $N+2$ equal masses hang from a system of pulleys, as shown below. What are the accelerations of the masses at the side?

![lineofpulleys](img/lineofpulleys.PNG){:height="200px" width="200px"}

*Solution*: The motion is essentially one-dimensional, so we consider only the $\hat{y}$ direction. Let $r_i$ for $i=1,2,\cdots,N$ be the position of each $N$ masses in the middle (wrt to the ceiling). And let $r_S$ be the position (in the $y$-axis) of the masses at each end. We called it the same since, by symmetry, they are equal. Notice that:
$$
2\,r_S+\sum_i 2\,r_i=\text{Length of Rope (const.)}
$$
By taking the derivative of both sides twice, we get: $\;a_S=-\sum_i a_i\;$. By Newton's Second Law:

- Mass $i\,:\;\;m\; a_i= 2T-mg$
- Mass in the side $\,:\;\;m\; a_S= T-mg$

where $T$ is the tension on the string. Plugging it in the geometrical equation:

$$
T-mg=-N\cdot(2T-mg)\Rightarrow T=\frac{N+1}{2N+1}\,mg\Rightarrow a_S=-\frac{N}{2N+1}\,g
$$

</blockquote>

---

### Friction

- Static: $f\leq \mu_s\,N$
- Kinetic $f= \mu_k\,N$

In a point of contact, the friction force is applied in the opposite direction of velocity. That is:

$$
\vec{f}=-\mu\,N\,\widehat{v}_\text{contact}
$$

---

### Rotating / Non-Inertial Reference Frame

Newton's First Law states that, in the absence of external forces, a particle will move with constant velocity (vector). That defines an inertial frame as one wherein the First Law holds. However, some calculations may be easier if we use non-inertial frames. For that, we need to introduce "fictitious forces" to correct the Second Law.

**Without rotation:** We had: $\mech{a}{B}{O}=\mech{a}{B}{A}+\mech{a}{A}{O}\,$ if we write the Second Law, we get:

$$
\begin{aligned}
  m\,\mech{a}{B}{A}+m\,\mech{a}{A}{O}=m\,\mech{a}{B}{O}=\sum_\text{ext}\vec{F}\\
  \Rightarrow m\,\mech{a}{B}{A}=-m\,\mech{a}{A}{O}+\sum_\text{ext}\vec{F}
\end{aligned}
$$

Let $\vec{F}_\text{fict}=-m\,\mech{a}{A}{O}$ and we have:

$$
\boxed{m\,\mech{a}{B}{A}=\sum_\text{ficticious}\vec{F}+\sum_\text{external}\vec{F}}
$$

<blockquote>

**Problem:** Trolley moves to the right with an acceleration of $A$. Inside, there is a rope attached to the ceiling and a non-moving mass $m$ attached the end. What is the angle the rope makes with the vertical and to what side?

*Solution*: By definition, $\mech{a}{B}{T}=\vec{0}\;$ and $\mech{a}{T}{O}=A\,\hat{x}$. Newton's II:

$$
\vec{0}=-mA\,\hat{x}-mg\,\hat{y}+\vec{T}\Rightarrow\vec{T}=mA\,\hat{x}+mg\,\hat{y}
$$

where $\vec{T}$ is the tension on the string. $\;\Rightarrow \delta=\arctan\bigg(\dfrac{mA}{mg}\bigg)=\arctan\bigg(\dfrac{A}{g}\bigg)$, to the left of the vertical line.

*Note:* Sometimes we denote $\vec{g}_\text{eff}=A\,\hat{x}+g\,\hat{y}\,$

</blockquote>

**Rotating:** We have more fictitious forces than just $-m\,\mech{a}{A}{O}$. Looking at [Acceleration and Velocity on Polar](#acceleration-and-velocity-on-polar) section or the [Angular Velocity](#angular-velocity) section, we get those forces:

- Centrifugal: $\;F_\text{ Centrifugal}=m\,\dot{\theta}^2\,r\;\hat{r}=-m\,\mech{\omega}{A}{O}\times(\mech{\omega}{A}{O}\times\mech{r}{B}{A})$
- Coriolis: $\;F_\text{ Coriolis}=-2m\,\dot{\theta}\,\dot{r}\;\hat{\theta}=-2m\;\mech{\omega}{A}{O}\times\mech{v}{B}{A}\,$
- Euler: $\;F_\text{ Euler}=-\ddot{\theta}\,r\;\hat{\theta}=-m\,\mech{\alpha}{A}{O}\times\mech{r}{B}{A}\,$

<blockquote>

**Problem:** A bug on a wheel of radius $R$ is moving with constant velocity (wrt to the wheel). The wheel is moving to the left with speed $v$ and rotates with angular velocity $\omega=\dfrac{v}{R}$ counterclockwise. The bug starts at the bottom point of the wheel. What is the angle that the external force exerted on the bug makes with the radial direction?

*Solution*: By definition, $\mech{a}{B}{W}=\mech{a}{W}{O}=\vec{0}\;$. We define our system: $\hat{x}'=-\hat{y}$ and $\hat{y}'=\hat{x}$ so that, $\mech{r}{B}{A}=(R-vt)\,\hat{r}$ . Newton's II:

$$
\vec{0}=m\,\omega^2\,(R-vt)\;\hat{r}+2m\,\omega\,v\;\hat{\theta}+\vec{F}_\text{ext}\Rightarrow \vec{F}_\text{ext}=-m\,\omega^2\,(R-vt)\;\hat{r}-2m\,\omega\,v\;\hat{\theta}
$$

$\Rightarrow \delta(t)=\arctan\bigg(\dfrac{-m\,\omega^2\,(R-vt)}{-2m\omega\,v}\bigg)=\arctan\bigg(\dfrac{1-\omega\,t}{2}\bigg)$

</blockquote>

---

## Linear Momentum

---

### Conservation of Momentum

We define the momentum as: $\mech{p}{B}{O}=m_B\,\mech{v}{B}{O}\,$ for a single particle and for a body/system $Q$:

$$
\begin{aligned}
  \mech{p}{S}{O}&=\displaystyle\sum_i\,m_i\,\mech{v}{i}{O}=m_S\,\mech{v}{G}{O}\\
  \mech{p}{Q}{O}&=\displaystyle\qint{\mech{v}{q}{O}}=m_Q\,\mech{v}{G}{O}\\
\end{aligned}
$$

In that way, we write Newton's Second law Integral Form (also called the Impulse-Momentum Theorem):

$$
\vec{p}_G(t_2)-\vec{p}_G(t_1)=J=\int_{t_1}^{t_2}\,\vec{F}_\text{ext}(\tau)\,d\tau
$$

A simple corollary is:

$$
\boxed{\text{In an isolated system/body $B$\,, }\;\mech{p}{B}{O}=\text{ const.}}
$$

<blockquote>

**Problem:** A spherical shell of mass $M$ and radius $R$ is free to move on the plane. Inside, a sphere of mass $m$ and radius $r$ is dropped from rest from the shell's leftmost point. After the sphere reaches the rightmost point, what is the distance the centre of the shell moved, and to which direction?

*Solution*: We write a coordinate system with the origin at the initial position of the centre of the sphere. Since no external forces are acting on the $x$, the total momentum of the system is conserved, hence: $\vec{p}_{G,x}=\vec{p}_{G,x}\Big|_\text{initial}=\vec{0}\Rightarrow x_{G}=\text{ const.}\,$

$$
x_G=\frac{m(r-R)+M(0)}{m+M}=\frac{m(\delta+R-r)+M(\delta)}{m+M}\Rightarrow \delta=-\frac{2M(R-r)}{m+M}
$$

</blockquote>

---

### Force and Changing Mass Systems

We define the external force applied to a system at a given time $t$ as:

$$
\vec{F}_\text{ext}(t)=\lim_{\Delta t\to 0}\frac{\vec{p}(t+\Delta\,t)-\vec{p}(t)}{\Delta t}
$$

**Changing Mass:** Our system is ejecting mass at rate $\kappa=-\dfrac{dm}{dt}$, where $m$ is the mass of the system, with velocity $\vec{u}$ relative to the system.

By Conservation of Momentum on System $+$ Ejected Mass

$$
\begin{aligned}
  \vec{p}(t)&=m\,\vec{v}(t)\\
  \vec{p}(t+\Delta\,t)&=(m-\kappa\,\Delta t)\,\vec{v}(t+\Delta t)+\kappa\Delta t\,\big[\vec{u}+\vec{v}(t)\big]\\
  &=m\,\vec{v}(t+\Delta t)+\kappa\,\Delta\,t\,\vec{u}-\kappa\,\Delta t\,\Big[\vec{v}(t+\Delta t)-\vec{v}(t)\Big]
\end{aligned}
$$

$$
\begin{aligned}
  \Rightarrow\vec{F}_\text{ext}(t)&=\lim_{\Delta t\to 0}\bigg[m\,\frac{\vec{v}(t+\Delta\,t)-\vec{v}(t)}{\Delta t}+\kappa\,\vec{u}-\kappa\,\Big[\vec{v}(t+\Delta t)-\vec{v}(t)\Big]\bigg]\\
  &=m\,\vec{a}+\kappa\,\vec{u}
\end{aligned}
$$

Hence:

$$
\boxed{F_\text{ext}=m\,\vec{a}+\kappa\,\vec{u}=m\frac{d\,\vec{v}}{dt}-\vec{u}\,\frac{dm}{dt}}
$$

**Notice the signs**: By Newton's Third Law, if we eject mass with velocity directed to the left, we shall get an acceleration towards the right.

We can also think of the ejecting mass as a fictituous force $F_\text{thrust}=-\kappa\,\vec{u}=\frac{dm}{dt}\,\vec{u}\;$

<blockquote>

**Problem:** A wagon is initally moving at velocity $v_0\,\hat{x}$ wrt the inertial observer. Rain is falling at constant speed $\vec{u}=-\sin{\theta}\,\hat{x}-\cos{\theta}\,\hat{\theta}\,$ (wrt the inertial observer) at constant rate $\alpha=\dfrac{dm}{dt}$ and is accumulating inside the cart. Find $v(t)$ of the cart and the time $T$ until it stops.

*Solution*: By Conservation of Momentum on System $+$ Rain Mass

$$
\begin{aligned}
  \vec{p}(t)&=m\,\vec{v}(t)+\alpha\,\Delta\,t\,\vec{u}\\
  \vec{p}(t+\Delta\,t)&=(m+\alpha\,\Delta t)\,\vec{v}(t+\Delta t)\\
\end{aligned}
$$

$$
\begin{aligned}
  \Rightarrow\vec{F}_\text{ext}(t)&=\lim_{\Delta t\to 0}\bigg[m\,\frac{\vec{v}(t+\Delta\,t)-\vec{v}(t)}{\Delta t}+\alpha\,\vec{v}(t+\Delta t)-\alpha\,\vec{u}\bigg]\\
  &=m\,\vec{a}+\alpha\,\big(\vec{v}-\vec{u}\big)
\end{aligned}
$$

We could've also used the rocket equation with $\vec{v}_\text{rel}=\vec{u}-\vec{v}$. Since the cart does not move in the $y$, we take the $x$ component: $0=m\dot{v}+\alpha\,\big(v+u\sin{\theta}\big)$. Also, $m=M+\alpha\,t$. Let $w=v+u\sin{\theta}\Rightarrow \dot{w}=\dot{v}$. We get the ODE:

$$
\begin{aligned}
  \dot{w}&=-\dfrac{\alpha}{M+\alpha\,t}\;w\Rightarrow \ln|w|=-\ln\big|M+\alpha\,t\big|+C\\
  \Rightarrow&\; w=\dfrac{A}{M+\alpha\,t}\Rightarrow v_0+u\sin{\theta}=\dfrac{A}{M}\\
  \Rightarrow&\; v+u\sin{\theta}=w=\dfrac{M(v_0+u\sin{\theta})}{M+\alpha\,t}\Rightarrow\boxed{v(t)=\dfrac{M\,v_0-\alpha\,u\sin{\theta}\,t}{M+\alpha\,t}}\\
  &\;v(T)=0\Leftrightarrow \boxed{T=\dfrac{Mv_0}{\alpha\,u\sin{\theta}}}
\end{aligned}
$$

</blockquote>

---

## Work and Energy

---

### Conservative Forces and Potential

We define the work of a force field (to every point in space, there an associated force that shall act on a particle at the point) along a curve $\Gamma$ as:

$$
W[\vec{F}]_\Gamma=\int_\Gamma\,\vec{F}(\,\vec{r}\,)\,\cdot\,d\vec{r}
$$

From vector calculus we have the following equivalent statements:

- The Work of $\vec{F}$ between two points does not depend on the path.
- The Work of $\vec{F}$ along any closed path is zero.
- $\nabla\times\vec{F}=\vec{0}\,$
- There is a function $U:\R^3\to \R$ such that $\vec{F}=-\nabla U$

Notice the function $U$, called the potential, is uniquely determined up to a constant. We define:

$$
U(\,\vec{r}\,)=U(\,\vec{r}_0\,)-\int_{\vec{r}_0\to\vec{r}}\,\vec{F}(\,\vec{ר}\,)\,\cdot\,d\vec{ר}
$$

By the gradient theorem: $\boxed{W\big[\vec{F}_\text{conservative}\big]_{A\to B}=U(A)-U(B)=-\Delta U}$

We use the techniques in [Line Integrals and Gradient Theorem](#line-integrals-and-gradient-theorem) to calculate the integral.

<blockquote>

**Problem:** Calculate the potential for $\vec{F}=-mg\,\hat{y}\,$

*Solution*: $U_g(x,y,z)=U_0-mg\,y\Rightarrow -\nabla U_g=-mg\hat{y}=\vec{F}\,$

</blockquote>

<blockquote>

**Problem:** Show that a radial force $\vec{F}=-f(r)\,\hat{r}\,$ is always conservative and calculate an expression for its potential it termos of $r_0$.

*Solution*: $\nabla\times\vec{F}=\dfrac{\partial f}{\partial z}\,\hat{\theta}-\dfrac{\partial f}{\partial \theta}\,\hat{z}=\vec{0}\,$

$$
U(\,\vec{r}\,)=U(\,\vec{r}_0\,)+\int_{r_0\to r}\,f(\,ר\,)\,\hat{ר}\,\cdot\,\overbrace{d\vec{ר}}^{\hat{ר}\,dר}=U(\,\vec{r}_0\,)+\int_{r_0}^r\,f(\,ר\,)\,dר
$$

It only depends on the distance from the origin.

</blockquote>

---

### Kinetic Energy and Conservation of Energy

We define the kinetic energy as: $K_B=\dfrac{1}{2}\,m_B\,\|\vec{v}_B\|^2\,$ for a single particle and for a body/system $Q$:

$$
\begin{aligned}
  K_S&=\displaystyle\sum_i\,\frac{1}{2}\;m_i\,\|\vec{v}_i\|^2\\
  K_Q&=\displaystyle\qint{\frac{1}{2}\;\|\vec{v}_q\|^2}\\
\end{aligned}
$$

**Work-Energy Theorem**: For two points $A$ and $B$:

$$
\boxed{\Delta K=K(B)-K(A)=W\big[\vec{F}_\text{ext}\big]_{A\to B}}
$$

This is valid for any particle, system or body.

*Proof*:

$$
W\big[\vec{F}_\text{ext}\big]_{A\to B}=W\big[m\,\vec{a}\big]_{A\to B}=\int_{A\to B}m\,\vec{a}\,\cdot\,\overbrace{d\vec{r}}^{\vec{v}\,dt}=\int_{A\to B}m\,\vec{v}\,\cdot\,d\vec{v}=\frac{1}{2}\,m\,\|v\|^2\bigg|_A^B
$$

We can split $\vec{F}_\text{ext}=\vec{F}_\text{conservative}+\vec{F}_\text{non-conservative}$, then, the conservative forces have a total potential: $U=\sum_{\text{force }i}U_i$.

Let $\boxed{H=K+U}$, then:

$$
\boxed{\Delta H=H(B)-H(A)=W\big[\vec{F}_\text{non-conservative}\big]_{A\to B}}
$$

*Proof*:

$$
\begin{aligned}
  K(B)-K(A)&=W\big[\vec{F}_\text{ext}\big]_{A\to B}=W\big[\vec{F}_\text{conservative}\big]_{A\to B}+W\big[\vec{F}_\text{non-conservative}\big]_{A\to B}\\
  &=U(B)-U(A)+W\big[\vec{F}_\text{non-conservative}\big]_{A\to B}\\
  \Rightarrow K(B)+U(B)&-K(A)-U(A)=W\big[\vec{F}_\text{non-conservative}\big]_{A\to B}
\end{aligned}
$$

Now it is clear why we defined the potential energy with a minus sign.

A simple corollary is:

$$
\boxed{\text{In the absence of non-conservative forces on a system/body $B$\,, }\;H_B=\text{ const.}}
$$

<blockquote>

**Problem:** In one-dimension, a particle is in a potential of the form $U(x)=\frac{1}{3}\,\beta\,x^3$. What is the equation of motion for the system?

*Soluton*: $H=K+U=\frac{1}{2}\,m\,\dot{x}^2+\frac{1}{3}\,\beta\,x^3$. Conservation of Energy implies $\dfrac{dH}{dt}=0\;$, we get:

$$
m\,\dot{x}\,\ddot{x}+\beta\,x^2\,\dot{x}=0\Rightarrow m\,\ddot{x}+\beta\,x^2=0
$$

</blockquote>

<!-- <blockquote>

**Problem:**

*Soluton*:

</blockquote> -->

---

## Rotational Dynamics

---

### Torque and Angular Momentum

We define the angular momentum around a point $C$ as: $\mechl{L}{B}{C}=\mech{r}{B}{C}\times\mech{v}{B}{O}\,$ for a single particle and for a body/system $Q$:

$$
\begin{aligned}
  \mechl{L}{S}{C}&=\displaystyle\sum_i\,m_i\,\mech{r}{i}{C}\times\mech{v}{i}{O}\\
  \mechl{L}{Q}{C}&=\displaystyle\qint{\,\mech{r}{q}{C}\times\mech{v}{q}{O}}
\end{aligned}
$$

In polar coordinates around $G$:

$$
\mechl{L}{Q}{G}=\qint{\,\vec{r}\times\vec{v}}=\qint{\,r\,\hat{r}\times\big[\dot{r}\,\hat{r}+\dot{\theta}\,r\,\hat{\theta}\big]}=\qint{\dot{\theta}\,r^2\,\hat{z}}
$$

Similarly, we define the torque of a force $\vec{F}$ acting at $B$ around a point $C$ as: $\mechl{\tau}{B}{C}=\mech{r}{B}{C}\times\vec{F}\,$

The total torque acting on a system/body is:

$$
\begin{aligned}
  \mechl{\tau}{S}{C}&=\displaystyle\sum_i\,m_i\,\mech{r}{i}{C}\times\mech{a}{i}{O}\\
  \mechl{\tau}{Q}{C}&=\displaystyle\qint{\,\mech{r}{q}{C}\times\mech{a}{q}{O}}
\end{aligned}
$$

In polar coordinates around $G$:

$$
\mechl{\tau}{Q}{G}=\qint{\,\vec{r}\times\vec{a}}=\qint{\,r\,\hat{r}\times\Big[\big(\ddot{r}-\dot{\theta}^2\, r\big)\,\hat{r}+\big(2\dot{r}\,\dot{\theta}+\ddot{\theta}\, r\big)\,\hat{\theta}\Big]}=\qint{\big(2\dot{r}\,r\,\dot{\theta}+\ddot{\theta}\, r^2\big)\,\hat{z}}
$$

Look into [Formulas for Rotation](#formulas-for-rotation) for important relations between those quantities.

If $\mech{v}{C}{O}\times\mech{v}{G}{O}=\vec{0}$ (usually either $\mech{v}{C}{O}=\vec{0}$ or $\mech{v}{C}{G}=\vec{0}$, special cases are $C=G$ and $C=O$), then:

$$
\mechl{\tau}{B}{C}=\dfrac{d}{dt}\,\mech{L}{B}{C}
$$

A simple corollary is:

$$
\boxed{\text{In an isolated system/body $B$\,, }\;\mechl{L}{B}{C}=\text{ const.}}
$$

---

### Moment of Inertia

Practically speaking, if $\mech{\omega}{G}{O}=\omega_G\,\hat{z}$ and the body $Q$ is symmetric around the $z$-axis, then $\displaystyle \boxed{I_{Q/G}=\qint{\big(x^2_{q/G}+y^2_{q/G}\big)}}\;$, so that:

$$
\boxed{\mechl{L}{Q}{G}=I_{Q/G}\;\omega_G\,\hat{z}}
$$

We saw exactly that result in polar coordinates.

For composite shapes, the moment of inertia is additive:

$$
I_{(Q_1\,\sqcup\,Q_2)/G}=I_{Q_1/G}+I_{Q_2/G}
$$

If we calculate at a point other than $G$, we use the following:

Parallel Axis Theorem: Let $A$ be a point fixed to $Q$ with distance $R$ to the $z$-axis passing through $G$. Then:

$$
I_{Q/A}=I_{Q/G}+mR^2
$$

The calculations and the general case are in the section [Moment of Inertia Tensor](#moment-of-inertia-tensor)

---

### Rotational Energy and Work

$$
K_\text{rot}=\frac{1}{2}\,I_{Q/G}\,\omega^2
$$

$$
W_\text{rot}[\vec{\tau}]_\Gamma=\int_\Gamma \vec{\tau}\,\cdot\,d\vec{\theta}
$$

where $d\vec{\theta}=\vec{\omega}\,dt$

We recover conservation of energy and Work-Energy theorem if we add those terms:

$$
\boxed{H=K_\text{linear}+K_\text{rot}+U}
$$

$$
\boxed{\Delta H=H(B)-H(A)=W_\text{linear}\big[\vec{F}_\text{non-conservative}\big]_{A\to B}+W_\text{rot}\big[\vec{\tau}_\text{non-conservative}\big]_{A\to B}}
$$

---

## Common Physical Systems

---

### In a moving trolley

Say we have a physical system that is in a trolley moving with acceleration $\vec{A}$. Then, we introduce the fictitious force $\vec{F}_\text{fict}=-mA\,\hat{x}$, or let $\vec{g}_\text{eff}=-g\hat{y}-\vec{A}$, the effective gravity.

<blockquote>

**Problem:** We have a box of mass $m$, height $h$ and base $b$, on top of a cart of mass $M$. The box is fixed at its lower-left corner. What is the maximum force I can apply to the cart (towards the right) so that the box does not rotate?

*Solution*: Newton's II: $(\hat{x})\,:\;F=(m+M)\,A$. Hence, we have a moving trolley with $\vec{A}=A\,\hat{x}$. We define $\vec{g}_\text{eff}=-g\hat{y}-A\,\hat{x}$. If we calculate the torque around the lower-left corner $C$, it should give us $\vec{0}$, when there is no rotation. So:

$$
\vec{0}=\vec{\tau}=\vec{r}_{G/C}\times\,m\vec{g}_\text{eff}=m\bigg[A\cdot\dfrac{h}{2}-g\cdot\dfrac{b}{2}\bigg]\,\hat{z}\Rightarrow A=\dfrac{b}{h}\,g
$$

Therefore: $F=\dfrac{b}{h}\,(m+M)\,g$

</blockquote>

---

### Rolling without Slipping

A circular body $Q$ is rolling without iff $v_\text{contact}=0$ tangent to the path. If the body is rotating with angular velocity $\omega$ **counterclockwise** around $G$ and going with velocity $\vec{v}_G$, we get:

$$
\boxed{v_\text{contact}=v_G+\omega\,R=0\text{ tangent to the path}}
$$

By deriving that equation, we get:

$$
a_G=\alpha\,R
$$

The direction of the static friction is opposing the rotation of $\omega$. Example: if it rotates on the floor, the friction is forwards if clockwise, backwards if counterclockwise. If the system rolls without slipping, the friction does no work.

If $I_{G}=\beta\,m\,R^2\Rightarrow K=\frac{1}{2}\,m\,v_G^2+\frac{1}{2}\,I_G\,\omega^2=\frac{1}{2}\,(\beta+1)\,m\,v_G^2$

A system will always try to go into rolling without slipping, which is a stable situation.

<blockquote>

**Problem:** A uniform cylinder of radius $r$ and mass $M$ is R.W.S. along the inside of a hollow cylinder of mass $m$ and radius $R$. At the leftmost point, it is moving down with velocity $v_0$. What is the friction on the small cylinder at the at that point? What is the condition $v_0$ must meet to allow R.W.S if the (static) coefficient of friction is $\mu_s$? Given: $I=\frac{1}{2}\,MR^2$.

*Solution*: The friction is going up and $\omega$ is clockwise.

- Newton's II: $(\hat{y})\;:\;Ma=-Mg+f$
- Newton's II: $(\hat{x})\;:\;M\,\dfrac{v_0^2}{R}=N$
- Torque: $I\alpha=-fR$
- Friction: $f=\mu_s\,N$
- RWS: $a=\alpha\,R$

We get: $f=\dfrac{1}{3}\,Mg$ and $v_0=\sqrt{\dfrac{g\,R}{3\mu_s}}\,$

</blockquote>

<blockquote>

**Problem:** A hoop of radius $R$ and mass $M$ is thrown with an initial angular velocity of $\omega_0$ clockwise and no initial velocity. The floor has kinetic friction coefficient $\mu$. What is the time $T$ until it starts rolling without slipping? What is the work of friction until then? Given: $I=MR^2$

*Solution*: The friction is to the right and $\omega$ is clockwise.

- Newton's II: $(\hat{x})\;:\;Ma=f$
- Newton's II: $(\hat{x})\;:\;0=N-Mg$
- Torque: $-I\alpha=fR$
- Friction: $f=\mu\,N$

We get: $f=\mu\,Mg\Rightarrow v(t)=\mu\,g\,t\,$ and $\omega(t)=\omega_0-\dfrac{\mu\,g}{R}\,t$.

- RWS: $v(T)=\omega(T)\,R\Leftrightarrow T=\dfrac{\omega_0 R}{2\mu g}\,$

We have: $\displaystyle W[f]=\int_0^T\,f\;v_\text{contact}(\tau)\,d\tau=\mu\,Mg\int_0^T\big[v(\tau)-\omega(\tau)\,R\big]\,d\tau=\mu\,Mg\int_0^T\big[2\mu\,g\tau-\omega_0\,R\big]\,d\tau=\mu\,Mg\big[\mu g\,T^2-\omega_0 R\,T\big]=-\dfrac{1}{4}\,MR^2\,\omega_0^2$

This is constitent with Work-Energy Theorem:

$$
M\bigg(\dfrac{\omega_0 R}{2}\bigg)^2-\dfrac{1}{2}\,I\,\omega_0^2=W[f]
$$

</blockquote>

---

### Conservation of Angular Momentum

Let $C$ be some fixed point so that $\mech{v}{C}{O}\times\mech{p}{S}{O}=\vec{0}$. By Conservation of Angular Momentum we get:

$$
\mechl{L}{S}{C}=\mech{r}{A}{C}\times m_A\,\mech{v}{A}{O}+\mech{r}{B}{C}\times m_B\,\mech{v}{B}{O}=\mech{r}{A}{C}\times m_A\,\mech{u}{A}{O}+\mech{r}{A}{C}\times m_B\,\mech{u}{B}{O}
$$

<blockquote>

**Problem:** We have two masses $M$ at $\bigg(\dfrac{\ell}{2},0\bigg)$ and $\bigg(-\dfrac{\ell}{2},0\bigg)$ in the plane connected by a massless rod of length $\ell$. A mass $m$ hits the rightmost mass with speed $(0,u)$ and gets stuck. What is the angular velocity around the center of mass afterwards?

*Solution*: We have the Conservation of Angular Momentum:

$$
I_G\,\omega_G=L^\text{after}_G=L^\text{before}_G=\dfrac{M\ell}{m+2M}\cdot mu
$$

since $\dfrac{M\ell}{m+2M}$ is the distance from the centre of mass to the rightmost mass. We calculate the new moment of inertia:

$$
I_G=(M+m)\,\bigg(\dfrac{M\ell}{m+2M}\bigg)^2+M\bigg(\ell-\dfrac{M\ell}{m+2M}\bigg)^2=\dfrac{M(M+m)\,\ell^2}{m+2M}
$$

Therefore: $\omega=\dfrac{m\,u}{\ell(M+m)}\,$

</blockquote>

<blockquote>

**Problem:** We have a uniform rod of length $\ell$ and mass $M$ standing upright and fixed at the origin by the lower point. A mass $m$ hits the top with speed $(-u,0)$ and gets stuck. What is the velocity of the topmost point after impact? Given: $I_\text{cm\;rod}=\dfrac{1}{12}\,M\,\ell^2$.

*Solution*: Let $O$ be the origin. We have the Conservation of Angular Momentum:

$$
I_O\,\omega_O+m\,\ell\;v_O=L^\text{after}_O=L^\text{before}_O=m\,\ell\;u
$$

since $I_O\,\omega_O$ is the angular momentum of the rod. We calculate the moment of inertia by Parallel Axis Theorem:

$$
I_O=I_G+m\bigg(\dfrac{\ell}{2}\bigg)^2=\dfrac{1}{3}\,M\,\ell^2
$$

Further, we have: $v_O=\omega_O\,\ell\;$.Therefore: $v_O=\dfrac{m\,u}{\frac{1}{3}M+m}\,$

</blockquote>

#### Using Impluse

We can consider angular impulse gained from a single body $B$ for a force applied to a point $A$:

$$
\Delta\mechl{L}{B}{G}=\mech{r}{A}{G}\times\Delta\mech{p}{B}{O}
$$

The key is that we can express $\Delta\mechl{L}{B}{G}$ using the angular velocity

That, with either conservation of energy or rolling without slipping or any other relation, will deliver the last equation to solve for the $\mech{\omega}{G}{O}$ and $\mech{u}{G}{O}$ in the after.

<blockquote>

**Problem (Morin):** A toast (square of length $\ell$) with butter side up is dropped it from a height $H$ above a counter, which itself is a height $h$ above the ground. The toast is oriented 'parallel' to the counter, and as it falls, one edge barely clips the counter (elastically), causing the toast to spin. What value of $H$, in terms of $h$ and $\ell$, yields the unfortunate scenario where the toast makes half of a revolution, landing buttered side down on the floor. Given: $I_G=\beta\,m\,\ell^2$

*Solution*: First, by work-energy theorem, at height $h$:

$$
\frac{1}{2}\,m\,v_G^2=mgH\Rightarrow v_G=\sqrt{2gH}
$$

By Impulse on the toast around the contact point with the counter:

$$
I_G\,\omega_G-0=-\dfrac{\ell}{2}\,m\big(u_G-v_G\big)
$$

By Conservation of Energy:

$$
\frac{1}{2}\,m\,v_G^2=\frac{1}{2}\,m\,u_G^2+\frac{1}{2}\,I_G\,\omega_G^2\Leftrightarrow m\,(u_G^2-v_G^2)=I_G\,\omega_G^2
$$

Putting it together: $\begin{cases}u_G-v_G=-2\beta\,\ell\,\omega_G\\u_G+v_G=\dfrac{\ell}{2}\,\omega_G\end{cases}\Rightarrow\begin{cases}\omega_G=\dfrac{4\,v_G}{\ell(1+4\beta)}\\u_G=\dfrac{1-4\beta}{1+4\beta}\,v_G\end{cases}\,$

We need the time $T$ to obey: $\left\{\begin{aligned}&\omega_G\,T=\pi\\ &h=u_G\,T+\dfrac{1}{2}\,g\,T^2\end{aligned}\right\}\Rightarrow h=\dfrac{\pi\,u_G}{\omega_G}+\dfrac{1}{2}\,g\,\dfrac{\pi^2}{\omega_G^2}=\dfrac{1-4\beta}{4}\;\pi\ell+\dfrac{(1+4\beta)^2\,\pi^2\ell^2}{64\,H}\Rightarrow H=\dfrac{(1+4\beta)^2\,\pi^2\ell^2}{16\big[4h-(1-4\beta)\,\pi\ell\big]}\,$

For a uniform square, $\beta=\dfrac{1}{12}\Rightarrow H=\dfrac{\pi^2\ell^2}{6\big(6h-\pi\ell\big)}\,$

</blockquote>

---

### Changing Mass

$$
\begin{aligned}
  \vec{F}_\text{ext}=m\,\vec{a}-\vec{u}_\text{rel}\,\dfrac{dm}{dt}\\
  \vec{\tau}_\text{ext}=I\,\vec{\alpha}-\vec{\omega}_\text{rel}\,\dfrac{dI}{dt}
\end{aligned}
$$

<blockquote>

**Problem:** A cylinder of radius $R$ is rolling without slipping on a surface with mud. The mud sticks at a rate $\gamma=\dfrac{dm}{dx}$, which is small enough so that the position of the centre of gravity does not change. The initial mass of the cylinder is $M_0$ and the initial moment of inertia around the centre of mass is $I_0$. Find $v(x)$.

*Solution*: We get: $M(x)=M_0+\gamma\,x$ and $I(x)=I_0+\gamma\,x\,R^2\,$. Since the mud is static, $\vec{u}_\text{rel}=-v\,\hat{x}$ and $\vec{\omega}_\text{rel}=-\omega\,\hat{z}\,$

We write the physical laws:

- Newton's II: $(\hat{x})\,:\;Ma+\gamma\,v^2=-f$
- Torque: $(\hat{z})\,:\;I\alpha+\gamma\,R^2\,v\,\omega=-fR$
- RWS: $v=-\omega\,R$ and $a=-\alpha\,R$

We get: $\displaystyle-I\,a-\gamma\,R^2\,v^2=R^2\big(Ma+\gamma\,v^2\big)\Rightarrow a=-\dfrac{2\,\gamma\,R^2}{MR^2+I}\,v^2\Rightarrow \int \dfrac{dv}{v}=-\int\dfrac{2\,\gamma\,R^2\,dx}{MR^2+I}\Rightarrow \dfrac{v}{v_0}\bigg|=\dfrac{M_0\,R^2+I_0}{MR^2+I}\Rightarrow v(x)=v_0\bigg(1+\dfrac{2\gamma\,R^2}{M_0R^2+I_0}\,x\bigg)^{-1}\,$

</blockquote>

---

## Simple Harmonic Oscillator

---

### Second Order Linear ODE

The simple homogeneous equation is:

$$
m\ddot{x}+kx=0
$$

Let $\omega=\sqrt{\dfrac{k}{m}}$, the solution is:

$$
x(t)=C_1\sin(\omega\,t)+C_2\cos(\omega\,t)
$$

To find $C_1$ and $C_2$, we plug in the initial conditions.

With damping, we have the homogeneous equation:

$$
m\ddot{x}+b\dot{x}+kx=0
$$

Let $\omega_0=\sqrt{\dfrac{k}{m}}$ and $\zeta=\dfrac{b}{2\sqrt{mk}}$ so that:

$$
\ddot{x}+2\zeta\,\omega_0\,\dot{x}+\omega_0^2\,x=0
$$

We have three cases of solutions:

- $\zeta< 1:\quad x(t)=e^{-\zeta\,\omega_0\,t}\;\Big[C_1\sin(\sqrt{1-\zeta^2}\;\omega_0\,t)+C_2\cos(\sqrt{1-\zeta^2}\;\omega_0\,t)\Big]$

- $\zeta> 1:\quad x(t)=e^{-\zeta\,\omega_0\,t}\;\Big[C_1\sinh(\sqrt{\zeta^2-1}\;\omega_0\,t)+C_2\cosh(\sqrt{\zeta^2-1}\;\omega_0\,t)\Big]$

- $\zeta=1:\quad x(t)=\big(A+Bt\big)\,e^{-\zeta\,\omega_0\,t}\,$

To find $C_1$ and $C_2$, we plug in the initial conditions.

For the inhomogeneous case, we will only look into two cases:

- Constant Number:

    $$
    m\ddot{x}+b\dot{x}+kx=kx_0
    $$

  Technique: Substitute $u=x-x_0$

  Solution: $x(t)=x_h(t)+x_0$

- Forced Harmonic

    $$
    m\ddot{x}+b\dot{x}+kx=F_0\,\sin(\Omega\,t)
    $$

  Solution: $x(t)=x_h(t)+\dfrac{F_0\,\sin(\Omega\,t+\phi)}{\sqrt{(k-m\Omega^2)^2+b^2\Omega^2}}\;$ where $\phi$ solves $\begin{cases}\cos{\phi}=\dfrac{b\Omega}{\sqrt{(k-m\Omega^2)^2+b^2\Omega^2}}\\\\\sin{\phi}=\dfrac{k-m\Omega^2}{\sqrt{(k-m\Omega^2)^2+b^2\Omega^2}}\\\end{cases}\,$

<blockquote>

**Problem (2006 Exam):** A fixed vertical disc rotates with constant angular velocity $\omega$. Along the disc's diameter, there is a tube which on each of its sides has a fixed spring with stiffness $k$ both of which are connected to the mass $m$. The springs are unconstrained when the mass $m$ is at the centre. There is friction on the tube $f=-\beta\,\vec{v}$. After a long time, so that initial conditions are not significant anymore (and we reached steady-state). Which rotation frequency provides maximal amplitude? What is the maximal amplitude?

![circleforceharmonic](img/circleforcedharmonic.png){:height="200px" width="200px"}

*Solution*: We write the equation in polar for the radial component:

$$
m(\ddot{r}-\omega^2\,r)=-\beta\,\dot{r}-2k\,r-mg\,\sin(\omega\,t)\Rightarrow m\ddot{r}+\beta\,\dot{r}+(2k-m\,\omega^2)\,r=-mg\,\sin(\omega\,t)
$$

After a long time $x_h(t)\to 0$ since there is factor of $\exp\bigg[-\dfrac{\beta}{2m}\,t\bigg]$ times a bounded function. There is only left:

$$
x_p(t)=\dfrac{-mg\,\sin(\omega\,t+\phi)}{\sqrt{(2k-2m\omega^2)^2+\beta^2\omega^2}}\Rightarrow \text{Amplitude}=\dfrac{mg}{\sqrt{(2k-2m\omega^2)^2+\beta^2\omega^2}}
$$

We get max amplitude my minimizing $(2k-2m\omega^2)^2+\beta^2\omega^2=4m^2\,\omega^4+(\beta^2-8mk)\,\omega^2+4k^2$

This gets it's minimal value at $\omega_\text{maximize}=\sqrt{\dfrac{k}{m}-\dfrac{\beta^2}{8m^2}}$ with value $\dfrac{\beta^2(\beta^2-16\,mk)}{4m^2}\,$ so that $A_\text{max}=\dfrac{2m^2g}{\beta\sqrt{\beta^2-16\,mk}}\,$

</blockquote>

---

### Potential Stable Equilibrium

At a local minimum, the potential can be approximated to second-order Taylor Polynomial.

$$
U(x)\simeq U(x_\text{eq})+U'(x_\text{eq})\cdot(x-x_\text{eq})+\frac{1}{2}\,U''(x_\text{eq})\cdot(x-x_\text{eq})^2
$$

But $U'(x_\text{eq})=0$ by definition of minimum, and we can set $U(x_\text{eq})=0$. Therefore:

$$
U(x)\simeq \frac{1}{2}\,U''(x_\text{eq})\cdot(x-x_\text{eq})^2
$$

Plugging into Newton's II: $m\ddot{x}=-\dfrac{\partial U}{\partial x}=U''(x_\text{eq})\cdot(x-x_\text{eq})$. The solution is:

$$
x(t)=x_\text{eq}+C_1\sin(\omega\,t)+C_2\cos(\omega\,t)
$$

where $\omega=\sqrt{\dfrac{U''(x_\text{eq})}{m}}\;$. To find $C_1$ and $C_2$, we plug in the initial conditions.

---

### Hooke's Law

The most common example of simple harmonic motion comes from a spring: $\vec{F}_\text{el}=-k\Delta x\,\hat{x}\;$, where $\Delta x$ is the deformation (change of length) and $k$ is a constant.

<blockquote>

**Problem:** Two blocks are attached by a spring with a coefficient of $k$ and unconstrained length $L$. They go down a slope of angle $\theta$. The block in the top of the ramp has mass $2m$ and initial velocity $v_0$ down the slope and the one in the bottom is stationary and has mass $m$. The spring is initially unconstrained. What are the positions of each block wrt the initial position of the larger mass?

*Solution*: Let the block in the top be called $1$ and the one of the bottom $2$. First, we define the directions $\hat{x}'$ (down the ramp) and $\hat{y}'$ (normal to the ramp). Let $(L-x)\,\hat{x}'=\vec{r}_2-\vec{r}_1=(r_2-r_1)\,\hat{x}'\Rightarrow -\ddot{x}=a_2-a_1$.

- Centre of mass $(\hat{x}')\,:\;\;3m\,a_G=3m\,g\sin{\theta}\,$

So, $a_G=g\sin{\theta}\Rightarrow r_G=\dfrac{2m\,r_1+m\,r_2}{2m+m}=\dfrac{2\,r_1+r_2}{3}=\frac{1}{3}\,L+\frac{2}{3}\,v_0\,t+\frac{1}{2}\,g\sin{\theta}\,t^2$.

By definition, we got: $r_2=(L-x)+r_1\Rightarrow r_G=r_1+\frac{1}{3}(L-x)$. So: $r_1=\frac{1}{3}\,x+\frac{2}{3}\,v_0\,t+\frac{1}{2}\,g\sin{\theta}\,t^2$ and $r_2=L-\frac{2}{3}\,x+\frac{2}{3}\,v_0\,t+\frac{1}{2}\,g\sin{\theta}\,t^2$

Newton's II:

- Block $1\;(\hat{x}')\,:\;\;2m\,a_2=kx+2m\,g\sin{\theta}\,$
- Block $2\;(\hat{x}')\,:\;\;m\,a_1=-kx+m\,g\sin{\theta}\,$

We get: $2m\,\ddot{x}=-3k\,x$ with $x(0)=0$ and $\dot{x}(0)=v_0$. Let $\omega=\sqrt{\dfrac{3k}{2m}}$, we have: $x(t)=\dfrac{v_0}{\omega}\,\sin\big(\omega\,t\big)$

$$
\begin{cases}
  r_1(t)&=\dfrac{v_0}{3\omega}\,\sin\big(\omega\,t\big)+\dfrac{2}{3}\,v_0\,t+\dfrac{1}{2}\,g\sin{\theta}\,t^2\\
  r_2(t)&=L-\dfrac{2v_0}{3\omega}\,\sin\big(\omega\,t\big)+\dfrac{2}{3}\,v_0\,t+\dfrac{1}{2}\,g\sin{\theta}\,t^2
\end{cases}
$$

</blockquote>

---

### Energy and Amplitude

The energy in a simple $m\ddot{x}+k\,x=0$ system is: $H=\frac{1}{2}\,m\,\dot{x}^2+\frac{1}{2}\,k\,x^2$

Let $A=\sqrt{C_1^2+C_2^2}$ on the solution. If we plug it in, we get:

$$
H=\frac{1}{2}\,m\,\dot{x}^2+\frac{1}{2}\,k\,x^2=\frac{1}{2}\,k\,A^2
$$

we call $A$ the amplitude of the oscillation.

Q-Factor: $Q=2\pi\cdot \dfrac{\text{Energy Stored}}{\text{Energy Dissipated Per Cycle}}\simeq \dfrac{1}{2\zeta}=\dfrac{\sqrt{mk}}{b}\,$

---

## Special Relativity

---

### Lorentz Transformations

For an event described by different observers $A$ and $B$ as $\begin{bmatrix}ct_A\\x_A\end{bmatrix}$ and $\begin{bmatrix}ct_B\\x_B\end{bmatrix}$, we transform them by:

$$
\boxed{\Lambda_A^B=\gamma\begin{bmatrix}1&-\beta\\-\beta&1\end{bmatrix}\quad\begin{cases}\beta&=\dfrac{v_{B/A}}{c}\\\gamma&=\dfrac{1}{\sqrt{1-\beta^2}}\end{cases}}
$$

that is, $\begin{bmatrix}ct_B\\x_B\end{bmatrix}=\Lambda_A^B\begin{bmatrix}ct_A\\x_A\end{bmatrix}\,$

Under that, the quantity $s^2=(c\,t_A)^2-x_A^2=(c\,t_B)^2-x_B^2$ is conserved.

---

### Hyperbolic Rotations

We can make the following invertible substitution.

$$
\begin{aligned}
  \beta&=\tanh{\varphi}\Rightarrow \varphi=\frac{1}{2}\ln\bigg[\frac{1+\beta}{1-\beta}\bigg]\\
  \gamma&=\cosh{\varphi}\Rightarrow[\Lambda_A^B]=\begin{bmatrix}\cosh{\varphi}&-\sinh{\varphi}\\-\sinh{\varphi}&\cosh{\varphi}\end{bmatrix}
\end{aligned}
$$

The number $\varphi\in\R$ is called fugacity.

This matrix is usually easier to work with

---

### Addition of Velocities

Say we have three observers, $A$, $B$ (which is moving at constant velocity $v_{B/A}$) and $C$ (which is moving at constant velocity $v_{C/B}$) and we want to find what is $v_{C/A}$. We may simply calculate:

$$
\Lambda_A^C=\Lambda_B^C\;\Lambda_A^B
$$

If we use fugacity, this calculation is simply the addition of hyperbolic angles. So:

$$
\varphi_{C/A}=\varphi_{C/B}+\varphi_{B/A}
$$

by taking $\tanh$ to both sides and multiplying by $c$, we get:

$$
\boxed{v_{C/A}=\cfrac{v_{C/B}+v_{B/A}}{1+\cfrac{v_{C/B}\cdot v_{B/A}}{c^2}}}
$$

where we use the formula for $\tanh$ of [sum of angles](https://en.wikipedia.org/wiki/Hyperbolic_function#Sums_of_arguments). Notice this obeys $v_{C/A}\leq c$ and if $v_{B/A}=c\Rightarrow v_{C/A}=c$.

<blockquote>

**Problem:** Let $v_{A/O}=\dfrac{3}{5}\,c$ and $v_{B/O}=\dfrac{4}{5}\,c$. What is $v_{C/O}$ so that $v_{A/C}=-v_{B/C}$?

*Solution*: Using fugacity: $v_{A/C}=-v_{B/C}\Leftrightarrow \varphi_{A/C}=-\varphi_{B/C}\,$

$$
\Leftrightarrow \varphi_{A/O}-\varphi_{C/O}=\varphi_{C/O}-\varphi_{B/O}\Leftrightarrow \varphi_{C/O}=\dfrac{\varphi_{B/O}+\varphi_{A/O}}{2}
$$

We calculate $\varphi_{B/O}=\ln(3)$ and $\varphi_{A/O}=\ln(2)$ so that $\varphi_{C/O}=\frac{1}{2}\,\ln(6)\Leftrightarrow v_{C/O}=\dfrac{5}{7}\,c$

</blockquote>

---

### Break of Simultaneity

First, notice that since the transformation is linear, we can apply to differences of time and length.

$$
\Lambda_A^B\begin{bmatrix}c\,\Delta t_A\\\Delta x_A\end{bmatrix}=\begin{bmatrix}c\,\Delta t_B\\\Delta x_B\end{bmatrix}
$$

Notice, if $\Delta t_A=0$ but $\Delta x_A\neq 0$, that is, two simultaneous events in two different places. If $\beta\neq 0$, we must have $\Delta t_B\neq 0$, that is, there is a break of simultaneity.

---

### Time Dilation, Length Contraction

Time Dilation is given if we look at:

$$
\Lambda_A^B\begin{bmatrix}ct_A\\v_{B/A}\,t_A\end{bmatrix}=\begin{bmatrix}ct_B\\0\end{bmatrix}
$$

We get: $\boxed{t_A=\gamma\,t_B}$.

Example: A muon $(\mu^{-})$ at rest take a time $t_B$ (in the Earth's reference frame) to decay into an electron $(e^{-})$. However, muons from cosmic rays, travelling close to the speed of light, hit Earth in time bigger than $t_B$. This is because the decay time is in the muon's reference frame, that is $t_A$ is the observed decay time and $t_A=\gamma\,t_B> t_B$.

Length Contraction is given if we look at:

$$
\Lambda_A^B\begin{bmatrix}0\\L_A\end{bmatrix}=\begin{bmatrix}c \Delta t_B\\L_B\end{bmatrix}
$$

We get: $\boxed{L_A=\dfrac{L_B}{\gamma}}$.

---

# Appendix

## Vectors

---

### Dot Product

From linear algebra, we define the dot product $\;\cdot\,:\R^3\times\R^3\to \R$ such that:

- It is a bilinear operation:
  - $(\vec{A}+\vec{B})\,\cdot\,\vec{C}=\vec{A}\,\cdot\,\vec{C}+\vec{B}\,\cdot\,\vec{C}\,$
  - $\vec{A}\,\cdot\,(\vec{B}+\vec{C})=\vec{A}\,\cdot\,\vec{B}+\vec{A}\,\cdot\,\vec{C}\,$
  - $(\alpha\,\vec{A})\,\cdot\,\vec{B}=\vec{A}\,\cdot\,(\alpha\,\vec{B})=\alpha\,(\vec{A}\cdot\vec{B})$

- It is symmetric: $\vec{A}\cdot\vec{B}=\vec{B}\cdot\vec{A}\,$

- $\hat{x}$,$\,\hat{y}$,$\,\hat{z}\,$ are orthonormal:
  - $\hat{x}\cdot\hat{y}=\hat{y}\cdot\hat{z}=\hat{z}\cdot\hat{x}=0$
  - $\hat{x}\cdot\hat{x}=\hat{y}\cdot\hat{y}=\hat{z}\cdot\hat{z}=1$

Notice, we also have $\|\vec{A}\|=\sqrt{\vec{A}\cdot\vec{A}}\;$, the norm (magnitude) of $\vec{A}$.

The formula we get in $\R^3$ is: $\;\vec{A}\cdot\vec{B}=A_x\,B_x+A_y\,B_y+A_z\,B_z$

**Component/Projection** The projection of $\vec{A}$ in the $\vec{u}$ direction is given by:

$$
\operatorname{proj}_{\vec{u}}(\vec{A})=\frac{\vec{A}\cdot \vec{u}}{\|u\|^2}\;\vec{u}=\big(\vec{A}\cdot \hat{u}\big)\,\hat{u}
$$

where $\hat{u}=\dfrac{\vec{u}}{\|u\|}\,$ so that $\|\hat{u}\|=1$. We call the part $\vec{A}\cdot \hat{u}=\dfrac{\vec{A}\cdot \vec{u}}{\|u\|}\,$ simply the component of $\vec{A}$ in the direction of $\vec{u}$. Notice: $A_x=\vec{A}\cdot\hat{x}\,$

We usually call $\vec{A}-\operatorname{proj}_{\vec{u}}(\vec{A})$ the *rejection* of $A$ in the direction of $\vec{u}$, because it is the complement of projection and perpendicular to it. *Calculation*: $\big(\vec{A}-\operatorname{proj}_{\vec{u}}(\vec{A})\big)\,\cdot\,\hat{u}=\vec{A}\cdot \hat{u}-\big(\vec{A}\cdot \hat{u}\big)\,\underbrace{\hat{u}\cdot\hat{u}}_{1}=0\;$.

---

### Cross Product

From linear algebra, we define the cross product $\;\times\,:\R^3\times\R^3\to \R^3$ such that:

- It is a bilinear operation:
  - $(\vec{A}+\vec{B})\times\vec{C}=\vec{A}\times\vec{C}+\vec{B}\times\vec{C}\,$
  - $\vec{A}\times(\vec{B}+\vec{C})=\vec{A}\times\vec{B}+\vec{A}\times\vec{C}\,$
  - $(\alpha\,\vec{A})\times\vec{B}=\vec{A}\times(\alpha\,\vec{B})=\alpha\,(\vec{A}\times\vec{B})$

- It is antisymmetric: $\vec{A}\times\vec{B}=-\vec{B}\times\vec{A}\,$

- $\hat{x}$,$\,\hat{y}$,$\,\hat{z}\,$ are right-handed:
  - $\hat{x}\times\hat{y}=\hat{z}\,$
  - $\hat{y}\times\hat{z}=\hat{x}\,$
  - $\hat{z}\times\hat{x}=\hat{y}\,$

Notice, we also have $\vec{A}\times\vec{A}=\vec{0}\;$.

The formula we get in $\R^3$ is: $\;\vec{A}\times\vec{B}=\begin{vmatrix}\hat{x}&\hat{y}&\hat{z}\\A_x&A_y&A_z\\B_x&B_y&B_z\end{vmatrix}\,$

**Note:** The product rule for differentiation also applies the dot and cross products (if you maintain the order).

---

## Angular Velocity

Let $\vec{\omega}=\dot{\theta}\,\hat{z}\,$. Since $(\hat{r},\hat{\theta},\hat{z})$ is also an orthogonal coordinate system, we have:

$$
\begin{aligned}
  \vec{\omega}\times\hat{r}=\dot{\theta}\,\hat{\theta}=\frac{d}{dt}\,\hat{r}\\
  \vec{\omega}\times\hat{\theta}=-\dot{\theta}\,\hat{r}=\frac{d}{dt}\,\hat{\theta}\\
\end{aligned}
$$

So, we can express the product rule terms as follows:

$$
\begin{aligned}
  \frac{d\vec{q}}{dt}&=\dot{q}_r(t)\,\hat{r}+q_r(t)\cdot\dot{\theta}(t)\,\hat{\theta}+\dot{q}_\theta(t)\,\hat{\theta}-q_\theta(t)\cdot\dot{\theta}(t)\,\hat{r}\\
  &=\dot{q}_r(t)\,\hat{r}+\dot{q}_\theta(t)\,\hat{\theta}+\vec{\omega}\times\vec{q}
\end{aligned}
$$

If we think of $\dot{q}_r(t)\,\hat{r}+\dot{q}_\theta(t)\,\hat{\theta}$ as the "naive" derivative. Also, if we percieve ourselves attached to the rotating vectors $\hat{r}$ and $\hat{\theta}$, we would no longer be in an inertial frame, but we can think of that as the derivative **in** the rotating frame. We denote $\bigg(\dfrac{d\vec{q}}{dt}\bigg)_\text{rot}\;$:

$$
\boxed{\frac{d\vec{q}}{dt}=\bigg(\frac{d\vec{q}}{dt}\bigg)_\text{rot}+\vec{\omega}\times\vec{q}}
$$

Further, we can write:

$$
\boxed{
\begin{aligned}
  \mech{v}{B}{O}&=\mech{v}{A}{O}+\mech{v}{B}{A}+\mech{\omega}{A}{O}\times\mech{r}{B}{A}\\
  \mech{a}{B}{O}&=\mech{a}{A}{O}+\mech{a}{B}{A}+\mech{\omega}{A}{O}\times(\mech{\omega}{A}{O}\times\mech{r}{B}{A})+2\;\mech{\omega}{A}{O}\times\mech{v}{B}{A}+\mech{\alpha}{A}{O}\times\mech{r}{B}{A}
\end{aligned}
}
$$

where $\mech{\alpha}{A}{O}=\dfrac{d}{dt}\,\mech{\omega}{A}{O}\,$ and:

$$
\begin{aligned}
  \mech{v}{B}{A}&=\bigg(\frac{d}{dt}\,\mech{r}{B}{A}\bigg)_\text{rot}\\
  \mech{a}{B}{A}&=\bigg(\frac{d}{dt}\,\mech{v}{B}{A}\bigg)_\text{rot}\\
\end{aligned}
$$

---

### Collisions

#### Conservation Linear Momentum

Let $A$ and $B$ be two bodies that are colliding. We denote by $v$ the velocities before and by $u$ the velocities after. By Conservation of Momentum we get:

$$
\mech{p}{S}{O}=(m_A+m_B)\,\mech{v}{G}{O}=m_A\,\mech{v}{A}{O}+m_B\,\mech{v}{B}{O}=m_A\,\mech{u}{A}{O}+m_B\,\mech{u}{B}{O}=(m_A+m_B)\,\mech{u}{G}{O}
$$

When we calculate the energy using the centre of mass:

$$
K=\dfrac{1}{2}\,m_A\,\|\mech{v}{A}{O}\|^2+\dfrac{1}{2}\,m_B\,\|\mech{v}{B}{O}\|^2=\dfrac{1}{2}\,(m_A+m_B)\,\|\mech{v}{G}{O}\|^2+\dfrac{1}{2}\,\dfrac{m_A\,m_B}{m_A+m_B}\,\|\mech{v}{B}{A}\|^2
$$

We get two common situations:

- Elastic Collision: Energy is conserved
- Plastic Collision: $\mech{u}{B}{A}=\vec{0}\,$

<blockquote>

**Problem:** A rocket of mass $M+m$ is travelling in space with velocity $v$ to the right. Then, it shoots the back part of mass $m$ to the left with velocity $u$, relative to the rocket. What is the velocity of the rocket afterwards?

*Solution*: An ejection of mass it the same as a collision in reverse. We get:

$$
(M+m)\,v=m\,(v-u)+M\,v^*\Rightarrow v^*=v+\dfrac{m}{M}\,u
$$

</blockquote>

#### 1D Case

In one-dimension, we define the coefficient of restitution as $\mech{u}{B}{A}=-e\,\mech{v}{B}{A}\,$

We get:

- Elastic Collisions, $e=1$
- Plastic Collisions, $e=0$

$$
\boxed{\begin{cases}
  \mech{u}{A}{O}&=(1+e)\,\mech{v}{G}{O}-e\,\mech{v}{A}{O}\\
  \mech{u}{B}{O}&=(1+e)\,\mech{v}{G}{O}-e\,\mech{v}{B}{O}\\
\end{cases}}
$$

---

## Line Integrals and Gradient Theorem

A curve $\Gamma$ is a 1-dimensional subset of $\mathbb{R}^n$. A parametrization is function $\vec{\gamma}:[a,b]\to\mathbb{R}^3$ such that the image $\vec{\gamma}[a,b]=\Gamma$. Given a vector field $\vec{F}$, the line integral of $\vec{F}$ along $\Gamma$ is:

$$
\int_\Gamma\,\vec{F}(\vec{r})\cdot d\vec{r}=\int_a^b\,\vec{F}\big(\,\vec{\gamma}(\lambda)\,\big)\cdot\vec{\gamma}'(\lambda)\,d\lambda
$$

since $\vec{\gamma}'(\lambda)=\dfrac{d\vec{r}}{d\lambda}\,$. The vector $d\vec{r}$ is tangent to the curve.

<blockquote>

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

</blockquote>
<blockquote>

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

</blockquote>

In other coordinate systems, the curve may be very simple to describe. To change coordinates, we write:

$$
d\vec{r}=dx\,\hat{x}+dy\,\hat{y}+dz\,\hat{z}=dr\,\hat{r}+r\,d\theta\,\hat{\theta}+dz\,\hat{z}
$$

<blockquote>

**Example:** Integrate $\vec{F}=\dfrac{k}{r^2}\,\hat{\theta}\,$ around the circle $S^1$ of radius $1$ centered at the origin (starting from $(1,0)$).

There is no change in $r$, so $d\vec{r}=r\,d\theta\,\hat{\theta}\,$

$$
\oint_{S^1}\vec{F}\cdot d\vec{r}=\int_0^{2\pi}\dfrac{k}{r^2}\,r\bigg|_{r=R}\,\overbrace{\hat{\theta}\cdot\hat{\theta}}^{1}\,d\theta=\frac{2\pi k}{R}
$$

</blockquote>

Let the curve $\Gamma$ go from point $A$ to point $B$. Then:

$$
\int_\Gamma \nabla\phi\,\cdot d\vec{r}=\phi(B)-\phi(A)
$$

_Proof_: Let $\vec{\gamma}(\lambda)$ be a parametrization of $\Gamma$ with $\vec{\gamma}(a)=A$ and $\vec{\gamma}(b)=B$. Notice: $\dfrac{d}{d\lambda}\Big[\phi\big(\,\vec{\gamma}(\lambda)\,\big)\Big]=\nabla\phi\big(\,\vec{\gamma}(\lambda)\,\big)\cdot \vec{\gamma}'(\lambda)$, therefore:

$$
\int_\Gamma \nabla\phi\,\cdot d\vec{r}=\int_a^b\nabla\phi\big(\,\vec{\gamma}(\lambda)\,\big)\cdot \vec{\gamma}'(\lambda)\,d\lambda=\phi\big(\,\vec{\gamma}(\lambda)\,\big)\Big|_a^b=\phi\big(\,\vec{\gamma}(b)\,\big)-\phi\big(\,\vec{\gamma}(a)\,\big)=\phi(B)-\phi(A)
$$

we can also think $\nabla\phi\,\cdot d\vec{r}=d\phi\;$, a perfect differential. $\;\Box$

---

## Geometry of Torque

Simply put, $\vec{\tau}=\vec{r}\times\vec{F}$, we can calculate this as follows: Let $\vec{r}^\perp=\vec{r}-\operatorname{proj}_{\vec{F}}(\vec{r})$, the rejection. This is called the moment arm. You can think as drawing the line of action of the force (the line that supports the vector) and get the perpendicular distance.

$$
\begin{matrix}
  \qquad\quad\; A\\
  \quad{}^{\displaystyle \vec{r}}\nearrow\quad\,\Big\uparrow \,\vec{F}\\
  B\,\xrightarrow{\displaystyle \vec{r}^\perp}\;\bullet
\end{matrix}
$$

That way, it is easier to calculate the torque since $\|\vec{\tau}\|=\|\vec{r}^\perp\|\cdot\|\vec{F}\|$

---

## Formulas for Rotation

For any system/body $B$:

$$
\mechl{L}{B}{C}=\mechl{L}{B}{G}+\mech{r}{G}{C}\times\mech{p}{B}{O}\,
$$

*Proof*:

- For a system: $\displaystyle\mechl{L}{B}{C}=\sum_i\,m_i\,\mech{r}{i}{C}\times\mech{v}{i}{O}=\sum_i\,m_i\,\big(\mech{r}{i}{G}+\mech{r}{G}{C}\big)\times\mech{v}{i}{O}=\sum_i\,m_i\,\mech{r}{i}{G}\times\mech{v}{i}{O}+\mech{r}{G}{C}\times\sum_i\,m_i\,\mech{v}{i}{O}=\mechl{L}{B}{G}+\mech{r}{G}{C}\times\mech{p}{B}{O}\;$

- For a body: $\displaystyle\mechl{L}{B}{C}=\qint{\,\mech{r}{q}{C}\times\mech{v}{q}{O}}=\qint{\,\big(\mech{r}{q}{G}+\mech{r}{G}{C}\big)\times\mech{v}{q}{O}}=\qint{\,\mech{r}{q}{G}\times\mech{v}{q}{O}}+\mech{r}{G}{C}\times\qint{\mech{v}{q}{O}}=\mechl{L}{B}{G}+\mech{r}{G}{C}\times\mech{p}{B}{O}\;$

$\Box$

For any system/body $B$:

$$
\mechl{\tau}{B}{C}=\bigg[\dfrac{d}{dt}\,\mechl{L}{B}{C}\bigg]+\mech{v}{C}{O}\times\mech{p}{B}{O}\,
$$

*Proof*:

- For a system: $\displaystyle\dfrac{d}{dt}\,\mechl{L}{B}{C}=\dfrac{d}{dt}\,\sum_i\,m_i\,\overbrace{\mech{r}{i}{C}}^{\mech{r}{i}{O}-\mech{r}{C}{O}}\times\mech{v}{i}{O}=\sum_i\,m_i\,\big(\mech{v}{i}{O}-\mech{v}{C}{O}\big)\times\mech{v}{i}{O}+\sum_i\,m_i\,\mech{r}{i}{C}\times\mech{a}{i}{O}=-\mech{v}{C}{O}\times\underbrace{\sum_i\,m_i\,\mech{v}{i}{O}}_{\mech{p}{B}{O}}+\mechl{\tau}{B}{C}\;$

- For a body: $\displaystyle\dfrac{d}{dt}\mechl{L}{B}{C}=\dfrac{d}{dt}\qint{\,\overbrace{\mech{r}{q}{C}}^{\mech{r}{q}{O}-\mech{r}{C}{O}}\times\mech{v}{q}{O}}=\qint{\,\big(\mech{v}{q}{O}-\mech{v}{C}{O}\big)\times\mech{v}{q}{O}}+\qint{\,\mech{r}{q}{C}\times\mech{a}{q}{O}}=-\mech{v}{C}{O}\times\underbrace{\qint{\,\mech{v}{q}{O}}}_{\mech{p}{B}{O}}+\mechl{\tau}{B}{C}\;$

$\Box$

---

## Forced Harmonic Motion

$$
m\ddot{x}+b\dot{x}+kx=F_0\,\sin(\Omega\,t)
$$

We rewrite as: $m\ddot{z}+b\dot{z}+kz=F_0\,\exp(i\Omega\,t)$ with $x(t)=\operatorname{Im}\big\{z(t)\big\}\,$

We try $z_p(t)=A\,F_0\,\exp(i\Omega\,t)\Rightarrow F_0\,\exp(i\Omega\,t)=m\ddot{z}_p+b\dot{z}_p+kz_p=\chi(i\Omega)\,A\,F_0\,\exp(i\Omega\,t)$

$$
\Rightarrow A=\dfrac{1}{\chi(i\Omega)}\,=\dfrac{1}{|\chi(i\Omega)|}\;\exp(i\phi)\,\Rightarrow z_p(t)=\dfrac{F_0}{|\chi(i\Omega)|}\;\exp\big[i(\Omega t+\phi)\big]\Rightarrow \boxed{x(t)=\dfrac{F_0\,\sin(\Omega t+\phi)}{|\chi(i\Omega)|}}
$$

$\phi=\arg\bigg(\dfrac{1}{|\chi(i\Omega)|}\bigg)=-\arg\big(\,\chi(i\Omega)\,\big)$

We can also solve using real solutions. Try $x_p(t)=F_0\,\Big[C_1\sin(\Omega\,t)+C_2\cos(\Omega\,t)\Big]$ and plug it in to match the coefficients and solve to get: $\begin{cases}C_1=\dfrac{b\Omega}{(k-m\Omega^2)^2+b^2\Omega^2}\\\\C_2=\dfrac{k-m\Omega^2}{(k-m\Omega^2)^2+b^2\Omega^2}\\\end{cases}\,$

We write:

$$
C_1\sin(\Omega\,t)+C_2\cos(\Omega\,t)=\sqrt{C_1^2+C_2^2}\,\big[\sin(\Omega\,t)\cos{\phi}+\cos(\Omega\,t)\sin{\phi}\big]=\sqrt{C_1^2+C_2^2}\sin(\Omega\,t+\phi)
$$

where $\phi$ solves $\begin{cases}\cos{\phi}=\dfrac{C_1}{\sqrt{C_1^2+C_2^2}}\\\\\sin{\phi}=\dfrac{C_2}{\sqrt{C_1^2+C_2^2}}\\\end{cases}\,$

---

# Extra Credits

## Frenet-Serret Frame

If we have a curve $\Gamma$ in space and a parametrization $\vec{\gamma}:\R\to\Gamma$, we can calculate the arc length of the path as:

$$
s(t)=\int_0^t\|\gamma'(\tau)\|\,d\tau
$$

notice $s'(t)=\|\vec{\gamma}'(t)\|$

The tangent vector is defined as: $\hat{T}=\dfrac{\vec{\gamma}'}{\|\vec{\gamma}'\|}=\dfrac{\vec{\gamma}'(t)}{s'(t)}\;$. Further,since $\|\hat{T}\|=1\Rightarrow \dfrac{d\hat{T}}{dt}\cdot\hat{T}=0$

We calculate:

$$
\frac{d\hat{T}}{dt}=\frac{\vec{\gamma}''\,s'-\vec{\gamma}'\;s''}{(s')^2}
$$

Let $\rho(t)=s'(t)\,\bigg\|\dfrac{d\hat{T}}{dt}\bigg\|^{-1}\,$ the curvature: we get:

$$
\vec{\gamma}''(t)=s''(t)\,\hat{T}+\frac{s'(t)^2}{\rho(t)}\,\hat{N}
$$

Further, we can calculate the radius of curvature by $\rho(t)=\dfrac{s'(t)^3}{\|\vec{\gamma}''(t)\times\vec{\gamma}'(t)\|}$

## Moment of Inertia Tensor

Let $G$ be the centre of mass of a rigid body $Q$. For any point $q\in Q$, we have: $\mech{v}{q}{O}=\mech{v}{G}{O}+\mech{\omega}{G}{O}\times\mech{r}{q}{G}$. Then:

$$
\begin{aligned}
  \mechl{L}{Q}{G}&=\qint{\,\mech{r}{q}{G}\times\mech{v}{q}{O}}=\qint{\bigg[\mech{r}{q}{G}\times\mech{v}{G}{O}+\mech{r}{q}{G}\times\Big(\mech{\omega}{G}{O}\times\mech{r}{q}{G}\Big)\bigg]}\\
  &=\cancel{\bigg(\qint{\mech{r}{q}{G}}\bigg)}\times\mech{v}{G}{O}+\qint{\mech{r}{q}{G}\times\Big(\mech{\omega}{G}{O}\times\mech{r}{q}{G}\Big)}\\
  &=\qint{\mech{r}{q}{G}\times\Big(\mech{\omega}{G}{O}\times\mech{r}{q}{G}\Big)}=\qint{\mech{r}{q}{G}\times\Big(\mech{r}{q}{G}\times\mech{\omega}{G}{O}\Big)}
\end{aligned}
$$

Let:$\big[\,\vec{r}\,\big]=\begin{bmatrix}0&-z&y\\z&0&-x\\-y&x&0\end{bmatrix}\,$, so that:

$$
\mechl{L}{Q}{G}=\bigg(-\qint{\big[\,\mech{r}{q}{G}\,\big]^2}\bigg)\;\mech{\omega}{G}{O}=\mechm{I}{Q}{G}\;\mech{\omega}{G}{O}
$$

Where we defined the inertia matrix/tensor as:

$$
\mechm{I}{Q}{G}=-\qint{\big[\,\mech{r}{q}{G}\,\big]^2}=\qint{\begin{bmatrix}
  y^2_{q/G}+z^2_{q/G}&-x_{q/G}\cdot y_{q/G}&-x_{q/G}\cdot z_{q/G}\\
  -x_{q/G}\cdot y_{q/G}&x^2_{q/G}+z^2_{q/G}&-y_{q/G}\cdot z_{q/G}\\
  -x_{q/G}\cdot z_{q/G}&-y_{q/G}\cdot z_{q/G}&x^2_{q/G}+y^2_{q/G}
\end{bmatrix}}
$$

### Parallel Axis Theorem

For a point $A$, fixed to $Q$:

$$
\mechm{I}{Q}{A}=\mechm{I}{Q}{G}-m_Q\big[\,\mech{r}{G}{A}\,\big]^2
$$

In coordinates: $\mech{r}{G}{A}=(x,y,z)$
$$
\mechm{I}{Q}{A}_{ij}=\mechm{I}{Q}{G}_{ij}+m_Q\begin{bmatrix}
  y^2+z^2&-xy&-xz\\
  -xy&x^2+z^2&-yz\\
  -xz&-yz&x^2+y^2
\end{bmatrix}
$$

Using that fact that $\displaystyle\qint{\big[\,\mech{r}{q}{G}\,\big]}=[0]$, since $\displaystyle\qint{\mech{r}{q}{G}}=\underline{0}$ and both $[\;\cdot\;]:\mathbb{R}^3\to\mathfrak{so}(3)$ and the integral are linear maps, we have:

$$
  \begin{aligned}
  \mechm{I}{Q}{A}&=-\qint{\big[\,\mech{r}{q}{A}\,\big]^2}=-\qint{\bigg(\big[\,\mech{r}{q}{G}\,\big]+\big[\,\mech{r}{G}{A}\,\big]\bigg)^2}\\
  &=-\qint{\bigg(\big[\,\mech{r}{q}{G}\,\big]^2+\big[\,\mech{r}{q}{G}\,\big]\big[\,\mech{r}{G}{A}\,\big]+\big[\,\mech{r}{G}{A}\,\big]\big[\,\mech{r}{q}{G}\,\big]+\big[\,\mech{r}{G}{A}\,\big]^2\bigg)}\\
  &=\mechm{I}{Q}{G}-\qint{\bigg(\cancel{\big[\,\mech{r}{q}{G}\,\big]}\big[\,\mech{r}{G}{A}\,\big]+\big[\,\mech{r}{G}{A}\,\big]\cancel{\big[\,\mech{r}{q}{G}\,\big]}\bigg)}-m_Q\big[\,\mech{r}{G}{A}\,\big]^2\\
  &=\mechm{I}{Q}{G}-m_Q\big[\,\mech{r}{G}{A}\,\big]^2
  \end{aligned}
$$

### Principal Axes

As we've seen, the moment of inertia matrix is symmetric. Therefore, there is an orthogonal basis $\Pi_Q$ for $\R^3$ such that $\mechm{I}{Q}{G}$ is diagonal. Then, $\Pi_Q$ are called the principal axes of $Q$ and every vector there is called a principal axis.

They can be found by symmetry considerations:

- If a body has an axis of symmetry, that axis is a principal axis.
- If a body has a plane of symmetry, the normal is a principal axis.
- If a body has two orthogonal planes of symmetry, their intersection is a principal axis.

**Example:** Find the principal axes of a box with sides $2a$,$2a$, and $2b$.

Put the vertices in $\big\{(a,a,b)$, $(-a,a,b)$, $(a,-a,b)$, $(-a,-a,b)$, $(a,a,-b)$, $(-a,a,-b)$, $(a,-a,-b)$, $(-a,-a,-b)\big\}\;$. Then, the planes $x=0$ and $y=0$ are orthogonal planes of symmetry, so their intersection (the $z$-axis) is a principal axis. Further the $x$-axis and the $y$-axis are orthogonal to the planes $x=0$ and $y=0$, respectively. So, they are also principal axes. In conclusion. the axes $x$, $y$ and $z$ are principal axes of the box.

## Derivations on Relativity

### Conservation of the Minkowski Metric

In Einstein's Moving Clocks,

$$
\begin{matrix}
  \qquad\quad\;\bullet\\
  {}^{\displaystyle c\,t_A}\nearrow\quad\Big\uparrow \,s\\
  \bullet\,\xrightarrow{\displaystyle x_A}\;\bullet
\end{matrix}
$$

We get the invariant:

$$
s^2=(c\,t_A)^2-x_A^2
$$

called the Minkowski interval.

From that, we define the following function: $\eta(x,y)=x^2-y^2$, so that $\eta\,\big(ct_A,x_A\big)=(c\,t_A)^2-x_A^2=s^2$, the interval.

It can be represented by a symmetric matrix:

$$
[\eta]=\begin{bmatrix}
  1&0\\0&-1
\end{bmatrix}
$$

so that: $\eta\,\big(ct_A,x_A\big)=\begin{bmatrix}ct_A&x_A\end{bmatrix}\begin{bmatrix}1&0\\0&-1\end{bmatrix}\begin{bmatrix}ct_A\\x_A\end{bmatrix}\,$

### Lorentzian Transformations

We are looking for a linear transformation $\Lambda_A^B: X_A(M)\to X_B(M)$ that conserves the Minkowski interval.

We require:

- (Lightcone Invariance) Both $\begin{bmatrix}ct_A\\c\,t_A\end{bmatrix}$ and $\begin{bmatrix}ct_A\\-c\,t_A\end{bmatrix}$ are eigenvectors of $\Lambda_A^B\,$

- (Conservation of Interval) $\quad\eta\circ \Lambda_A^B=\eta$

- (Constant velocity: $x_{B/A}=v_{B/A}\,t_A$) $\quad\displaystyle \Lambda_A^B\begin{bmatrix}ct_A\\v_{B/A}\,t_A\end{bmatrix}=\begin{bmatrix}ct_B\\0\end{bmatrix}\,$

The first condition is equivalent to $\begin{bmatrix}1\\1\end{bmatrix}$ and $\begin{bmatrix}1\\-1\end{bmatrix}$ being eigenvectors, by linearity. It is a simple exercise that we need:

$$
[\Lambda_A^B]=\begin{bmatrix}p&q\\q&p\end{bmatrix}\;,\;p,q\in\R
$$

For that to preserve the metric, we need: $[\Lambda_A^B]^T\,[\eta]\,[\Lambda_A^B]=[\eta]\Leftrightarrow \begin{bmatrix}1&0\\0&-1\end{bmatrix}=\begin{bmatrix}p&q\\q&p\end{bmatrix}\begin{bmatrix}1&0\\0&-1\end{bmatrix}\begin{bmatrix}p&q\\q&p\end{bmatrix}=\begin{bmatrix}p&q\\q&p\end{bmatrix}\begin{bmatrix}p&q\\-q&-p\end{bmatrix}=\begin{bmatrix}p^2-q^2&0\\0&q^2-p^2\end{bmatrix}\,\Leftrightarrow p^2-q^2=1$

Plugging in the constant velocity equation:

$$
\begin{bmatrix}ct_B\\0\end{bmatrix}=\Lambda_A^B\begin{bmatrix}ct_A\\v_{B/A}\,t_A\end{bmatrix}=\begin{bmatrix}pc+q\,v_{B/A}\\qc+p\,v_{B/A}\end{bmatrix}\,t_A
$$

since $t_A,t_B >0$, we get: $qc+p\,v_{B/A}=0\Rightarrow q=-\beta\,p$ where $\beta=\dfrac{v_{B/A}}{c}\,$. Going to $p^2-q^2=1$ and the first-component of the above equation, we get:

$$
\begin{aligned}
  p^2=\frac{1}{1-\beta^2}\\
  c\,t_B=(1-\beta^2)\,p\,t_A
\end{aligned}
$$

Since $1-\beta^2>0$, otherwise there would be no solution the first equation, and $t_A,t_B >0$, we must have $p>0$. So, let

$$
\gamma=\frac{1}{\sqrt{1-\beta^2}}
$$

We have:

$$
\boxed{[\Lambda_A^B]=\gamma\begin{bmatrix}1&-\beta\\-\beta&1\end{bmatrix}\quad\begin{cases}\beta&=\dfrac{v_{B/A}}{c}\\\gamma&=\dfrac{1}{\sqrt{1-\beta^2}}\end{cases}}
$$

also, notice $\beta\leq 1$ and $\gamma\geq 1$.

Moreover: $[\Lambda^B_A]^{-1}=[\Lambda^A_B]=\gamma\begin{bmatrix}1&\beta\\\beta&1\end{bmatrix}\,$, which is just $v_{B/A}=-v_{A/B}$.
