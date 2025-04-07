#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26f70);

#define public_6c26f81 _public_6c26f81
#define public_6c26f89 _public_6c26f89
#define public_6c26f94 _public_6c26f94

PROC_DECLARE(0x6c26f70, internal_6c26f70, public_6c26f70);
extern "C" NAKED register_t __cdecl internal_6c26f70()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6c26f94
        push esi
        public_6c26f81 : nop
        test eax, eax
        je public_6c26f89
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6c26f89 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6c26f81
        pop esi
        public_6c26f94 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6c26f70)
    }
}

#undef public_6c26f81
#undef public_6c26f89
#undef public_6c26f94
