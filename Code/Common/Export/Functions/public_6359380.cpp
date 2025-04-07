#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6347ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6347f50);
CLANG_FORWARD_PROC_SYMBOL(public_6358bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6358c00);
CLANG_FORWARD_PROC_SYMBOL(public_6359380);

#define public_63593b6 _public_63593b6
#define public_6359493 _public_6359493

PROC_DECLARE(0x6359380, internal_6359380, public_6359380);
extern "C" NAKED register_t __cdecl internal_6359380()
{
    __asm
    {
        sub esp, 0x3C
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x50]
        lea eax, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, edi
        call public_6358bb0
        mov dword ptr ss : [esp+0x18], 0
        lea esi, ss:[esp+0x24]
        lea ebp, ss:[esp+0x28]
        lea ebx, ds:[edi+0x10]
        mov dword ptr ss : [esp+0x10], 2
        public_63593b6 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_6359493
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edx+0x9C]
        fld dword ptr ds : [eax+0xF4]
        add eax, 0xF4
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [eax+0x10]
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [eax+0x20]
        mov eax, dword ptr ds : [edi+0x40]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x34]
        call public_6347f50
        lea ecx, ss:[esp+0x2C]
        call public_6347e60
        fstp dword ptr ss : [esp+0x50]
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [edi+0x44]
        fld st(0)
        fsub st, st(2)
        fmul dword ptr ss : [esp+0x50]
        fsubr st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x50]
        fcomp dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 1
        jne public_6359493
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x18], 1
        call public_6347ef0
        fld dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [ecx+0xDC]
        fld dword ptr ss : [esp+0x30]
        lea edx, ds:[ecx+0xD8]
        fstp dword ptr ds : [ecx+0xE0]
        fld dword ptr ss : [esp+0x34]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        mov eax, dword ptr ss : [esp+0x24]
        fstp dword ptr ds : [ecx+0xE4]
        mov edx, dword ptr ds : [ecx+0xFC]
        push edx
        push eax
        call public_6358c00
        public_6359493 : nop
        mov eax, dword ptr ss : [esp+0x10]
        add ebx, 0x14
        add esi, 4
        sub ebp, 4
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        jne public_63593b6
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+0xD4], edx
        pop ebx
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x6359380)
    }
}

#undef public_63593b6
#undef public_6359493
