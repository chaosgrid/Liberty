#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb1e94 _public_6eb1e94
#define public_6eb1ea4 _public_6eb1ea4

PROC_DECLARE(0x6eb1e80, internal_6eb1e80, public_6eb1e80);
extern "C" NAKED register_t __cdecl internal_6eb1e80()
{
    __asm
    {
        push 0x38
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6eb1e94
        mov ecx, eax
        public_6eb1e94 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6eb1ea4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6eb1ea4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6eb1e80)
    }
}

#undef public_6eb1e94
#undef public_6eb1ea4
