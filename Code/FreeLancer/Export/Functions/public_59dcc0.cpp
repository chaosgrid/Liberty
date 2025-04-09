#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40fb80);
CLANG_FORWARD_PROC_SYMBOL(public_59dcc0);

PROC_DECLARE(0x59dcc0, internal_59dcc0, public_59dcc0);
extern "C" NAKED register_t __cdecl internal_59dcc0()
{
    __asm
    {
        sub esp, 0x10
        mov ecx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov dword ptr ss : [esp], eax
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ss : [esp+0x14]
        dec eax
        dec ecx
        push 1
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        mov ecx, offset public_67dbf8
        mov dword ptr ss : [esp+0x10], eax
        call public_40fb80
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x59dcc0)
    }
}
