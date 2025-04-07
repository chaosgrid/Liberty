#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d04480);

#define public_6d03d50 _public_6d03d50
#define public_6d03d5e _public_6d03d5e

PROC_DECLARE(0x6d03d40, internal_6d03d40, public_6d03d40);
extern "C" NAKED register_t __cdecl internal_6d03d40()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6d03d5e
        nop 
        lea esp, ss:[esp]
        public_6d03d50 : nop
        mov ecx, dword ptr ds : [esi+8]
        call public_6d04480
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6d03d50
        public_6d03d5e : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d03d40)
    }
}

#undef public_6d03d50
#undef public_6d03d5e
