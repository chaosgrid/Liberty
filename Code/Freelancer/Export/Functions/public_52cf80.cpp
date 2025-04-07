#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52cf80);

#define public_52cfae _public_52cfae
#define public_52cfbc _public_52cfbc

PROC_DECLARE(0x52cf80, internal_52cf80, public_52cf80);
extern "C" NAKED register_t __cdecl internal_52cf80()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        lea ecx, ss:[esp+4]
        call dword ptr ds : [public_5c6030]
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        pop esi
        je public_52cfbc
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x30]
        test eax, eax
        je public_52cfae
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ecx
        ret 4
        public_52cfae : nop
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp]
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 4
        public_52cfbc : nop
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp]
        mov dword ptr ds : [eax], edx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x52cf80)
    }
}

#undef public_52cfae
#undef public_52cfbc
