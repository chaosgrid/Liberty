#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fe4b0);
CLANG_FORWARD_PROC_SYMBOL(public_67006d0);

#define public_66fe4ca _public_66fe4ca

PROC_DECLARE(0x66fe4b0, internal_66fe4b0, public_66fe4b0);
extern "C" NAKED register_t __cdecl internal_66fe4b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_670462c]
        sub esp, 0x3C
        test eax, eax
        push esi
        push edi
        mov esi, ecx
        jne public_66fe4ca
        call public_67006d0
        mov dword ptr ds : [public_670462c], eax
        public_66fe4ca : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x14]
        fchs 
        mov eax, dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+8]
        fchs 
        mov ecx, 9
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov edi, eax
        fchs 
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x20]
        lea esi, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x40]
        rep movsd
        lea ecx, ds:[eax+0x24]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x66fe4b0)
    }
}

#undef public_66fe4ca
