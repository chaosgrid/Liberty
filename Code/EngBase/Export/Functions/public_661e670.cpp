#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661d7a0);
CLANG_FORWARD_PROC_SYMBOL(public_661d820);

#define public_661e6e8 _public_661e6e8
#define public_661e6f4 _public_661e6f4
#define public_661e73e _public_661e73e
#define public_661e74a _public_661e74a
#define public_661e76c _public_661e76c
#define public_661e796 _public_661e796
#define public_661e7a2 _public_661e7a2
#define public_661e7e8 _public_661e7e8

PROC_DECLARE(0x661e670, internal_661e670, public_661e670);
extern "C" NAKED register_t __cdecl internal_661e670()
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
        jne public_661e7e8
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jp public_661e7e8
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, esi
        push edx
        call public_661d820
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_66291e0]
        mov edi, eax
        fnstsw ax
        and eax, 0x100
        jne public_661e6e8
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+8]
        jmp public_661e6f4
        public_661e6e8 : nop
        mov eax, dword ptr ds : [esi+0x14]
        mov ecx, dword ptr ds : [esi+0x10]
        imul eax, edi
        fld dword ptr ds : [eax+ecx]
        public_661e6f4 : nop
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        and eax, 0x4100
        je public_661e76c
        push edi
        mov ecx, esi
        fstp st(0)
        call public_661d7a0
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [ecx], eax
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_66291e0]
        fnstsw ax
        and eax, 0x100
        jne public_661e73e
        mov dword ptr ss : [esp+8], edi
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+8]
        jmp public_661e74a
        public_661e73e : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        imul edx, edi
        fld dword ptr ds : [edx+eax]
        public_661e74a : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x2C]
        pop edi
        fld st(0)
        pop esi
        fstp dword ptr ds : [ecx]
        fstp dword ptr ds : [edx]
        mov dword ptr ds : [eax], 0
        xor eax, eax
        add esp, 8
        ret 0x1C
        public_661e76c : nop
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_66291e0]
        lea ecx, ds:[edi-1]
        fnstsw ax
        and eax, 0x100
        jne public_661e796
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+0xC], 0
        fild qword ptr ss : [esp+8]
        fmul dword ptr ds : [esi+8]
        jmp public_661e7a2
        public_661e796 : nop
        mov edx, dword ptr ds : [esi+0x14]
        mov eax, dword ptr ds : [esi+0x10]
        imul edx, ecx
        fld dword ptr ds : [edx+eax]
        public_661e7a2 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        push ecx
        mov ecx, esi
        fstp dword ptr ds : [eax]
        fld st(0)
        fstp dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [eax]
        fxch 
        fsub dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x30]
        fdivp 
        fstp dword ptr ds : [eax]
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
        ret 0x1C
        public_661e7e8 : nop
        mov eax, edi
        pop edi
        pop esi
        add esp, 8
        ret 0x1C
        UNREACHABLE_TRAP(0x661e670)
    }
}

#undef public_661e6e8
#undef public_661e6f4
#undef public_661e73e
#undef public_661e74a
#undef public_661e76c
#undef public_661e796
#undef public_661e7a2
#undef public_661e7e8
