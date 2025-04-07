#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ce870);

#define public_62ce6e1 _public_62ce6e1
#define public_62ce6e9 _public_62ce6e9
#define public_62ce70a _public_62ce70a
#define public_62ce718 _public_62ce718
#define public_62ce72c _public_62ce72c

PROC_DECLARE(0x62ce6b0, internal_62ce6b0, public_62ce6b0);
extern "C" NAKED register_t __cdecl internal_62ce6b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x164]
        test al, al
        push edi
        je public_62ce718
        mov eax, dword ptr ds : [esi+0x24]
        cmp dword ptr ds : [eax+0x1434], 2
        jne public_62ce718
        mov eax, dword ptr ds : [esi+0x174]
        test eax, eax
        lea edi, ds:[esi+0x174]
        je public_62ce6e1
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62ce6e9
        public_62ce6e1 : nop
        push edi
        mov ecx, esi
        call public_62ce870
        public_62ce6e9 : nop
        mov edi, dword ptr ds : [edi]
        test edi, edi
        je public_62ce718
        lea eax, ds:[edi-8]
        test eax, eax
        je public_62ce718
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62ce70a
        mov eax, 3
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        public_62ce70a : nop
        pop edi
        mov dword ptr ds : [esi+0xC], 0
        xor eax, eax
        pop esi
        ret 4
        public_62ce718 : nop
        mov al, byte ptr ds : [esi+0x29]
        test al, al
        je public_62ce72c
        mov eax, 3
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        public_62ce72c : nop
        pop edi
        mov dword ptr ds : [esi+0xC], 2
        mov eax, 2
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62ce6b0)
    }
}

#undef public_62ce6e1
#undef public_62ce6e9
#undef public_62ce70a
#undef public_62ce718
#undef public_62ce72c
