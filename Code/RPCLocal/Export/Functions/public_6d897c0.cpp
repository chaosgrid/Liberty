#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6d96300);

#define public_6d8987a _public_6d8987a

PROC_DECLARE(0x6d897c0, internal_6d897c0, public_6d897c0);
extern "C" NAKED register_t __cdecl internal_6d897c0()
{
    __asm
    {
        sub esp, 0x30
        push edi
        lea eax, ss:[esp+4]
        push eax
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+8]
        push 1
        push 1
        call public_6d96300
        test eax, eax
        jne public_6d8987a
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [eax+0x1C]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+0x20]
        mov dword ptr ss : [esp+0xC], ecx
        mov cl, byte ptr ds : [eax+0x28]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov byte ptr ss : [esp+0xC], cl
        lea esi, ds:[eax+0x20]
        mov dword ptr ss : [esp+0x34], edx
        mov byte ptr ds : [esi], cl
        mov ecx, dword ptr ss : [esp+0x10]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [esi+4], ecx
        push edx
        lea ecx, ds:[esi+8]
        call public_6d8f510
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ds:[esi+0x14]
        call public_6d8f4f0
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [esi+0x24], ecx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [esi+0x28], edx
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [edi]
        push ecx
        push edx
        mov ecx, edi
        call dword ptr ds : [eax+0x24]
        pop esi
        public_6d8987a : nop
        pop edi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x6d897c0)
    }
}

#undef public_6d8987a
