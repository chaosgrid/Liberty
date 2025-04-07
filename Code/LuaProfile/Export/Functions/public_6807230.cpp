#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807230);
CLANG_FORWARD_PROC_SYMBOL(public_6807260);

#define public_6807248 _public_6807248

PROC_DECLARE(0x6807230, internal_6807230, public_6807230);
extern "C" NAKED register_t __cdecl internal_6807230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        cmp dword ptr ds : [esi+4], eax
        je public_6807248
        push eax
        push esi
        call public_6807260
        add esp, 8
        public_6807248 : nop
        push esi
        call public_6806a20
        add esp, 4
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807230)
    }
}

#undef public_6807248
