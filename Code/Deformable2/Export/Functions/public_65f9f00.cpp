#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9e00);
CLANG_FORWARD_PROC_SYMBOL(public_65f9ed0);
CLANG_FORWARD_PROC_SYMBOL(public_65f9f00);

#define public_65f9f59 _public_65f9f59
#define public_65f9f60 _public_65f9f60
#define public_65f9fa0 _public_65f9fa0
#define public_65f9fd0 _public_65f9fd0
#define public_65fa012 _public_65fa012
#define public_65fa050 _public_65fa050
#define public_65fa076 _public_65fa076
#define public_65fa086 _public_65fa086
#define public_65fa0b0 _public_65fa0b0
#define public_65fa0d8 _public_65fa0d8
#define public_65fa0f3 _public_65fa0f3
#define public_65fa103 _public_65fa103
#define public_65fa11a _public_65fa11a
#define public_65fa11c _public_65fa11c
#define public_65fa181 _public_65fa181
#define public_65fa1b0 _public_65fa1b0
#define public_65fa1f0 _public_65fa1f0
#define public_65fa220 _public_65fa220
#define public_65fa232 _public_65fa232
#define public_65fa250 _public_65fa250
#define public_65fa264 _public_65fa264
#define public_65fa274 _public_65fa274
#define public_65fa280 _public_65fa280
#define public_65fa29a _public_65fa29a
#define public_65fa2b2 _public_65fa2b2
#define public_65fa2c0 _public_65fa2c0
#define public_65fa2d7 _public_65fa2d7
#define public_65fa2d9 _public_65fa2d9
#define public_65fa314 _public_65fa314
#define public_65fa33c _public_65fa33c
#define public_65fa340 _public_65fa340
#define public_65fa373 _public_65fa373
#define public_65fa3d0 _public_65fa3d0
#define public_65fa3ea _public_65fa3ea
#define public_65fa400 _public_65fa400
#define public_65fa430 _public_65fa430
#define public_65fa440 _public_65fa440
#define public_65fa460 _public_65fa460
#define public_65fa47b _public_65fa47b
#define public_65fa494 _public_65fa494
#define public_65fa4b6 _public_65fa4b6
#define public_65fa4d3 _public_65fa4d3
#define public_65fa50c _public_65fa50c
#define public_65fa529 _public_65fa529
#define public_65fa560 _public_65fa560
#define public_65fa587 _public_65fa587
#define public_65fa59b _public_65fa59b
#define public_65fa5d5 _public_65fa5d5
#define public_65fa603 _public_65fa603
#define public_65fa61a _public_65fa61a
#define public_65fa640 _public_65fa640
#define public_65fa65d _public_65fa65d
#define public_65fa674 _public_65fa674
#define public_65fa682 _public_65fa682
#define public_65fa69b _public_65fa69b
#define public_65fa6b0 _public_65fa6b0
#define public_65fa6c4 _public_65fa6c4
#define public_65fa6f6 _public_65fa6f6
#define public_65fa707 _public_65fa707
#define public_65fa720 _public_65fa720
#define public_65fa730 _public_65fa730
#define public_65fa77a _public_65fa77a
#define public_65fa789 _public_65fa789
#define public_65fa7c0 _public_65fa7c0
#define public_65fa852 _public_65fa852
#define public_65fa883 _public_65fa883
#define public_65fa89b _public_65fa89b
#define public_65fa89f _public_65fa89f
#define public_65fa8ac _public_65fa8ac
#define public_65fa8ae _public_65fa8ae
#define public_65fa943 _public_65fa943
#define public_65fa9e0 _public_65fa9e0
#define public_65faaa0 _public_65faaa0
#define public_65faad3 _public_65faad3
#define public_65fab0e _public_65fab0e
#define public_65fab10 _public_65fab10
#define public_65fab60 _public_65fab60
#define public_65fab95 _public_65fab95
#define public_65fabb4 _public_65fabb4
#define public_65fabdf _public_65fabdf
#define public_65fac10 _public_65fac10
#define public_65fac25 _public_65fac25
#define public_65fac30 _public_65fac30
#define public_65fac3c _public_65fac3c

PROC_DECLARE(0x65f9f00, internal_65f9f00, public_65f9f00);
extern "C" NAKED register_t __cdecl internal_65f9f00()
{
    __asm
    {
        sub esp, 0x74
        fld dword ptr ds : [public_6601318]
        mov edx, dword ptr ss : [esp+0x78]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x244]
        push edi
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x10], 0
        jle public_65fa33c
        mov ecx, dword ptr ss : [esp+0x8C]
        mov eax, 0x34
        sub eax, edx
        lea ebx, ss:[esp+0x54]
        sub ecx, ebx
        mov dword ptr ss : [esp+0x2C], edi
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x24], ecx
        jmp public_65f9f60
        public_65f9f59 : nop
        mov eax, dword ptr ss : [esp+0x3C]
        lea ecx, ds:[ecx]
        public_65f9f60 : nop
        fmul dword ptr ss : [esp+0x10]
        add eax, edx
        mov dword ptr ss : [esp+0x38], eax
        lea eax, ss:[esp+edi*4+0x54]
        fstp dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [esi+0x240]
        fld dword ptr ds : [public_6601318]
        cmp edi, eax
        fld dword ptr ds : [public_6601318]
        lea ebx, ds:[edi+1]
        mov dword ptr ss : [esp+0x10], 0
        jge public_65fa11a
        mov ecx, edx
        sub eax, edi
        lea ecx, ds:[ecx]
        public_65f9fa0 : nop
        fld dword ptr ds : [ecx]
        add ecx, 0x30
        dec eax
        fabs 
        faddp st(2), st
        jne public_65f9fa0
        fld st(1)
        fcomp dword ptr ds : [public_6601318]
        fnstsw ax
        test ah, 0x44
        jnp public_65fa11a
        fld dword ptr ds : [public_66011e0]
        mov ecx, edi
        fdiv st, st(2)
        mov eax, edx
        nop 
        lea esp, ss:[esp]
        public_65f9fd0 : nop
        fld st(0)
        inc ecx
        fmul dword ptr ds : [eax]
        add eax, 0x30
        fld st(0)
        fxch 
        fstp dword ptr ds : [eax-0x30]
        mov ebp, dword ptr ds : [esi+0x240]
        cmp ecx, ebp
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fstp st(0)
        jl public_65f9fd0
        mov eax, dword ptr ds : [edx]
        fstp st(0)
        mov dword ptr ss : [esp+0x14], eax
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_6601398]
        fld st(0)
        fsqrt 
        fnstsw ax
        fabs 
        test ah, 1
        je public_65fa012
        fchs 
        public_65fa012 : nop
        fchs 
        mov dword ptr ss : [esp+0x18], ebx
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x10]
        fsubrp 
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x244]
        cmp ebx, eax
        jge public_65fa0f3
        fdivr dword ptr ds : [public_66011e0]
        mov ecx, dword ptr ds : [esi+0x240]
        lea ebx, ds:[ebx]
        public_65fa050 : nop
        cmp edi, ecx
        fld dword ptr ds : [public_6601318]
        jge public_65fa086
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x34]
        add edx, eax
        mov eax, dword ptr ss : [esp+0x88]
        lea edx, ds:[eax+edx*4]
        mov eax, ecx
        sub eax, edi
        public_65fa076 : nop
        fld dword ptr ds : [edx]
        add edx, 0x30
        fmul dword ptr ss : [ebp]
        add ebp, 0x30
        dec eax
        faddp 
        jne public_65fa076
        public_65fa086 : nop
        cmp edi, ecx
        fld st(1)
        fmul st, st(1)
        mov dword ptr ss : [esp+0x28], edi
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jge public_65fa0d8
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x88]
        add ecx, edx
        mov edx, dword ptr ss : [esp+0x34]
        lea eax, ds:[eax+ecx*4]
        public_65fa0b0 : nop
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [edx]
        inc ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov ebp, dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax]
        add edx, 0x30
        add eax, 0x30
        fstp dword ptr ds : [eax-0x30]
        mov ecx, dword ptr ds : [esi+0x240]
        cmp ebp, ecx
        jl public_65fa0b0
        public_65fa0d8 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x244]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [esp+0x18], eax
        jl public_65fa050
        mov edx, dword ptr ss : [esp+0x34]
        public_65fa0f3 : nop
        mov eax, dword ptr ds : [esi+0x240]
        fstp st(0)
        cmp edi, eax
        mov ecx, edi
        jge public_65fa11c
        mov eax, edx
        public_65fa103 : nop
        fld st(0)
        inc ecx
        fmul dword ptr ds : [eax]
        add eax, 0x30
        fstp dword ptr ds : [eax-0x30]
        mov edx, dword ptr ds : [esi+0x240]
        cmp ecx, edx
        jl public_65fa103
        jmp public_65fa11c
        public_65fa11a : nop
        fstp st(0)
        public_65fa11c : nop
        fmul dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x24]
        lea edx, ds:[ecx+edi*4]
        lea eax, ss:[esp+edx+0x54]
        fstp dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [esi+0x240]
        fld dword ptr ds : [public_6601318]
        cmp edi, eax
        fld dword ptr ds : [public_6601318]
        mov dword ptr ss : [esp+0x10], 0
        jge public_65fa2d7
        mov eax, dword ptr ds : [esi+0x244]
        cmp edi, eax
        je public_65fa2d7
        cmp ebx, eax
        jge public_65fa2d7
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x88]
        add ecx, ebx
        lea edx, ds:[edx+ecx*4]
        mov dword ptr ss : [esp+0x40], edx
        mov ecx, edx
        sub eax, ebx
        public_65fa181 : nop
        fld dword ptr ds : [ecx]
        add ecx, 4
        dec eax
        fabs 
        faddp st(2), st
        jne public_65fa181
        fld st(1)
        fcomp dword ptr ds : [public_6601318]
        fnstsw ax
        test ah, 0x44
        jnp public_65fa2d7
        fld dword ptr ds : [public_66011e0]
        mov ecx, ebx
        fdiv st, st(2)
        mov eax, edx
        lea esp, ss:[esp]
        public_65fa1b0 : nop
        fld st(0)
        inc ecx
        fmul dword ptr ds : [eax]
        add eax, 4
        fld st(0)
        fxch 
        fstp dword ptr ds : [eax-4]
        mov edi, dword ptr ds : [esi+0x244]
        cmp ecx, edi
        fld st(0)
        fmul st, st(1)
        faddp st(3), st
        fstp st(0)
        jl public_65fa1b0
        fstp st(0)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edx]
        fcom qword ptr ds : [public_6601398]
        fld dword ptr ss : [esp+0x1C]
        fsqrt 
        fnstsw ax
        fabs 
        test ah, 1
        je public_65fa1f0
        fchs 
        public_65fa1f0 : nop
        fchs 
        mov ecx, ebx
        fst dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [edx]
        mov eax, dword ptr ds : [esi+0x244]
        cmp ebx, eax
        jge public_65fa232
        fld dword ptr ds : [public_66011e0]
        fdiv dword ptr ss : [esp+0x20]
        lea esp, ss:[esp]
        public_65fa220 : nop
        fld st(0)
        inc ecx
        fmul dword ptr ds : [edx]
        add edx, 4
        cmp ecx, eax
        fstp dword ptr ss : [esp+ecx*4+0x50]
        jl public_65fa220
        fstp st(0)
        public_65fa232 : nop
        cmp ebx, dword ptr ds : [esi+0x240]
        mov dword ptr ss : [esp+0x18], ebx
        jge public_65fa2b2
        mov ecx, dword ptr ss : [esp+0x88]
        mov edx, dword ptr ss : [esp+0x38]
        lea ebp, ds:[edx+ecx]
        lea esp, ss:[esp]
        public_65fa250 : nop
        cmp ebx, eax
        fld dword ptr ds : [public_6601318]
        jge public_65fa274
        mov edi, dword ptr ss : [esp+0x40]
        mov ecx, eax
        mov edx, ebp
        sub ecx, ebx
        public_65fa264 : nop
        fld dword ptr ds : [edi]
        add edx, 4
        fmul dword ptr ds : [edx-4]
        add edi, 4
        dec ecx
        faddp 
        jne public_65fa264
        public_65fa274 : nop
        cmp ebx, eax
        mov ecx, ebx
        jge public_65fa29a
        mov edx, ebp
        lea esp, ss:[esp]
        public_65fa280 : nop
        fld st(0)
        inc ecx
        fmul dword ptr ss : [esp+ecx*4+0x50]
        add edx, 4
        fadd dword ptr ds : [edx-4]
        fstp dword ptr ds : [edx-4]
        mov eax, dword ptr ds : [esi+0x244]
        cmp ecx, eax
        jl public_65fa280
        public_65fa29a : nop
        mov ecx, dword ptr ss : [esp+0x18]
        fstp st(0)
        mov edx, dword ptr ds : [esi+0x240]
        inc ecx
        add ebp, 0x30
        cmp ecx, edx
        mov dword ptr ss : [esp+0x18], ecx
        jl public_65fa250
        public_65fa2b2 : nop
        cmp ebx, dword ptr ds : [esi+0x244]
        mov ecx, ebx
        jge public_65fa2d9
        mov eax, dword ptr ss : [esp+0x40]
        public_65fa2c0 : nop
        fld st(0)
        inc ecx
        fmul dword ptr ds : [eax]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov edx, dword ptr ds : [esi+0x244]
        cmp ecx, edx
        jl public_65fa2c0
        jmp public_65fa2d9
        public_65fa2d7 : nop
        fstp st(0)
        public_65fa2d9 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [public_660339c], eax
        fld dword ptr ds : [ecx]
        fabs 
        fld dword ptr ds : [edx]
        fabs 
        faddp 
        fstp dword ptr ds : [public_66033a0]
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_66033a0]
        fnstsw ax
        test ah, 0x41
        je public_65fa314
        mov eax, dword ptr ds : [public_66033a0]
        mov dword ptr ss : [esp+0x30], eax
        public_65fa314 : nop
        mov edx, dword ptr ss : [esp+0x34]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [esi+0x244]
        mov edi, ebx
        add edx, 0x34
        add ecx, 0xC
        cmp edi, eax
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x2C], ecx
        jl public_65f9f59
        jmp public_65fa340
        public_65fa33c : nop
        mov ebx, dword ptr ss : [esp+0x3C]
        public_65fa340 : nop
        mov eax, dword ptr ds : [esi+0x244]
        fstp st(0)
        dec eax
        mov dword ptr ss : [esp+0x28], eax
        js public_65fa50c
        lea ecx, ds:[eax+eax*2]
        imul eax, 0x34
        shl ecx, 2
        lea ebp, ds:[ebx+ebx*2]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ss : [esp+0x90]
        shl ebp, 2
        add eax, ecx
        mov dword ptr ss : [esp+0x40], eax
        public_65fa373 : nop
        mov ecx, dword ptr ds : [esi+0x244]
        cmp dword ptr ss : [esp+0x28], ecx
        jge public_65fa4d3
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6601318]
        fnstsw ax
        test ah, 0x44
        jnp public_65fa494
        cmp ebx, ecx
        mov edx, ebx
        jge public_65fa3ea
        mov ecx, dword ptr ss : [esp+0x34]
        fld dword ptr ds : [public_66011e0]
        mov eax, dword ptr ss : [esp+0x88]
        fdiv dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x90]
        add ecx, ebx
        lea eax, ds:[eax+ecx*4]
        mov ecx, dword ptr ss : [esp+0x28]
        add ecx, ebp
        lea ecx, ds:[edi+ecx*4]
        mov dword ptr ss : [esp+0x44], eax
        mov edi, eax
        mov edi, edi
        public_65fa3d0 : nop
        fld dword ptr ds : [eax]
        inc edx
        fdiv dword ptr ds : [edi]
        add eax, 4
        add ecx, 0x30
        fmul st, st(1)
        fstp dword ptr ds : [ecx-0x30]
        cmp edx, dword ptr ds : [esi+0x244]
        jl public_65fa3d0
        fstp st(0)
        public_65fa3ea : nop
        mov edi, dword ptr ds : [esi+0x244]
        cmp ebx, edi
        mov dword ptr ss : [esp+0x18], ebx
        jge public_65fa494
        lea esp, ss:[esp]
        public_65fa400 : nop
        cmp ebx, edi
        fld dword ptr ds : [public_6601318]
        jge public_65fa440
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x88]
        add edx, ebx
        lea ecx, ds:[eax+edx*4]
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[edx+ebp]
        mov edx, dword ptr ss : [esp+0x90]
        lea edx, ds:[edx+eax*4]
        mov eax, edi
        sub eax, ebx
        nop 
        public_65fa430 : nop
        fld dword ptr ds : [edx]
        add ecx, 4
        fmul dword ptr ds : [ecx-4]
        add edx, 0x30
        dec eax
        faddp 
        jne public_65fa430
        public_65fa440 : nop
        cmp ebx, edi
        mov edx, ebx
        jge public_65fa47b
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x90]
        mov edi, dword ptr ss : [esp+0x28]
        add eax, ebp
        add edi, ebp
        lea eax, ds:[ecx+eax*4]
        lea ecx, ds:[ecx+edi*4]
        nop 
        public_65fa460 : nop
        fld st(0)
        inc edx
        fmul dword ptr ds : [ecx]
        add ecx, 0x30
        add eax, 0x30
        fadd dword ptr ds : [eax-0x30]
        fstp dword ptr ds : [eax-0x30]
        mov edi, dword ptr ds : [esi+0x244]
        cmp edx, edi
        jl public_65fa460
        public_65fa47b : nop
        mov eax, dword ptr ss : [esp+0x18]
        fstp st(0)
        mov edi, dword ptr ds : [esi+0x244]
        inc eax
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], eax
        jl public_65fa400
        public_65fa494 : nop
        cmp ebx, dword ptr ds : [esi+0x244]
        jge public_65fa4d3
        mov ecx, dword ptr ss : [esp+0x34]
        lea edx, ds:[ecx+ebx]
        mov ecx, dword ptr ss : [esp+0x90]
        lea eax, ds:[ecx+edx*4]
        mov edx, dword ptr ss : [esp+0x28]
        add ebp, edx
        lea ecx, ds:[ecx+ebp*4]
        public_65fa4b6 : nop
        mov dword ptr ds : [ecx], 0
        mov dword ptr ds : [eax], 0
        mov edx, dword ptr ds : [esi+0x244]
        inc ebx
        add eax, 4
        add ecx, 0x30
        cmp ebx, edx
        jl public_65fa4b6
        public_65fa4d3 : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+eax*4+0x54]
        mov ecx, dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x10]
        mov ebx, eax
        dec eax
        mov dword ptr ds : [edx], 0x3F800000
        mov ebp, ecx
        sub ecx, 0xC
        sub edx, 0x34
        test eax, eax
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x34], ecx
        mov dword ptr ss : [esp+0x40], edx
        jge public_65fa373
        public_65fa50c : nop
        mov eax, dword ptr ds : [esi+0x240]
        mov dword ptr ds : [public_66032a4], eax
        mov ecx, dword ptr ds : [esi+0x244]
        cmp eax, ecx
        mov dword ptr ds : [public_66032a0], ecx
        jl public_65fa529
        mov eax, ecx
        public_65fa529 : nop
        lea ebx, ds:[eax-1]
        test ebx, ebx
        jl public_65fa6f6
        mov ecx, dword ptr ss : [esp+0x88]
        lea eax, ds:[ebx+ebx*2]
        shl eax, 2
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ds:[ebx+1]
        mov dword ptr ss : [esp+0x34], eax
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, ebx
        imul eax, 0x34
        add eax, ecx
        mov dword ptr ss : [esp+0x2C], eax
        mov edi, eax
        lea ecx, ds:[ecx]
        public_65fa560 : nop
        mov ecx, dword ptr ss : [esp+0x8C]
        mov eax, dword ptr ds : [esi+0x244]
        fld dword ptr ds : [ecx+ebx*4]
        cmp edx, eax
        mov ecx, edx
        jge public_65fa59b
        mov eax, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x88]
        add eax, edx
        lea eax, ss:[ebp+eax*4]
        public_65fa587 : nop
        mov dword ptr ds : [eax], 0
        mov ebp, dword ptr ds : [esi+0x244]
        inc ecx
        add eax, 4
        cmp ecx, ebp
        jl public_65fa587
        public_65fa59b : nop
        fcom dword ptr ds : [public_6601318]
        fnstsw ax
        test ah, 0x44
        jnp public_65fa69b
        fdivr qword ptr ds : [public_6601320]
        mov eax, dword ptr ds : [esi+0x244]
        cmp edx, eax
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ss : [esp+0x10]
        jge public_65fa674
        mov ecx, dword ptr ds : [esi+0x240]
        mov ebp, dword ptr ss : [esp+0x88]
        public_65fa5d5 : nop
        mov eax, dword ptr ss : [esp+0x34]
        fld dword ptr ds : [public_6601318]
        cmp eax, ecx
        jge public_65fa61a
        mov eax, dword ptr ss : [esp+0x28]
        lea edx, ds:[eax+ebx+0xC]
        lea edi, ss:[ebp+edx*4]
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ds:[eax+edx+0xC]
        lea edx, ss:[ebp+eax*4]
        mov ebp, dword ptr ss : [esp+0x34]
        mov eax, ecx
        sub eax, ebp
        public_65fa603 : nop
        fld dword ptr ds : [edi]
        add edx, 0x30
        fmul dword ptr ds : [edx-0x30]
        add edi, 0x30
        dec eax
        faddp 
        jne public_65fa603
        mov ebp, dword ptr ss : [esp+0x88]
        public_65fa61a : nop
        cmp ebx, ecx
        mov edx, dword ptr ss : [esp+0x2C]
        fdiv dword ptr ds : [edx]
        mov edi, ebx
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        jge public_65fa65d
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x18]
        add eax, ecx
        lea eax, ss:[ebp+eax*4]
        lea esp, ss:[esp]
        public_65fa640 : nop
        fld dword ptr ss : [esp+0x14]
        inc edi
        fmul dword ptr ds : [edx]
        add edx, 0x30
        add eax, 0x30
        fadd dword ptr ds : [eax-0x30]
        fstp dword ptr ds : [eax-0x30]
        mov ecx, dword ptr ds : [esi+0x240]
        cmp edi, ecx
        jl public_65fa640
        public_65fa65d : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0x244]
        inc eax
        cmp eax, edx
        mov dword ptr ss : [esp+0x18], eax
        jl public_65fa5d5
        public_65fa674 : nop
        cmp ebx, dword ptr ds : [esi+0x240]
        mov ecx, ebx
        jge public_65fa6c4
        mov eax, dword ptr ss : [esp+0x2C]
        public_65fa682 : nop
        fld dword ptr ss : [esp+0x10]
        inc ecx
        fmul dword ptr ds : [eax]
        add eax, 0x30
        fstp dword ptr ds : [eax-0x30]
        mov edx, dword ptr ds : [esi+0x240]
        cmp ecx, edx
        jl public_65fa682
        jmp public_65fa6c4
        public_65fa69b : nop
        mov ecx, dword ptr ds : [esi+0x240]
        fstp st(0)
        cmp ebx, ecx
        mov eax, ebx
        jge public_65fa6c4
        mov ecx, edi
        nop 
        lea esp, ss:[esp]
        public_65fa6b0 : nop
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ds : [esi+0x240]
        inc eax
        add ecx, 0x30
        cmp eax, edx
        jl public_65fa6b0
        public_65fa6c4 : nop
        mov edi, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [public_66011e0]
        mov ebp, dword ptr ss : [esp+0x28]
        dec ebx
        dec edx
        fstp dword ptr ds : [edi]
        sub ebp, 0xC
        sub edi, 0x34
        test ebx, ebx
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], edi
        jge public_65fa560
        public_65fa6f6 : nop
        mov eax, dword ptr ds : [esi+0x244]
        dec eax
        mov dword ptr ss : [esp+0x28], eax
        js public_65fac30
        public_65fa707 : nop
        mov ebp, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x8C]
        mov dword ptr ss : [esp+0x40], 1
        lea ebx, ds:[ebx]
        public_65fa720 : nop
        test ebp, ebp
        mov ebx, ebp
        mov dword ptr ss : [esp+0x3C], ebx
        jl public_65fa789
        lea edi, ds:[edx+ebp*4-4]
        mov edi, edi
        public_65fa730 : nop
        mov eax, dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+ebx*4+0x54]
        push eax
        fabs 
        lea edx, ds:[ebx-1]
        push ecx
        fstp dword ptr ss : [esp]
        mov dword ptr ss : [esp+0x40], edx
        call public_65f9ed0
        add esp, 8
        test al, al
        jne public_65fa89b
        mov ecx, dword ptr ss : [esp+0x30]
        fld dword ptr ds : [edi]
        push ecx
        fabs 
        push ecx
        fstp dword ptr ss : [esp]
        call public_65f9ed0
        add esp, 8
        test al, al
        jne public_65fa77a
        mov ebx, dword ptr ss : [esp+0x38]
        sub edi, 4
        test ebx, ebx
        jge public_65fa730
        public_65fa77a : nop
        mov edx, dword ptr ss : [esp+0x8C]
        mov ebp, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x3C], ebx
        public_65fa789 : nop
        cmp ebx, ebp
        fld dword ptr ds : [public_66011e0]
        mov dword ptr ss : [esp+0x18], 0
        mov edi, ebx
        jg public_65fa8ac
        lea eax, ss:[esp+0x54]
        sub edx, eax
        mov eax, dword ptr ss : [esp+0x88]
        lea ecx, ss:[esp+0x54]
        sub eax, ecx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x34], eax
        lea esp, ss:[esp]
        public_65fa7c0 : nop
        fmul dword ptr ss : [esp+edi*4+0x54]
        mov edx, dword ptr ss : [esp+0x30]
        push edx
        push ecx
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+edi*4+0x5C]
        fstp dword ptr ss : [esp+edi*4+0x5C]
        fld dword ptr ss : [esp+0x1C]
        fabs 
        fstp dword ptr ss : [esp]
        call public_65f9ed0
        add esp, 8
        test al, al
        jne public_65fa89f
        mov eax, dword ptr ss : [esp+0x24]
        lea ecx, ds:[eax+edi*4]
        mov eax, dword ptr ss : [esp+ecx+0x54]
        lea edx, ss:[esp+ecx+0x54]
        mov ecx, eax
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [esp+0x14]
        push ecx
        push eax
        mov ecx, esi
        call public_65f9e00
        fst dword ptr ds : [edx]
        fdivr qword ptr ds : [public_6601320]
        mov eax, dword ptr ds : [esi+0x240]
        xor edx, edx
        test eax, eax
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x14]
        fchs 
        jle public_65fa883
        mov ecx, dword ptr ss : [esp+0x34]
        mov ebp, dword ptr ss : [esp+0x38]
        lea eax, ds:[ecx+edi*4]
        lea ecx, ss:[esp+eax+0x54]
        mov eax, dword ptr ss : [esp+0x88]
        lea eax, ds:[eax+ebp*4]
        public_65fa852 : nop
        fld dword ptr ds : [eax]
        inc edx
        fld dword ptr ds : [ecx]
        add eax, 0x30
        fld st(1)
        add ecx, 0x30
        fmul dword ptr ss : [esp+0x18]
        fld st(1)
        fmul st, st(4)
        faddp 
        fstp dword ptr ds : [eax-0x30]
        fmul dword ptr ss : [esp+0x18]
        fxch 
        fmul st, st(2)
        fsubp 
        fstp dword ptr ds : [ecx-0x30]
        mov ebp, dword ptr ds : [esi+0x240]
        cmp edx, ebp
        jl public_65fa852
        public_65fa883 : nop
        mov ebp, dword ptr ss : [esp+0x28]
        inc edi
        cmp edi, ebp
        jle public_65fa7c0
        mov edx, dword ptr ss : [esp+0x8C]
        fstp st(0)
        jmp public_65fa8ae
        public_65fa89b : nop
        mov dword ptr ss : [esp+0x3C], ebx
        public_65fa89f : nop
        mov ebp, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x8C]
        jmp public_65fa8ae
        public_65fa8ac : nop
        fstp st(0)
        public_65fa8ae : nop
        cmp ebx, ebp
        fld dword ptr ds : [edx+ebp*4]
        fstp dword ptr ss : [esp+0x34]
        je public_65fabdf
        cmp dword ptr ss : [esp+0x40], 0x1E
        je public_65fac3c
        fld dword ptr ds : [edx+ebx*4]
        mov ecx, dword ptr ss : [esp+ebp*4+0x54]
        fstp dword ptr ss : [esp+0x2C]
        lea eax, ss:[ebp-1]
        fld dword ptr ds : [edx+eax*4]
        mov dword ptr ss : [esp+0x20], ecx
        fstp dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x38], eax
        fld dword ptr ss : [esp+eax*4+0x54]
        push 0x3F800000
        fld dword ptr ss : [esp+0x28]
        mov ecx, esi
        fsub dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x28]
        fmulp 
        fld st(1)
        fsub dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x24]
        fadd st, st(3)
        fmulp 
        faddp 
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x24]
        fadd st(0), st
        fdivp 
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        fstp st(0)
        call public_65f9e00
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_6601398]
        fnstsw ax
        fabs 
        test ah, 1
        je public_65fa943
        fchs 
        public_65fa943 : nop
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x38]
        cmp ebx, eax
        fld dword ptr ss : [esp+0x14]
        fadd st, st(2)
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov edi, ebx
        fdivp 
        fsub dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x34]
        fmulp 
        faddp 
        fdiv dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        jg public_65fabb4
        mov ecx, dword ptr ss : [esp+0x90]
        lea eax, ss:[esp+0x54]
        sub eax, edx
        mov dword ptr ss : [esp+0x48], eax
        mov eax, ecx
        sub eax, edx
        mov dword ptr ss : [esp+0x4C], eax
        lea ebx, ds:[edx+ebx*4+4]
        lea edx, ss:[esp+0x54]
        mov eax, 4
        sub eax, edx
        mov dword ptr ss : [esp+0x44], eax
        mov eax, ecx
        lea ecx, ss:[esp+0x54]
        sub eax, ecx
        mov dword ptr ss : [esp+0x50], eax
        mov eax, dword ptr ss : [esp+0x88]
        lea edx, ss:[esp+0x54]
        sub eax, edx
        mov dword ptr ss : [esp+0x34], eax
        lea esp, ss:[esp]
        public_65fa9e0 : nop
        mov edx, dword ptr ss : [esp+0x48]
        fld dword ptr ds : [edx+ebx]
        mov eax, dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        fmul st, st(1)
        lea ecx, ds:[eax+edi*4]
        mov eax, dword ptr ds : [ebx]
        lea ebp, ss:[esp+ecx+0x54]
        fstp dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul st, st(1)
        push ecx
        push edx
        mov ecx, esi
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        call public_65f9e00
        fst dword ptr ss : [esp+edi*4+0x54]
        mov eax, dword ptr ds : [esi+0x244]
        fdivr dword ptr ds : [public_66011e0]
        xor edx, edx
        test eax, eax
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x24]
        jle public_65faad3
        mov eax, dword ptr ss : [esp+0x4C]
        lea ecx, ds:[eax+ebx]
        mov eax, dword ptr ss : [esp+0x50]
        lea eax, ds:[eax+edi*4]
        lea eax, ss:[esp+eax+0x54]
        lea ecx, ds:[ecx]
        public_65faaa0 : nop
        fld dword ptr ds : [eax]
        inc edx
        fld dword ptr ds : [ecx]
        add eax, 0x30
        fld st(1)
        add ecx, 0x30
        fmul dword ptr ss : [esp+0x18]
        fld st(1)
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fstp dword ptr ds : [eax-0x30]
        fmul dword ptr ss : [esp+0x18]
        fxch 
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fstp dword ptr ds : [ecx-0x30]
        cmp edx, dword ptr ds : [esi+0x244]
        jl public_65faaa0
        public_65faad3 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push edx
        mov ecx, esi
        call public_65f9e00
        fcom dword ptr ds : [public_6601318]
        fst dword ptr ds : [ebx-4]
        fnstsw ax
        test ah, 0x44
        jnp public_65fab0e
        fdivr qword ptr ds : [public_6601320]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x1C]
        jmp public_65fab10
        public_65fab0e : nop
        fstp st(0)
        public_65fab10 : nop
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [esi+0x240]
        fmul dword ptr ss : [esp+0x1C]
        xor edx, edx
        test eax, eax
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fstp dword ptr ss : [esp+0x2C]
        jle public_65fab95
        mov eax, dword ptr ss : [esp+0x88]
        lea ecx, ds:[eax+ebp]
        mov eax, dword ptr ss : [esp+0x34]
        lea eax, ds:[eax+edi*4]
        lea eax, ss:[esp+eax+0x54]
        lea ecx, ds:[ecx]
        public_65fab60 : nop
        fld dword ptr ds : [eax]
        inc edx
        fld dword ptr ds : [ecx]
        add eax, 0x30
        fld st(1)
        add ecx, 0x30
        fmul dword ptr ss : [esp+0x18]
        fld st(1)
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fstp dword ptr ds : [eax-0x30]
        fmul dword ptr ss : [esp+0x18]
        fxch 
        fmul dword ptr ss : [esp+0x1C]
        fsubp 
        fstp dword ptr ds : [ecx-0x30]
        mov ebp, dword ptr ds : [esi+0x240]
        cmp edx, ebp
        jl public_65fab60
        public_65fab95 : nop
        mov eax, dword ptr ss : [esp+0x38]
        inc edi
        add ebx, 4
        cmp edi, eax
        jle public_65fa9e0
        mov ebp, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x8C]
        public_65fabb4 : nop
        mov eax, dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [edx+ebp*4]
        inc eax
        cmp eax, 0x1E
        mov dword ptr ss : [esp+ebx*4+0x54], 0
        mov dword ptr ss : [esp+ebp*4+0x54], ecx
        mov dword ptr ss : [esp+0x40], eax
        jle public_65fa720
        jmp public_65fac25
        public_65fabdf : nop
        fld dword ptr ss : [esp+0x34]
        fcomp qword ptr ds : [public_6601398]
        fnstsw ax
        test ah, 5
        jp public_65fac25
        fld dword ptr ss : [esp+0x34]
        xor ecx, ecx
        fchs 
        fstp dword ptr ds : [edx+ebp*4]
        mov eax, dword ptr ds : [esi+0x244]
        test eax, eax
        jle public_65fac25
        mov edx, dword ptr ss : [esp+0x90]
        lea eax, ds:[edx+ebp*4]
        nop 
        public_65fac10 : nop
        fld dword ptr ds : [eax]
        inc ecx
        fchs 
        add eax, 0x30
        fstp dword ptr ds : [eax-0x30]
        mov edx, dword ptr ds : [esi+0x244]
        cmp ecx, edx
        jl public_65fac10
        public_65fac25 : nop
        dec ebp
        mov dword ptr ss : [esp+0x28], ebp
        jns public_65fa707
        public_65fac30 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x74
        ret 0xC
        public_65fac3c : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x74
        ret 0xC
        UNREACHABLE_TRAP(0x65f9f00)
    }
}

#undef public_65f9f59
#undef public_65f9f60
#undef public_65f9fa0
#undef public_65f9fd0
#undef public_65fa012
#undef public_65fa050
#undef public_65fa076
#undef public_65fa086
#undef public_65fa0b0
#undef public_65fa0d8
#undef public_65fa0f3
#undef public_65fa103
#undef public_65fa11a
#undef public_65fa11c
#undef public_65fa181
#undef public_65fa1b0
#undef public_65fa1f0
#undef public_65fa220
#undef public_65fa232
#undef public_65fa250
#undef public_65fa264
#undef public_65fa274
#undef public_65fa280
#undef public_65fa29a
#undef public_65fa2b2
#undef public_65fa2c0
#undef public_65fa2d7
#undef public_65fa2d9
#undef public_65fa314
#undef public_65fa33c
#undef public_65fa340
#undef public_65fa373
#undef public_65fa3d0
#undef public_65fa3ea
#undef public_65fa400
#undef public_65fa430
#undef public_65fa440
#undef public_65fa460
#undef public_65fa47b
#undef public_65fa494
#undef public_65fa4b6
#undef public_65fa4d3
#undef public_65fa50c
#undef public_65fa529
#undef public_65fa560
#undef public_65fa587
#undef public_65fa59b
#undef public_65fa5d5
#undef public_65fa603
#undef public_65fa61a
#undef public_65fa640
#undef public_65fa65d
#undef public_65fa674
#undef public_65fa682
#undef public_65fa69b
#undef public_65fa6b0
#undef public_65fa6c4
#undef public_65fa6f6
#undef public_65fa707
#undef public_65fa720
#undef public_65fa730
#undef public_65fa77a
#undef public_65fa789
#undef public_65fa7c0
#undef public_65fa852
#undef public_65fa883
#undef public_65fa89b
#undef public_65fa89f
#undef public_65fa8ac
#undef public_65fa8ae
#undef public_65fa943
#undef public_65fa9e0
#undef public_65faaa0
#undef public_65faad3
#undef public_65fab0e
#undef public_65fab10
#undef public_65fab60
#undef public_65fab95
#undef public_65fabb4
#undef public_65fabdf
#undef public_65fac10
#undef public_65fac25
#undef public_65fac30
#undef public_65fac3c
