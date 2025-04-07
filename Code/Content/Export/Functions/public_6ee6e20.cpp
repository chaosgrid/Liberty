#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f73a40);

#define public_6ee6e4e _public_6ee6e4e

PROC_DECLARE(0x6ee6e20, internal_6ee6e20, public_6ee6e20);
extern "C" NAKED register_t __cdecl internal_6ee6e20()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        je public_6ee6e4e
        mov eax, dword ptr ds : [esi+0x20]
        push eax
        call public_6f73930
        test eax, eax
        je public_6ee6e4e
        mov ecx, dword ptr ds : [esi+0x1C]
        push ecx
        mov ecx, dword ptr ds : [esi+0x18]
        call public_6f73a40
        test eax, eax
        je public_6ee6e4e
        mov eax, 1
        pop esi
        ret 
        public_6ee6e4e : nop
        xor eax, eax
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ee6e20)
    }
}

#undef public_6ee6e4e
