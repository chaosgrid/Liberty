#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_40f3bb _public_40f3bb
#define public_40f462 _public_40f462

PROC_DECLARE(0x40f390, internal_40f390, public_40f390);
extern "C" NAKED register_t __cdecl internal_40f390()
{
    __asm
    {
        sub esp, 0x6C
        push ebx
        mov ebx, dword ptr ss : [esp+0x74]
        mov al, byte ptr ds : [ebx+0x34]
        test al, al
        je public_40f462
        mov eax, dword ptr ds : [public_6164d8]
        test eax, eax
        push esi
        push edi
        lea esi, ds:[ebx+4]
        jne public_40f3bb
        call public_5b73e0
        mov dword ptr ds : [public_6164d8], eax
        public_40f3bb : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x18]
        fchs 
        mov ecx, 9
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0xC]
        fchs 
        lea edi, ss:[esp+0x48]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ds : [esi+0xC]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ds : [esi+0x18]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+0x10]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x1C]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x14]
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ds : [esi+0x20]
        lea esi, ss:[esp+0x24]
        fstp dword ptr ss : [esp+0x44]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x70], ecx
        lea edi, ds:[ebx+0x38]
        mov ecx, 0xC
        lea esi, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x6C], eax
        mov dword ptr ss : [esp+0x74], edx
        rep movsd
        pop edi
        mov byte ptr ds : [ebx+0x34], 0
        pop esi
        public_40f462 : nop
        lea eax, ds:[ebx+0x38]
        pop ebx
        add esp, 0x6C
        ret 4
        UNREACHABLE_TRAP(0x40f390)
    }
}

#undef public_40f3bb
#undef public_40f462
