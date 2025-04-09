#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_455ca0);
CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_455cb4 _public_455cb4
#define public_455cc1 _public_455cc1
#define public_455cce _public_455cce
#define public_455ce0 _public_455ce0
#define public_455d15 _public_455d15

PROC_DECLARE(0x455ca0, internal_455ca0, public_455ca0);
extern "C" NAKED register_t __cdecl internal_455ca0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x134]
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        je public_455cce
        xor edi, edi
        public_455cb4 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, edi
        je public_455cc1
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_455cc1 : nop
        mov dword ptr ds : [esi+8], edi
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x134]
        jne public_455cb4
        public_455cce : nop
        mov ebp, dword ptr ds : [ebx+0x134]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_455d15
        nop 
        lea esp, ss:[esp]
        public_455ce0 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[esi+8]
        call public_455e90
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ds : [ebx+0x138]
        add esp, 4
        dec ecx
        cmp edi, ebp
        mov dword ptr ds : [ebx+0x138], ecx
        jne public_455ce0
        public_455d15 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x455ca0)
    }
}

#undef public_455cb4
#undef public_455cc1
#undef public_455cce
#undef public_455ce0
#undef public_455d15
