#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f84030);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f84044 _public_6f84044
#define public_6f84054 _public_6f84054

PROC_DECLARE(0x6f84030, internal_6f84030, public_6f84030);
extern "C" NAKED register_t __cdecl internal_6f84030()
{
    __asm
    {
        push 0x1C
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6f84044
        mov ecx, eax
        public_6f84044 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6f84054
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6f84054 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6f84030)
    }
}

#undef public_6f84044
#undef public_6f84054
