#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401300);
CLANG_FORWARD_PROC_SYMBOL(public_536020);

#define public_401320 _public_401320
#define public_40133a _public_40133a
#define public_40133f _public_40133f
#define public_401374 _public_401374

PROC_DECLARE(0x401300, internal_401300, public_401300);
extern "C" NAKED register_t __cdecl internal_401300()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        or edi, 0xFFFFFFFF
        cmp esi, 0xFFFFFFFF
        je public_40133a
        mov ecx, dword ptr ds : [public_616444]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0xC], eax
        je public_40133a
        mov edi, edi
        public_401320 : nop
        cmp dword ptr ds : [eax+0x14], esi
        je public_40133f
        lea ecx, ss:[esp+0xC]
        call public_536020
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [public_616444]
        jne public_401320
        public_40133a : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        public_40133f : nop
        mov ecx, dword ptr ds : [eax+0x10]
        add eax, 0x10
        dec ecx
        mov dword ptr ds : [eax], ecx
        mov esi, ecx
        je public_401374
        test esi, esi
        jge public_401374
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        push edx
        push 0x7D
/*FIXUP push offset public_5c735c @0x40135a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c735c
        mov eax, 0x100001
/*FIXUP push offset public_5c7394 @0x401364*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c7394
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_401374 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x401300)
    }
}

#undef public_401320
#undef public_40133a
#undef public_40133f
#undef public_401374
