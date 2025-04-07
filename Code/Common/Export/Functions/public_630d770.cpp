#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630d770);

#define public_630d787 _public_630d787
#define public_630d7ec _public_630d7ec
#define public_630d7f3 _public_630d7f3
#define public_630d810 _public_630d810
#define public_630d828 _public_630d828
#define public_630d831 _public_630d831
#define public_630d838 _public_630d838
#define public_630d844 _public_630d844

PROC_DECLARE(0x630d770, internal_630d770, public_630d770);
extern "C" NAKED register_t __cdecl internal_630d770()
{
    __asm
    {
        mov dx, word ptr ds : [ecx+8]
        mov eax, dword ptr ss : [esp+4]
        cmp dx, word ptr ds : [eax+8]
        push esi
        push edi
        je public_630d787
        pop edi
        xor al, al
        pop esi
        ret 4
        public_630d787 : nop
        cmp dx, 0x4E
        mov ecx, dword ptr ds : [ecx+4]
        jne public_630d7f3
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, dword ptr ds : [edx]
        jne public_630d7ec
        mov eax, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_630d7ec
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [edx+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a35dc]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_630d7ec
        fld dword ptr ds : [ecx+0xC]
        fsub dword ptr ds : [edx+0xC]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a35dc]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_630d7ec
        fld dword ptr ds : [ecx+0x10]
        fsub dword ptr ds : [edx+0x10]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_63a35dc]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_630d844
        public_630d7ec : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        public_630d7f3 : nop
        cmp dx, 0x21
        jne public_630d838
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        cmp edx, dword ptr ds : [eax+4]
        jne public_630d831
        mov esi, dword ptr ds : [ecx]
        test esi, esi
        mov edi, dword ptr ds : [eax]
        je public_630d828
        lea esp, ss:[esp]
        public_630d810 : nop
        test edi, edi
        je public_630d828
        push edi
        mov ecx, esi
        call public_630d770
        test al, al
        je public_630d831
        mov esi, dword ptr ds : [esi]
        test esi, esi
        mov edi, dword ptr ds : [edi]
        jne public_630d810
        public_630d828 : nop
        cmp esi, edi
        sete al
        test al, al
        jne public_630d844
        public_630d831 : nop
        pop edi
        xor al, al
        pop esi
        ret 4
        public_630d838 : nop
        cmp ecx, dword ptr ds : [eax+4]
        je public_630d844
        pop edi
        xor al, al
        pop esi
        ret 4
        public_630d844 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x630d770)
    }
}

#undef public_630d787
#undef public_630d7ec
#undef public_630d7f3
#undef public_630d810
#undef public_630d828
#undef public_630d831
#undef public_630d838
#undef public_630d844
