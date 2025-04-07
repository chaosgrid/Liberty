#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0400);
CLANG_FORWARD_PROC_SYMBOL(public_6ed2a60);

#define public_6ed0413 _public_6ed0413
#define public_6ed0435 _public_6ed0435

PROC_DECLARE(0x6ed0400, internal_6ed0400, public_6ed0400);
extern "C" NAKED register_t __cdecl internal_6ed0400()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6ed0435
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6ed0413 : nop
        push esi
        push edi
        call public_6ed2a60
        add esi, 0x88
        add esp, 8
        add edi, 0x88
        cmp esi, ebx
        jne public_6ed0413
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6ed0435 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ed0400)
    }
}

#undef public_6ed0413
#undef public_6ed0435
