#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623fb50);

#define public_623fb72 _public_623fb72

PROC_DECLARE(0x623fb50, internal_623fb50, public_623fb50);
extern "C" NAKED register_t __cdecl internal_623fb50()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xE13A59A1
        jne public_623fb72
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x24]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_623fb72 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x623fb50)
    }
}

#undef public_623fb72
