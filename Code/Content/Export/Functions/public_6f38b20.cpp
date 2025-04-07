#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f38b20);

#define public_6f38b31 _public_6f38b31
#define public_6f38b46 _public_6f38b46

PROC_DECLARE(0x6f38b20, internal_6f38b20, public_6f38b20);
extern "C" NAKED register_t __cdecl internal_6f38b20()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6f38b46
        push esi
        public_6f38b31 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], esi
        add ecx, 8
        add eax, 8
        cmp ecx, edx
        jne public_6f38b31
        pop esi
        public_6f38b46 : nop
        ret 
        UNREACHABLE_TRAP(0x6f38b20)
    }
}

#undef public_6f38b31
#undef public_6f38b46
