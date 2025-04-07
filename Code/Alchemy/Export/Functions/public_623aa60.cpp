#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623aa60);

#define public_623aa82 _public_623aa82

PROC_DECLARE(0x623aa60, internal_623aa60, public_623aa60);
extern "C" NAKED register_t __cdecl internal_623aa60()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x48767E8
        jne public_623aa82
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x74]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_623aa82 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x623aa60)
    }
}

#undef public_623aa82
