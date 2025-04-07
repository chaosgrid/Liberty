#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6625340);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6625361 _public_6625361

PROC_DECLARE(0x6625340, internal_6625340, public_6625340);
extern "C" NAKED register_t __cdecl internal_6625340()
{
    __asm
    {
        mov eax, dword ptr ds : [public_662b19c]
        test eax, eax
        je public_6625361
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_662b19c], ecx
        mov ecx, dword ptr ds : [public_662b1a8]
        dec ecx
        mov dword ptr ds : [public_662b1a8], ecx
        ret 4
        public_6625361 : nop
        mov edx, dword ptr ss : [esp+4]
        push edx
        call public_66281dc
        add esp, 4
        ret 4
        UNREACHABLE_TRAP(0x6625340)
    }
}

#undef public_6625361
