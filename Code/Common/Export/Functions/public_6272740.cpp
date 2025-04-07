#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272740);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6272754 _public_6272754
#define public_6272764 _public_6272764

PROC_DECLARE(0x6272740, internal_6272740, public_6272740);
extern "C" NAKED register_t __cdecl internal_6272740()
{
    __asm
    {
        push 0x10
        call public_6391d9c
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6272754
        mov ecx, eax
        public_6272754 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6272764
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6272764 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6272740)
    }
}

#undef public_6272754
#undef public_6272764
