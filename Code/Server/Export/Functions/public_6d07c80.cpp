#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d07c80);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ff70);

#define public_6d07cc3 _public_6d07cc3

PROC_DECLARE(0x6d07c80, internal_6d07c80, public_6d07c80);
extern "C" NAKED register_t __cdecl internal_6d07c80()
{
    __asm
    {
        sub esp, 0x10
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edi+0xB0]
        mov ecx, edi
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_6d6419c]
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+4], ecx
        mov edx, dword ptr ds : [public_6d6402c]
        mov ax, word ptr ds : [edx]
        mov word ptr ds : [esi+0xC], ax
        mov eax, dword ptr ds : [public_6d8da08]
        test eax, eax
        jne public_6d07cc3
        call public_6d5ff70
        mov dword ptr ds : [public_6d8da08], eax
        public_6d07cc3 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+8]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x50]
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0xC]
        lea eax, ds:[esi+0x1C]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+8], ecx
        mov dword ptr ds : [eax+0xC], edx
        mov eax, dword ptr ds : [edi+0xE4]
        mov dword ptr ds : [esi+8], eax
        lea ecx, ds:[edi+0x2C]
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[esi+0x10]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        lea eax, ss:[esp+8]
        mov dword ptr ds : [esi+0x44], 0
        mov edx, dword ptr ds : [edi]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x54]
        mov ecx, dword ptr ds : [eax]
        add esi, 0x2C
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6d07c80)
    }
}

#undef public_6d07cc3
