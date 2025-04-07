#include "Content-PCH.h"


#define public_6f86896 _public_6f86896
#define public_6f868a2 _public_6f868a2
#define public_6f868c6 _public_6f868c6
#define public_6f868ca _public_6f868ca
#define public_6f868cf _public_6f868cf
#define public_6f868d8 _public_6f868d8
#define public_6f868de _public_6f868de
#define public_6f868e7 _public_6f868e7

PROC_DECLARE(0x6f86880, internal_6f86880, public_6f86880);
extern "C" NAKED register_t __cdecl internal_6f86880()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push ebx
        push ebp
        push esi
        push edi
        je public_6f868de
        mov ebp, dword ptr ds : [ecx+8]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_6f868de
        public_6f86896 : nop
        mov esi, dword ptr ds : [edi+8]
        add esi, 0xC
        je public_6f868d8
        lea eax, ss:[esp+0x18]
        public_6f868a2 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f868ca
        test cl, cl
        je public_6f868c6
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f868ca
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f868a2
        public_6f868c6 : nop
        xor eax, eax
        jmp public_6f868cf
        public_6f868ca : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f868cf : nop
        test eax, eax
        sete al
        test al, al
        jne public_6f868e7
        public_6f868d8 : nop
        mov edi, dword ptr ds : [edi]
        cmp edi, ebp
        jne public_6f86896
        public_6f868de : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0x34
        public_6f868e7 : nop
        mov eax, dword ptr ds : [edi+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x34
        UNREACHABLE_TRAP(0x6f86880)
    }
}

#undef public_6f86896
#undef public_6f868a2
#undef public_6f868c6
#undef public_6f868ca
#undef public_6f868cf
#undef public_6f868d8
#undef public_6f868de
#undef public_6f868e7
