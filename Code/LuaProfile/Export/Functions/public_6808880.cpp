#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6806a20);
CLANG_FORWARD_PROC_SYMBOL(public_6807750);
CLANG_FORWARD_PROC_SYMBOL(public_6807840);
CLANG_FORWARD_PROC_SYMBOL(public_6808880);

#define public_68088a8 _public_68088a8
#define public_68088d0 _public_68088d0

PROC_DECLARE(0x6808880, internal_6808880, public_6808880);
extern "C" NAKED register_t __cdecl internal_6808880()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        push 0
        push esi
        mov edi, 1
        call public_6807750
        add esp, 4
        push eax
        push esi
        call public_6807840
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        cmp eax, 0x2C
        jne public_68088d0
        public_68088a8 : nop
        push esi
        call public_6806a20
        add esp, 4
        mov eax, edi
        push eax
        push esi
        inc edi
        call public_6807750
        add esp, 4
        push eax
        push esi
        call public_6807840
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        cmp eax, 0x2C
        je public_68088a8
        public_68088d0 : nop
        mov eax, edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6808880)
    }
}

#undef public_68088a8
#undef public_68088d0
