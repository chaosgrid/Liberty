#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efe8a0);

#define public_6efe8c7 _public_6efe8c7
#define public_6efe8d1 _public_6efe8d1

PROC_DECLARE(0x6efe8a0, internal_6efe8a0, public_6efe8a0);
extern "C" NAKED register_t __cdecl internal_6efe8a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub eax, 0
        je public_6efe8c7
        dec eax
        jne public_6efe8d1
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call dword ptr ds : [public_6fb32a0]
        mov dword ptr ds : [public_6fcf3a4], esi
        pop esi
        mov eax, 1
        ret 0xC
        public_6efe8c7 : nop
        mov dword ptr ds : [public_6fcf3a4], 0
        public_6efe8d1 : nop
        mov eax, 1
        ret 0xC
        UNREACHABLE_TRAP(0x6efe8a0)
    }
}

#undef public_6efe8c7
#undef public_6efe8d1
