#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_544380);

#define public_54448a _public_54448a

PROC_DECLARE(0x544380, internal_544380, public_544380);
extern "C" NAKED register_t __cdecl internal_544380()
{
    __asm
    {
        sub esp, 0xA0
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xAC]
        mov ebx, ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_54448a
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
/*FIXUP push offset public_5dffd4 @0x5443ae*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffd4
        mov ecx, ebx
        call dword ptr ds : [edx+0x1C]
        mov edi, dword ptr ds : [public_5c65e8]
        push eax
        call edi
        add esp, 0x10
        test al, al
        je public_54448a
        mov eax, dword ptr ds : [esi]
        push eax
        call dword ptr ds : [public_5c621c]
        add esp, 4
        test eax, eax
        mov dword ptr ds : [ebx+0x104], eax
        je public_54448a
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xC]
        mov eax, dword ptr ds : [ebx+0x104]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        push 0
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [ebx+0x104]
        push 0
        call dword ptr ds : [public_5c6a0c]
        cmp eax, 0xFFFFFFFF
        je public_54448a
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
/*FIXUP push offset public_5dffc8 @0x54441a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dffc8
        push eax
        mov dword ptr ds : [ebx+0x10C], eax
        call edi
        fld dword ptr ss : [esp+0x78]
        fsub dword ptr ss : [esp+0x30]
        mov ecx, 9
        lea esi, ss:[esp+0x84]
        lea edi, ss:[esp+0x2C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x34]
        add esp, 0x10
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x70]
        fsub dword ptr ss : [esp+0x28]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x44], ecx
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x14]
        lea edi, ds:[ebx+0x118]
        mov ecx, 0xC
        lea esi, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x48], edx
        rep movsd
        public_54448a : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xA0
        ret 4
        UNREACHABLE_TRAP(0x544380)
    }
}

#undef public_54448a
