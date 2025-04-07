#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e89a0);

#define public_62c881e _public_62c881e
#define public_62c8850 _public_62c8850
#define public_62c8864 _public_62c8864
#define public_62c88aa _public_62c88aa

PROC_DECLARE(0x62c8800, internal_62c8800, public_62c8800);
extern "C" NAKED register_t __cdecl internal_62c8800()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x40]
        sub eax, 0
        je public_62c8864
        dec eax
        je public_62c881e
        mov eax, 3
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        add esp, 0x18
        ret 
        public_62c881e : nop
        fld dword ptr ds : [esi+0x1C]
        mov ecx, dword ptr ds : [esi+0x24]
        fadd dword ptr ds : [esi+0x2C]
        add ecx, 0x18
        push 0
        fst dword ptr ds : [esi+0x2C]
        fcomp dword ptr ds : [esi+0x30]
        fnstsw ax
        test ah, 5
        jp public_62c8850
        push 0xBF800000
        call public_62e89a0
        mov eax, 1
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        add esp, 0x18
        ret 
        public_62c8850 : nop
        push 0
        call public_62e89a0
        mov eax, 2
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        add esp, 0x18
        ret 
        public_62c8864 : nop
        fld dword ptr ds : [esi+0x1C]
        fadd dword ptr ds : [esi+0x2C]
        fst dword ptr ds : [esi+0x2C]
        fcomp dword ptr ds : [esi+0x30]
        fnstsw ax
        test ah, 5
        mov eax, dword ptr ds : [esi+0x14]
        lea ecx, ds:[eax+4]
        jp public_62c88aa
        fld dword ptr ds : [esi+0x34]
        lea edx, ss:[esp+4]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0x38]
        mov dword ptr ss : [esp+0xC], 0
        fstp dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+8]
        mov eax, 1
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        add esp, 0x18
        ret 
        public_62c88aa : nop
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+8]
        mov eax, 2
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x62c8800)
    }
}

#undef public_62c881e
#undef public_62c8850
#undef public_62c8864
#undef public_62c88aa
