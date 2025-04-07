#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62baf00);
CLANG_FORWARD_PROC_SYMBOL(public_6316e20);

#define public_6316e33 _public_6316e33
#define public_6316e4f _public_6316e4f

PROC_DECLARE(0x6316e20, internal_6316e20, public_6316e20);
extern "C" NAKED register_t __cdecl internal_6316e20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6316e4f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6316e33 : nop
        push esi
        push edi
        call public_62baf00
        add esi, 0x10
        add esp, 8
        add edi, 0x10
        cmp esi, ebx
        jne public_6316e33
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6316e4f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6316e20)
    }
}

#undef public_6316e33
#undef public_6316e4f
