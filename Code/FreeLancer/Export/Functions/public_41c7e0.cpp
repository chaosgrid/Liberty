#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c7e0);

PROC_DECLARE(0x41c7e0, internal_41c7e0, public_41c7e0);
extern "C" NAKED register_t __cdecl internal_41c7e0()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
/*FIXUP push offset public_5c944c @0x41c7e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c944c
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        call dword ptr ds : [public_5c607c]
        mov edx, dword ptr ds : [public_5c6d4c]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        lea edx, ss:[esp]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [public_5c6074]
        mov eax, dword ptr ss : [esp+4]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x41c7e0)
    }
}
