#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_402d30);
CLANG_FORWARD_PROC_SYMBOL(public_402e30);
CLANG_FORWARD_PROC_SYMBOL(public_403ea0);
CLANG_FORWARD_PROC_SYMBOL(public_4d5410);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);
CLANG_FORWARD_JUMP_SYMBOL(public_5be098);

#define public_4d552c _public_4d552c
#define public_4d5540 _public_4d5540
#define public_4d5582 _public_4d5582
#define public_4d5595 _public_4d5595
#define public_4d562a _public_4d562a
#define public_4d563c _public_4d563c

PROC_DECLARE(0x4d5410, internal_4d5410, public_4d5410);
extern "C" NAKED register_t __cdecl internal_4d5410()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5be098 @0x4d5412*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5be098
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        fild dword ptr ds : [public_610854]
        push ebx
        push ebp
        push esi
        fmul qword ptr ds : [public_5d7e68]
        push edi
        fstp dword ptr ss : [esp+0x24]
        fild dword ptr ds : [public_610850]
        fmul qword ptr ds : [public_5d7e60]
        fmul qword ptr ds : [public_5d7e58]
        call public_5b7ec0
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        shl eax, 4
        mov dword ptr ss : [esp+0x10], eax
        push ecx
        fst qword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], esp
        fmul qword ptr ds : [public_5d7e50]
        mov esi, esp
/*FIXUP push offset public_5d7e40 @0x4d5473*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d7e40
        fstp dword ptr ss : [esp+0x28]
        fild dword ptr ss : [esp+0x18]
        fst dword ptr ss : [esp+0x18]
        fmul qword ptr ds : [public_5c75e8]
        fstp dword ptr ss : [esp+0x24]
        call dword ptr ds : [public_5c6d14]
        add esp, 4
        mov dword ptr ds : [esi], eax
        call public_402d30
        push 0
        push 0
/*FIXUP push offset public_6101d8 @0x4d54a2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6101d8
        call public_402e30
        mov ebp, eax
        mov eax, dword ptr ds : [public_610850]
        cdq 
        sub eax, edx
        sar eax, 1
        mov dword ptr ss : [esp+0x28], eax
        add esp, 0x10
        fild dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x1C]
        fld qword ptr ss : [esp+0x28]
        fmul qword ptr ds : [public_5c75e8]
        faddp 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x54]
        fmul qword ptr ds : [public_5d7e38]
        fimul dword ptr ds : [public_610854]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x24]
        fadd st(0), st
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x54]
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ss : [esp+0x54]
        fnstsw ax
        test ah, 0x41
        jne public_4d552c
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x30], eax
        public_4d552c : nop
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], 0
        fstp dword ptr ss : [esp+0x5C]
        lea esp, ss:[esp]
        public_4d5540 : nop
        mov ebx, dword ptr ss : [ebp+0xC]
        mov ecx, dword ptr ss : [ebp+0x10]
        lea eax, ds:[ebx+1]
        cmp eax, ecx
        mov dword ptr ss : [ebp+0xC], eax
        jle public_4d5595
        add eax, 0x20
        mov dword ptr ss : [ebp+0x10], eax
        imul eax, 0x2C
        push eax
        call public_5b7e84
        mov esi, dword ptr ss : [ebp+8]
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x24], eax
        je public_4d5582
        mov ecx, ebx
        imul ecx, 0x2C
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_4d5582 : nop
        mov eax, dword ptr ss : [ebp+8]
        push eax
        call public_5b7e1d
        mov eax, dword ptr ss : [esp+0x28]
        add esp, 4
        mov dword ptr ss : [ebp+8], eax
        public_4d5595 : nop
        mov eax, dword ptr ss : [ebp+8]
        imul ebx, 0x2C
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        add ebx, eax
        mov eax, ebx
        fst dword ptr ss : [esp+0x28]
        fcomp dword ptr ss : [esp+0x54]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [ecx+0xC], edx
        mov ecx, 0x3F800000
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], ecx
        mov edx, dword ptr ds : [public_6101dc]
        lea ecx, ds:[eax+0x18]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [public_6101e0]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [public_6101e4]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [public_6101e8]
        mov dword ptr ds : [ecx+0xC], edx
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [eax+0x28], ecx
        fnstsw ax
        test ah, 0x41
        je public_4d563c
        fld dword ptr ss : [esp+0x5C]
        fadd dword ptr ss : [esp+0x30]
        fst dword ptr ss : [esp+0x30]
        fcomp dword ptr ss : [esp+0x54]
        fnstsw ax
        test ah, 0x41
        jne public_4d562a
        mov edx, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x30], edx
        public_4d562a : nop
        mov eax, dword ptr ss : [esp+0x10]
        inc eax
        cmp eax, 0x10
        mov dword ptr ss : [esp+0x10], eax
        jl public_4d5540
        public_4d563c : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        push 0x17
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], 0x17
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [eax]
        push 8
        push edx
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov eax, dword ptr ds : [public_674980]
        mov ecx, dword ptr ds : [public_5c6de0]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        mov dword ptr ss : [esp+0x54], 0
        call public_403ea0
        mov edx, dword ptr ss : [esp+0x48]
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push edx
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        push eax
        mov dword ptr ss : [esp+0x58], 0xFFFFFFFF
        call dword ptr ds : [ecx+0xF0]
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x4d5410)
    }
}

#undef public_4d552c
#undef public_4d5540
#undef public_4d5582
#undef public_4d5595
#undef public_4d562a
#undef public_4d563c
