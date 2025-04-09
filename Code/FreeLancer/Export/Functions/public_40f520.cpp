#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_40f59c _public_40f59c

PROC_DECLARE(0x40f520, internal_40f520, public_40f520);
extern "C" NAKED register_t __cdecl internal_40f520()
{
    __asm
    {
        sub esp, 0x3C
        mov eax, dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [eax+0x68]
        push esi
        fld dword ptr ds : [eax+0xA4]
        push edi
        fdiv dword ptr ds : [eax+0x78]
        lea esi, ds:[eax+4]
        lea edi, ss:[esp+0x20]
        fmulp 
        fstp dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x14], ecx
        fsub dword ptr ds : [eax+0x6C]
        fld dword ptr ds : [eax+0xA4]
        fdiv dword ptr ds : [eax+0x7C]
        fmulp 
        fstp dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0xC]
        fld dword ptr ds : [eax+0xA4]
        mov eax, dword ptr ds : [public_6164d8]
        test eax, eax
        fchs 
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, 9
        rep movsd
        pop edi
        mov dword ptr ss : [esp+0x14], edx
        pop esi
        jne public_40f59c
        call public_5b73e0
        mov dword ptr ds : [public_6164d8], eax
        public_40f59c : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC]
        push ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+8]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov eax, dword ptr ss : [esp]
        mov edx, dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx+4], ecx
        mov dword ptr ds : [edx+8], eax
        add esp, 0x3C
        ret 0x10
        UNREACHABLE_TRAP(0x40f520)
    }
}

#undef public_40f59c
