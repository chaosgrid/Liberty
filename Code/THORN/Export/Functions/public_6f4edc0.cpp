#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e9e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4edc0);

#define public_6f4edd5 _public_6f4edd5

PROC_DECLARE(0x6f4edc0, internal_6f4edc0, public_6f4edc0);
extern "C" NAKED register_t __cdecl internal_6f4edc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x78]
        cmp ecx, dword ptr ds : [eax+0x74]
        jb public_6f4edd5
        push 0
        call public_6f4e9e0
        pop ecx
        public_6f4edd5 : nop
        ret 
        UNREACHABLE_TRAP(0x6f4edc0)
    }
}

#undef public_6f4edd5
