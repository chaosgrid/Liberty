#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c5d40);

#define public_65c5d57 _public_65c5d57

PROC_DECLARE(0x65c5d40, internal_65c5d40, public_65c5d40);
extern "C" NAKED register_t __cdecl internal_65c5d40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_65c5d57
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov dword ptr ds : [public_65ca2ac], eax
        call dword ptr ds : [public_65c704c]
        public_65c5d57 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x65c5d40)
    }
}

#undef public_65c5d57
