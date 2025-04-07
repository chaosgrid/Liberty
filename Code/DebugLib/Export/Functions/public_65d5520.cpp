#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d5520);
CLANG_FORWARD_PROC_SYMBOL(public_65d6c4c);

#define public_65d5531 _public_65d5531

PROC_DECLARE(0x65d5520, internal_65d5520, public_65d5520);
extern "C" NAKED register_t __cdecl internal_65d5520()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        cmp eax, 0xFFFFFFFF
        je public_65d5531
        push eax
        call public_65d6c4c
        public_65d5531 : nop
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65d5520)
    }
}

#undef public_65d5531
