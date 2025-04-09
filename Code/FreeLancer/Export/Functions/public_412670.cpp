#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412670);

PROC_DECLARE(0x412670, internal_412670, public_412670);
extern "C" NAKED register_t __cdecl internal_412670()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, 0x100
        push edi
        push 0x20028
        mov dword ptr ds : [esi+0x14], eax
        mov dword ptr ds : [esi+0x18], eax
        call dword ptr ds : [public_5c71cc]
        mov edi, eax
        mov dword ptr ds : [esi+0xC], edi
        lea eax, ds:[edi+0x28]
        mov dword ptr ds : [esi+8], eax
        xor eax, eax
        mov ecx, 0xA
        rep stosd
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx], 0x28
        mov edx, dword ptr ds : [esi+0xC]
        mov word ptr ds : [edx+0xE], 0x10
        mov eax, dword ptr ds : [esi+0xC]
        mov word ptr ds : [eax+0xC], 1
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [edx+0x14], 0x20000
        mov eax, dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [esi+0x18]
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 4
        neg edx
        push 0
        mov dword ptr ds : [eax+8], edx
        call dword ptr ds : [public_5c72cc]
        mov edi, eax
        push edi
        call dword ptr ds : [public_5c6e34]
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [esi+0x14]
        push ecx
        push edx
        push edi
        mov dword ptr ds : [esi+0x10], eax
        call dword ptr ds : [public_5c6e30]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi+0x10]
        push 0
        push ecx
        push 0
        push 1
        push 0
        push eax
        push edx
        mov dword ptr ds : [esi], eax
        call dword ptr ds : [public_5c6e2c]
        push edi
        push 0
        call dword ptr ds : [public_5c72d0]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x10]
        push eax
        push ecx
        call dword ptr ds : [public_5c6e0c]
        mov edx, dword ptr ds : [esi+0x10]
        push 0
        push edx
        mov dword ptr ds : [esi+4], eax
        call dword ptr ds : [public_5c6e28]
        mov eax, dword ptr ds : [esi+0x10]
        push 0
        push eax
        call dword ptr ds : [public_5c6e24]
        mov ecx, dword ptr ds : [esi+0x10]
        push 1
        push ecx
        call dword ptr ds : [public_5c6e20]
        mov edx, dword ptr ds : [esi+0x10]
        push 0xFFFFFF
        push edx
        call dword ptr ds : [public_5c6e1c]
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x412670)
    }
}
