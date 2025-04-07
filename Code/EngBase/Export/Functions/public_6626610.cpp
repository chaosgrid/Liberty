#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6612e70);

#define public_6626637 _public_6626637
#define public_662665b _public_662665b
#define public_6626673 _public_6626673
#define public_6626685 _public_6626685

PROC_DECLARE(0x6626610, internal_6626610, public_6626610);
extern "C" NAKED register_t __cdecl internal_6626610()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov ecx, dword ptr ds : [esi+8]
        mov al, byte ptr ds : [esi+0x2C]
        inc ecx
        test al, al
        mov dword ptr ds : [esi+8], ecx
        je public_6626637
        mov eax, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, edx
        jne public_6626637
        inc dword ptr ds : [esi+0xC]
        jmp public_662665b
        public_6626637 : nop
        lea edx, ss:[esp+0x14]
        lea eax, ss:[esp+0xC]
        push edx
        push eax
        lea ecx, ds:[esi+0x10]
        call public_6612e70
        mov ecx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, ecx
        je public_6626685
        mov dword ptr ds : [esi+0x28], eax
        mov byte ptr ds : [esi+0x2C], 1
        public_662665b : nop
        cmp eax, dword ptr ds : [esi+0x14]
        je public_6626685
        mov edi, dword ptr ds : [eax+0x14]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_6626685
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        public_6626673 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        push ebx
        push ecx
        call ebp
        mov esi, dword ptr ds : [esi]
        add esp, 8
        cmp esi, edi
        jne public_6626673
        pop ebp
        pop ebx
        public_6626685 : nop
        pop edi
        pop esi
        ret 0x10
        UNREACHABLE_TRAP(0x6626610)
    }
}

#undef public_6626637
#undef public_662665b
#undef public_6626673
#undef public_6626685
