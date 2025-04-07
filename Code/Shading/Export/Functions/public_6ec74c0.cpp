#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec74c0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec74d4 _public_6ec74d4
#define public_6ec74e4 _public_6ec74e4

PROC_DECLARE(0x6ec74c0, internal_6ec74c0, public_6ec74c0);
extern "C" NAKED register_t __cdecl internal_6ec74c0()
{
    __asm
    {
        push 0xC
        call public_6ed0c5c
        mov ecx, dword ptr ss : [esp+8]
        add esp, 4
        test ecx, ecx
        jne public_6ec74d4
        mov ecx, eax
        public_6ec74d4 : nop
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        je public_6ec74e4
        mov dword ptr ds : [eax+4], ecx
        ret 8
        public_6ec74e4 : nop
        mov dword ptr ds : [eax+4], eax
        ret 8
        UNREACHABLE_TRAP(0x6ec74c0)
    }
}

#undef public_6ec74d4
#undef public_6ec74e4
