#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea7ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6f00b60);
CLANG_FORWARD_PROC_SYMBOL(public_6f00b90);

#define public_6f00b80 _public_6f00b80

PROC_DECLARE(0x6f00b60, internal_6f00b60, public_6f00b60);
extern "C" NAKED register_t __cdecl internal_6f00b60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp dword ptr ds : [eax+0x20], 0xFFFFFFFF
        je public_6f00b80
        push esi
        lea esi, ds:[eax+8]
        push esi
        call public_6f00b90
        add esp, 4
        push eax
        mov ecx, esi
        call public_6ea7ce0
        pop esi
        public_6f00b80 : nop
        ret 
        UNREACHABLE_TRAP(0x6f00b60)
    }
}

#undef public_6f00b80
