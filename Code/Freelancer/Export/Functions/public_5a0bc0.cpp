#include "Freelancer-PCH.h"


#define public_5a0bd0 _public_5a0bd0
#define public_5a0bd5 _public_5a0bd5
#define public_5a0bf9 _public_5a0bf9
#define public_5a0bfd _public_5a0bfd
#define public_5a0c02 _public_5a0c02
#define public_5a0c0d _public_5a0c0d
#define public_5a0c16 _public_5a0c16

PROC_DECLARE(0x5a0bc0, internal_5a0bc0, public_5a0bc0);
extern "C" NAKED register_t __cdecl internal_5a0bc0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [ecx+0xC]
        test edi, edi
        je public_5a0c0d
        mov ebp, dword ptr ss : [esp+0x14]
        nop 
        public_5a0bd0 : nop
        mov esi, ebp
        lea eax, ds:[edi+0x18]
        public_5a0bd5 : nop
        mov cl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov dl, cl
        cmp cl, bl
        jne public_5a0bfd
        test dl, dl
        je public_5a0bf9
        mov cl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov dl, cl
        cmp cl, bl
        jne public_5a0bfd
        add eax, 2
        add esi, 2
        test dl, dl
        jne public_5a0bd5
        public_5a0bf9 : nop
        xor eax, eax
        jmp public_5a0c02
        public_5a0bfd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_5a0c02 : nop
        test eax, eax
        je public_5a0c16
        mov edi, dword ptr ds : [edi+8]
        test edi, edi
        jne public_5a0bd0
        public_5a0c0d : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 4
        public_5a0c16 : nop
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5a0bc0)
    }
}

#undef public_5a0bd0
#undef public_5a0bd5
#undef public_5a0bf9
#undef public_5a0bfd
#undef public_5a0c02
#undef public_5a0c0d
#undef public_5a0c16
