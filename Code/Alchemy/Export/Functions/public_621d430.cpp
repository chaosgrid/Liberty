#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6206ab0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_623f1f0);

#define public_621d5b2 _public_621d5b2
#define public_621d5f4 _public_621d5f4
#define public_621d65d _public_621d65d

PROC_DECLARE(0x621d430, internal_621d430, public_621d430);
extern "C" NAKED register_t __cdecl internal_621d430()
{
    __asm
    {
        sub esp, 0x30
        push esi
        push edi
        mov esi, ecx
        call public_623f1f0
        fmul dword ptr ds : [public_624d4c8]
        fstp dword ptr ss : [esp+8]
        call public_623f1f0
        fmul dword ptr ds : [esi+0xF8]
        mov eax, dword ptr ds : [esi+0x104]
        mov ecx, dword ptr ds : [esi+0x100]
        mov dword ptr ss : [esp+0xC], eax
        fadd dword ptr ds : [esi+0xF4]
        fld st(0)
        fsin 
        fld dword ptr ss : [esp+8]
        fcos 
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fxch 
        fcos 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+8]
        fsin 
        mov dword ptr ss : [esp+8], ecx
        fmul st, st(1)
        fchs 
        fstp dword ptr ss : [esp+0x34]
        fstp st(0)
        call public_623f1f0
        fsub dword ptr ds : [public_624bab8]
        mov edx, dword ptr ds : [esi+0xFC]
        fmul dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+8], edx
        fadd st(0), st
        fstp dword ptr ss : [esp+0x10]
        call public_623f1f0
        fsub dword ptr ds : [public_624bab8]
        fmul dword ptr ss : [esp+8]
        fadd st(0), st
        fstp dword ptr ss : [esp+8]
        call public_623f1f0
        fsub dword ptr ds : [public_624bab8]
        sub esp, 0xC
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x30], ecx
        fmul dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x2C], eax
        fadd st(0), st
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0xB0]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fstp st(0)
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp]
        call public_6206ab0
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x28]
        fxch 
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [eax+8]
        mov eax, dword ptr ds : [public_6257a34]
        test eax, eax
        fstp dword ptr ss : [esp+0x34]
        jne public_621d5b2
        call public_623e830
        mov dword ptr ds : [public_6257a34], eax
        public_621d5b2 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x2C]
        lea edi, ds:[esi+0xBC]
        push ecx
        lea ecx, ss:[esp+0x18]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [public_6257a34]
        mov dword ptr ss : [esp+0x2C], edx
        test eax, eax
        mov dword ptr ss : [esp+0x34], ecx
        jne public_621d5f4
        call public_623e830
        mov dword ptr ds : [public_6257a34], eax
        public_621d5f4 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x18]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [esi+0xB4]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [esi+0x98]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0xB8]
        test eax, eax
        jl public_621d65d
        mov ecx, dword ptr ds : [esi+0xB4]
        mov eax, dword ptr ds : [esi+0x98]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov edx, dword ptr ds : [eax]
        push edi
        push ecx
        push eax
        call dword ptr ds : [edx+0xBC]
        public_621d65d : nop
        pop edi
        pop esi
        add esp, 0x30
        ret 0xC
        UNREACHABLE_TRAP(0x621d430)
    }
}

#undef public_621d5b2
#undef public_621d5f4
#undef public_621d65d
