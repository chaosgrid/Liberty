#include "Common-PCH.h"


#define public_6360442 _public_6360442
#define public_6360449 _public_6360449
#define public_636046b _public_636046b
#define public_636047a _public_636047a
#define public_6360489 _public_6360489
#define public_63604b4 _public_63604b4

PROC_DECLARE(0x63603e0, internal_63603e0, public_63603e0);
extern "C" NAKED register_t __cdecl internal_63603e0()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x98]
        fld dword ptr ds : [edx+0x14C]
        mov eax, dword ptr ss : [esp+0x10]
        fadd dword ptr ds : [edx+0x144]
        push esi
        mov esi, dword ptr ds : [eax+0x98]
        fadd dword ptr ds : [public_63a53d8]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi+0x14C]
        fadd dword ptr ds : [esi+0x144]
        fadd dword ptr ds : [public_63a53d8]
        fst dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 1
        je public_6360442
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+8], edx
        jmp public_6360449
        public_6360442 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+8], eax
        public_6360449 : nop
        fld dword ptr ss : [esp+4]
        pop esi
        fmul dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ds : [ecx+0x10]
        fst dword ptr ss : [esp+4]
        fcomp 
        fnstsw ax
        test ah, 1
        je public_636046b
        fstp st(0)
        fld dword ptr ss : [esp+4]
        public_636046b : nop
        fcom dword ptr ds : [ecx+0x14]
        fnstsw ax
        test ah, 1
        je public_636047a
        fstp st(0)
        fld dword ptr ds : [ecx+0x14]
        public_636047a : nop
        fcom dword ptr ds : [ecx+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_6360489
        fstp st(0)
        fld dword ptr ds : [ecx+0x18]
        public_6360489 : nop
        mov edx, dword ptr ds : [ecx+8]
        fld dword ptr ds : [edx+0xAC]
        fmul dword ptr ss : [esp]
        fsubp 
        fld dword ptr ss : [esp]
        fmul dword ptr ds : [ecx+0x1C]
        fstp dword ptr ss : [esp+4]
        fcom dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 1
        je public_63604b4
        fstp st(0)
        fld dword ptr ss : [esp+4]
        public_63604b4 : nop
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_63a5748]
        mov ecx, dword ptr ss : [esp+0x18]
        fadd dword ptr ss : [esp+0xC]
        fst dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_63a5744]
        fadd dword ptr ss : [esp+0x10]
        fst dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0xC]
        fdivr dword ptr ds : [public_63a53d0]
        fmulp 
        fld st(0)
        fmul dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [eax]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ds : [ecx]
        add esp, 8
        ret 0x10
        UNREACHABLE_TRAP(0x63603e0)
    }
}

#undef public_6360442
#undef public_6360449
#undef public_636046b
#undef public_636047a
#undef public_6360489
#undef public_63604b4
