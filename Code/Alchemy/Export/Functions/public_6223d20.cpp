#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6223d20);

#define public_6223d42 _public_6223d42

PROC_DECLARE(0x6223d20, internal_6223d20, public_6223d20);
extern "C" NAKED register_t __cdecl internal_6223d20()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0xE02B8BD4
        jne public_6223d42
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x50]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6223d42 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6223d20)
    }
}

#undef public_6223d42
