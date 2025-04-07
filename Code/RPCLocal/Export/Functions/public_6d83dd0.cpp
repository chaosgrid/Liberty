#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d83de9 _public_6d83de9

PROC_DECLARE(0x6d83dd0, internal_6d83dd0, public_6d83dd0);
extern "C" NAKED register_t __cdecl internal_6d83dd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call dword ptr ds : [public_6db3098]
        test byte ptr ss : [esp+8], 1
        je public_6d83de9
        push esi
        call public_6db1dc2
        add esp, 4
        public_6d83de9 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d83dd0)
    }
}

#undef public_6d83de9
