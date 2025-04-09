#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d48f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4d4904 _public_4d4904
#define public_4d4914 _public_4d4914

PROC_DECLARE(0x4d48f0, internal_4d48f0, public_4d48f0);
extern "C" NAKED register_t __cdecl internal_4d48f0()
{
    __asm
    {
        push 0x24
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_4d4904
        mov ecx, eax
        public_4d4904 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_4d4914
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_4d4914 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x4d48f0)
    }
}

#undef public_4d4904
#undef public_4d4914
