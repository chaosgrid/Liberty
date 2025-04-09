#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4a0a70);
CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e120);
CLANG_FORWARD_PROC_SYMBOL(public_5645c0);

#define public_4a105f _public_4a105f
#define public_4a15d1 _public_4a15d1
#define public_4a1609 _public_4a1609

PROC_DECLARE(0x4a0a70, internal_4a0a70, public_4a0a70);
extern "C" NAKED register_t __cdecl internal_4a0a70()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        mov bl, byte ptr ss : [esp+0x20]
        push esi
        mov esi, ecx
        cmp bl, byte ptr ds : [esi+0xBC0]
        push edi
        je public_4a1609
        push 5
        call public_5645c0
        add esp, 4
        lea edi, ds:[esi+0x330]
        push 0x3ECCCCCD
        mov ecx, edi
        call public_55e120
        test bl, bl
        mov edx, dword ptr ds : [esi+0xBBC]
        mov byte ptr ds : [esi+0xBC0], bl
        mov dword ptr ss : [esp+0x20], 0xBE6147AE
        mov dword ptr ss : [esp+0x1C], 0xBE6B851F
        mov dword ptr ss : [esp+0x18], 0x3F85C28F
        mov dword ptr ss : [esp+0x14], 0xBE6147AE
        mov dword ptr ss : [esp+0x10], 0xBE6B851F
        mov dword ptr ss : [esp+0xC], 0x3F283127
        je public_4a105f
        lea eax, ss:[esp+0xC]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        mov ecx, edi
        call public_55dee0
        mov edx, dword ptr ds : [esi+0xBB8]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0x3F15C28F
        mov dword ptr ss : [esp+0x28], 0xBE6B851F
        mov dword ptr ss : [esp+0x2C], 0xBE6147AE
        mov dword ptr ss : [esp+0x18], 0x3E428F5C
        mov dword ptr ss : [esp+0x1C], 0xBE6B851F
        mov dword ptr ss : [esp+0x20], 0xBE6147AE
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d33dc]
        mov edx, dword ptr ds : [esi+0x8FC]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBF041893
        mov dword ptr ss : [esp+0x28], 0xBE72B021
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0xBE72B021
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d33b8]
        mov edx, dword ptr ds : [esi+0x900]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBF28B439
        mov dword ptr ss : [esp+0x28], 0xBE560419
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0xBE560419
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3410]
        mov edx, dword ptr ds : [esi+0x8F4]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0x3F65A1CB
        mov dword ptr ss : [esp+0x28], 0xBD75C28F
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0xBD75C28F
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d2ac0]
        mov dword ptr ss : [esp+0x18], 0x3EA76C8C
        mov dword ptr ss : [esp+0x1C], 0x3E83126F
        mov dword ptr ss : [esp+0x20], 0
        fstp dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0x3E83126F
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ds : [esi+0x8F0]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, edi
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3398]
        mov edx, dword ptr ds : [esi+0x904]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0x3EFE76C8
        mov dword ptr ss : [esp+0x28], 0xBE6B851F
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0xBE6B851F
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3378]
        mov edx, dword ptr ds : [esi+0x908]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0x3EBA5E36
        mov dword ptr ss : [esp+0x28], 0xBE52F1AA
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0xBE52F1AA
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d335c]
        mov edx, dword ptr ds : [esi+0xAC0]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0x3ED3F7CF
        mov dword ptr ss : [esp+0x28], 0xBE6B851F
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0xBE6B851F
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3340]
        mov edx, dword ptr ds : [esi+0xAC4]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0x3EB22D0F
        mov dword ptr ss : [esp+0x28], 0xBE52F1AA
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0xBE52F1AA
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3328]
        mov dword ptr ss : [esp+0x18], 0x3F158106
        mov dword ptr ss : [esp+0x1C], 0xBE6B851F
        mov dword ptr ss : [esp+0x20], 0
        mov edx, dword ptr ds : [esi+0xAC8]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], 0xBE6B851F
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3310]
        mov edx, dword ptr ds : [esi+0xACC]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0x3F045A1D
        mov dword ptr ss : [esp+0x28], 0xBE52F1AA
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0xBE52F1AA
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d32ac]
        mov edx, dword ptr ds : [esi+0xAD4]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBF045A1D
        mov dword ptr ss : [esp+0x28], 0x3E395810
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0x3E395810
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d32ac]
        mov edx, dword ptr ds : [esi+0xAD8]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBF045A1D
        mov dword ptr ss : [esp+0x28], 0x3D3C6A7F
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0x3D3C6A7F
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d32ac]
        mov edx, dword ptr ds : [esi+0xADC]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBF045A1D
        mov dword ptr ss : [esp+0x28], 0xBDB645A2
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0xBDB645A2
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        mov dword ptr ss : [esp+0x18], 0x3EA6F694
        fld dword ptr ds : [public_5d2ed8]
        mov edx, dword ptr ds : [esi+0xAE0]
        fadd dword ptr ds : [public_5d3260]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0xBD6D9168
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0xBD6D9168
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d323c]
        mov edx, dword ptr ds : [esi+0xAE4]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBF27EF9E
        mov dword ptr ss : [esp+0x28], 0x3E808313
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0x3E808313
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d323c]
        mov edx, dword ptr ds : [esi+0xAE8]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x14]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0xBF27EF9E
        mov dword ptr ss : [esp+0x28], 0x3DED9168
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x1C], 0x3DED9168
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d323c]
        mov dword ptr ss : [esp+0x18], 0xBF27EF9E
        fstp dword ptr ss : [esp+0xC]
        jmp public_4a15d1
        public_4a105f : nop
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, edi
        call public_55dee0
        mov edx, dword ptr ds : [esi+0xBB8]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x24], 0x3E428F5C
        mov dword ptr ss : [esp+0x28], 0xBE6B851F
        mov dword ptr ss : [esp+0x2C], 0xBE6147AE
        mov dword ptr ss : [esp+0x18], 0x3F15C28F
        mov dword ptr ss : [esp+0x1C], 0xBE6B851F
        mov dword ptr ss : [esp+0x20], 0xBE6147AE
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d33dc]
        mov edx, dword ptr ds : [esi+0x8FC]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0xBE72B021
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBF041893
        mov dword ptr ss : [esp+0x1C], 0xBE72B021
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d33b8]
        mov edx, dword ptr ds : [esi+0x900]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0xBE560419
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBF28B439
        mov dword ptr ss : [esp+0x1C], 0xBE560419
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3410]
        mov edx, dword ptr ds : [esi+0x8F4]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0xBD75C28F
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3F65A1CB
        mov dword ptr ss : [esp+0x1C], 0xBD75C28F
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d2ac0]
        mov dword ptr ss : [esp+0x1C], 0x3E83126F
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0xC], 0x3EA76C8C
        fstp dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x10], 0x3E83126F
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ds : [esi+0x8F0]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, edi
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3398]
        mov edx, dword ptr ds : [esi+0x904]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0xBE6B851F
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3EFE76C8
        mov dword ptr ss : [esp+0x1C], 0xBE6B851F
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3378]
        mov edx, dword ptr ds : [esi+0x908]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0xBE52F1AA
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3EBA5E36
        mov dword ptr ss : [esp+0x1C], 0xBE52F1AA
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d335c]
        mov edx, dword ptr ds : [esi+0xAC0]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0xBE6B851F
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3ED3F7CF
        mov dword ptr ss : [esp+0x1C], 0xBE6B851F
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3340]
        mov edx, dword ptr ds : [esi+0xAC4]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0xBE52F1AA
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3EB22D0F
        mov dword ptr ss : [esp+0x1C], 0xBE52F1AA
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3328]
        mov dword ptr ss : [esp+0x1C], 0xBE6B851F
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+0xAC8]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3F158106
        mov dword ptr ss : [esp+0x1C], 0xBE6B851F
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed4]
        fadd dword ptr ds : [public_5d3310]
        mov edx, dword ptr ds : [esi+0xACC]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0xBE52F1AA
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3F045A1D
        mov dword ptr ss : [esp+0x1C], 0xBE52F1AA
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d32ac]
        mov edx, dword ptr ds : [esi+0xAD4]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0x3E395810
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBF045A1D
        mov dword ptr ss : [esp+0x1C], 0x3E395810
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d32ac]
        mov edx, dword ptr ds : [esi+0xAD8]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0x3D3C6A7F
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBF045A1D
        mov dword ptr ss : [esp+0x1C], 0x3D3C6A7F
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d32ac]
        mov edx, dword ptr ds : [esi+0xADC]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0xBDB645A2
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBF045A1D
        mov dword ptr ss : [esp+0x1C], 0xBDB645A2
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fadd dword ptr ds : [public_5d3260]
        mov edx, dword ptr ds : [esi+0xAE0]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0xBD6D9168
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0x3EA6F694
        mov dword ptr ss : [esp+0x1C], 0xBD6D9168
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d323c]
        mov edx, dword ptr ds : [esi+0xAE4]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0x3E808313
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBF27EF9E
        mov dword ptr ss : [esp+0x1C], 0x3E808313
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d323c]
        mov edx, dword ptr ds : [esi+0xAE8]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        fstp dword ptr ss : [esp+0x20]
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x28], 0x3DED9168
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x18], 0xBF27EF9E
        mov dword ptr ss : [esp+0x1C], 0x3DED9168
        mov dword ptr ss : [esp+0x20], 0
        call public_55dee0
        fld dword ptr ds : [public_5d2ed8]
        fsub dword ptr ds : [public_5d323c]
        mov dword ptr ss : [esp+0xC], 0xBF27EF9E
        fstp dword ptr ss : [esp+0x18]
        public_4a15d1 : nop
        mov edx, dword ptr ds : [esi+0xAEC]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        push edx
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0xBC9BA5E4
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0xBC9BA5E4
        call public_55dee0
        public_4a1609 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x18
        ret 4
        UNREACHABLE_TRAP(0x4a0a70)
    }
}

#undef public_4a105f
#undef public_4a15d1
#undef public_4a1609
