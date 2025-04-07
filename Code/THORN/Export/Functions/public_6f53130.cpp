#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f53130);
CLANG_FORWARD_PROC_SYMBOL(public_6f53160);

#define public_6f53148 _public_6f53148

PROC_DECLARE(0x6f53130, internal_6f53130, public_6f53130);
extern "C" NAKED register_t __cdecl internal_6f53130()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], eax
        je public_6f53148
        push eax
        push esi
        call public_6f53160
        add esp, 8
        public_6f53148 : nop
        push esi
        call public_6f52920
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f53130)
    }
}

#undef public_6f53148
