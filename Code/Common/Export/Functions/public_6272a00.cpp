#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272a00);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);

#define public_6272a13 _public_6272a13
#define public_6272a2f _public_6272a2f

PROC_DECLARE(0x6272a00, internal_6272a00, public_6272a00);
extern "C" NAKED register_t __cdecl internal_6272a00()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6272a2f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6272a13 : nop
        push esi
        push edi
        call public_630cd00
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, ebx
        jne public_6272a13
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6272a2f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6272a00)
    }
}

#undef public_6272a13
#undef public_6272a2f
