#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282c70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6282c84 _public_6282c84
#define public_6282c94 _public_6282c94

PROC_DECLARE(0x6282c70, internal_6282c70, public_6282c70);
extern "C" NAKED register_t __cdecl internal_6282c70()
{
    __asm
    {
        push 0x14
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6282c84
        mov ecx, eax
        public_6282c84 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6282c94
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6282c94 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6282c70)
    }
}

#undef public_6282c84
#undef public_6282c94
