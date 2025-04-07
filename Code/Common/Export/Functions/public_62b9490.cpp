#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b9490);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_62b94a4 _public_62b94a4
#define public_62b94b4 _public_62b94b4

PROC_DECLARE(0x62b9490, internal_62b9490, public_62b9490);
extern "C" NAKED register_t __cdecl internal_62b9490()
{
    __asm
    {
        push 0xC
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_62b94a4
        mov ecx, eax
        public_62b94a4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_62b94b4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_62b94b4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x62b9490)
    }
}

#undef public_62b94a4
#undef public_62b94b4
