#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae650);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eae664 _public_6eae664
#define public_6eae674 _public_6eae674

PROC_DECLARE(0x6eae650, internal_6eae650, public_6eae650);
extern "C" NAKED register_t __cdecl internal_6eae650()
{
    __asm
    {
        push 0x64
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6eae664
        mov ecx, eax
        public_6eae664 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6eae674
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6eae674 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6eae650)
    }
}

#undef public_6eae664
#undef public_6eae674
