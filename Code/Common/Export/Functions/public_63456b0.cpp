#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343fb0);
CLANG_FORWARD_PROC_SYMBOL(public_63456b0);
CLANG_FORWARD_PROC_SYMBOL(public_6345820);

#define public_63456c6 _public_63456c6
#define public_63456dd _public_63456dd

PROC_DECLARE(0x63456b0, internal_63456b0, public_63456b0);
extern "C" NAKED register_t __cdecl internal_63456b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov dword ptr ds : [esi], offset public_63a5450
        je public_63456c6
        push esi
        call public_6345820
        public_63456c6 : nop
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_63456dd
        push eax
        call public_6343fb0
        add esp, 4
        mov dword ptr ds : [esi+0x14], 0
        public_63456dd : nop
        mov dword ptr ds : [esi+0x18], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x63456b0)
    }
}

#undef public_63456c6
#undef public_63456dd
