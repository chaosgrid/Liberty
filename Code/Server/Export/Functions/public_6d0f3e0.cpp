#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d0f3e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d0f3f4 _public_6d0f3f4
#define public_6d0f404 _public_6d0f404

PROC_DECLARE(0x6d0f3e0, internal_6d0f3e0, public_6d0f3e0);
extern "C" NAKED register_t __cdecl internal_6d0f3e0()
{
    __asm
    {
        push 0x50
        call public_6d60012
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6d0f3f4
        mov ecx, eax
        public_6d0f3f4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6d0f404
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6d0f404 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6d0f3e0)
    }
}

#undef public_6d0f3f4
#undef public_6d0f404
