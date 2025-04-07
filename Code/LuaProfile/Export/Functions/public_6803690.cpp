#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6802fa0);
CLANG_FORWARD_PROC_SYMBOL(public_6803690);

#define public_68036a4 _public_68036a4
#define public_68036bb _public_68036bb
#define public_68036c1 _public_68036c1

PROC_DECLARE(0x6803690, internal_6803690, public_6803690);
extern "C" NAKED register_t __cdecl internal_6803690()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        test esi, esi
        mov dword ptr ss : [esp+4], 0
        je public_68036c1
        public_68036a4 : nop
        cmp dword ptr ds : [esi+0xC], 0xFFFFFFFF
        jne public_68036bb
        lea eax, ss:[esp+4]
        push eax
        mov dword ptr ss : [esp+0x10], esi
        call public_6802fa0
        add esp, 4
        public_68036bb : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        jne public_68036a4
        public_68036c1 : nop
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6803690)
    }
}

#undef public_68036a4
#undef public_68036bb
#undef public_68036c1
