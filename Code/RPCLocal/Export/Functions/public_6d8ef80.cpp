#include "RPCLocal-PCH.h"


#define public_6d8efaa _public_6d8efaa

PROC_DECLARE(0x6d8ef80, internal_6d8ef80, public_6d8ef80);
extern "C" NAKED register_t __cdecl internal_6d8ef80()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6dbbd0c]
        mov eax, dword ptr ds : [ecx]
        push esi
        call dword ptr ds : [eax+0x3C]
        mov eax, dword ptr ds : [public_6dbbd14]
        xor esi, esi
        cmp eax, esi
        je public_6d8efaa
        push eax
        call dword ptr ds : [public_6db3138]
        mov dword ptr ds : [public_6dbbd14], esi
        mov dword ptr ds : [public_6dbbd10], esi
        public_6d8efaa : nop
        mov dword ptr ds : [public_6dbbd0c], esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d8ef80)
    }
}

#undef public_6d8efaa
