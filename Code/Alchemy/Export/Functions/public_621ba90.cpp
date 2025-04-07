#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ab0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_623f1f0);

#define public_621bbf9 _public_621bbf9
#define public_621bc3b _public_621bc3b
#define public_621bca4 _public_621bca4

PROC_DECLARE(0x621ba90, internal_621ba90, public_621ba90);
extern "C" NAKED register_t __cdecl internal_621ba90()
{
    __asm
    {
        sub esp, 0x28
        push esi
        push edi
        mov esi, ecx
        call public_623f1f0
        fmul dword ptr ds : [public_624d4c8]
        fstp dword ptr ss : [esp+8]
        call public_623f1f0
        fmul dword ptr ds : [esi+0xF8]
        fadd dword ptr ds : [esi+0xF4]
        fld st(0)
        fsin 
        fld dword ptr ss : [esp+8]
        fcos 
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fxch 
        fcos 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+8]
        fsin 
        fmul st, st(1)
        fchs 
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        call public_623f1f0
        fmul dword ptr ds : [esi+0x100]
        sub esp, 0xC
        lea ecx, ss:[esp+0x18]
        fadd dword ptr ds : [esi+0xFC]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6206ab0
        fld dword ptr ds : [esi+0xB0]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        sub esp, 0xC
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x28], ecx
        lea ecx, ss:[esp+0x18]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x2C], edx
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fstp st(0)
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_6257a30]
        test eax, eax
        fstp dword ptr ss : [esp+0x2C]
        jne public_621bbf9
        call public_623e830
        mov dword ptr ds : [public_6257a30], eax
        public_621bbf9 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        lea edi, ds:[esi+0xBC]
        push edx
        lea edx, ss:[esp+0x10]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [public_6257a30]
        mov dword ptr ss : [esp+0x28], ecx
        test eax, eax
        mov dword ptr ss : [esp+0x2C], edx
        jne public_621bc3b
        call public_623e830
        mov dword ptr ds : [public_6257a30], eax
        public_621bc3b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x10]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [esi+0xB4]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+0x98]
        push edx
        lea edx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x20], ecx
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0xB8]
        test eax, eax
        jl public_621bca4
        mov edx, dword ptr ds : [esi+0xB4]
        mov eax, dword ptr ds : [esi+0x98]
        push edx
        lea edx, ss:[esp+0x1C]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0xBC]
        public_621bca4 : nop
        pop edi
        pop esi
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x621ba90)
    }
}

#undef public_621bbf9
#undef public_621bc3b
#undef public_621bca4
