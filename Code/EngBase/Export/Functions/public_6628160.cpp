#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66171d0);
CLANG_FORWARD_PROC_SYMBOL(public_661e620);
CLANG_FORWARD_PROC_SYMBOL(public_6621d90);
CLANG_FORWARD_PROC_SYMBOL(public_6626e00);
CLANG_FORWARD_PROC_SYMBOL(public_6628160);

#define public_6628186 _public_6628186

PROC_DECLARE(0x6628160, internal_6628160, public_6628160);
extern "C" NAKED register_t __cdecl internal_6628160()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        jne public_6628186
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6629014]
        call public_66171d0
        call public_661e620
        call public_6626e00
        call public_6621d90
        public_6628186 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6628160)
    }
}

#undef public_6628186
