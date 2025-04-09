#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c850);

PROC_DECLARE(0x41c850, internal_41c850, public_41c850);
extern "C" NAKED register_t __cdecl internal_41c850()
{
    __asm
    {
        push ecx
        mov ecx, dword ptr ss : [esp+8]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        push ecx
        mov dword ptr ss : [esp+0xC], 0xFFFFFFFF
        call dword ptr ds : [public_5c607c]
        mov edx, dword ptr ds : [public_5c6d38]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        lea edx, ss:[esp]
        push edx
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_5c6d38]
        mov edx, dword ptr ss : [esp]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x3F800000
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ds : [public_5c6d38]
        mov edx, dword ptr ss : [esp]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        lea eax, ss:[esp+8]
        push eax
        call dword ptr ds : [public_5c6074]
        mov eax, dword ptr ss : [esp+4]
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x41c850)
    }
}
