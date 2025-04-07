#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d90a00);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8a429 _public_6d8a429

PROC_DECLARE(0x6d8a3c0, internal_6d8a3c0, public_6d8a3c0);
extern "C" NAKED register_t __cdecl internal_6d8a3c0()
{
    __asm
    {
        sub esp, 8
        push edi
        lea eax, ss:[esp+8]
        push eax
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+8]
        push 0x4D
        push 2
        call public_6d96300
        test eax, eax
        jne public_6d8a429
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+8], eax
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x14]
        call public_6d90a00
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+0x28], edx
        mov eax, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi]
        push eax
        mov eax, dword ptr ds : [ecx]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x24]
        pop esi
        public_6d8a429 : nop
        pop edi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6d8a3c0)
    }
}

#undef public_6d8a429
