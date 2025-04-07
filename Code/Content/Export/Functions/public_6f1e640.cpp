#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1e654 _public_6f1e654
#define public_6f1e664 _public_6f1e664

PROC_DECLARE(0x6f1e640, internal_6f1e640, public_6f1e640);
extern "C" NAKED register_t __cdecl internal_6f1e640()
{
    __asm
    {
        push 0x20
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6f1e654
        mov ecx, eax
        public_6f1e654 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6f1e664
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6f1e664 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6f1e640)
    }
}

#undef public_6f1e654
#undef public_6f1e664
