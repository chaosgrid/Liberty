#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f41d0);
CLANG_FORWARD_PROC_SYMBOL(public_65f4580);
CLANG_FORWARD_PROC_SYMBOL(public_65f45a0);
CLANG_FORWARD_PROC_SYMBOL(public_65f45d0);
CLANG_FORWARD_PROC_SYMBOL(public_65f4de0);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb6);
CLANG_FORWARD_PROC_SYMBOL(public_6600de0);

#define public_65f41f0 _public_65f41f0
#define public_65f41f8 _public_65f41f8
#define public_65f4224 _public_65f4224
#define public_65f4240 _public_65f4240
#define public_65f42f3 _public_65f42f3
#define public_65f4301 _public_65f4301
#define public_65f432b _public_65f432b
#define public_65f432e _public_65f432e
#define public_65f43d6 _public_65f43d6
#define public_65f443d _public_65f443d
#define public_65f447d _public_65f447d
#define public_65f450b _public_65f450b
#define public_65f4526 _public_65f4526
#define public_65f4529 _public_65f4529
#define public_65f4553 _public_65f4553
#define public_65f456f _public_65f456f

PROC_DECLARE(0x65f41d0, internal_65f41d0, public_65f41d0);
extern "C" NAKED register_t __cdecl internal_65f41d0()
{
    __asm
    {
        sub esp, 0xAC
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        or esi, 0xFFFFFFFF
        call public_65f4de0
        mov eax, dword ptr ss : [ebp+8]
        test eax, eax
        jne public_65f41f0
        or eax, 0xFFFFFFFF
        jmp public_65f41f8
        public_65f41f0 : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx+4]
        public_65f41f8 : nop
        mov edx, dword ptr ss : [esp+0xE0]
        test edx, edx
        mov ecx, dword ptr ds : [public_6603138]
        je public_65f4224
        mov edi, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0xC8]
        push ebp
        push edx
        push eax
        mov eax, dword ptr ss : [esp+0xD0]
        push eax
        push ecx
        call dword ptr ds : [edi+0x24]
        jmp public_65f4240
        public_65f4224 : nop
        mov edi, dword ptr ss : [ebp+0x1C]
        mov edx, dword ptr ds : [ecx]
        push edi
        mov edi, dword ptr ss : [esp+0xC8]
        push ebp
        push edi
        push eax
        mov eax, dword ptr ss : [esp+0xD0]
        push eax
        push ecx
        call dword ptr ds : [edx+0x24]
        public_65f4240 : nop
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_65f456f
        fld dword ptr ss : [esp+0xC8]
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx]
        fcomp dword ptr ds : [public_6601318]
        mov esi, dword ptr ds : [edx+4]
        add esi, 0x30
        mov dword ptr ss : [esp+0x14], 0
        fnstsw ax
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        test ah, 0x41
        jne public_65f4301
        mov eax, dword ptr ds : [public_6603138]
        lea edx, ss:[esp+0x10]
        push edx
/*FIXUP push offset public_66026cc @0x65f428c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66026cc
        mov dword ptr ss : [esp+0x18], 0
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx]
        test eax, eax
        jne public_65f42f3
        mov edx, dword ptr ss : [esp+0xD4]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax]
        push 0x3F800000
        push edx
        mov edx, dword ptr ss : [esp+0xD4]
        push edx
        mov edx, dword ptr ss : [esp+0xDC]
        push edx
        mov edx, dword ptr ss : [esp+0xD8]
        push edx
        mov edx, dword ptr ss : [esp+0xEC]
        push edx
        lea edx, ss:[esp+0x2C]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0xC]
        test al, al
        je public_65f42f3
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x14], 0
        public_65f42f3 : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_65f4301
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        public_65f4301 : nop
        mov eax, dword ptr ds : [public_6603138]
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x48]
        push ecx
        mov ecx, dword ptr ss : [esp+0xC8]
        push ecx
        mov ecx, dword ptr ss : [esp+0xC8]
        push ecx
        push eax
        call dword ptr ds : [edx+0x64]
        test eax, eax
        je public_65f432b
        fld dword ptr ss : [esp+0x48]
        jmp public_65f432e
        public_65f432b : nop
        fld dword ptr ss : [ebp+0x24]
        public_65f432e : nop
        fadd dword ptr ss : [ebp+0x20]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi]
        fld dword ptr ds : [esi+8]
        fxch 
        fadd dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x50]
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0xDC]
        fcomp dword ptr ds : [public_6601318]
        fnstsw ax
        test ah, 5
        jp public_65f43d6
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax+0x2C]
        mov edx, dword ptr ds : [eax+0x20]
        add eax, 0xC
        mov eax, dword ptr ds : [eax+8]
        push ecx
        push edx
        push eax
        lea ecx, ss:[esp+0x38]
        call public_65f4580
        fld dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x34]
        push ecx
        fpatan 
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        fstp dword ptr ss : [esp]
        push ecx
        lea ecx, ss:[esp+0x60]
        call public_65f45d0
        mov edx, dword ptr ss : [esp+0x58]
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x38], edx
        mov edx, dword ptr ss : [esp+0x64]
        jmp public_65f443d
        public_65f43d6 : nop
        fld dword ptr ss : [esp+0xDC]
        push ecx
        fmul dword ptr ds : [public_6601328]
        lea eax, ss:[esp+0x24]
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x24], 0
        fld st(0)
        mov dword ptr ss : [esp+0x28], 0x3F800000
        fcos 
        mov dword ptr ss : [esp+0x2C], 0
        fstp dword ptr ss : [esp+0x5C]
        fsin 
        fld qword ptr ds : [public_6601320]
        fsqrt 
        fxch 
        fxch 
        fdivp 
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        call public_65f45a0
        mov esi, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x40]
        add esp, 0xC
        mov dword ptr ss : [esp+0x38], esi
        public_65f443d : nop
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x90], eax
        mov eax, dword ptr ds : [public_6603170]
        test eax, eax
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x8C], edx
        mov dword ptr ss : [esp+0x94], ecx
        jne public_65f447d
        call public_6600de0
        mov dword ptr ds : [public_6603170], eax
        public_65f447d : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        push ecx
        lea ecx, ss:[esp+0x9C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        mov eax, dword ptr ds : [public_6603138]
        mov ecx, 9
        lea esi, ss:[esp+0x98]
        lea edi, ss:[esp+0x68]
        rep movsd
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x68]
        push ecx
        mov ecx, dword ptr ss : [esp+0xD8]
        push 0x3F800000
        push ecx
        mov ecx, dword ptr ss : [esp+0xD8]
        push ecx
        mov ecx, dword ptr ss : [esp+0xE0]
        push ecx
        mov ecx, dword ptr ss : [esp+0xDC]
        push ecx
        mov ecx, dword ptr ss : [esp+0xF0]
        push ecx
        push ebx
        push eax
        call dword ptr ds : [edx+0x2C]
        test eax, eax
        jl public_65f4553
        push 0x14
        call public_6600bb6
        add esp, 4
        test eax, eax
        je public_65f450b
        mov byte ptr ds : [eax], 0
        mov dword ptr ds : [eax+4], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp+0x10]
        test ecx, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jne public_65f4526
        mov dword ptr ss : [ebp+0xC], eax
        jmp public_65f4529
        public_65f450b : nop
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], edx
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0xAC
        ret 0x24
        public_65f4526 : nop
        mov dword ptr ds : [ecx+0x10], eax
        public_65f4529 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+0xC], ecx
        mov dword ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ss : [ebp+0x14]
        pop edi
        inc ecx
        mov dword ptr ss : [ebp+0x14], ecx
        pop esi
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax+8], edx
        pop ebp
        mov eax, ebx
        pop ebx
        add esp, 0xAC
        ret 0x24
        public_65f4553 : nop
        mov eax, dword ptr ds : [public_6603138]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x28]
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0xAC
        ret 0x24
        public_65f456f : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xAC
        ret 0x24
        UNREACHABLE_TRAP(0x65f41d0)
    }
}

#undef public_65f41f0
#undef public_65f41f8
#undef public_65f4224
#undef public_65f4240
#undef public_65f42f3
#undef public_65f4301
#undef public_65f432b
#undef public_65f432e
#undef public_65f43d6
#undef public_65f443d
#undef public_65f447d
#undef public_65f450b
#undef public_65f4526
#undef public_65f4529
#undef public_65f4553
#undef public_65f456f
