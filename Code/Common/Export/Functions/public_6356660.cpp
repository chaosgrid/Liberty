#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347df0);
CLANG_FORWARD_PROC_SYMBOL(public_6354120);
CLANG_FORWARD_PROC_SYMBOL(public_63548e0);
CLANG_FORWARD_PROC_SYMBOL(public_6355590);

#define public_63566fb _public_63566fb
#define public_6356711 _public_6356711
#define public_635671c _public_635671c

PROC_DECLARE(0x6356660, internal_6356660, public_6356660);
extern "C" NAKED register_t __cdecl internal_6356660()
{
    __asm
    {
        push ecx
        cmp word ptr ds : [ecx+0x3E], 1
        push esi
        push edi
        jg public_635671c
        mov esi, dword ptr ds : [ecx+0x20]
        fld dword ptr ds : [esi+0x30]
        mov edi, dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [esi+0x54]
        fmul dword ptr ds : [esi+0x44]
        fmul dword ptr ds : [edi]
        fmul dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x3C]
        fld dword ptr ds : [esi+0x38]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fst dword ptr ss : [esp+8]
        fstp st(2)
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [public_63a5610]
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_63566fb
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_6347df0
        fld st(0)
        fmul dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+0x60]
        and ecx, 0xFFFFFF01
        add esp, 4
        fsub dword ptr ss : [esp+0x10]
        or ecx, 1
        mov dword ptr ds : [esi+0x60], ecx
        fmul dword ptr ds : [esi+0x54]
        fmul dword ptr ds : [esi+0x44]
        fadd dword ptr ds : [esi+0x48]
        fstp dword ptr ds : [esi+0x48]
        fmul dword ptr ss : [esp+0x10]
        fld st(0)
        fmul dword ptr ds : [esi+0x38]
        fstp dword ptr ds : [esi+0x38]
        fmul dword ptr ds : [esi+0x3C]
        fstp dword ptr ds : [esi+0x3C]
        public_63566fb : nop
        cmp byte ptr ds : [esi+0x34], 1
        push edi
        mov ecx, esi
        je public_6356711
        call public_6354120
        fstp st(0)
        pop edi
        pop esi
        pop ecx
        ret 8
        public_6356711 : nop
        call public_63548e0
        pop edi
        pop esi
        pop ecx
        ret 8
        public_635671c : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6355590
        pop edi
        pop esi
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6356660)
    }
}

#undef public_63566fb
#undef public_6356711
#undef public_635671c
