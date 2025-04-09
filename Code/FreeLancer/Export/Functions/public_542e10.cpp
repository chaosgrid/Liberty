#include "FreeLancer-PCH.h"


#define public_542e6c _public_542e6c
#define public_542efe _public_542efe

PROC_DECLARE(0x542e10, internal_542e10, public_542e10);
extern "C" NAKED register_t __cdecl internal_542e10()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        je public_542efe
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        mov edi, eax
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        jne public_542efe
        fld dword ptr ds : [esi+0x18]
        fcomp dword ptr ds : [public_5dfb34]
        fnstsw ax
        test ah, 5
        jp public_542efe
        fld dword ptr ds : [esi+0x18]
        fmul dword ptr ds : [public_5d440c]
        fadd dword ptr ds : [esi+0x1C]
        fcom dword ptr ds : [public_5ca230]
        fnstsw ax
        test ah, 0x41
        jne public_542e6c
        fstp st(0)
        fld dword ptr ds : [public_5ca230]
        public_542e6c : nop
        fld dword ptr ds : [esi+0x2C]
        mov ecx, dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x38]
        fld dword ptr ds : [esi+0x44]
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        fchs 
        fstp dword ptr ss : [esp+8]
        fchs 
        fld dword ptr ss : [esp+0x1C]
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+8]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x10]
        fld dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        call dword ptr ds : [edx]
        fld dword ptr ss : [esp+0x10]
        push 0
        fadd dword ptr ds : [eax+8]
        lea ecx, ds:[edi+8]
        fld dword ptr ss : [esp+0x10]
        push ecx
        fadd dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x1C]
        fld dword ptr ss : [esp+0x10]
        push edx
        fadd dword ptr ds : [eax]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [eax+0x7C]
        public_542efe : nop
        pop edi
        pop esi
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x542e10)
    }
}

#undef public_542e6c
#undef public_542efe
