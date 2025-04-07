#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d15290);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);

#define public_6d184cf _public_6d184cf

PROC_DECLARE(0x6d184b0, internal_6d184b0, public_6d184b0);
extern "C" NAKED register_t __cdecl internal_6d184b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi]
        cmp eax, 0xFFFFFFFF
        je public_6d184cf
        push eax
        call public_6d15650
        mov ecx, eax
        call public_6d15290
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_6d184cf : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d184b0)
    }
}

#undef public_6d184cf
