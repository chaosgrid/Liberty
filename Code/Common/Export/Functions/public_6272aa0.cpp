#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6272aa0);
CLANG_FORWARD_PROC_SYMBOL(public_6272b50);

#define public_6272ab3 _public_6272ab3
#define public_6272acf _public_6272acf

PROC_DECLARE(0x6272aa0, internal_6272aa0, public_6272aa0);
extern "C" NAKED register_t __cdecl internal_6272aa0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6272acf
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6272ab3 : nop
        push esi
        push edi
        call public_6272b50
        add esi, 0x14
        add esp, 8
        add edi, 0x14
        cmp esi, ebx
        jne public_6272ab3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6272acf : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6272aa0)
    }
}

#undef public_6272ab3
#undef public_6272acf
