#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa3d40);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4f70);

#define public_6fa3d53 _public_6fa3d53
#define public_6fa3d6f _public_6fa3d6f

PROC_DECLARE(0x6fa3d40, internal_6fa3d40, public_6fa3d40);
extern "C" NAKED register_t __cdecl internal_6fa3d40()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6fa3d6f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6fa3d53 : nop
        push esi
        push edi
        call public_6fa4f70
        add esi, 0x14
        add esp, 8
        add edi, 0x14
        cmp esi, ebx
        jne public_6fa3d53
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6fa3d6f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6fa3d40)
    }
}

#undef public_6fa3d53
#undef public_6fa3d6f
