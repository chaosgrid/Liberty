#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d64c0);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f71);

#define public_65d64d4 _public_65d64d4
#define public_65d64e4 _public_65d64e4

PROC_DECLARE(0x65d64c0, internal_65d64c0, public_65d64c0);
extern "C" NAKED register_t __cdecl internal_65d64c0()
{
    __asm
    {
        push 0xC
        call public_65d6f71
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_65d64d4
        mov ecx, eax
        public_65d64d4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_65d64e4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_65d64e4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x65d64c0)
    }
}

#undef public_65d64d4
#undef public_65d64e4
