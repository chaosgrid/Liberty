#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19110);
CLANG_FORWARD_PROC_SYMBOL(public_6d19180);
CLANG_FORWARD_PROC_SYMBOL(public_6d191a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d53360);

#define public_6d19131 _public_6d19131
#define public_6d1917a _public_6d1917a

PROC_DECLARE(0x6d19110, internal_6d19110, public_6d19110);
extern "C" NAKED register_t __cdecl internal_6d19110()
{
    __asm
    {
        sub esp, 8
        push esi
        push 0
        mov ecx, offset public_6d90260
        call public_6d53360
        mov esi, eax
        test esi, esi
        je public_6d1917a
        push ebx
        movzx ebx, word ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6d19131 : nop
        mov ecx, esi
        call public_6d191a0
        push eax
        lea ecx, ss:[esp+0x20]
        call public_6d19180
        mov ecx, dword ptr ds : [public_6d8fb18]
        lea edx, ss:[esp+0xC]
        push edx
        mov edx, dword ptr ds : [public_6d8f5dc]
        push 8
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], ebx
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax]
        push esi
        mov ecx, offset public_6d90260
        call public_6d53360
        mov esi, eax
        test esi, esi
        jne public_6d19131
        pop edi
        pop ebx
        public_6d1917a : nop
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6d19110)
    }
}

#undef public_6d19131
#undef public_6d1917a
