#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a4f0);
CLANG_FORWARD_PROC_SYMBOL(public_622ab50);

#define public_622ab84 _public_622ab84
#define public_622ab8c _public_622ab8c
#define public_622aba0 _public_622aba0

PROC_DECLARE(0x622ab50, internal_622ab50, public_622ab50);
extern "C" NAKED register_t __cdecl internal_622ab50()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0xC]
        lea eax, ss:[esp+0x14]
        mov ecx, esi
        push eax
        mov dword ptr ss : [esp+0x18], edi
        call public_622a4f0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_622ab84
        cmp edi, dword ptr ds : [eax+0xC]
        jb public_622ab84
        lea eax, ss:[esp+0x14]
        jmp public_622ab8c
        public_622ab84 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_622ab8c : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x10]
        pop edi
        pop esi
        cmp eax, ecx
        pop ebx
        jne public_622aba0
        mov eax, 0xFFFFFFF8
        ret 0xC
        public_622aba0 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [esp+0xC]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0xC]
        ret 0xC
        UNREACHABLE_TRAP(0x622ab50)
    }
}

#undef public_622ab84
#undef public_622ab8c
#undef public_622aba0
