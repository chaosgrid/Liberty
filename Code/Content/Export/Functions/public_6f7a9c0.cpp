#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7a9c0);

#define public_6f7a9d0 _public_6f7a9d0
#define public_6f7a9e2 _public_6f7a9e2

PROC_DECLARE(0x6f7a9c0, internal_6f7a9c0, public_6f7a9c0);
extern "C" NAKED register_t __cdecl internal_6f7a9c0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6f7a9e2
        mov edi, edi
        public_6f7a9d0 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax]
        add esi, 0x548
        cmp esi, edi
        jne public_6f7a9d0
        public_6f7a9e2 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f7a9c0)
    }
}

#undef public_6f7a9d0
#undef public_6f7a9e2
