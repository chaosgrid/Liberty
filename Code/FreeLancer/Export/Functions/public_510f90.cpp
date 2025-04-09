#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425b30);
CLANG_FORWARD_PROC_SYMBOL(public_510f90);

#define public_511001 _public_511001

PROC_DECLARE(0x510f90, internal_510f90, public_510f90);
extern "C" NAKED register_t __cdecl internal_510f90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c6dd8]
        mov ecx, dword ptr ds : [eax]
        sub esp, 0x108
        push ecx
        lea edx, ss:[esp+8]
/*FIXUP push offset public_5db674 @0x510fa2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5db674
        push edx
        call dword ptr ds : [public_5c6068]
        mov eax, dword ptr ds : [public_5c6de0]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        test ecx, ecx
        je public_511001
        lea edx, ss:[esp]
        push edx
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        push 4
        push eax
        call dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 4
        push eax
        call dword ptr ds : [ecx+0x14]
        push 0
        lea edx, ss:[esp+8]
        push edx
        mov ecx, offset public_6750a0
        call public_425b30
        mov edx, dword ptr ss : [esp]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 4
        push eax
        call dword ptr ds : [ecx+0x14]
        public_511001 : nop
        add esp, 0x108
        ret 
        UNREACHABLE_TRAP(0x510f90)
    }
}

#undef public_511001
