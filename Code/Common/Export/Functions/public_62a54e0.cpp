#include "Common-PCH.h"


#define public_62a54fa _public_62a54fa
#define public_62a5515 _public_62a5515
#define public_62a552d _public_62a552d
#define public_62a55ec _public_62a55ec
#define public_62a55ee _public_62a55ee

PROC_DECLARE(0x62a54e0, internal_62a54e0, public_62a54e0);
extern "C" NAKED register_t __cdecl internal_62a54e0()
{
    __asm
    {
        sub esp, 0xC
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x28]
        test ecx, ecx
        jne public_62a54fa
        fld dword ptr ds : [public_639a1d0]
        pop esi
        add esp, 0xC
        ret 8
        public_62a54fa : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_62a5515
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        jmp public_62a552d
        public_62a5515 : nop
        mov edx, dword ptr ds : [esi+0x48]
        add edx, dword ptr ds : [esi+0x44]
        mov dword ptr ss : [esp+0x18], edx
        fild dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_639dfe0]
        fstp dword ptr ss : [esp+0x18]
        public_62a552d : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x28]
        fsub dword ptr ds : [eax]
        fstp dword ptr ss : [esp+4]
        fstp dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x30]
        fadd dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        faddp 
        fst dword ptr ss : [esp+0x14]
        fld st(1)
        fmul st, st(2)
        fxch 
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        je public_62a55ee
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+0x28]
        fsqrt 
        lea edx, ss:[esp+4]
        push edx
        fst dword ptr ss : [esp+0x18]
        fdivr qword ptr ds : [public_6399410]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0xC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [eax+0x40]
        fsubr dword ptr ss : [esp+0x14]
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 0x41
        jp public_62a55ec
        fdiv dword ptr ss : [esp+0x18]
        pop esi
        fsubr dword ptr ds : [public_639a1d0]
        add esp, 0xC
        ret 8
        public_62a55ec : nop
        fstp st(0)
        public_62a55ee : nop
        fld dword ptr ds : [public_6399408]
        pop esi
        add esp, 0xC
        ret 8
        UNREACHABLE_TRAP(0x62a54e0)
    }
}

#undef public_62a54fa
#undef public_62a5515
#undef public_62a552d
#undef public_62a55ec
#undef public_62a55ee
