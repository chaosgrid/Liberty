#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ab0);
CLANG_FORWARD_PROC_SYMBOL(public_623bf90);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_623f1f0);

#define public_623becd _public_623becd
#define public_623bf0f _public_623bf0f
#define public_623bf78 _public_623bf78

PROC_DECLARE(0x623bd60, internal_623bd60, public_623bd60);
extern "C" NAKED register_t __cdecl internal_623bd60()
{
    __asm
    {
        sub esp, 0x2C
        push esi
        push edi
        mov esi, ecx
        call public_623f1f0
        fsub dword ptr ds : [public_624bab8]
        fadd st(0), st
        fstp dword ptr ss : [esp+0xC]
        call public_623f1f0
        fsub dword ptr ds : [public_624bab8]
        fadd st(0), st
        fstp dword ptr ss : [esp+8]
        call public_623f1f0
        fsub dword ptr ds : [public_624bab8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x2C], ecx
        lea ecx, ss:[esp+0x28]
        fadd st(0), st
        mov dword ptr ss : [esp+0x28], eax
        fstp dword ptr ss : [esp+0x30]
        call public_623bf90
        call public_623f1f0
        fmul dword ptr ds : [esi+0xF8]
        sub esp, 0xC
        lea ecx, ss:[esp+0x1C]
        fadd dword ptr ds : [esi+0xF4]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fstp st(0)
        call public_6206ab0
        fld dword ptr ds : [esi+0xB0]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        sub esp, 0xC
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x30], ecx
        lea ecx, ss:[esp+0x1C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x28], edx
        mov dword ptr ss : [esp+0x2C], eax
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fstp st(0)
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x24]
        fxch 
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_6257ba4]
        test eax, eax
        fstp dword ptr ss : [esp+0x30]
        jne public_623becd
        call public_623e830
        mov dword ptr ds : [public_6257ba4], eax
        public_623becd : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x28]
        lea edi, ds:[esi+0xBC]
        push ecx
        lea ecx, ss:[esp+0x14]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [public_6257ba4]
        mov dword ptr ss : [esp+0x28], edx
        test eax, eax
        mov dword ptr ss : [esp+0x30], ecx
        jne public_623bf0f
        call public_623e830
        mov dword ptr ds : [public_6257ba4], eax
        public_623bf0f : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x14]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [esi+0xB4]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [esi+0x98]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0xB8]
        test eax, eax
        jl public_623bf78
        mov ecx, dword ptr ds : [esi+0xB4]
        mov eax, dword ptr ds : [esi+0x98]
        push ecx
        lea ecx, ss:[esp+0x20]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0xBC]
        public_623bf78 : nop
        pop edi
        pop esi
        add esp, 0x2C
        ret 0xC
        UNREACHABLE_TRAP(0x623bd60)
    }
}

#undef public_623becd
#undef public_623bf0f
#undef public_623bf78
