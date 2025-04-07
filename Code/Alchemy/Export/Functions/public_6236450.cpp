#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6236450);

#define public_6236493 _public_6236493
#define public_6236524 _public_6236524

PROC_DECLARE(0x6236450, internal_6236450, public_6236450);
extern "C" NAKED register_t __cdecl internal_6236450()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push ecx
        mov ecx, esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+0x44]
        mov edx, dword ptr ds : [esi+0x9C]
        mov eax, dword ptr ds : [edx+0x58]
        mov edx, dword ptr ds : [esi+0x84]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        fcom qword ptr ds : [public_624d168]
        fnstsw ax
        test ah, 5
        jp public_6236493
        fstp st(0)
        fld dword ptr ds : [public_624ee18]
        public_6236493 : nop
        fld dword ptr ds : [public_624bac4]
        fdiv st, st(1)
        mov eax, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ds : [esi+0x84]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        push edx
        fstp dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [eax+0x54]
        fstp st(0)
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [esi+0x9C]
        mov edx, dword ptr ds : [esi+0x84]
        fstp dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ds : [eax+0x50]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        fchs 
        fstp dword ptr ds : [esi+0xA4]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [esi+0xA0]
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [esi+0xB0], eax
        fmul dword ptr ds : [public_624ca50]
        fst dword ptr ds : [esi+0xA8]
        fcomp dword ptr ds : [public_624bac4]
        fnstsw ax
        and eax, 0x4100
        jne public_6236524
        mov dword ptr ds : [esi+0xA8], 0x3F800000
        public_6236524 : nop
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6236450)
    }
}

#undef public_6236493
#undef public_6236524
