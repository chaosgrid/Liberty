#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5a0880);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_596018 _public_596018

PROC_DECLARE(0x595f90, internal_595f90, public_595f90);
extern "C" NAKED register_t __cdecl internal_595f90()
{
    __asm
    {
        sub esp, 0x48
        mov eax, dword ptr ss : [esp+0x4C]
        push esi
        mov esi, ecx
        fld dword ptr ds : [esi+0xA8]
        mov ecx, dword ptr ds : [eax]
        fadd dword ptr ds : [esi+0x41C]
        mov edx, dword ptr ds : [eax+4]
        fld dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [eax+8]
        fadd dword ptr ds : [esi+0x420]
        mov dword ptr ss : [esp+4], ecx
        fld dword ptr ds : [esi+0xB0]
        mov dword ptr ss : [esp+8], edx
        fadd dword ptr ds : [esi+0x424]
        mov dword ptr ss : [esp+0xC], eax
        push edi
        lea ecx, ss:[esp+8]
        fstp dword ptr ss : [esp+0x1C]
        fxch 
        push ecx
        fadd dword ptr ss : [esp+0xC]
        mov ecx, esi
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x10]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x14]
        call public_5a0880
        mov eax, dword ptr ds : [public_67d9fc]
        test eax, eax
        jne public_596018
        call public_5b73e0
        mov dword ptr ds : [public_67d9fc], eax
        public_596018 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[esi+0x3C]
        push ecx
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        push eax
        call dword ptr ds : [edx+0x5C]
        lea edi, ds:[esi+0x3DC]
        mov ecx, 0xC
        lea esi, ss:[esp+0x20]
        rep movsd
        pop edi
        pop esi
        add esp, 0x48
        ret 4
        UNREACHABLE_TRAP(0x595f90)
    }
}

#undef public_596018
