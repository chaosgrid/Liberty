#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecc4e0);

#define public_6ecd5f9 _public_6ecd5f9

PROC_DECLARE(0x6ecd5c0, internal_6ecd5c0, public_6ecd5c0);
extern "C" NAKED register_t __cdecl internal_6ecd5c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax+4]
        push esi
        lea edx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ss : [esp+8]
        push edx
        or esi, 0xFFFFFFFF
        call public_6ecc4e0
        test eax, eax
        je public_6ecd5f9
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        pop esi
        ret 0xC
        public_6ecd5f9 : nop
        mov eax, esi
        pop esi
        ret 0xC
        UNREACHABLE_TRAP(0x6ecd5c0)
    }
}

#undef public_6ecd5f9
