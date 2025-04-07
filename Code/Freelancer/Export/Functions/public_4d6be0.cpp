#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);

#define public_4d6c00 _public_4d6c00
#define public_4d6c28 _public_4d6c28
#define public_4d6c2e _public_4d6c2e
#define public_4d6c51 _public_4d6c51
#define public_4d6c57 _public_4d6c57
#define public_4d6c7a _public_4d6c7a
#define public_4d6c80 _public_4d6c80
#define public_4d6ca3 _public_4d6ca3
#define public_4d6ca9 _public_4d6ca9
#define public_4d6cb2 _public_4d6cb2
#define public_4d6cbf _public_4d6cbf
#define public_4d6cc6 _public_4d6cc6

PROC_DECLARE(0x4d6be0, internal_4d6be0, public_4d6be0);
extern "C" NAKED register_t __cdecl internal_4d6be0()
{
    __asm
    {
        push esi
        push edi
        mov esi, ecx
        call public_41dd90
        xor edi, edi
        test al, al
        je public_4d6c00
        call public_54baf0
        test eax, eax
        je public_4d6c00
        push edi
        mov ecx, esi
        call public_5a0c30
        public_4d6c00 : nop
        call public_42d680
        fld dword ptr ds : [esi+0x380]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6c28
        fld dword ptr ds : [esi+0x380]
        fsub st, st(1)
        fstp dword ptr ds : [esi+0x380]
        jmp public_4d6c2e
        public_4d6c28 : nop
        mov dword ptr ds : [esi+0x380], edi
        public_4d6c2e : nop
        fld dword ptr ds : [esi+0x354]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6c51
        fld dword ptr ds : [esi+0x354]
        fsub st, st(1)
        fstp dword ptr ds : [esi+0x354]
        jmp public_4d6c57
        public_4d6c51 : nop
        mov dword ptr ds : [esi+0x354], edi
        public_4d6c57 : nop
        fld dword ptr ds : [esi+0x3AC]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6c7a
        fld dword ptr ds : [esi+0x3AC]
        fsub st, st(1)
        fstp dword ptr ds : [esi+0x3AC]
        jmp public_4d6c80
        public_4d6c7a : nop
        mov dword ptr ds : [esi+0x3AC], edi
        public_4d6c80 : nop
        fld dword ptr ds : [esi+0x3D8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4d6ca3
        fld dword ptr ds : [esi+0x3D8]
        fsub st, st(1)
        fstp dword ptr ds : [esi+0x3D8]
        jmp public_4d6ca9
        public_4d6ca3 : nop
        mov dword ptr ds : [esi+0x3D8], edi
        public_4d6ca9 : nop
        mov esi, dword ptr ds : [esi+0xC]
        fstp st(0)
        cmp esi, edi
        je public_4d6cc6
        public_4d6cb2 : nop
        test byte ptr ds : [esi+0x6C], 1
        jne public_4d6cbf
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        public_4d6cbf : nop
        mov esi, dword ptr ds : [esi+8]
        cmp esi, edi
        jne public_4d6cb2
        public_4d6cc6 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x4d6be0)
    }
}

#undef public_4d6c00
#undef public_4d6c28
#undef public_4d6c2e
#undef public_4d6c51
#undef public_4d6c57
#undef public_4d6c7a
#undef public_4d6c80
#undef public_4d6ca3
#undef public_4d6ca9
#undef public_4d6cb2
#undef public_4d6cbf
#undef public_4d6cc6
