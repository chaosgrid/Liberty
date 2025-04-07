#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6323e20);

#define public_6323e3c _public_6323e3c

PROC_DECLARE(0x6323e20, internal_6323e20, public_6323e20);
extern "C" NAKED register_t __cdecl internal_6323e20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6401818]
        test eax, eax
        jne public_6323e3c
        push eax
        push 0x1000
        push 1
        call dword ptr ds : [public_63990d8]
        mov dword ptr ds : [public_6401818], eax
        public_6323e3c : nop
        mov ecx, dword ptr ss : [esp+4]
        push ecx
        push 1
        push eax
        call dword ptr ds : [public_63990dc]
        ret 4
        UNREACHABLE_TRAP(0x6323e20)
    }
}

#undef public_6323e3c
