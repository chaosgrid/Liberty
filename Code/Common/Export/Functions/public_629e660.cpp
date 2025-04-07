#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6274100);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_629e680 _public_629e680
#define public_629e716 _public_629e716
#define public_629e71c _public_629e71c

PROC_DECLARE(0x629e660, internal_629e660, public_629e660);
extern "C" NAKED register_t __cdecl internal_629e660()
{
    __asm
    {
        mov eax, dword ptr ds : [public_63fc22c]
        sub esp, 0x6C
        push esi
        push edi
        mov esi, ecx
        mov edi, dword ptr ds : [esi+4]
        add edi, 8
        test eax, eax
        jne public_629e680
        call public_6391cf0
        mov dword ptr ds : [public_63fc22c], eax
        public_629e680 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x20]
        push edx
        push edi
        lea edx, ss:[esp+0x4C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x44]
        push eax
        lea ecx, ss:[esp+0x18]
        call public_6274100
        mov ecx, dword ptr ss : [esp+0x78]
        mov esi, dword ptr ds : [esi+0xC]
        add ecx, 0x2C
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+8], edx
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0xC], eax
        fld dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], ecx
        fsub dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x10]
        fsub dword ptr ss : [esp+0x40]
        fld dword ptr ds : [esi+0x70]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_629e716
        fld dword ptr ds : [esi+0x70]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 5
        fstp st(0)
        jp public_629e71c
        pop edi
        xor al, al
        pop esi
        add esp, 0x6C
        ret 4
        public_629e716 : nop
        fstp st(0)
        fstp st(0)
        fstp st(0)
        public_629e71c : nop
        pop edi
        mov al, 1
        pop esi
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x629e660)
    }
}

#undef public_629e680
#undef public_629e716
#undef public_629e71c
