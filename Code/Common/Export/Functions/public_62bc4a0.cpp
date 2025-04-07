#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bc4a0);

#define public_62bc4ee _public_62bc4ee
#define public_62bc584 _public_62bc584
#define public_62bc5e9 _public_62bc5e9
#define public_62bc60d _public_62bc60d
#define public_62bc616 _public_62bc616

PROC_DECLARE(0x62bc4a0, internal_62bc4a0, public_62bc4a0);
extern "C" NAKED register_t __cdecl internal_62bc4a0()
{
    __asm
    {
        sub esp, 0x24
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_62bc616
        mov eax, dword ptr ds : [ecx]
        push edi
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        mov edi, eax
        call dword ptr ds : [edx+0x10]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, edi
        dec eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        pop edi
        je public_62bc584
        dec eax
        je public_62bc4ee
        mov dword ptr ds : [esi+4], 0
        pop esi
        add esp, 0x24
        ret 4
        public_62bc4ee : nop
        mov eax, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+4]
        lea eax, ss:[esp+0x10]
        fmul dword ptr ss : [esp+4]
        push eax
        faddp 
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [public_639a1d0]
        fdiv dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [ecx]
        fstp st(0)
        call dword ptr ds : [edx+0x40]
        jmp public_62bc5e9
        public_62bc584 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [eax]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+4]
        fsub dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [eax+8]
        mov edx, dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x18], eax
        fld dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        fmul dword ptr ss : [esp+8]
        faddp 
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+4]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x2C]
        call dword ptr ds : [edx+0x30]
        public_62bc5e9 : nop
        fsubr dword ptr ss : [esp+0x2C]
        fcom dword ptr ds : [public_6399408]
        fst dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 5
        jp public_62bc60d
        mov dword ptr ds : [esi+4], 0
        fstp st(0)
        pop esi
        add esp, 0x24
        ret 4
        public_62bc60d : nop
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ds : [esi+4]
        fstp st(0)
        public_62bc616 : nop
        pop esi
        add esp, 0x24
        ret 4
        UNREACHABLE_TRAP(0x62bc4a0)
    }
}

#undef public_62bc4ee
#undef public_62bc584
#undef public_62bc5e9
#undef public_62bc60d
#undef public_62bc616
