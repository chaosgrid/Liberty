#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27610);

#define public_6c27621 _public_6c27621
#define public_6c27630 _public_6c27630

PROC_DECLARE(0x6c27610, internal_6c27610, public_6c27610);
extern "C" NAKED register_t __cdecl internal_6c27610()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6c27630
        push esi
        public_6c27621 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6c27621
        pop esi
        public_6c27630 : nop
        ret 
        UNREACHABLE_TRAP(0x6c27610)
    }
}

#undef public_6c27621
#undef public_6c27630
