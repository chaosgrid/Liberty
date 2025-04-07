#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1ed80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1ed94 _public_6f1ed94
#define public_6f1eda4 _public_6f1eda4

PROC_DECLARE(0x6f1ed80, internal_6f1ed80, public_6f1ed80);
extern "C" NAKED register_t __cdecl internal_6f1ed80()
{
    __asm
    {
        push 0x44
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6f1ed94
        mov ecx, eax
        public_6f1ed94 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6f1eda4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6f1eda4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6f1ed80)
    }
}

#undef public_6f1ed94
#undef public_6f1eda4
