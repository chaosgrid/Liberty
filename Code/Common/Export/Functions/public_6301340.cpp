#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6301340);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6301354 _public_6301354
#define public_6301364 _public_6301364

PROC_DECLARE(0x6301340, internal_6301340, public_6301340);
extern "C" NAKED register_t __cdecl internal_6301340()
{
    __asm
    {
        push 0x18
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6301354
        mov ecx, eax
        public_6301354 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6301364
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6301364 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6301340)
    }
}

#undef public_6301354
#undef public_6301364
