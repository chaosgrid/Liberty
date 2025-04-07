#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b38680);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b38694 _public_6b38694
#define public_6b386a4 _public_6b386a4

PROC_DECLARE(0x6b38680, internal_6b38680, public_6b38680);
extern "C" NAKED register_t __cdecl internal_6b38680()
{
    __asm
    {
        push 0xC
        call public_6b6a134
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6b38694
        mov ecx, eax
        public_6b38694 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6b386a4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6b386a4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6b38680)
    }
}

#undef public_6b38694
#undef public_6b386a4
