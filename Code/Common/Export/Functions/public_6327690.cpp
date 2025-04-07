#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_632d510);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_63276d3 _public_63276d3

PROC_DECLARE(0x6327690, internal_6327690, public_6327690);
extern "C" NAKED register_t __cdecl internal_6327690()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x30]
        mov eax, dword ptr ds : [esi+0x1C]
        mov edx, dword ptr ds : [esi+0x2C]
        mov dword ptr ss : [esp+0x14], ecx
        push edi
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ds : [esi]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [eax+0x24]
        mov edx, dword ptr ds : [esi+8]
        mov edi, dword ptr ds : [edx]
        mov ebx, dword ptr ds : [edi+4]
        push 0x28
        call public_6391d9c
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_63276d3
        mov ebx, eax
        public_63276d3 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0xC]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_632d510
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6327690)
    }
}

#undef public_63276d3
