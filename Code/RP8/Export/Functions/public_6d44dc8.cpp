#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44341);
CLANG_FORWARD_PROC_SYMBOL(public_6d4443b);
CLANG_FORWARD_PROC_SYMBOL(public_6d4445e);
CLANG_FORWARD_PROC_SYMBOL(public_6d4485d);
CLANG_FORWARD_PROC_SYMBOL(public_6d44dc8);

#define public_6d44de7 _public_6d44de7
#define public_6d44df7 _public_6d44df7
#define public_6d44e17 _public_6d44e17
#define public_6d44e25 _public_6d44e25
#define public_6d44e2c _public_6d44e2c
#define public_6d44ee7 _public_6d44ee7
#define public_6d44eea _public_6d44eea
#define public_6d44ff1 _public_6d44ff1
#define public_6d45032 _public_6d45032
#define public_6d450a0 _public_6d450a0
#define public_6d450a4 _public_6d450a4
#define public_6d450a6 _public_6d450a6
#define public_6d45189 _public_6d45189
#define public_6d45211 _public_6d45211
#define public_6d45225 _public_6d45225
#define public_6d45289 _public_6d45289
#define public_6d4530f _public_6d4530f
#define public_6d4532e _public_6d4532e
#define public_6d45352 _public_6d45352
#define public_6d45354 _public_6d45354
#define public_6d453cb _public_6d453cb
#define public_6d453ef _public_6d453ef
#define public_6d45455 _public_6d45455
#define public_6d45466 _public_6d45466
#define public_6d4547e _public_6d4547e
#define public_6d454ee _public_6d454ee
#define public_6d45530 _public_6d45530
#define public_6d45599 _public_6d45599
#define public_6d4559b _public_6d4559b
#define public_6d4559d _public_6d4559d
#define public_6d455c2 _public_6d455c2

PROC_DECLARE(0x6d44dc8, internal_6d44dc8, public_6d44dc8);
extern "C" NAKED register_t __cdecl internal_6d44dc8()
{
    __asm
    {
        push ebp
        lea ebp, ss:[esp-0x70]
        sub esp, 0x2D0
        push ebx
        xor edx, edx
        cmp dword ptr ss : [ebp+0x7C], edx
        push esi
        push edi
        mov ebx, eax
        je public_6d44e25
        push 0x10
        xor esi, esi
        lea ecx, ds:[ebx+0xC]
        pop edi
        public_6d44de7 : nop
        fld dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_6d5f1fc]
        fnstsw ax
        test ah, 5
        jp public_6d44df7
        inc esi
        public_6d44df7 : nop
        add ecx, 0x10
        dec edi
        jne public_6d44de7
        cmp esi, 0x10
        jne public_6d44e17
        mov eax, dword ptr ss : [ebp+0x78]
        or word ptr ds : [eax+2], 0xFFFF
        or dword ptr ds : [eax+4], 0xFFFFFFFF
        mov word ptr ds : [eax], dx
        jmp public_6d455c2
        public_6d44e17 : nop
        xor eax, eax
        cmp eax, esi
        sbb eax, eax
        add eax, 4
        mov dword ptr ss : [ebp+0x64], eax
        jmp public_6d44e2c
        public_6d44e25 : nop
        mov dword ptr ss : [ebp+0x64], 4
        public_6d44e2c : nop
        push 0x40
        pop ecx
        xor eax, eax
        lea edi, ss:[ebp-0x160]
        rep stosd
        call public_6d4443b
        lea ecx, ss:[ebp-0x158]
        sub ecx, ebx
        mov dword ptr ss : [ebp+0x1C], ecx
        lea ecx, ss:[ebp-0x154]
        sub ecx, ebx
        mov dword ptr ss : [ebp-0x44], ecx
        lea ecx, ss:[ebp-0x150]
        sub ecx, ebx
        mov dword ptr ss : [ebp-0x4C], ecx
        lea ecx, ss:[ebp-0x138]
        sub ecx, ebx
        mov dword ptr ss : [ebp+0x18], ecx
        lea ecx, ss:[ebp-0x134]
        sub ecx, ebx
        mov dword ptr ss : [ebp-0x40], ecx
        lea ecx, ss:[ebp-0x130]
        sub ecx, ebx
        mov dword ptr ss : [ebp-0x38], ecx
        lea ecx, ss:[ebp-0x128]
        sub ecx, ebx
        mov dword ptr ss : [ebp+0x4C], ecx
        lea ecx, ss:[ebp-0x124]
        sub ecx, ebx
        mov dword ptr ss : [ebp-0x48], ecx
        lea ecx, ss:[ebp-0x120]
        sub ecx, ebx
        mov dword ptr ss : [ebp-0x30], ecx
        lea ecx, ss:[ebp-0x118]
        sub ecx, ebx
        mov dword ptr ss : [ebp+0x48], ecx
        lea ecx, ss:[ebp-0x114]
        sub ecx, ebx
        mov dword ptr ss : [ebp-0x2C], ecx
        mov dword ptr ss : [ebp+0x7C], edx
        lea ecx, ss:[ebp-0x110]
        lea esi, ss:[ebp-0x160]
        sub ecx, ebx
        sub esi, ebx
        lea edx, ss:[ebp-0x25C]
        lea edi, ss:[ebp-0x260]
        sub edx, ebx
        mov dword ptr ss : [ebp-0x3C], ecx
        sub edi, ebx
        lea eax, ds:[ebx+8]
        mov dword ptr ss : [ebp-0x34], esi
        xor ecx, ecx
        jmp public_6d44eea
        public_6d44ee7 : nop
        mov esi, dword ptr ss : [ebp-0x34]
        public_6d44eea : nop
        fld dword ptr ss : [ebp+ecx-0x160]
        fadd dword ptr ds : [eax-8]
        fstp dword ptr ss : [ebp+0x54]
        fld dword ptr ds : [eax-4]
        fadd dword ptr ss : [ebp+ecx-0x15C]
        fstp dword ptr ss : [ebp+0x58]
        fld dword ptr ds : [esi+eax]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [ebp+0x5C]
        fld dword ptr ss : [ebp+0x54]
        fmul dword ptr ds : [public_6d5f5e8]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp+0x6C]
        fld dword ptr ss : [ebp+0x6C]
        fistp dword ptr ss : [ebp-0x50]
        mov esi, dword ptr ss : [ebp-0x50]
        mov dword ptr ss : [ebp+0x6C], esi
        fild dword ptr ss : [ebp+0x6C]
        fmul dword ptr ds : [public_6d5f61c]
        fst dword ptr ss : [ebp+0x50]
        fstp dword ptr ss : [ebp+ecx-0x260]
        fld dword ptr ss : [ebp+0x58]
        fmul dword ptr ds : [public_6d5f5e4]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp+0x6C]
        fld dword ptr ss : [ebp+0x6C]
        fistp dword ptr ss : [ebp+0x24]
        mov esi, dword ptr ss : [ebp+0x24]
        mov dword ptr ss : [ebp+0x6C], esi
        fild dword ptr ss : [ebp+0x6C]
        fmul dword ptr ds : [public_6d5f618]
        fst dword ptr ss : [ebp+0x6C]
        fstp dword ptr ss : [ebp+ecx-0x25C]
        fld dword ptr ss : [ebp+0x5C]
        fmul dword ptr ds : [public_6d5f5e8]
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp+0x68]
        fld dword ptr ss : [ebp+0x68]
        fistp dword ptr ss : [ebp+0x20]
        mov esi, dword ptr ss : [ebp+0x20]
        mov dword ptr ss : [ebp+0x68], esi
        fild dword ptr ss : [ebp+0x68]
        mov esi, dword ptr ss : [ebp+0x7C]
        and esi, 3
        cmp esi, 3
        fmul dword ptr ds : [public_6d5f61c]
        mov dword ptr ss : [ebp+0x68], esi
        fst dword ptr ds : [edi+eax]
        fld1 
        fstp dword ptr ds : [edx+eax]
        fld dword ptr ss : [ebp+0x54]
        fsub dword ptr ss : [ebp+0x50]
        fld dword ptr ss : [ebp+0x58]
        fsub dword ptr ss : [ebp+0x6C]
        fst dword ptr ss : [ebp+0x3C]
        fld dword ptr ss : [ebp+0x5C]
        fsub st, st(3)
        fst dword ptr ss : [ebp+0x40]
        je public_6d44ff1
        fld dword ptr ds : [public_6d6112c]
        mov esi, dword ptr ss : [ebp+0x1C]
        add esi, eax
        fld st(3)
        fmul st, st(1)
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp-0x44]
        fld st(2)
        add esi, eax
        fmul st, st(1)
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp-0x4C]
        fld st(1)
        add esi, eax
        fmul st, st(1)
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fstp st(0)
        public_6d44ff1 : nop
        cmp ecx, 0xC0
        jae public_6d450a0
        cmp dword ptr ss : [ebp+0x68], 0
        je public_6d45032
        fld dword ptr ds : [public_6d61128]
        mov esi, dword ptr ss : [ebp+0x18]
        add esi, eax
        fld st(3)
        fmul st, st(1)
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp-0x40]
        fld st(2)
        add esi, eax
        fmul st, st(1)
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp-0x38]
        fld st(1)
        add esi, eax
        fmul st, st(1)
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fstp st(0)
        public_6d45032 : nop
        fld dword ptr ds : [public_6d61124]
        mov esi, dword ptr ss : [ebp+0x4C]
        add esi, eax
        fld st(3)
        fmul st, st(1)
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp-0x48]
        add esi, eax
        fld st(2)
        fmul st, st(1)
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp-0x30]
        fld st(1)
        add esi, eax
        cmp dword ptr ss : [ebp+0x68], 3
        fmul st, st(1)
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        fstp st(0)
        fstp st(0)
        fstp st(0)
        je public_6d450a4
        fmul dword ptr ds : [public_6d5f638]
        mov esi, dword ptr ss : [ebp+0x48]
        add esi, eax
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp-0x2C]
        fld dword ptr ss : [ebp+0x3C]
        add esi, eax
        fmul dword ptr ds : [public_6d5f638]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        mov esi, dword ptr ss : [ebp-0x3C]
        fld dword ptr ss : [ebp+0x40]
        add esi, eax
        fmul dword ptr ds : [public_6d5f638]
        fadd dword ptr ds : [esi]
        fstp dword ptr ds : [esi]
        jmp public_6d450a6
        public_6d450a0 : nop
        fstp st(0)
        fstp st(0)
        public_6d450a4 : nop
        fstp st(0)
        public_6d450a6 : nop
        fld dword ptr ss : [ebp+0x50]
        inc dword ptr ss : [ebp+0x7C]
        fmul dword ptr ds : [public_6d6d3e0]
        add ecx, 0x10
        fstp dword ptr ss : [ebp+ecx-0x270]
        fld dword ptr ss : [ebp+0x6C]
        fmul dword ptr ds : [public_6d6d3e4]
        fstp dword ptr ss : [ebp+ecx-0x26C]
        fmul dword ptr ds : [public_6d6d3e8]
        fstp dword ptr ds : [edi+eax]
        add eax, 0x10
        cmp ecx, 0x100
        jb public_6d44ee7
        mov eax, dword ptr ds : [public_6d73504]
        mov dword ptr ss : [ebp+0x7C], eax
        fldcw word ptr ss : [ebp+0x7C]
        push dword ptr ss : [ebp+0x64]
        lea eax, ss:[ebp-0x260]
        push eax
        lea eax, ss:[ebp+0x54]
        push eax
        lea eax, ss:[ebp+0x28]
        push eax
        call public_6d4485d
        fld dword ptr ds : [public_6d6d3f0]
        fld dword ptr ss : [ebp+0x28]
        add esp, 0x10
        fmul st, st(1)
        lea ecx, ss:[ebp-0x60]
        fstp dword ptr ss : [ebp-0x60]
        fld dword ptr ds : [public_6d6d3f4]
        fld dword ptr ss : [ebp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp-0x5C]
        fld dword ptr ss : [ebp+0x30]
        fmul dword ptr ds : [public_6d6d3f8]
        fstp dword ptr ss : [ebp-0x58]
        fld dword ptr ss : [ebp+0x54]
        fmul st, st(2)
        fstp dword ptr ss : [ebp+0x38]
        fld dword ptr ss : [ebp+0x58]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x3C]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp+0x5C]
        fmul dword ptr ds : [public_6d6d3f8]
        fstp dword ptr ss : [ebp+0x40]
        call public_6d4445e
        lea ecx, ss:[ebp+0x38]
        mov esi, eax
        mov dword ptr ss : [ebp+0x4C], esi
        call public_6d4445e
        cmp dword ptr ss : [ebp+0x64], 4
        mov edi, eax
        mov dword ptr ss : [ebp+0x48], edi
        jne public_6d45189
        cmp si, di
        jne public_6d45189
        mov eax, dword ptr ss : [ebp+0x78]
        and dword ptr ds : [eax+4], 0
        mov word ptr ds : [eax], si
        mov word ptr ds : [eax+2], di
        jmp public_6d455c2
        public_6d45189 : nop
        mov ecx, esi
        lea eax, ss:[ebp-0x60]
        call public_6d44341
        mov ecx, edi
        lea eax, ss:[ebp+0x38]
        call public_6d44341
        fld dword ptr ds : [public_6d6d3e0]
        fld dword ptr ss : [ebp-0x60]
        cmp di, si
        fmul st, st(1)
        sbb eax, eax
        inc eax
        xor ecx, ecx
        fstp dword ptr ss : [ebp+0x28]
        cmp dword ptr ss : [ebp+0x64], 3
        fld dword ptr ds : [public_6d6d3e4]
        fld dword ptr ss : [ebp-0x5C]
        sete cl
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x2C]
        fld dword ptr ss : [ebp-0x58]
        fmul dword ptr ds : [public_6d6d3e8]
        cmp ecx, eax
        mov eax, dword ptr ss : [ebp+0x78]
        fstp dword ptr ss : [ebp+0x30]
        fld dword ptr ss : [ebp+0x38]
        fmul st, st(2)
        fstp dword ptr ss : [ebp+0x54]
        fld dword ptr ss : [ebp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x58]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [ebp+0x40]
        fmul dword ptr ds : [public_6d6d3e8]
        fstp dword ptr ss : [ebp+0x5C]
        jne public_6d45211
        mov word ptr ds : [eax], si
        mov word ptr ds : [eax+2], di
        lea esi, ss:[ebp+0x28]
        lea edi, ss:[ebp-0x28]
        movsd 
        movsd 
        movsd 
        movsd 
        lea esi, ss:[ebp+0x54]
        jmp public_6d45225
        public_6d45211 : nop
        mov word ptr ds : [eax+2], si
        mov word ptr ds : [eax], di
        lea esi, ss:[ebp+0x54]
        lea edi, ss:[ebp-0x28]
        movsd 
        movsd 
        movsd 
        movsd 
        lea esi, ss:[ebp+0x28]
        public_6d45225 : nop
        mov eax, dword ptr ss : [ebp+0x64]
        cmp eax, 3
        lea edi, ss:[ebp-0x18]
        movsd 
        movsd 
        movsd 
        movsd 
        fld dword ptr ss : [ebp-0x18]
        fsub dword ptr ss : [ebp-0x28]
        jne public_6d45289
        fld dword ptr ds : [public_6d5f1fc]
        mov dword ptr ss : [ebp+0x50], offset public_6d61118
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x28]
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp-0x14]
        fsub dword ptr ss : [ebp-0x24]
        fld dword ptr ds : [public_6d5f1fc]
        fld st(1)
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x24]
        fstp dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp-0x10]
        fsub dword ptr ss : [ebp-0x20]
        fst dword ptr ss : [ebp+0x7C]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x20]
        fstp dword ptr ss : [ebp]
        fld dword ptr ss : [ebp-0xC]
        fsub dword ptr ss : [ebp-0x1C]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x1C]
        fstp dword ptr ss : [ebp+4]
        jmp public_6d4530f
        public_6d45289 : nop
        fld dword ptr ds : [public_6d5f624]
        mov dword ptr ss : [ebp+0x50], offset public_6d61108
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x28]
        fstp dword ptr ss : [ebp-8]
        fld dword ptr ss : [ebp-0x14]
        fsub dword ptr ss : [ebp-0x24]
        fld dword ptr ds : [public_6d5f624]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x24]
        fstp dword ptr ss : [ebp-4]
        fld dword ptr ss : [ebp-0x10]
        fsub dword ptr ss : [ebp-0x20]
        fst dword ptr ss : [ebp+0x7C]
        fld dword ptr ds : [public_6d5f624]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x20]
        fstp dword ptr ss : [ebp]
        fld dword ptr ss : [ebp-0xC]
        fsub dword ptr ss : [ebp-0x1C]
        fld dword ptr ds : [public_6d5f624]
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x1C]
        fstp dword ptr ss : [ebp+4]
        fld dword ptr ds : [public_6d61104]
        fld st(4)
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x28]
        fstp dword ptr ss : [ebp+8]
        fld st(3)
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x24]
        fstp dword ptr ss : [ebp+0xC]
        fld st(2)
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x20]
        fstp dword ptr ss : [ebp+0x10]
        fld st(1)
        fmul st, st(1)
        fadd dword ptr ss : [ebp-0x1C]
        fstp dword ptr ss : [ebp+0x14]
        fstp st(0)
        fstp st(0)
        public_6d4530f : nop
        fstp st(0)
        dec eax
        test eax, eax
        fld st(1)
        fstp dword ptr ss : [ebp+0x54]
        fst st(1)
        fstp st(0)
        fld dword ptr ss : [ebp+0x7C]
        mov dword ptr ss : [ebp+0x7C], eax
        fild dword ptr ss : [ebp+0x7C]
        jge public_6d4532e
        fadd dword ptr ds : [public_6d5f200]
        public_6d4532e : nop
        mov ax, word ptr ss : [ebp+0x48]
        fstp dword ptr ss : [ebp+0x6C]
        cmp word ptr ss : [ebp+0x4C], ax
        je public_6d45352
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld dword ptr ss : [ebp+0x54]
        fmul dword ptr ss : [ebp+0x54]
        faddp 
        fdivr dword ptr ss : [ebp+0x6C]
        jmp public_6d45354
        public_6d45352 : nop
        fldz 
        public_6d45354 : nop
        fld dword ptr ss : [ebp+0x54]
        push 0x40
        fmul st, st(1)
        pop ecx
        xor eax, eax
        lea edi, ss:[ebp-0x160]
        fstp dword ptr ss : [ebp+0x54]
        xor edx, edx
        rep stosd
        fld st(0)
        fmul st, st(3)
        fstp dword ptr ss : [ebp+0x58]
        fmul st, st(1)
        fstp dword ptr ss : [ebp+0x5C]
        fstp st(0)
        fstp st(0)
        call public_6d4443b
        lea eax, ss:[ebp-0x160]
        mov dword ptr ss : [ebp+0x68], eax
        lea eax, ss:[ebp-0x15C]
        sub eax, ebx
        mov dword ptr ss : [ebp+0x48], eax
        lea eax, ss:[ebp-0x14C]
        sub eax, ebx
        mov dword ptr ss : [ebp+0x1C], eax
        lea eax, ss:[ebp-0x12C]
        sub eax, ebx
        mov dword ptr ss : [ebp+0x20], eax
        lea esi, ss:[ebp-0x258]
        lea edi, ss:[ebp-0x11C]
        lea eax, ss:[ebp-0x10C]
        sub esi, ebx
        sub edi, ebx
        sub eax, ebx
        mov dword ptr ss : [ebp+0x7C], edx
        lea ecx, ds:[ebx+4]
        mov dword ptr ss : [ebp+0x24], eax
        public_6d453cb : nop
        cmp dword ptr ss : [ebp+0x64], 3
        jne public_6d453ef
        fld dword ptr ds : [ecx+8]
        fcomp dword ptr ds : [public_6d5f1fc]
        fnstsw ax
        test ah, 5
        jp public_6d453ef
        shr edx, 2
        or edx, 0xC0000000
        jmp public_6d4559d
        public_6d453ef : nop
        fld dword ptr ds : [public_6d6d3e0]
        mov eax, dword ptr ss : [ebp+0x68]
        fmul dword ptr ds : [ecx-4]
        fadd dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0x34]
        fstp dword ptr ss : [ebp+0x28]
        fld dword ptr ds : [public_6d6d3e4]
        fmul dword ptr ds : [ecx]
        fadd dword ptr ds : [ecx+eax]
        mov eax, dword ptr ss : [ebp+0x48]
        fstp dword ptr ss : [ebp+0x2C]
        fld dword ptr ds : [public_6d6d3e8]
        fmul dword ptr ds : [ecx+4]
        fadd dword ptr ds : [eax+ecx]
        fstp dword ptr ss : [ebp+0x30]
        fld dword ptr ss : [ebp+0x28]
        fsub dword ptr ss : [ebp-0x28]
        fmul dword ptr ss : [ebp+0x54]
        fld dword ptr ss : [ebp+0x30]
        fsub dword ptr ss : [ebp-0x20]
        fmul dword ptr ss : [ebp+0x5C]
        faddp 
        fld dword ptr ss : [ebp+0x2C]
        fsub dword ptr ss : [ebp-0x24]
        fmul dword ptr ss : [ebp+0x58]
        faddp 
        fcom dword ptr ds : [public_6d5e48c]
        fnstsw ax
        test ah, 0x41
        jp public_6d45455
        fstp st(0)
        xor eax, eax
        jmp public_6d4547e
        public_6d45455 : nop
        fcom dword ptr ss : [ebp+0x6C]
        fnstsw ax
        test ah, 1
        jne public_6d45466
        xor eax, eax
        fstp st(0)
        inc eax
        jmp public_6d4547e
        public_6d45466 : nop
        fadd dword ptr ds : [public_6d5f1fc]
        fstp dword ptr ss : [ebp+0x4C]
        fld dword ptr ss : [ebp+0x4C]
        fistp dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [ebp+0x18]
        mov ebx, dword ptr ss : [ebp+0x50]
        mov eax, dword ptr ds : [ebx+eax*4]
        public_6d4547e : nop
        fld dword ptr ss : [ebp+0x28]
        mov ebx, eax
        shl eax, 4
        fsub dword ptr ss : [ebp+eax-0x28]
        shl ebx, 0x1E
        shr edx, 2
        or edx, ebx
        mov ebx, dword ptr ss : [ebp+0x7C]
        fmul dword ptr ds : [esi+ecx]
        fld dword ptr ss : [ebp+0x2C]
        and ebx, 3
        cmp ebx, 3
        fsub dword ptr ss : [ebp+eax-0x24]
        fmul dword ptr ds : [esi+ecx]
        fst dword ptr ss : [ebp+0x3C]
        fld dword ptr ss : [ebp+0x30]
        fsub dword ptr ss : [ebp+eax-0x20]
        fmul dword ptr ds : [esi+ecx]
        fstp dword ptr ss : [ebp+0x40]
        je public_6d454ee
        mov eax, dword ptr ss : [ebp-0x44]
        fld st(1)
        fmul dword ptr ds : [public_6d6112c]
        add eax, ecx
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0x4C]
        fld dword ptr ds : [public_6d6112c]
        add eax, ecx
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+0x1C]
        fld dword ptr ss : [ebp+0x40]
        add eax, ecx
        fmul dword ptr ds : [public_6d6112c]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        public_6d454ee : nop
        cmp dword ptr ss : [ebp+0x7C], 0xC
        jae public_6d45599
        test ebx, ebx
        je public_6d45530
        mov eax, dword ptr ss : [ebp-0x40]
        fld st(1)
        fmul dword ptr ds : [public_6d61128]
        add eax, ecx
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0x38]
        fld dword ptr ds : [public_6d61128]
        add eax, ecx
        fmul st, st(1)
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+0x20]
        fld dword ptr ss : [ebp+0x40]
        add eax, ecx
        fmul dword ptr ds : [public_6d61128]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        public_6d45530 : nop
        mov eax, dword ptr ss : [ebp-0x48]
        fld st(1)
        fmul dword ptr ds : [public_6d61124]
        add eax, ecx
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0x30]
        add eax, ecx
        cmp ebx, 3
        fmul dword ptr ds : [public_6d61124]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [ebp+0x40]
        fmul dword ptr ds : [public_6d61124]
        fadd dword ptr ds : [edi+ecx]
        fstp dword ptr ds : [edi+ecx]
        je public_6d4559b
        fmul dword ptr ds : [public_6d5f638]
        mov eax, dword ptr ss : [ebp-0x2C]
        add eax, ecx
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp-0x3C]
        fld dword ptr ss : [ebp+0x3C]
        add eax, ecx
        fmul dword ptr ds : [public_6d5f638]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        mov eax, dword ptr ss : [ebp+0x24]
        fld dword ptr ss : [ebp+0x40]
        add eax, ecx
        fmul dword ptr ds : [public_6d5f638]
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        jmp public_6d4559d
        public_6d45599 : nop
        fstp st(0)
        public_6d4559b : nop
        fstp st(0)
        public_6d4559d : nop
        inc dword ptr ss : [ebp+0x7C]
        add dword ptr ss : [ebp+0x68], 0x10
        add ecx, 0x10
        cmp dword ptr ss : [ebp+0x7C], 0x10
        jb public_6d453cb
        mov eax, dword ptr ds : [public_6d73504]
        mov dword ptr ss : [ebp+0x7C], eax
        fldcw word ptr ss : [ebp+0x7C]
        mov eax, dword ptr ss : [ebp+0x78]
        mov dword ptr ds : [eax+4], edx
        public_6d455c2 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add ebp, 0x70
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d44dc8)
    }
}

#undef public_6d44de7
#undef public_6d44df7
#undef public_6d44e17
#undef public_6d44e25
#undef public_6d44e2c
#undef public_6d44ee7
#undef public_6d44eea
#undef public_6d44ff1
#undef public_6d45032
#undef public_6d450a0
#undef public_6d450a4
#undef public_6d450a6
#undef public_6d45189
#undef public_6d45211
#undef public_6d45225
#undef public_6d45289
#undef public_6d4530f
#undef public_6d4532e
#undef public_6d45352
#undef public_6d45354
#undef public_6d453cb
#undef public_6d453ef
#undef public_6d45455
#undef public_6d45466
#undef public_6d4547e
#undef public_6d454ee
#undef public_6d45530
#undef public_6d45599
#undef public_6d4559b
#undef public_6d4559d
#undef public_6d455c2
