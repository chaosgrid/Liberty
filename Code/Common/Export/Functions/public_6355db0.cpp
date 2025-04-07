#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6347e90);
CLANG_FORWARD_PROC_SYMBOL(public_6348580);
CLANG_FORWARD_PROC_SYMBOL(public_6355db0);
CLANG_FORWARD_PROC_SYMBOL(public_6366010);

#define public_6355dd1 _public_6355dd1
#define public_6355ddb _public_6355ddb
#define public_6355f2d _public_6355f2d
#define public_6355f3a _public_6355f3a
#define public_6355f80 _public_6355f80
#define public_6355f8d _public_6355f8d
#define public_6355fc0 _public_6355fc0

PROC_DECLARE(0x6355db0, internal_6355db0, public_6355db0);
extern "C" NAKED register_t __cdecl internal_6355db0()
{
    __asm
    {
        sub esp, 0x40
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [ecx]
        test al, 0xC
        jne public_6355dd1
        test ah, 3
        jne public_6355dd1
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [esi+0x64], ecx
        mov dword ptr ds : [esi+0x60], eax
        jmp public_6355ddb
        public_6355dd1 : nop
        mov dword ptr ds : [esi+0x60], ecx
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [esi+0x64], ecx
        public_6355ddb : nop
        mov ecx, dword ptr ds : [esi+0x64]
        fld dword ptr ds : [ecx+0xA8]
        mov eax, dword ptr ds : [esi+0x60]
        fsub dword ptr ds : [eax+0xA8]
        add ecx, 0xA4
        fld dword ptr ds : [ecx+8]
        add eax, 0xA4
        fsub dword ptr ds : [eax+8]
        push ebx
        push edi
        fstp dword ptr ss : [esp+0x50]
        fld dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x50]
        fsub dword ptr ds : [eax]
        mov ecx, esi
        mov dword ptr ds : [esi+8], edx
        fstp dword ptr ds : [esi]
        fstp dword ptr ds : [esi+4]
        call public_6347e90
        mov eax, dword ptr ds : [esi+0x60]
        fstp dword ptr ds : [esi+0x30]
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ds:[eax+0x94]
        push edx
        lea ecx, ds:[eax+0xF4]
        call public_6348580
        mov eax, dword ptr ds : [esi+0x64]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ds:[eax+0x94]
        push edx
        lea ecx, ds:[eax+0xF4]
        call public_6348580
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x2C]
        lea ecx, ss:[esp+0xC]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x24]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x14]
        call public_6347e90
        fstp dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [esi+0x60]
        lea edi, ds:[esi+0x10]
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        add ecx, 0xF4
        call public_6366010
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63a5498]
        lea ebx, ds:[esi+0x20]
        fld dword ptr ss : [esp+0x14]
        push ebx
        fmul dword ptr ds : [public_63a5498]
        lea edx, ss:[esp+0x10]
        push edx
        fstp dword ptr ss : [esp+0x58]
        fld dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [public_63a5498]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [esi+0x64]
        add ecx, 0xF4
        fstp dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x18]
        call public_6366010
        mov eax, dword ptr ds : [esi+0x60]
        fld dword ptr ds : [eax+0x14]
        add eax, 0x14
        fmul dword ptr ds : [edi]
        fstp dword ptr ss : [esp+0x3C]
        lea ecx, ss:[esp+0x3C]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [edi+4]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [edi+8]
        fstp dword ptr ss : [esp+0x44]
        call public_6347e60
        fcom dword ptr ds : [public_63a53d8]
        fst dword ptr ds : [esi+0x48]
        mov edi, 0x3F800000
        fnstsw ax
        test ah, 1
        je public_6355f2d
        mov dword ptr ds : [esi+0x48], edi
        fstp st(0)
        mov dword ptr ds : [esi+0x50], edi
        jmp public_6355f3a
        public_6355f2d : nop
        fld dword ptr ds : [public_63a53d0]
        fdiv st, st(1)
        fstp dword ptr ds : [esi+0x50]
        fstp st(0)
        public_6355f3a : nop
        mov eax, dword ptr ds : [esi+0x64]
        fld dword ptr ds : [ebx]
        fmul dword ptr ds : [eax+0x14]
        add eax, 0x14
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [ebx+4]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [eax+8]
        fmul dword ptr ds : [ebx+8]
        fstp dword ptr ss : [esp+0x44]
        call public_6347e60
        fcom dword ptr ds : [public_63a53d8]
        fst dword ptr ds : [esi+0x4C]
        fnstsw ax
        test ah, 1
        je public_6355f80
        mov dword ptr ds : [esi+0x4C], edi
        fstp st(0)
        mov dword ptr ds : [esi+0x54], edi
        jmp public_6355f8d
        public_6355f80 : nop
        fld dword ptr ds : [public_63a53d0]
        fdiv st, st(1)
        fstp dword ptr ds : [esi+0x54]
        fstp st(0)
        public_6355f8d : nop
        mov eax, dword ptr ds : [esi+0x64]
        fld dword ptr ds : [eax+0x20]
        pop edi
        fstp dword ptr ds : [esi+0x38]
        fld dword ptr ds : [eax+0x40]
        mov eax, dword ptr ds : [esi+0x60]
        fstp dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax]
        test cl, 0xC
        pop ebx
        jne public_6355fc0
        test ch, 3
        jne public_6355fc0
        fld dword ptr ds : [eax+0x20]
        fstp dword ptr ds : [esi+0x34]
        fld dword ptr ds : [eax+0x40]
        fstp dword ptr ds : [esi+0x3C]
        pop esi
        add esp, 0x40
        ret 8
        public_6355fc0 : nop
        fld dword ptr ds : [esi+0x38]
        fmul dword ptr ds : [public_63a565c]
        fstp dword ptr ds : [esi+0x34]
        fld dword ptr ds : [esi+0x40]
        fmul dword ptr ds : [public_63a547c]
        fstp dword ptr ds : [esi+0x3C]
        fld dword ptr ds : [esi+0x4C]
        fmul dword ptr ds : [public_63a565c]
        fstp dword ptr ds : [esi+0x48]
        fld dword ptr ds : [esi+0x54]
        fmul dword ptr ds : [public_63a547c]
        fstp dword ptr ds : [esi+0x50]
        pop esi
        add esp, 0x40
        ret 8
        UNREACHABLE_TRAP(0x6355db0)
    }
}

#undef public_6355dd1
#undef public_6355ddb
#undef public_6355f2d
#undef public_6355f3a
#undef public_6355f80
#undef public_6355f8d
#undef public_6355fc0
