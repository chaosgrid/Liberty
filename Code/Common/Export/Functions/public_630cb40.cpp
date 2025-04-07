#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630cb40);

#define public_630cb51 _public_630cb51
#define public_630cb60 _public_630cb60

PROC_DECLARE(0x630cb40, internal_630cb40, public_630cb40);
extern "C" NAKED register_t __cdecl internal_630cb40()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_630cb60
        push esi
        public_630cb51 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_630cb51
        pop esi
        public_630cb60 : nop
        ret 
        UNREACHABLE_TRAP(0x630cb40)
    }
}

#undef public_630cb51
#undef public_630cb60
