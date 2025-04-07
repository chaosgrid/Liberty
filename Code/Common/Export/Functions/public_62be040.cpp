#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63429f0);

#define public_62be051 _public_62be051
#define public_62be06b _public_62be06b

PROC_DECLARE(0x62be040, internal_62be040, public_62be040);
extern "C" NAKED register_t __cdecl internal_62be040()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+4], eax
        je public_62be06b
        public_62be051 : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0xC]
        lea ecx, ss:[esp+4]
        call public_63429f0
        mov eax, dword ptr ss : [esp+4]
        cmp eax, dword ptr ds : [esi+0x14]
        jne public_62be051
        public_62be06b : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x62be040)
    }
}

#undef public_62be051
#undef public_62be06b
