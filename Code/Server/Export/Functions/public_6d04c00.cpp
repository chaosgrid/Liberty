#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cee4a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d04c00);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6d04c27 _public_6d04c27

PROC_DECLARE(0x6d04c00, internal_6d04c00, public_6d04c00);
extern "C" NAKED register_t __cdecl internal_6d04c00()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x58]
        test eax, eax
        mov dword ptr ds : [esi-0xC], offset public_6d67894
        mov dword ptr ds : [esi-8], offset public_6d67814
        mov dword ptr ds : [esi], offset public_6d67808
        je public_6d04c27
        push eax
        call public_6d5ffb0
        add esp, 4
        public_6d04c27 : nop
        mov ecx, esi
        pop esi
        jmp public_6cee4a0
        UNREACHABLE_TRAP(0x6d04c00)
    }
}

#undef public_6d04c27
