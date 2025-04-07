#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0440);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed0454 _public_6ed0454
#define public_6ed0464 _public_6ed0464

PROC_DECLARE(0x6ed0440, internal_6ed0440, public_6ed0440);
extern "C" NAKED register_t __cdecl internal_6ed0440()
{
    __asm
    {
        push 0x3C
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6ed0454
        mov ecx, eax
        public_6ed0454 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6ed0464
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6ed0464 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6ed0440)
    }
}

#undef public_6ed0454
#undef public_6ed0464
