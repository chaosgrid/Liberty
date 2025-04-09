#include "FreeLancer-PCH.h"


#define public_410026 _public_410026
#define public_41003c _public_41003c
#define public_41006a _public_41006a
#define public_410084 _public_410084
#define public_4100b3 _public_4100b3
#define public_4100c3 _public_4100c3
#define public_4100e0 _public_4100e0
#define public_4100f6 _public_4100f6

PROC_DECLARE(0x40ffe0, internal_40ffe0, public_40ffe0);
extern "C" NAKED register_t __cdecl internal_40ffe0()
{
    __asm
    {
        sub esp, 8
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [esp+0xC]
        fchs 
        push esi
        fsub dword ptr ss : [esp+0x18]
        mov esi, 4
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [edx+8]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [ecx+0xA4]
        fnstsw ax
        test ah, 5
        jp public_410026
        mov eax, 1
        pop esi
        add esp, 8
        ret 0xC
        public_410026 : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [ecx+0xA4]
        fnstsw ax
        test ah, 5
        jp public_41003c
        mov esi, 3
        public_41003c : nop
        fld dword ptr ds : [edx]
        fabs 
        fmul dword ptr ds : [ecx+0x80]
        fld dword ptr ds : [ecx+0x88]
        fmul dword ptr ds : [edx+8]
        faddp 
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_41006a
        fstp st(0)
        mov eax, 1
        pop esi
        add esp, 8
        ret 0xC
        public_41006a : nop
        fld dword ptr ss : [esp+0x18]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_410084
        mov esi, 3
        public_410084 : nop
        fld dword ptr ds : [edx+4]
        fabs 
        fmul dword ptr ds : [ecx+0x90]
        fld dword ptr ds : [ecx+0x94]
        fmul dword ptr ds : [edx+8]
        faddp 
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jne public_4100b3
        fstp st(0)
        mov eax, 1
        pop esi
        add esp, 8
        ret 0xC
        public_4100b3 : nop
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_4100c3
        mov esi, 3
        public_4100c3 : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [ecx+0xA8]
        fnstsw ax
        test ah, 0x41
        jne public_4100e0
        mov eax, 1
        pop esi
        add esp, 8
        ret 0xC
        public_4100e0 : nop
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [ecx+0xA8]
        fnstsw ax
        test ah, 0x41
        jne public_4100f6
        mov esi, 3
        public_4100f6 : nop
        mov eax, esi
        pop esi
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x40ffe0)
    }
}

#undef public_410026
#undef public_41003c
#undef public_41006a
#undef public_410084
#undef public_4100b3
#undef public_4100c3
#undef public_4100e0
#undef public_4100f6
