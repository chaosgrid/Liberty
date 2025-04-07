#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52ee0);

#define public_6f52efe _public_6f52efe
#define public_6f52f1a _public_6f52f1a

PROC_DECLARE(0x6f52ee0, internal_6f52ee0, public_6f52ee0);
extern "C" NAKED register_t __cdecl internal_6f52ee0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jle public_6f52efe
        mov edx, dword ptr ss : [esp+4]
        mov ecx, eax
        neg ecx
        push ecx
        push eax
        push 5
        push edx
        call public_6f52dd0
        add esp, 0x10
        ret 
        public_6f52efe : nop
        jge public_6f52f1a
        mov ecx, eax
        neg ecx
        push ecx
        or edx, 0xFFFFFFFF
        sub edx, eax
        mov eax, dword ptr ss : [esp+8]
        push edx
        push 4
        push eax
        call public_6f52dd0
        add esp, 0x10
        public_6f52f1a : nop
        ret 
        UNREACHABLE_TRAP(0x6f52ee0)
    }
}

#undef public_6f52efe
#undef public_6f52f1a
