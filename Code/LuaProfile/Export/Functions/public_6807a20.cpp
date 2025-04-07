#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6807120);
CLANG_FORWARD_PROC_SYMBOL(public_6807a20);

#define public_6807a51 _public_6807a51

PROC_DECLARE(0x6807a20, internal_6807a20, public_6807a20);
extern "C" NAKED register_t __cdecl internal_6807a20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ds : [ecx+8]
        lea esi, ds:[edx+2]
        cmp eax, esi
        jne public_6807a51
        lea esi, ds:[eax-2]
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        push 0x34
        push eax
        push edi
        mov dword ptr ds : [ecx+8], esi
        call public_6807120
        add esp, 0x10
        pop edi
        pop esi
        ret 
        public_6807a51 : nop
        push eax
        push 0x32
        push edx
        push edi
        call public_6807120
        add esp, 0x10
        add esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        push 0x34
        push eax
        push edi
        call public_6807120
        add esp, 0x10
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6807a20)
    }
}

#undef public_6807a51
