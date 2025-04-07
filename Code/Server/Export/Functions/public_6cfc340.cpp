#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6cfc354 _public_6cfc354
#define public_6cfc364 _public_6cfc364

PROC_DECLARE(0x6cfc340, internal_6cfc340, public_6cfc340);
extern "C" NAKED register_t __cdecl internal_6cfc340()
{
    __asm
    {
        push 0xC
        call public_6d60012
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6cfc354
        mov ecx, eax
        public_6cfc354 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6cfc364
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6cfc364 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6cfc340)
    }
}

#undef public_6cfc354
#undef public_6cfc364
