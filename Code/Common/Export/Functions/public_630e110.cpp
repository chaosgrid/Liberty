#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e110);

#define public_630e11e _public_630e11e
#define public_630e125 _public_630e125
#define public_630e131 _public_630e131
#define public_630e1ae _public_630e1ae
#define public_630e1ca _public_630e1ca
#define public_630e1d6 _public_630e1d6
#define public_630e1e2 _public_630e1e2

PROC_DECLARE(0x630e110, internal_630e110, public_630e110);
extern "C" NAKED register_t __cdecl internal_630e110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx+4]
        push esi
        cmp edx, dword ptr ds : [eax+4]
        push edi
        je public_630e125
        public_630e11e : nop
        pop edi
        pop esi
        xor al, al
        ret 4
        public_630e125 : nop
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        mov edi, dword ptr ds : [eax]
        je public_630e1e2
        public_630e131 : nop
        test edi, edi
        je public_630e1e2
        mov ax, word ptr ds : [esi+8]
        cmp ax, word ptr ds : [edi+8]
        jne public_630e11e
        cmp ax, 0x4E
        jne public_630e1ae
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ds : [ecx]
        jne public_630e11e
        mov eax, dword ptr ds : [edx+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_630e11e
        fld dword ptr ds : [edx+8]
        fsub dword ptr ds : [ecx+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a35dc]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_630e11e
        fld dword ptr ds : [edx+0xC]
        fsub dword ptr ds : [ecx+0xC]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a35dc]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_630e11e
        fld dword ptr ds : [edx+0x10]
        fsub dword ptr ds : [ecx+0x10]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a35dc]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_630e11e
        jmp public_630e1d6
        public_630e1ae : nop
        cmp ax, 0x21
        jne public_630e1ca
        mov ecx, dword ptr ds : [edi+4]
        push ecx
        mov ecx, dword ptr ds : [esi+4]
        call public_630e110
        test al, al
        je public_630e11e
        jmp public_630e1d6
        public_630e1ca : nop
        mov edx, dword ptr ds : [esi+4]
        cmp edx, dword ptr ds : [edi+4]
        jne public_630e11e
        public_630e1d6 : nop
        mov esi, dword ptr ds : [esi]
        test esi, esi
        mov edi, dword ptr ds : [edi]
        jne public_630e131
        public_630e1e2 : nop
        xor eax, eax
        cmp esi, edi
        pop edi
        pop esi
        sete al
        ret 4
        UNREACHABLE_TRAP(0x630e110)
    }
}

#undef public_630e11e
#undef public_630e125
#undef public_630e131
#undef public_630e1ae
#undef public_630e1ca
#undef public_630e1d6
#undef public_630e1e2
