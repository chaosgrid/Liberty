#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4683b0);
CLANG_FORWARD_PROC_SYMBOL(public_4684e0);
CLANG_FORWARD_PROC_SYMBOL(public_4686e0);
CLANG_FORWARD_PROC_SYMBOL(public_46bb50);
CLANG_FORWARD_PROC_SYMBOL(public_46c5f0);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_53ab20);
CLANG_FORWARD_PROC_SYMBOL(public_5947a0);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_46840b _public_46840b
#define public_4684aa _public_4684aa

PROC_DECLARE(0x4683b0, internal_4683b0, public_4683b0);
extern "C" NAKED register_t __cdecl internal_4683b0()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        push edi
        jne public_46840b
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        jbe public_46840b
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        mov edi, ecx
        call public_46bb50
        lea ecx, ds:[esi+0xC]
        lea edx, ss:[esp+0x10]
        mov dword ptr ds : [edi+0xC], 0
        mov eax, dword ptr ds : [ecx+4]
        push edx
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        call public_5947a0
        mov ecx, esi
        call public_46c5f0
        mov ecx, esi
        call public_4686e0
        mov ecx, esi
        call public_4684e0
        public_46840b : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0xC], 0
        mov edx, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0xC], ecx
        mov eax, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [eax]
        push eax
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        mov edi, ecx
        call public_46c860
        mov dword ptr ds : [edi+0xC], 0
        call dword ptr ds : [public_5c70f0]
        mov ecx, eax
        mov eax, 0x10624DD3
        imul ecx
        mov eax, dword ptr ss : [esp+0xC]
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        imul edx, 0x3E8
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], edx
        call public_53ab20
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_5b7e1d
        dec dword ptr ds : [esi+0x14]
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edi+4]
        push 0xC
        call public_5b7e84
        add esp, 8
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_4684aa
        mov ebx, eax
        public_4684aa : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0xC]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_5999b0
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+8]
        pop esi
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x4683b0)
    }
}

#undef public_46840b
#undef public_4684aa
