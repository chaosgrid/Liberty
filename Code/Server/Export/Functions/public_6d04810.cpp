#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04810);

#define public_6d0482b _public_6d0482b

PROC_DECLARE(0x6d04810, internal_6d04810, public_6d04810);
extern "C" NAKED register_t __cdecl internal_6d04810()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        mov dword ptr ds : [esi], ecx
        je public_6d0482b
        call dword ptr ds : [public_6d64624]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x44]
        mov dword ptr ds : [esi+0x18], ecx
        public_6d0482b : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d04810)
    }
}

#undef public_6d0482b
