#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f130);
CLANG_FORWARD_PROC_SYMBOL(public_428040);
CLANG_FORWARD_PROC_SYMBOL(public_428420);
CLANG_FORWARD_PROC_SYMBOL(public_42a810);
CLANG_FORWARD_PROC_SYMBOL(public_42a9a0);
CLANG_FORWARD_PROC_SYMBOL(public_42a9e0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3860);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_42809a _public_42809a
#define public_42810d _public_42810d
#define public_42811f _public_42811f
#define public_428160 _public_428160
#define public_4281f3 _public_4281f3
#define public_428224 _public_428224
#define public_42825a _public_42825a
#define public_42825e _public_42825e
#define public_428273 _public_428273
#define public_4282cd _public_4282cd
#define public_4282d4 _public_4282d4
#define public_4282df _public_4282df
#define public_4282ec _public_4282ec
#define public_42832e _public_42832e
#define public_428360 _public_428360
#define public_428374 _public_428374
#define public_428386 _public_428386
#define public_428390 _public_428390
#define public_4283a9 _public_4283a9
#define public_4283ae _public_4283ae
#define public_4283dc _public_4283dc
#define public_4283e4 _public_4283e4
#define public_428406 _public_428406
#define public_42840e _public_42840e

PROC_DECLARE(0x428040, internal_428040, public_428040);
extern "C" NAKED register_t __cdecl internal_428040()
{
    __asm
    {
        fld dword ptr ds : [public_610904]
        sub esp, 0xC
        fcomp dword ptr ds : [public_5c7474]
        mov dword ptr ds : [public_667cb8], 0
        fnstsw ax
        test ah, 5
        jnp public_42811f
        fld dword ptr ds : [public_610904]
        fsub dword ptr ss : [esp+0x14]
        fst dword ptr ds : [public_610904]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_42809a
        mov eax, dword ptr ds : [public_667ca0]
        mov dword ptr ds : [public_610904], 0xBF800000
        mov dword ptr ds : [public_667ca4], eax
        jmp public_42811f
        public_42809a : nop
        fld dword ptr ds : [public_667ca4]
        fmul dword ptr ds : [public_5c9cf4]
        fldl2e 
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        fld dword ptr ds : [public_667ca0]
        fmul dword ptr ds : [public_5c9cf4]
        fldl2e 
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        fsub st, st(1)
        fld dword ptr ds : [public_610904]
        fadd dword ptr ss : [esp+0x14]
        fdivr dword ptr ss : [esp+0x14]
        fmulp 
        faddp 
        fcom dword ptr ds : [public_5c9cf0]
        fnstsw ax
        test ah, 0x41
        jp public_42810d
        fstp st(0)
        mov dword ptr ds : [public_667ca4], 0xC2C00000
        jmp public_42811f
        public_42810d : nop
        fldlg2 
        fxch 
        fyl2x 
        fmul qword ptr ds : [public_5c9ce8]
        fstp dword ptr ds : [public_667ca4]
        public_42811f : nop
        mov cl, byte ptr ds : [public_667c68]
        mov al, 1
        test al, cl
        jne public_428160
        mov dl, cl
        or dl, al
/*FIXUP push offset _public_428420 @0x42812f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_428420
        mov byte ptr ds : [public_667c68], dl
        mov dword ptr ds : [public_667c5c], 0
        mov dword ptr ds : [public_667c60], 0
        mov dword ptr ds : [public_667c64], 0
        call public_5b7e6c
        add esp, 4
        public_428160 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        test esi, esi
        push edi
        je public_4281f3
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [public_667c5c], edx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [public_667c60], ecx
        mov edx, dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_5c6d44]
        mov dword ptr ds : [public_667c64], edx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_428224
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [eax]
        push esi
        call dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [public_5c6d44]
        push eax
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [edi+0x38]
        mov ecx, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
/*FIXUP push offset public_667c5c @0x4281bc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_667c5c
        push eax
        call dword ptr ds : [edx+0x3C]
        call public_40f130
        test eax, eax
        je public_428224
        mov ecx, dword ptr ds : [public_5c6d44]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+8]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x48]
        mov edx, dword ptr ds : [public_5c6d44]
        push eax
        mov eax, dword ptr ds : [edx]
        push eax
        call dword ptr ds : [esi+0x40]
        jmp public_428224
        public_4281f3 : nop
        mov eax, dword ptr ds : [public_5c6d44]
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        je public_428224
        lea edx, ss:[esp+8]
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x58]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_667c5c], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [public_667c60], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [public_667c64], eax
        public_428224 : nop
        push ebx
        push ebp
        mov ebx, 0x80
        push 0x2D
        mov dword ptr ss : [esp+0x24], ebx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_42825e
        call public_5b3860
        cmp eax, ebx
        jae public_4282cd
        cmp eax, 8
        mov ebx, eax
        mov dword ptr ss : [esp+0x20], ebx
        jge public_42825e
        mov ebx, 8
        public_42825a : nop
        mov dword ptr ss : [esp+0x20], ebx
        public_42825e : nop
        mov eax, dword ptr ds : [public_667c70]
        mov ecx, dword ptr ds : [eax]
        mov edi, eax
        cmp edi, ecx
        je public_4282ec
        mov ebp, dword ptr ss : [esp+0x24]
        public_428273 : nop
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [edx+0x70]
        test al, al
        jne public_4282df
        mov eax, dword ptr ds : [esi]
        push ebp
/*FIXUP push offset public_667c5c @0x428289*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_667c5c
        mov ecx, esi
        call dword ptr ds : [eax+0xA8]
        test al, al
        je public_4282df
        mov cl, byte ptr ds : [esi+0xC]
        test cl, 4
        je public_4282df
        fld dword ptr ds : [esi+0x28]
        fcomp dword ptr ds : [public_667c58]
        fnstsw ax
        test ah, 0x44
        mov eax, dword ptr ds : [public_667cb8]
        jnp public_4282d4
        cmp eax, 0x80
        jae public_4282d4
        mov dword ptr ds : [eax*4+public_667a58], esi
        inc eax
        mov dword ptr ds : [public_667cb8], eax
        jmp public_4282df
        public_4282cd : nop
        mov ebx, 0x80
        jmp public_42825a
        public_4282d4 : nop
        test cl, 8
        jne public_4282df
        mov ecx, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [ecx+0xC]
        public_4282df : nop
        mov eax, dword ptr ds : [public_667c70]
        cmp edi, dword ptr ds : [eax]
        jne public_428273
        mov ebx, dword ptr ss : [esp+0x20]
        public_4282ec : nop
        mov edx, dword ptr ds : [public_5c6d44]
        cmp dword ptr ds : [edx], 0
        je public_4283dc
        mov eax, dword ptr ds : [public_667cb8]
        lea edi, ds : [eax*4+public_667a58]
        mov ecx, edi
        sub ecx, offset public_667a58
        and ecx, 0xFFFFFFFC
        cmp ecx, 0x40
        push 0
        jg public_42832e
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push edi
/*FIXUP push offset public_667a58 @0x42831f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_667a58
        call public_42a9e0
        add esp, 0x10
        jmp public_428374
        public_42832e : nop
        mov ebp, dword ptr ss : [esp+0x28]
        push ebp
        push edi
/*FIXUP push offset public_667a58 @0x428334*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_667a58
        call public_42a810
        push 0
        push ebp
/*FIXUP push offset public_667a98 @0x428341*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_667a98
/*FIXUP push offset public_667a58 @0x428346*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_667a58
        call public_42a9e0
        mov esi, offset public_667a98
        add esp, 0x20
        cmp edi, esi
        je public_428374
        lea esp, ss:[esp]
        public_428360 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        push eax
        push esi
        call public_42a9a0
        add esi, 4
        add esp, 0xC
        cmp esi, edi
        jne public_428360
        public_428374 : nop
        mov ecx, dword ptr ds : [public_667cb8]
        cmp ecx, ebx
        jbe public_428386
        mov ecx, ebx
        mov dword ptr ds : [public_667cb8], ecx
        public_428386 : nop
        xor esi, esi
        test ecx, ecx
        jbe public_4283ae
        lea esp, ss:[esp]
        public_428390 : nop
        mov eax, dword ptr ds : [esi*4+public_667a58]
        test byte ptr ds : [eax+0xC], 8
        jne public_4283a9
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ds : [public_667cb8]
        public_4283a9 : nop
        inc esi
        cmp esi, ecx
        jb public_428390
        public_4283ae : nop
        mov edx, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [eax]
        push ecx
/*FIXUP push offset public_667a58 @0x4283b9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_667a58
        push eax
        call dword ptr ds : [edx+0x98]
        mov eax, dword ptr ds : [public_5c6d44]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [ecx+0xB8]
        mov eax, dword ptr ds : [public_667c70]
        public_4283dc : nop
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        pop ebp
        pop ebx
        je public_42840e
        public_4283e4 : nop
        mov esi, dword ptr ds : [edi+8]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov ecx, esi
        call dword ptr ds : [edx+0x70]
        test al, al
        jne public_428406
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x74]
        test al, al
        je public_428406
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        public_428406 : nop
        cmp edi, dword ptr ds : [public_667c70]
        jne public_4283e4
        public_42840e : nop
        pop edi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x428040)
    }
}

#undef public_42809a
#undef public_42810d
#undef public_42811f
#undef public_428160
#undef public_4281f3
#undef public_428224
#undef public_42825a
#undef public_42825e
#undef public_428273
#undef public_4282cd
#undef public_4282d4
#undef public_4282df
#undef public_4282ec
#undef public_42832e
#undef public_428360
#undef public_428374
#undef public_428386
#undef public_428390
#undef public_4283a9
#undef public_4283ae
#undef public_4283dc
#undef public_4283e4
#undef public_428406
#undef public_42840e
