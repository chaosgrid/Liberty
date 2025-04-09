#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c58e0);

#define public_4c5931 _public_4c5931

PROC_DECLARE(0x4c58e0, internal_4c58e0, public_4c58e0);
extern "C" NAKED register_t __cdecl internal_4c58e0()
{
    __asm
    {
        push ecx
        push esi
        push edi
        mov edi, dword ptr ds : [public_672950]
        mov esi, dword ptr ds : [edi]
        cmp esi, edi
        je public_4c5931
        mov eax, dword ptr ds : [esi+0x14]
        test eax, eax
        je public_4c5931
        mov ecx, dword ptr ds : [esi+0x18]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+8], edx
        je public_4c5931
        cmp esi, edi
        je public_4c5931
        lea eax, ds:[esi+0x10]
        test eax, eax
        je public_4c5931
        mov eax, dword ptr ds : [eax+0x2C]
        cmp eax, 1
        je public_4c5931
        test eax, eax
        je public_4c5931
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 
        public_4c5931 : nop
        pop edi
        xor al, al
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4c58e0)
    }
}

#undef public_4c5931
