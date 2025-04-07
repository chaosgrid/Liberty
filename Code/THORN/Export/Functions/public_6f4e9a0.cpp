#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c990);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e9a0);

#define public_6f4e9b4 _public_6f4e9b4
#define public_6f4e9cb _public_6f4e9cb
#define public_6f4e9d1 _public_6f4e9d1

PROC_DECLARE(0x6f4e9a0, internal_6f4e9a0, public_6f4e9a0);
extern "C" NAKED register_t __cdecl internal_6f4e9a0()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        mov dword ptr ss : [esp+4], 0
        je public_6f4e9d1
        public_6f4e9b4 : nop
        cmp dword ptr ds : [esi+0xC], 0xFFFFFFFF
        jne public_6f4e9cb
        lea eax, ss:[esp+4]
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_6f4c990
        add esp, 4
        public_6f4e9cb : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_6f4e9b4
        public_6f4e9d1 : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4e9a0)
    }
}

#undef public_6f4e9b4
#undef public_6f4e9cb
#undef public_6f4e9d1
