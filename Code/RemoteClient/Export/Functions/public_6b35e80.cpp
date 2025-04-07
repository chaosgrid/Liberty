#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b42f40);

#define public_6b35ee9 _public_6b35ee9

PROC_DECLARE(0x6b35e80, internal_6b35e80, public_6b35e80);
extern "C" NAKED register_t __cdecl internal_6b35e80()
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
        call public_6b3b480
        test eax, eax
        jne public_6b35ee9
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
        call public_6b42f40
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
        public_6b35ee9 : nop
        pop edi
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6b35e80)
    }
}

#undef public_6b35ee9
