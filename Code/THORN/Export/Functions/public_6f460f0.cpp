#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);

#define public_6f46179 _public_6f46179
#define public_6f46198 _public_6f46198
#define public_6f461ad _public_6f461ad

PROC_DECLARE(0x6f460f0, internal_6f460f0, public_6f460f0);
extern "C" NAKED register_t __cdecl internal_6f460f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        lea eax, ds:[edi+0x14]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [esi+4]
        je public_6f46198
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 3
        jne public_6f46198
        mov eax, dword ptr ss : [esp+0xC]
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0xE4]
        test eax, eax
        je public_6f46179
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xEC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xF0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xF4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xF8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        public_6f46179 : nop
        add esi, 0xEC
        mov ecx, dword ptr ds : [esi]
        lea eax, ds:[edi+0x68]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], edx
        public_6f46198 : nop
        mov cl, byte ptr ds : [edi+0x30]
        mov al, 1
        test al, cl
        je public_6f461ad
        mov dword ptr ds : [edi+0x1C], 0xFFFFFFFF
        pop edi
        pop esi
        ret 8
        public_6f461ad : nop
        mov ecx, dword ptr ds : [edi+0x40]
        add ecx, dword ptr ds : [edi+0x2C]
        mov dword ptr ds : [edi+0x1C], ecx
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6f460f0)
    }
}

#undef public_6f46179
#undef public_6f46198
#undef public_6f461ad
