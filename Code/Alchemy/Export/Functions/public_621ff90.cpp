#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6220ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6221510);
CLANG_FORWARD_PROC_SYMBOL(public_6221c30);

#define public_621ffc8 _public_621ffc8
#define public_621ffd0 _public_621ffd0
#define public_621ffe3 _public_621ffe3

PROC_DECLARE(0x621ff90, internal_621ff90, public_621ff90);
extern "C" NAKED register_t __cdecl internal_621ff90()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x14]
        push edi
        lea ecx, ss:[esp+0x14]
        lea ebx, ds:[esi+4]
        push eax
        push ecx
        mov ecx, ebx
        call public_6221c30
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_621ffc8
        mov edx, dword ptr ss : [esp+0x18]
        mov edi, dword ptr ds : [ecx+0xC]
        cmp edx, edi
        jb public_621ffc8
        lea eax, ss:[esp+0x14]
        jmp public_621ffd0
        public_621ffc8 : nop
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        public_621ffd0 : nop
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+8]
        cmp edi, eax
        jne public_621ffe3
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 8
        public_621ffe3 : nop
        lea eax, ds:[edi+0x10]
        lea ecx, ss:[esp+0x14]
        push eax
        push ecx
        lea ecx, ds:[esi+0x18]
        call public_6220ce0
        lea edx, ss:[esp+0x14]
        push edi
        push edx
        mov ecx, ebx
        call public_6221510
        mov eax, dword ptr ds : [esi+0x20]
        pop edi
        dec eax
        mov dword ptr ds : [esi+0x20], eax
        pop esi
        xor eax, eax
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x621ff90)
    }
}

#undef public_621ffc8
#undef public_621ffd0
#undef public_621ffe3
