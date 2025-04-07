#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3430);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4790);

#define public_6fa3443 _public_6fa3443
#define public_6fa345f _public_6fa345f

PROC_DECLARE(0x6fa3430, internal_6fa3430, public_6fa3430);
extern "C" NAKED register_t __cdecl internal_6fa3430()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6fa345f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6fa3443 : nop
        push esi
        push edi
        call public_6fa4790
        add esi, 0x24
        add esp, 8
        add edi, 0x24
        cmp esi, ebx
        jne public_6fa3443
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6fa345f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6fa3430)
    }
}

#undef public_6fa3443
#undef public_6fa345f
