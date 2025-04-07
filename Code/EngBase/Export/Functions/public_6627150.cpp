#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6627150);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_6627164 _public_6627164
#define public_6627174 _public_6627174

PROC_DECLARE(0x6627150, internal_6627150, public_6627150);
extern "C" NAKED register_t __cdecl internal_6627150()
{
    __asm
    {
        push 0x58
        call public_66281dc
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6627164
        mov ecx, eax
        public_6627164 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6627174
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6627174 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6627150)
    }
}

#undef public_6627164
#undef public_6627174
