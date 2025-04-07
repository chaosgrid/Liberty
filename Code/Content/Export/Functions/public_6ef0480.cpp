#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4cd40);

#define public_6ef0492 _public_6ef0492
#define public_6ef04a9 _public_6ef04a9
#define public_6ef04ab _public_6ef04ab
#define public_6ef04bd _public_6ef04bd

PROC_DECLARE(0x6ef0480, internal_6ef0480, public_6ef0480);
extern "C" NAKED register_t __cdecl internal_6ef0480()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x290]
        cmp esi, dword ptr ds : [edi+0x294]
        je public_6ef04bd
        public_6ef0492 : nop
        mov ecx, dword ptr ds : [public_6fcf254]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0xC]
        test eax, eax
        je public_6ef04a9
        lea ecx, ds:[eax-0x10]
        jmp public_6ef04ab
        public_6ef04a9 : nop
        xor ecx, ecx
        public_6ef04ab : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ds : [edi+0x294]
        add esi, 4
        cmp esi, eax
        jne public_6ef0492
        public_6ef04bd : nop
        mov ecx, edi
        pop edi
        pop esi
        jmp public_6f4cd40
        UNREACHABLE_TRAP(0x6ef0480)
    }
}

#undef public_6ef0492
#undef public_6ef04a9
#undef public_6ef04ab
#undef public_6ef04bd
