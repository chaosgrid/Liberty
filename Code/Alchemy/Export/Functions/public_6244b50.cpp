#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6244b50);

#define public_6244b72 _public_6244b72

PROC_DECLARE(0x6244b50, internal_6244b50, public_6244b50);
extern "C" NAKED register_t __cdecl internal_6244b50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        cmp ecx, 0xFFFFFFFF
        je public_6244b72
        mov eax, dword ptr ds : [public_6257bbc]
        test eax, eax
        je public_6244b72
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x40]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_6244b72 : nop
        mov dword ptr ds : [esi], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6244b50)
    }
}

#undef public_6244b72
