#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93700);
CLANG_FORWARD_PROC_SYMBOL(public_6f93f70);

#define public_6f93713 _public_6f93713
#define public_6f93735 _public_6f93735

PROC_DECLARE(0x6f93700, internal_6f93700, public_6f93700);
extern "C" NAKED register_t __cdecl internal_6f93700()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6f93735
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6f93713 : nop
        push esi
        push edi
        call public_6f93f70
        add esi, 0x108
        add esp, 8
        add edi, 0x108
        cmp esi, ebx
        jne public_6f93713
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6f93735 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f93700)
    }
}

#undef public_6f93713
#undef public_6f93735
