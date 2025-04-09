#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_53f330);

#define public_56d32e _public_56d32e

PROC_DECLARE(0x56d310, internal_56d310, public_56d310);
extern "C" NAKED register_t __cdecl internal_56d310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xF
        jne public_56d32e
        mov dl, byte ptr ds : [ecx+0x90]
        test dl, dl
        jne public_56d32e
        mov eax, 1
        mov dword ptr ds : [ecx+0x34], eax
        ret 4
        public_56d32e : nop
        mov dword ptr ss : [esp+4], eax
        jmp public_53f330
        UNREACHABLE_TRAP(0x56d310)
    }
}

#undef public_56d32e
