#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4580);
CLANG_FORWARD_PROC_SYMBOL(public_65fb100);
CLANG_FORWARD_PROC_SYMBOL(public_65fb480);
CLANG_FORWARD_PROC_SYMBOL(public_65fb4b0);
CLANG_FORWARD_PROC_SYMBOL(public_65fb4f0);

#define public_65fb225 _public_65fb225
#define public_65fb373 _public_65fb373
#define public_65fb449 _public_65fb449

PROC_DECLARE(0x65fb100, internal_65fb100, public_65fb100);
extern "C" NAKED register_t __cdecl internal_65fb100()
{
    __asm
    {
        mov al, byte ptr ss : [esp+0x10]
        sub esp, 0x54
        test al, 4
        je public_65fb225
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [esp+0x60]
        fld dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], edx
        fld dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0xC], ecx
        fld dword ptr ds : [eax+0x20]
        fld dword ptr ss : [esp+0x14]
        fmul st, st(2)
        fld dword ptr ss : [esp+0x10]
        fmul st, st(2)
        fsubp 
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp], ecx
        fld dword ptr ss : [esp+0x14]
        fmul st, st(3)
        fsubp 
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x1C]
        fmul st, st(2)
        mov dword ptr ss : [esp+4], edx
        fxch 
        fmul dword ptr ss : [esp+0xC]
        fsubp 
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ss : [esp+0x20]
        fstp st(0)
        mov dword ptr ss : [esp+8], eax
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_66011e0]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp]
        fld dword ptr ss : [esp+4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+8]
        fmul st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp]
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0xC]
        fsubp 
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+4]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp]
        fsubp 
        mov ecx, dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x20], eax
        jmp public_65fb449
        public_65fb225 : nop
        test al, 8
        je public_65fb373
        mov ecx, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+4], eax
        mov eax, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp], edx
        mov edx, dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+8], ecx
        mov ecx, dword ptr ds : [eax+0xC]
        push edx
        mov edx, dword ptr ds : [eax]
        push ecx
        push edx
        lea ecx, ss:[esp+0x30]
        call public_65f4580
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+0x2C]
        sub esp, 0xC
        mov dword ptr ss : [esp+0x1C], ecx
        fsubp 
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x20], edx
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x14]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x10]
        fsubp 
        fstp dword ptr ss : [esp]
        call public_65f4580
        mov ecx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x20], edx
        call public_65fb480
        fdivr dword ptr ds : [public_66011e0]
        sub esp, 0xC
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x2C]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x24]
        fsubp 
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0xC]
        fsubp 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x28]
        fsubp 
        fstp dword ptr ss : [esp]
        lea ecx, ss:[esp+0x30]
        call public_65f4580
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x14], edx
        jmp public_65fb449
        public_65fb373 : nop
        test al, 0x10
        je public_65fb449
        mov eax, dword ptr ss : [esp+0x5C]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ss : [esp+0x60]
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, dword ptr ds : [eax+0x1C]
        push ecx
        mov dword ptr ss : [esp+0x20], edx
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+4]
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        call public_65f4580
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp], ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+4], edx
        push ecx
        lea edx, ss:[esp+4]
        mov dword ptr ss : [esp+0xC], eax
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_65fb4b0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        add esp, 0xC
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x14], eax
        call public_65fb480
        fdivr dword ptr ds : [public_66011e0]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        call public_65fb4b0
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x10], edx
        mov eax, dword ptr ds : [eax+8]
        add esp, 0xC
        mov dword ptr ss : [esp+8], eax
        public_65fb449 : nop
        push esi
        push edi
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x44]
        call public_65fb4f0
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, 9
        lea esi, ss:[esp+0x38]
        mov edi, eax
        rep movsd
        pop edi
        pop esi
        add esp, 0x54
        ret 
        UNREACHABLE_TRAP(0x65fb100)
    }
}

#undef public_65fb225
#undef public_65fb373
#undef public_65fb449
