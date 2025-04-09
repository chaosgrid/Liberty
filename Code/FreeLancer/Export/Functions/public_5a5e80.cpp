#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_52c7a0);

#define public_5a5eac _public_5a5eac
#define public_5a5eb4 _public_5a5eb4
#define public_5a5ecb _public_5a5ecb

PROC_DECLARE(0x5a5e80, internal_5a5e80, public_5a5e80);
extern "C" NAKED register_t __cdecl internal_5a5e80()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push esi
        mov ecx, offset public_67294c
        call public_52c7a0
        mov ecx, dword ptr ds : [public_672950]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_5a5eac
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_5a5eac
        lea eax, ss:[esp+0x10]
        jmp public_5a5eb4
        public_5a5eac : nop
        mov dword ptr ss : [esp+4], ecx
        lea eax, ss:[esp+4]
        public_5a5eb4 : nop
        mov eax, dword ptr ds : [eax]
        cmp ecx, eax
        je public_5a5ecb
        movzx ecx, byte ptr ds : [esi+4]
        mov edx, dword ptr ds : [eax+0x14]
        imul ecx, 0x1C
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+edx+0x18], eax
        public_5a5ecb : nop
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x5a5e80)
    }
}

#undef public_5a5eac
#undef public_5a5eb4
#undef public_5a5ecb
