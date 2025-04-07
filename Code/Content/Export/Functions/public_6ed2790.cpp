#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed2790);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3350);

#define public_6ed27a3 _public_6ed27a3
#define public_6ed27bf _public_6ed27bf

PROC_DECLARE(0x6ed2790, internal_6ed2790, public_6ed2790);
extern "C" NAKED register_t __cdecl internal_6ed2790()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6ed27bf
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6ed27a3 : nop
        push esi
        push edi
        call public_6ed3350
        add esi, 0x3C
        add esp, 8
        add edi, 0x3C
        cmp esi, ebx
        jne public_6ed27a3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6ed27bf : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ed2790)
    }
}

#undef public_6ed27a3
#undef public_6ed27bf
