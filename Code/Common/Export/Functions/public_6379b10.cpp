#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6379b10);
CLANG_FORWARD_PROC_SYMBOL(public_6379ff0);

#define public_6379b2f _public_6379b2f
#define public_6379b46 _public_6379b46

PROC_DECLARE(0x6379b10, internal_6379b10, public_6379b10);
extern "C" NAKED register_t __cdecl internal_6379b10()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6379ff0
        mov eax, dword ptr ds : [esi+0x40]
        test eax, eax
        je public_6379b2f
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0x40], 0
        public_6379b2f : nop
        mov eax, dword ptr ds : [esi+0x38]
        test eax, eax
        je public_6379b46
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0x38], 0
        public_6379b46 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6379b10)
    }
}

#undef public_6379b2f
#undef public_6379b46
