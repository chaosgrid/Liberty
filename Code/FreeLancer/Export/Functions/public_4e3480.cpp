#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c8120);
CLANG_FORWARD_PROC_SYMBOL(public_55dee0);
CLANG_FORWARD_PROC_SYMBOL(public_55e120);
CLANG_FORWARD_PROC_SYMBOL(public_5a0c30);

#define public_4e3667 _public_4e3667
#define public_4e36af _public_4e36af
#define public_4e37ca _public_4e37ca

PROC_DECLARE(0x4e3480, internal_4e3480, public_4e3480);
extern "C" NAKED register_t __cdecl internal_4e3480()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi-0x10]
        test al, al
        push edi
        jne public_4e37ca
        push 1
        push 1
        mov byte ptr ds : [esi-0x10], 1
        call public_4c8120
        mov ecx, dword ptr ds : [esi+0x160]
        add esp, 8
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0xBEEE147B
        mov dword ptr ss : [esp+0x14], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0xBECB4396
        mov dword ptr ss : [esp+0x14], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x2C]
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0xBECB4396
        mov dword ptr ss : [esp+0x14], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x3C]
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0xBEDCAC08
        mov dword ptr ss : [esp+0x14], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x40]
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0xBEDCAC08
        mov dword ptr ss : [esp+0x14], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x158]
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0xBE970A3D
        mov dword ptr ss : [esp+0x14], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x15C]
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0xBEA872B0
        mov dword ptr ss : [esp+0x14], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x164]
        mov dword ptr ss : [esp+8], 0xBEB9DB23
        mov dword ptr ss : [esp+0xC], 0xBE2F1AA0
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ds : [ecx]
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        push 6
        call dword ptr ds : [eax+0xA8]
        cmp dword ptr ds : [esi+0x168], 1
        je public_4e3667
        lea edi, ds:[esi-0x4A8]
        push 1
        mov ecx, edi
        call public_5a0c30
        mov cl, byte ptr ds : [edi+0x6C]
        mov al, 3
        or cl, al
        mov byte ptr ds : [edi+0x6C], cl
        mov ecx, dword ptr ds : [esi-0x14]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x44]
        or byte ptr ds : [ecx+0x6C], al
        mov edx, dword ptr ds : [esi+0x20]
        mov cl, 0xFC
        and byte ptr ds : [edx+0x6C], cl
        mov edx, dword ptr ds : [esi+0x24]
        and byte ptr ds : [edx+0x6C], cl
        mov edx, dword ptr ds : [esi+0x174]
        and byte ptr ds : [edx+0x6C], cl
        mov edx, dword ptr ds : [esi+0x34]
        and byte ptr ds : [edx+0x6C], cl
        mov edx, dword ptr ds : [esi+0x38]
        and byte ptr ds : [edx+0x6C], cl
        mov edx, dword ptr ds : [esi+0x30]
        and byte ptr ds : [edx+0x6C], cl
        jmp public_4e36af
        public_4e3667 : nop
        mov eax, dword ptr ds : [esi-0x18]
        mov dl, byte ptr ds : [eax+0x6C]
        mov cl, 0xFC
        and dl, cl
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [esi+0x154]
        mov dl, byte ptr ds : [eax+0x6C]
        and dl, cl
        lea ecx, ds:[esi-0x4E0]
        mov byte ptr ds : [eax+0x6C], dl
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x3C]
        mov ecx, dword ptr ds : [esi+0x174]
        mov dl, byte ptr ds : [ecx+0x6C]
        mov al, 3
        or dl, al
        mov byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x34]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x38]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x30]
        or byte ptr ds : [ecx+0x6C], al
        public_4e36af : nop
        mov ecx, dword ptr ds : [public_5d8864]
        mov dword ptr ds : [esi+0x78], ecx
        mov ecx, dword ptr ds : [esi+0x158]
        push ebx
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x15C]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x160]
        or byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x15C]
        or byte ptr ds : [ecx+0x6C], al
        mov bl, byte ptr ds : [esi+0x170]
        mov ecx, dword ptr ds : [esi+0x164]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test bl, bl
        sete al
        push 0
        push eax
        push 1
        call dword ptr ds : [edx+0xA8]
        mov edi, dword ptr ds : [esi+0x168]
        mov ecx, dword ptr ds : [esi+0x158]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test edi, edi
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov edi, dword ptr ds : [esi+0x168]
        mov ecx, dword ptr ds : [esi+0x15C]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp edi, 1
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        mov edi, dword ptr ds : [esi+0x168]
        mov ecx, dword ptr ds : [esi+0x164]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        cmp edi, 2
        sete al
        push 0
        push eax
        push 0xC
        call dword ptr ds : [edx+0xA8]
        lea ecx, ds:[esi-0x3F4]
        mov dword ptr ss : [esp+0xC], 0x3E0624DD
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ss : [esp+0x10], 0x3DEF9DB2
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ss : [esp+0xC], 0xBEC20C4A
        mov eax, dword ptr ss : [esp+0xC]
        add esi, 0xFFFFFC18
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0x10], 0xBE883127
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [esp+0x14], 0
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+4], ecx
        pop ebx
        mov dword ptr ds : [esi+8], edx
        pop edi
        pop esi
        add esp, 0x18
        ret 
        public_4e37ca : nop
        mov eax, dword ptr ds : [public_5d8860]
        lea edi, ds:[esi-0x17C]
        push eax
        mov ecx, edi
        call public_55e120
        mov eax, dword ptr ds : [esi-0x18]
        lea ecx, ds:[esi-0xC]
        push ecx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0xBEC00000
        mov dword ptr ss : [esp+0x18], 0xBE8A3D71
        mov dword ptr ss : [esp+0x1C], 0
        call public_55dee0
        mov ecx, dword ptr ds : [esi+0x160]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0xBEF53F7D
        mov dword ptr ss : [esp+0x14], 0xBECCCCCD
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x28]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0xBED26E98
        mov dword ptr ss : [esp+0x14], 0xBECCCCCD
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x2C]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0xBED26E98
        mov dword ptr ss : [esp+0x14], 0xBECCCCCD
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x3C]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0xBEE3D70A
        mov dword ptr ss : [esp+0x14], 0xBECCCCCD
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x40]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0xBEE3D70A
        mov dword ptr ss : [esp+0x14], 0xBECCCCCD
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x158]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        mov dword ptr ss : [esp+0x10], 0xBEAF9DB2
        mov dword ptr ss : [esp+0x14], 0xBECCCCCD
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x15C]
        mov dword ptr ss : [esp+8], 0xBEC10625
        mov dword ptr ss : [esp+0xC], 0xBECCCCCD
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0xC]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x154]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x154]
        push 0
        lea edx, ss:[esp+0xC]
        push edx
        mov dword ptr ss : [esp+0x10], 0xBED22D0E
        mov dword ptr ss : [esp+0x14], 0xBECCCCCD
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        mov edx, dword ptr ds : [esi+0x160]
        lea eax, ss:[esp+8]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x14], 0xBEF53F7D
        mov dword ptr ss : [esp+0x18], 0xBEBD70A4
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x20], 0xBEF53F7D
        mov dword ptr ss : [esp+0x24], 0xBECCCCCD
        mov dword ptr ss : [esp+0x28], 0
        call public_55dee0
        mov edx, dword ptr ds : [esi+0x28]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0xBED26E98
        mov dword ptr ss : [esp+0x24], 0xBEBD70A4
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x14], 0xBED26E98
        mov dword ptr ss : [esp+0x18], 0xBECCCCCD
        mov dword ptr ss : [esp+0x1C], 0
        call public_55dee0
        mov edx, dword ptr ds : [esi+0x2C]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0xBED26E98
        mov dword ptr ss : [esp+0x24], 0xBEBD70A4
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x14], 0xBED26E98
        mov dword ptr ss : [esp+0x18], 0xBECCCCCD
        mov dword ptr ss : [esp+0x1C], 0
        call public_55dee0
        mov edx, dword ptr ds : [esi+0x40]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0xBEE3D70A
        mov dword ptr ss : [esp+0x24], 0xBEBD70A4
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x14], 0xBEE3D70A
        mov dword ptr ss : [esp+0x18], 0xBECCCCCD
        mov dword ptr ss : [esp+0x1C], 0
        call public_55dee0
        mov dword ptr ss : [esp+0x14], 0xBEE3D70A
        mov dword ptr ss : [esp+0x18], 0xBEBD70A4
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+8], 0xBEE3D70A
        mov edx, dword ptr ds : [esi+0x3C]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0xBECCCCCD
        mov dword ptr ss : [esp+0x1C], 0
        call public_55dee0
        mov edx, dword ptr ds : [esi+0x158]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0xBEAF9DB2
        mov dword ptr ss : [esp+0x24], 0xBEBD70A4
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x14], 0xBEAF9DB2
        mov dword ptr ss : [esp+0x18], 0xBECCCCCD
        mov dword ptr ss : [esp+0x1C], 0
        call public_55dee0
        mov edx, dword ptr ds : [esi+0x15C]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0xBEC10625
        mov dword ptr ss : [esp+0x24], 0xBEBD70A4
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x14], 0xBEC10625
        mov dword ptr ss : [esp+0x18], 0xBECCCCCD
        mov dword ptr ss : [esp+0x1C], 0
        call public_55dee0
        mov edx, dword ptr ds : [esi+0x154]
        lea eax, ss:[esp+0x14]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        push edx
        mov ecx, edi
        mov dword ptr ss : [esp+0x20], 0xBED22D0E
        mov dword ptr ss : [esp+0x24], 0xBEBD70A4
        mov dword ptr ss : [esp+0x28], 0xBF800000
        mov dword ptr ss : [esp+0x14], 0xBED22D0E
        mov dword ptr ss : [esp+0x18], 0xBECCCCCD
        mov dword ptr ss : [esp+0x1C], 0xBF800000
        call public_55dee0
        pop edi
        pop esi
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x4e3480)
    }
}

#undef public_4e3667
#undef public_4e36af
#undef public_4e37ca
