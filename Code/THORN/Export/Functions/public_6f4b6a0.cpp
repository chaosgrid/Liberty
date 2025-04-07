#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4b140);
CLANG_FORWARD_PROC_SYMBOL(public_6f4b6a0);

#define public_6f4b6bb _public_6f4b6bb

PROC_DECLARE(0x6f4b6a0, internal_6f4b6a0, public_6f4b6a0);
extern "C" NAKED register_t __cdecl internal_6f4b6a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f4b140
        add esp, 4
        cmp eax, 0xFFFFFFF9
        jne public_6f4b6bb
        mov eax, dword ptr ds : [esi+8]
        add eax, 0x10
        pop esi
        ret 
        public_6f4b6bb : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4b6a0)
    }
}

#undef public_6f4b6bb
