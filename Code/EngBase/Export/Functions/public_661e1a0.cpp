#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d7a0);
CLANG_FORWARD_PROC_SYMBOL(public_661d820);

#define public_661e218 _public_661e218
#define public_661e224 _public_661e224
#define public_661e25b _public_661e25b
#define public_661e285 _public_661e285
#define public_661e291 _public_661e291
#define public_661e2cd _public_661e2cd

PROC_DECLARE(0x661e1a0, internal_661e1a0, public_661e1a0);
extern "C" NAKED register_t __cdecl internal_661e1a0()
{
    __asm
    {
        sub esp, 8
        lea ecx, ss:[esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push ecx
        mov eax, dword ptr ds : [esi]
        push esi
        mov edi, 0xFFFFFFFE
        call dword ptr ds : [eax+0x10]
        fld dword ptr ss : [esp+0x18]
        fcomp qword ptr ds : [public_6629238]
        fnstsw ax
        and eax, 0x100
        jne public_661e2cd
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jp public_661e2cd
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, esi
        push edx
        call public_661d820
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_66291e0]
        mov edi, eax
        fnstsw ax
        and eax, 0x100
        jne public_661e218
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+8]
        jmp public_661e224
        public_661e218 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+0x10]
        imul eax, edi
        fld dword ptr ds : [eax+ecx]
        public_661e224 : nop
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        and eax, 0x4100
        je public_661e25b
        push edi
        mov ecx, esi
        fstp st(0)
        call public_661d7a0
        pop edi
        pop esi
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        mov dword ptr ds : [edx], 0
        add esp, 8
        ret 0x14
        public_661e25b : nop
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_66291e0]
        lea ecx, ds:[edi-1]
        fnstsw ax
        and eax, 0x100
        jne public_661e285
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+8]
        jmp public_661e291
        public_661e285 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [esi+0x10]
        imul eax, ecx
        fld dword ptr ds : [eax+edx]
        public_661e291 : nop
        fld dword ptr ss : [esp+0x18]
        fsub st, st(1)
        fxch st(2)
        fsub st, st(1)
        mov eax, dword ptr ss : [esp+0x24]
        push ecx
        fdivp st(2), st
        fxch 
        mov ecx, esi
        fstp dword ptr ds : [eax]
        fstp st(0)
        call public_661d7a0
        push edi
        mov ecx, dword ptr ss : [esp+0x20]
        mov dword ptr ds : [ecx], eax
        mov ecx, esi
        call public_661d7a0
        pop edi
        pop esi
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        add esp, 8
        ret 0x14
        public_661e2cd : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 8
        ret 0x14
        UNREACHABLE_TRAP(0x661e1a0)
    }
}

#undef public_661e218
#undef public_661e224
#undef public_661e25b
#undef public_661e285
#undef public_661e291
#undef public_661e2cd
