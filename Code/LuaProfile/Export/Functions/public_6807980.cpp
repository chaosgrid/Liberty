#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6806a90);
CLANG_FORWARD_PROC_SYMBOL(public_6807230);
CLANG_FORWARD_PROC_SYMBOL(public_68072a0);
CLANG_FORWARD_PROC_SYMBOL(public_6807370);
CLANG_FORWARD_PROC_SYMBOL(public_68073b0);
CLANG_FORWARD_PROC_SYMBOL(public_68073e0);
CLANG_FORWARD_PROC_SYMBOL(public_6807980);
CLANG_FORWARD_PROC_SYMBOL(public_6807a20);

#define public_68079d8 _public_68079d8
#define public_68079f3 _public_68079f3

PROC_DECLARE(0x6807980, internal_6807980, public_6807980);
extern "C" NAKED register_t __cdecl internal_6807980()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        push esi
        call public_6806a20
        push esi
        call public_6807370
        push 0x111
        push esi
        mov edi, eax
        call public_6807230
        push esi
        call public_68073e0
        push esi
        call public_68073b0
        mov ebx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x18
        cmp eax, 0x107
        jne public_68079d8
        mov eax, dword ptr ss : [esp+0x14]
        push eax
        push esi
        call public_6807980
        add esp, 8
        push ebx
        push edi
        push esi
        call public_6807a20
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        public_68079d8 : nop
        push 0x106
        push esi
        call public_6806a90
        add esp, 8
        test eax, eax
        je public_68079f3
        push esi
        call public_68073e0
        add esp, 4
        public_68079f3 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        push ecx
        push 0x10A
        push 0x108
        push esi
        call public_68072a0
        add esp, 0x10
        push ebx
        push edi
        push esi
        call public_6807a20
        add esp, 0xC
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6807980)
    }
}

#undef public_68079d8
#undef public_68079f3
