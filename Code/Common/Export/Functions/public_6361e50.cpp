#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6361e50);

#define public_6361e70 _public_6361e70

PROC_DECLARE(0x6361e50, internal_6361e50, public_6361e50);
extern "C" NAKED register_t __cdecl internal_6361e50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        mov dword ptr ds : [esi], offset public_63a57e8
        je public_6361e70
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+4], 0
        public_6361e70 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6361e50)
    }
}

#undef public_6361e70
