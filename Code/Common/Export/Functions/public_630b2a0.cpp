#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630b220);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_630b2c0 _public_630b2c0
#define public_630b2cb _public_630b2cb
#define public_630b2cd _public_630b2cd
#define public_630b2de _public_630b2de
#define public_630b2f0 _public_630b2f0
#define public_630b309 _public_630b309

PROC_DECLARE(0x630b2a0, internal_630b2a0, public_630b2a0);
extern "C" NAKED register_t __cdecl internal_630b2a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fcf38]
        mov ecx, dword ptr ds : [public_6399028]
        push ebx
        mov dword ptr ds : [ecx], eax
        xor ebx, ebx
        push esi
        mov dword ptr ds : [public_63fcf38], ebx
        xor eax, eax
        mov ecx, 0x52
        mov edi, edi
        public_630b2c0 : nop
        cmp eax, ebx
        jne public_630b2cb
        mov eax, dword ptr ds : [public_63fcf28]
        jmp public_630b2cd
        public_630b2cb : nop
        mov eax, dword ptr ds : [eax]
        public_630b2cd : nop
        cmp eax, ebx
        je public_630b2de
        cmp dword ptr ds : [eax+8], ecx
        jne public_630b2c0
        mov byte ptr ds : [eax+4], bl
        mov byte ptr ds : [eax+0x10], bl
        jmp public_630b2c0
        public_630b2de : nop
        mov esi, dword ptr ds : [public_63fcf28]
        cmp esi, ebx
        je public_630b309
        push edi
        lea esp, ss:[esp]
        public_630b2f0 : nop
        mov edi, dword ptr ds : [esi]
        mov ecx, esi
        call public_630b220
        push esi
        call public_6391d5a
        add esp, 4
        cmp edi, ebx
        mov esi, edi
        jne public_630b2f0
        pop edi
        public_630b309 : nop
        pop esi
        mov dword ptr ds : [public_63fcf2c], ebx
        mov dword ptr ds : [public_63fcf28], ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x630b2a0)
    }
}

#undef public_630b2c0
#undef public_630b2cb
#undef public_630b2cd
#undef public_630b2de
#undef public_630b2f0
#undef public_630b309
