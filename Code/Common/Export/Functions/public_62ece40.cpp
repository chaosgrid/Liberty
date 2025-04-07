#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ece40);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62ece55 _public_62ece55
#define public_62ece5a _public_62ece5a
#define public_62ece6f _public_62ece6f
#define public_62ece7b _public_62ece7b
#define public_62ece8b _public_62ece8b
#define public_62ece8d _public_62ece8d

PROC_DECLARE(0x62ece40, internal_62ece40, public_62ece40);
extern "C" NAKED register_t __cdecl internal_62ece40()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        lea ecx, ds:[esi+4]
        push edi
        je public_62ece55
        add eax, 0xFFFFFFF8
        test eax, eax
        jne public_62ece5a
        public_62ece55 : nop
        pop edi
        xor al, al
        pop esi
        ret 
        public_62ece5a : nop
        mov ax, word ptr ds : [esi+0xC]
        cmp ax, word ptr ds : [public_63a4aa4]
        lea edi, ds:[esi+0xC]
        jne public_62ece6f
        pop edi
        xor al, al
        pop esi
        ret 
        public_62ece6f : nop
        cmp dword ptr ds : [ecx], 0
        je public_62ece7b
        push 0
        call public_6341610
        public_62ece7b : nop
        mov eax, dword ptr ds : [esi]
        add eax, 8
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62ece8b
        add eax, 0xFFFFFFF8
        jmp public_62ece8d
        public_62ece8b : nop
        xor eax, eax
        public_62ece8d : nop
        mov edx, dword ptr ds : [eax+4]
        push 0xFFFFFFFF
        lea ecx, ds:[eax+4]
        push 0
        push edi
        call dword ptr ds : [edx+0x4C]
        neg eax
        sbb al, al
        pop edi
        inc al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62ece40)
    }
}

#undef public_62ece55
#undef public_62ece5a
#undef public_62ece6f
#undef public_62ece7b
#undef public_62ece8b
#undef public_62ece8d
