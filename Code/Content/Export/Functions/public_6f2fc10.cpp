#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2fc10);
CLANG_FORWARD_PROC_SYMBOL(public_6f302a0);

#define public_6f2fc23 _public_6f2fc23
#define public_6f2fc3f _public_6f2fc3f

PROC_DECLARE(0x6f2fc10, internal_6f2fc10, public_6f2fc10);
extern "C" NAKED register_t __cdecl internal_6f2fc10()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6f2fc3f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f2fc23 : nop
        push esi
        push edi
        call public_6f302a0
        add esi, 0x5C
        add esp, 8
        add edi, 0x5C
        cmp esi, ebx
        jne public_6f2fc23
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f2fc3f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f2fc10)
    }
}

#undef public_6f2fc23
#undef public_6f2fc3f
