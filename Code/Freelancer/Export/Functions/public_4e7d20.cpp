#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41a3e0);
CLANG_FORWARD_PROC_SYMBOL(public_41dd90);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5a0340);

#define public_4e7e02 _public_4e7e02
#define public_4e7e04 _public_4e7e04
#define public_4e7e13 _public_4e7e13

PROC_DECLARE(0x4e7d20, internal_4e7d20, public_4e7d20);
extern "C" NAKED register_t __cdecl internal_4e7d20()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        call public_41dd90
        test al, al
        je public_4e7e13
        call public_54baf0
        test eax, eax
        je public_4e7e13
        call public_41a3e0
        test al, al
        jne public_4e7e13
        mov al, byte ptr ds : [esi+0x498]
        test al, al
        mov ecx, dword ptr ss : [esp+0x20]
        je public_4e7e04
        fld dword ptr ds : [esi+0x484]
        lea eax, ds:[esi+0x47C]
        fdiv dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+8], edx
        mov dword ptr ss : [esp+0xC], eax
        fld st(0)
        fmul dword ptr ds : [ecx]
        fxch 
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+4]
        fsub dword ptr ds : [esi+0x488]
        fld dword ptr ss : [esp+8]
        fadd dword ptr ds : [esi+0x48C]
        fstp dword ptr ss : [esp+8]
        fsubp 
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x20]
        fcom dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4e7e02
        fld dword ptr ds : [esi+0x488]
        fadd st(0), st
        fxch 
        fcompp 
        fnstsw ax
        test ah, 5
        jp public_4e7e04
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_4e7e04
        fld dword ptr ds : [esi+0x48C]
        fadd st(0), st
        fcomp dword ptr ss : [esp+0x20]
        fnstsw ax
        test ah, 0x41
        jne public_4e7e04
        mov al, 1
        pop esi
        add esp, 0x18
        ret 4
        public_4e7e02 : nop
        fstp st(0)
        public_4e7e04 : nop
        push ecx
        mov ecx, esi
        call public_5a0340
        pop esi
        add esp, 0x18
        ret 4
        public_4e7e13 : nop
        xor al, al
        pop esi
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x4e7d20)
    }
}

#undef public_4e7e02
#undef public_4e7e04
#undef public_4e7e13
