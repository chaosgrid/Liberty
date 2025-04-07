#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8060);
CLANG_FORWARD_PROC_SYMBOL(public_6f7ade0);

#define public_6f7adf3 _public_6f7adf3
#define public_6f7ae0f _public_6f7ae0f

PROC_DECLARE(0x6f7ade0, internal_6f7ade0, public_6f7ade0);
extern "C" NAKED register_t __cdecl internal_6f7ade0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6f7ae0f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f7adf3 : nop
        push esi
        push edi
        call public_6ef8060
        add esi, 0x14
        add esp, 8
        add edi, 0x14
        cmp esi, ebx
        jne public_6f7adf3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f7ae0f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f7ade0)
    }
}

#undef public_6f7adf3
#undef public_6f7ae0f
