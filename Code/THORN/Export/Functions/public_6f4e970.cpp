#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4c990);
CLANG_FORWARD_PROC_SYMBOL(public_6f4e970);

#define public_6f4e984 _public_6f4e984
#define public_6f4e99b _public_6f4e99b

PROC_DECLARE(0x6f4e970, internal_6f4e970, public_6f4e970);
extern "C" NAKED register_t __cdecl internal_6f4e970()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        mov dword ptr ss : [esp+4], 0xFFFFFFFD
        je public_6f4e99b
        public_6f4e984 : nop
        lea eax, ss:[esp+4]
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_6f4c990
        mov esi, dword ptr ds : [esi]
        add esp, 4
        test esi, esi
        jne public_6f4e984
        public_6f4e99b : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f4e970)
    }
}

#undef public_6f4e984
#undef public_6f4e99b
