#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93c70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f93c7a _public_6f93c7a

PROC_DECLARE(0x6f93c70, internal_6f93c70, public_6f93c70);
extern "C" NAKED register_t __cdecl internal_6f93c70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        jge public_6f93c7a
        xor eax, eax
        public_6f93c7a : nop
        push eax
        call public_6fa912a
        add esp, 4
        ret 4
        UNREACHABLE_TRAP(0x6f93c70)
    }
}

#undef public_6f93c7a
