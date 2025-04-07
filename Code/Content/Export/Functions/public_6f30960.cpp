#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30960);
CLANG_FORWARD_PROC_SYMBOL(public_6f31000);

#define public_6f30973 _public_6f30973
#define public_6f3098f _public_6f3098f

PROC_DECLARE(0x6f30960, internal_6f30960, public_6f30960);
extern "C" NAKED register_t __cdecl internal_6f30960()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6f3098f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f30973 : nop
        push esi
        push edi
        call public_6f31000
        add esi, 0x44
        add esp, 8
        add edi, 0x44
        cmp esi, ebx
        jne public_6f30973
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f3098f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f30960)
    }
}

#undef public_6f30973
#undef public_6f3098f
