#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed03d0);

#define public_6ed03e0 _public_6ed03e0
#define public_6ed03f2 _public_6ed03f2

PROC_DECLARE(0x6ed03d0, internal_6ed03d0, public_6ed03d0);
extern "C" NAKED register_t __cdecl internal_6ed03d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp esi, edi
        je public_6ed03f2
        mov edi, edi
        public_6ed03e0 : nop
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax]
        add esi, 0x88
        cmp esi, edi
        jne public_6ed03e0
        public_6ed03f2 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6ed03d0)
    }
}

#undef public_6ed03e0
#undef public_6ed03f2
