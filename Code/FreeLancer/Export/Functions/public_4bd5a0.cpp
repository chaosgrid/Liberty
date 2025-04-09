#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4bd5a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4bd5b4 _public_4bd5b4
#define public_4bd5c4 _public_4bd5c4

PROC_DECLARE(0x4bd5a0, internal_4bd5a0, public_4bd5a0);
extern "C" NAKED register_t __cdecl internal_4bd5a0()
{
    __asm
    {
        push 0x20
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_4bd5b4
        mov ecx, eax
        public_4bd5b4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_4bd5c4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_4bd5c4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x4bd5a0)
    }
}

#undef public_4bd5b4
#undef public_4bd5c4
