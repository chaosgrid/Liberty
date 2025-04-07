#include "Common-PCH.h"


#define public_628e6cd _public_628e6cd
#define public_628e6d5 _public_628e6d5
#define public_628e6e4 _public_628e6e4
#define public_628e6ec _public_628e6ec
#define public_628e700 _public_628e700
#define public_628e718 _public_628e718
#define public_628e71c _public_628e71c
#define public_628e726 _public_628e726

PROC_DECLARE(0x628e6c0, internal_628e6c0, public_628e6c0);
extern "C" NAKED register_t __cdecl internal_628e6c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        push esi
        push edi
        jne public_628e6cd
        xor esi, esi
        jmp public_628e6d5
        public_628e6cd : nop
        mov esi, dword ptr ds : [ecx+8]
        sub esi, eax
        sar esi, 2
        public_628e6d5 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov edi, dword ptr ds : [edx+4]
        test edi, edi
        jne public_628e6e4
        xor edx, edx
        jmp public_628e6ec
        public_628e6e4 : nop
        mov edx, dword ptr ds : [edx+8]
        sub edx, edi
        sar edx, 2
        public_628e6ec : nop
        cmp esi, edx
        jne public_628e726
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        je public_628e71c
        sub edi, eax
        lea esp, ss:[esp]
        public_628e700 : nop
        mov edx, dword ptr ds : [eax]
        cmp edx, dword ptr ds : [edi+eax]
        jne public_628e718
        add eax, 4
        cmp eax, ecx
        jne public_628e700
        pop edi
        mov eax, 1
        pop esi
        ret 4
        public_628e718 : nop
        cmp eax, ecx
        jne public_628e726
        public_628e71c : nop
        pop edi
        mov eax, 1
        pop esi
        ret 4
        public_628e726 : nop
        pop edi
        xor eax, eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x628e6c0)
    }
}

#undef public_628e6cd
#undef public_628e6d5
#undef public_628e6e4
#undef public_628e6ec
#undef public_628e700
#undef public_628e718
#undef public_628e71c
#undef public_628e726
