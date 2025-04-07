#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4a1e0);

#define public_6d4a1f9 _public_6d4a1f9

PROC_DECLARE(0x6d4a1e0, internal_6d4a1e0, public_6d4a1e0);
extern "C" NAKED register_t __cdecl internal_6d4a1e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6d647e8]
        test al, al
        je public_6d4a1f9
        mov cl, byte ptr ds : [esi+0x64]
        xor eax, eax
        test cl, cl
        setne al
        pop esi
        ret 
        public_6d4a1f9 : nop
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d4a1e0)
    }
}

#undef public_6d4a1f9
