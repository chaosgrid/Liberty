#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ebe560);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4e00);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5e20);

#define public_6ec32d0 _public_6ec32d0
#define public_6ec32f0 _public_6ec32f0
#define public_6ec3301 _public_6ec3301

PROC_DECLARE(0x6ec3290, internal_6ec3290, public_6ec3290);
extern "C" NAKED register_t __cdecl internal_6ec3290()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        push edi
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_6ec3301
        mov esi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[esi+0x68]
        call public_6ec4e00
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x6C]
        je public_6ec3301
        mov ecx, dword ptr ds : [eax+0x18]
        call public_6ebe560
        mov edx, dword ptr ds : [esi+0x58]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+8], eax
        mov edi, edi
        public_6ec32d0 : nop
        cmp eax, dword ptr ds : [esi+0x58]
        je public_6ec3301
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+0x10]
        cmp ecx, dword ptr ds : [edx+0x18]
        je public_6ec32f0
        lea ecx, ss:[esp+8]
        call public_6ec5e20
        mov eax, dword ptr ss : [esp+8]
        jmp public_6ec32d0
        public_6ec32f0 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop ecx
        ret 0xC
        public_6ec3301 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec3290)
    }
}

#undef public_6ec32d0
#undef public_6ec32f0
#undef public_6ec3301
