#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f33fd0);

#define public_6ecb433 _public_6ecb433
#define public_6ecb456 _public_6ecb456
#define public_6ecb463 _public_6ecb463
#define public_6ecb470 _public_6ecb470
#define public_6ecb47a _public_6ecb47a
#define public_6ecb481 _public_6ecb481
#define public_6ecb48c _public_6ecb48c

PROC_DECLARE(0x6ecb420, internal_6ecb420, public_6ecb420);
extern "C" NAKED register_t __cdecl internal_6ecb420()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+0xA8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6ecb48c
        public_6ecb433 : nop
        xor ecx, ecx
        mov cl, byte ptr ds : [edi+0xC]
        push ecx
        mov ecx, dword ptr ds : [esi+0x10]
        call public_6f33fd0
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ecb463
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_6ecb481
        public_6ecb456 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_6ecb456
        jmp public_6ecb481
        public_6ecb463 : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6ecb47a
        nop 
        lea esp, ss:[esp]
        public_6ecb470 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_6ecb470
        public_6ecb47a : nop
        cmp dword ptr ds : [esi+8], eax
        je public_6ecb481
        mov esi, eax
        public_6ecb481 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [edx+0xA8]
        jne public_6ecb433
        public_6ecb48c : nop
        mov eax, dword ptr ds : [edi+4]
        mov cl, byte ptr ds : [edi+0xC]
        pop edi
        mov byte ptr ds : [eax+0x218], cl
        mov al, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6ecb420)
    }
}

#undef public_6ecb433
#undef public_6ecb456
#undef public_6ecb463
#undef public_6ecb470
#undef public_6ecb47a
#undef public_6ecb481
#undef public_6ecb48c
