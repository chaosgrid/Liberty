#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e670);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1e684 _public_6f1e684
#define public_6f1e694 _public_6f1e694

PROC_DECLARE(0x6f1e670, internal_6f1e670, public_6f1e670);
extern "C" NAKED register_t __cdecl internal_6f1e670()
{
    __asm
    {
        push 0x50
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6f1e684
        mov ecx, eax
        public_6f1e684 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6f1e694
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6f1e694 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6f1e670)
    }
}

#undef public_6f1e684
#undef public_6f1e694
