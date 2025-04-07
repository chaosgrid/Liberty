#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626a570);
CLANG_FORWARD_PROC_SYMBOL(public_626c1e0);

#define public_626a583 _public_626a583
#define public_626a59f _public_626a59f

PROC_DECLARE(0x626a570, internal_626a570, public_626a570);
extern "C" NAKED register_t __cdecl internal_626a570()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_626a59f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_626a583 : nop
        push esi
        push edi
        call public_626c1e0
        add esi, 0x20
        add esp, 8
        add edi, 0x20
        cmp esi, ebx
        jne public_626a583
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_626a59f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x626a570)
    }
}

#undef public_626a583
#undef public_626a59f
