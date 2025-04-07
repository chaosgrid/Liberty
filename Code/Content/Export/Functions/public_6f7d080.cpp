#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7d080);
CLANG_FORWARD_PROC_SYMBOL(public_6f7dfd0);

#define public_6f7d093 _public_6f7d093
#define public_6f7d0af _public_6f7d0af

PROC_DECLARE(0x6f7d080, internal_6f7d080, public_6f7d080);
extern "C" NAKED register_t __cdecl internal_6f7d080()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6f7d0af
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f7d093 : nop
        push esi
        push edi
        call public_6f7dfd0
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebx
        jne public_6f7d093
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f7d0af : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f7d080)
    }
}

#undef public_6f7d093
#undef public_6f7d0af
