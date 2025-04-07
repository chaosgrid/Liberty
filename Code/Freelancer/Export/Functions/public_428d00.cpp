#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428d00);

#define public_428d40 _public_428d40
#define public_428d44 _public_428d44
#define public_428d6d _public_428d6d
#define public_428d80 _public_428d80
#define public_428dab _public_428dab

PROC_DECLARE(0x428d00, internal_428d00, public_428d00);
extern "C" NAKED register_t __cdecl internal_428d00()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [public_667cb4]
        test edx, edx
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        mov dword ptr ss : [esp+4], eax
        mov esi, edx
        je public_428dab
        fld dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_667cac]
        fcomp qword ptr ds : [public_5ca158]
        fnstsw ax
        test ah, 0x41
        jne public_428d44
        cmp ecx, 3
        mov eax, dword ptr ds : [public_6108d8]
        je public_428d40
        mov eax, dword ptr ds : [public_6108e4]
        public_428d40 : nop
        mov dword ptr ss : [esp+4], eax
        public_428d44 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5ca158]
        fnstsw ax
        test ah, 0x41
        jne public_428d80
        cmp ecx, 3
        jne public_428d6d
        fld dword ptr ds : [public_6108dc]
        mov ecx, dword ptr ss : [esp+4]
        fstp dword ptr ds : [esi+0x38]
        mov dword ptr ds : [esi+0x34], ecx
        pop esi
        pop ecx
        ret 
        public_428d6d : nop
        fld dword ptr ds : [public_6108e8]
        mov ecx, dword ptr ss : [esp+4]
        fstp dword ptr ds : [esi+0x38]
        mov dword ptr ds : [esi+0x34], ecx
        pop esi
        pop ecx
        ret 
        public_428d80 : nop
        mov ecx, dword ptr ds : [edx]
        lea eax, ss:[esp+0x10]
        push eax
        push edx
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [ecx+0x24]
        fld dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [esi+0x34], ecx
        fdiv dword ptr ss : [esp+0x14]
        fabs 
        fstp dword ptr ds : [esi+0x38]
        public_428dab : nop
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x428d00)
    }
}

#undef public_428d40
#undef public_428d44
#undef public_428d6d
#undef public_428d80
#undef public_428dab
