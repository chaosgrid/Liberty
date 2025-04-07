#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68036d0);
CLANG_FORWARD_PROC_SYMBOL(public_6803ab0);

#define public_6803ac5 _public_6803ac5

PROC_DECLARE(0x6803ab0, internal_6803ab0, public_6803ab0);
extern "C" NAKED register_t __cdecl internal_6803ab0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_680e604]
        mov ecx, dword ptr ds : [eax+0x78]
        cmp ecx, dword ptr ds : [eax+0x74]
        jb public_6803ac5
        push 0
        call public_68036d0
        pop ecx
        public_6803ac5 : nop
        ret 
        UNREACHABLE_TRAP(0x6803ab0)
    }
}

#undef public_6803ac5
