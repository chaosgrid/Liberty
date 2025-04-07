#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623aaa0);

#define public_623aac5 _public_623aac5

PROC_DECLARE(0x623aaa0, internal_623aaa0, public_623aaa0);
extern "C" NAKED register_t __cdecl internal_623aaa0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xF52B8DD5
        jne public_623aac5
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x88]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_623aac5 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x623aaa0)
    }
}

#undef public_623aac5
