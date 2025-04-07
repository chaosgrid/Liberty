#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6628190);

#define public_661cbcf _public_661cbcf
#define public_661cc31 _public_661cc31

PROC_DECLARE(0x661caf0, internal_661caf0, public_661caf0);
extern "C" NAKED register_t __cdecl internal_661caf0()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        cmp dword ptr ds : [esi+8], 1
        jne public_661cc31
        mov eax, dword ptr ds : [esi+0x24]
        lea edx, ss:[esp+4]
        push edx
        lea edx, ss:[esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ds : [esi+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov ecx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [ecx]
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x24]
        fxch 
        fmul dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [eax+8]
        fld dword ptr ds : [esi+0x2C]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fmul st, st(1)
        fxch 
        fstp st(0)
        fld dword ptr ds : [esi+0x30]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_662acf4]
        fstp dword ptr ss : [esp+0x14]
        fxch 
        fmul st, st(1)
        mov ecx, dword ptr ss : [esp+0x14]
        test eax, eax
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x2C], ecx
        fstp st(0)
        mov dword ptr ss : [esp+0x30], edx
        jne public_661cbcf
        call public_6628190
        mov dword ptr ds : [public_662acf4], eax
        public_661cbcf : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x28]
        push edx
        lea edx, ds:[esi+0x3C]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ss : [esp+0x38]
        lea ecx, ds:[esi+0x60]
        add esi, 0x78
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+8], edx
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+8], eax
        public_661cc31 : nop
        pop esi
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x661caf0)
    }
}

#undef public_661cbcf
#undef public_661cc31
