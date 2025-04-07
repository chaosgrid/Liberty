#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a90);
CLANG_FORWARD_PROC_SYMBOL(public_68074d0);
CLANG_FORWARD_PROC_SYMBOL(public_6807750);
CLANG_FORWARD_PROC_SYMBOL(public_6808140);
CLANG_FORWARD_PROC_SYMBOL(public_68081b0);
CLANG_FORWARD_PROC_SYMBOL(public_68082a0);

#define public_6808183 _public_6808183

PROC_DECLARE(0x6808140, internal_6808140, public_6808140);
extern "C" NAKED register_t __cdecl internal_6808140()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push 0x25
        push esi
        call public_6806a90
        add esp, 8
        test eax, eax
        je public_6808183
        push esi
        call public_6807750
        push eax
        push esi
        call public_68081b0
        mov edi, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        push edi
        push esi
        mov dword ptr ds : [edi], 4
        mov dword ptr ds : [edi+4], 0
        call public_68082a0
        add esp, 8
        pop edi
        pop esi
        ret 
        public_6808183 : nop
        mov edi, dword ptr ss : [esp+0x10]
        push 0
        push edi
        push esi
        call public_6807750
        add esp, 4
        push eax
        push esi
        call public_68074d0
        add esp, 0x10
        push edi
        push esi
        call public_68082a0
        add esp, 8
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6808140)
    }
}

#undef public_6808183
