#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d4cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62d4d04 _public_62d4d04
#define public_62d4d14 _public_62d4d14

PROC_DECLARE(0x62d4cf0, internal_62d4cf0, public_62d4cf0);
extern "C" NAKED register_t __cdecl internal_62d4cf0()
{
    __asm
    {
        push 0x24
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_62d4d04
        mov ecx, eax
        public_62d4d04 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_62d4d14
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_62d4d14 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x62d4cf0)
    }
}

#undef public_62d4d04
#undef public_62d4d14
