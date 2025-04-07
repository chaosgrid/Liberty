#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_5a17b0);

#define public_588f30 _public_588f30
#define public_588f9d _public_588f9d
#define public_588fcd _public_588fcd

PROC_DECLARE(0x588e80, internal_588e80, public_588e80);
extern "C" NAKED register_t __cdecl internal_588e80()
{
    __asm
    {
        sub esp, 0x30
        push esi
        mov esi, ecx
        call public_5a17b0
        cmp dword ptr ds : [esi+0x84], 0xFFFFFFFF
        je public_588fcd
        fld dword ptr ds : [esi+0x41C]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jnp public_588fcd
        mov al, byte ptr ds : [esi+0x349]
        test al, al
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x10], 0x3F800000
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        je public_588f30
        call public_42d680
        fmul dword ptr ds : [esi+0x41C]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        fadd dword ptr ds : [esi+0x334]
        push ecx
        mov ecx, esi
        fstp dword ptr ds : [esi+0x334]
        call dword ptr ds : [eax+0x1C]
        mov ecx, esi
        call public_5a17b0
        pop esi
        add esp, 0x30
        ret 
        public_588f30 : nop
        fld dword ptr ds : [esi+0x334]
        fld dword ptr ds : [esi+0x330]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x32C]
        fstp dword ptr ss : [esp+0xC]
        fsubr dword ptr ds : [esi+0x338]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_5db098]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_588f9d
        fld dword ptr ds : [esi+0x33C]
        fsub dword ptr ss : [esp+8]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_5db098]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jp public_588f9d
        fld dword ptr ds : [esi+0x340]
        fsub dword ptr ss : [esp+0xC]
        fld st(0)
        fmul st, st(1)
        fcomp dword ptr ds : [public_5db098]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jnp public_588fcd
        public_588f9d : nop
        mov eax, dword ptr ds : [esi+0x33C]
        mov edx, dword ptr ds : [esi+0x338]
        mov ecx, dword ptr ds : [esi+0x340]
        mov dword ptr ds : [esi+0x330], eax
        lea eax, ss:[esp+0x10]
        mov dword ptr ds : [esi+0x334], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x32C], ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        public_588fcd : nop
        mov ecx, esi
        call public_5a17b0
        pop esi
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x588e80)
    }
}

#undef public_588f30
#undef public_588f9d
#undef public_588fcd
