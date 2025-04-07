#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53020);
CLANG_FORWARD_PROC_SYMBOL(public_6f53920);

#define public_6f53951 _public_6f53951

PROC_DECLARE(0x6f53920, internal_6f53920, public_6f53920);
extern "C" NAKED register_t __cdecl internal_6f53920()
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
        jne public_6f53951
        lea esi, ds:[eax-2]
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        push 0x34
        push eax
        push edi
        mov dword ptr ds : [ecx+8], esi
        call public_6f53020
        add esp, 0x10
        pop edi
        pop esi
        ret 
        public_6f53951 : nop
        push eax
        push 0x32
        push edx
        push edi
        call public_6f53020
        add esp, 0x10
        add esi, eax
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        push 0x34
        push eax
        push edi
        call public_6f53020
        add esp, 0x10
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f53920)
    }
}

#undef public_6f53951
