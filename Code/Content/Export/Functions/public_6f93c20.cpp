#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93c20);
CLANG_FORWARD_PROC_SYMBOL(public_6f945f0);

#define public_6f93c33 _public_6f93c33
#define public_6f93c4f _public_6f93c4f

PROC_DECLARE(0x6f93c20, internal_6f93c20, public_6f93c20);
extern "C" NAKED register_t __cdecl internal_6f93c20()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6f93c4f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f93c33 : nop
        push esi
        push edi
        call public_6f945f0
        add esi, 0x68
        add esp, 8
        add edi, 0x68
        cmp esi, ebx
        jne public_6f93c33
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f93c4f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f93c20)
    }
}

#undef public_6f93c33
#undef public_6f93c4f
