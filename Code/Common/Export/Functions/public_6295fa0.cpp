#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285c90);
CLANG_FORWARD_PROC_SYMBOL(public_629ae00);
CLANG_FORWARD_PROC_SYMBOL(public_629b010);

#define public_629602d _public_629602d
#define public_629603d _public_629603d
#define public_6296075 _public_6296075
#define public_62960a1 _public_62960a1
#define public_62960a6 _public_62960a6
#define public_62960aa _public_62960aa
#define public_62960ca _public_62960ca
#define public_62960cc _public_62960cc
#define public_6296104 _public_6296104

PROC_DECLARE(0x6295fa0, internal_6295fa0, public_6295fa0);
extern "C" NAKED register_t __cdecl internal_6295fa0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0xC]
        test al, al
        mov edi, dword ptr ss : [esp+0x10]
        je public_6296104
        mov al, byte ptr ds : [esi+0x54]
        fld dword ptr ds : [esi+0x50]
        test al, al
        je public_6296075
        mov ecx, dword ptr ds : [esi+0xC]
        fcomp dword ptr ds : [ecx+0x80]
        fnstsw ax
        test ah, 5
        jp public_62960aa
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [esi+0x50]
        fadd dword ptr ds : [esi+0x50]
        mov dword ptr ss : [esp+0x10], edx
        fst dword ptr ds : [esi+0x50]
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_629603d
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_62960aa
        fld dword ptr ds : [ecx+0x80]
        mov dword ptr ss : [esp+0x10], 2
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_629602d
        mov dword ptr ss : [esp+0x10], 3
        public_629602d : nop
        lea eax, ss:[esp+0x10]
        push eax
        push 0xE
        mov ecx, esi
        call public_629b010
        jmp public_62960aa
        public_629603d : nop
        fld dword ptr ds : [ecx+0x80]
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_62960a6
        fxch 
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 1
        jne public_62960aa
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0xE
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 3
        call public_629b010
        jmp public_62960aa
        public_6296075 : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62960aa
        fld dword ptr ss : [esp+0xC]
        fadd dword ptr ds : [esi+0x50]
        fcom dword ptr ds : [public_6399408]
        fst dword ptr ds : [esi+0x50]
        fnstsw ax
        test ah, 5
        jnp public_62960a1
        fstp st(0)
        fld dword ptr ds : [public_6399408]
        public_62960a1 : nop
        fstp dword ptr ds : [esi+0x50]
        jmp public_62960aa
        public_62960a6 : nop
        fstp st(0)
        fstp st(0)
        public_62960aa : nop
        test dword ptr ds : [public_639e528], edi
        jne public_6296104
        mov eax, dword ptr ds : [esi+4]
        test eax, eax
        je public_62960ca
        mov edx, dword ptr ds : [eax+0x4C]
        and edx, 0x503
        cmp edx, 0x503
        je public_62960cc
        public_62960ca : nop
        xor eax, eax
        public_62960cc : nop
        mov eax, dword ptr ds : [eax+0x29C]
        mov dword ptr ss : [esp+0x10], eax
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [esi+0x44]
        fnstsw ax
        test ah, 0x44
        jnp public_6296104
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_6296104
        lea ecx, ds:[esi+0x20]
        call public_6285c90
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+0x44], ecx
        public_6296104 : nop
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        push edx
        mov ecx, esi
        call public_629ae00
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6295fa0)
    }
}

#undef public_629602d
#undef public_629603d
#undef public_6296075
#undef public_62960a1
#undef public_62960a6
#undef public_62960aa
#undef public_62960ca
#undef public_62960cc
#undef public_6296104
