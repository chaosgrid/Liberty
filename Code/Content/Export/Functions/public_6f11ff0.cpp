#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0160);
CLANG_FORWARD_PROC_SYMBOL(public_6f11ff0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1edb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1ede0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1efd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f202f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f214e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f21520);
CLANG_FORWARD_PROC_SYMBOL(public_6f22330);
CLANG_FORWARD_PROC_SYMBOL(public_6f22400);
CLANG_FORWARD_PROC_SYMBOL(public_6f227a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f478c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f68360);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f12063 _public_6f12063
#define public_6f120a0 _public_6f120a0
#define public_6f120cf _public_6f120cf
#define public_6f12187 _public_6f12187
#define public_6f121a7 _public_6f121a7
#define public_6f121e0 _public_6f121e0
#define public_6f1220c _public_6f1220c
#define public_6f12210 _public_6f12210
#define public_6f122b3 _public_6f122b3
#define public_6f122cc _public_6f122cc
#define public_6f122e0 _public_6f122e0
#define public_6f12388 _public_6f12388
#define public_6f12396 _public_6f12396
#define public_6f123d0 _public_6f123d0
#define public_6f124d7 _public_6f124d7
#define public_6f124f4 _public_6f124f4
#define public_6f12510 _public_6f12510
#define public_6f125cf _public_6f125cf
#define public_6f125e3 _public_6f125e3
#define public_6f1260f _public_6f1260f
#define public_6f12613 _public_6f12613
#define public_6f1263f _public_6f1263f
#define public_6f126c8 _public_6f126c8
#define public_6f126e5 _public_6f126e5
#define public_6f12700 _public_6f12700
#define public_6f12786 _public_6f12786
#define public_6f12798 _public_6f12798
#define public_6f127d0 _public_6f127d0
#define public_6f1281b _public_6f1281b
#define public_6f1282e _public_6f1282e
#define public_6f1285d _public_6f1285d
#define public_6f128d2 _public_6f128d2
#define public_6f128e8 _public_6f128e8
#define public_6f1291a _public_6f1291a
#define public_6f12964 _public_6f12964
#define public_6f1297e _public_6f1297e
#define public_6f129b6 _public_6f129b6
#define public_6f12a01 _public_6f12a01
#define public_6f12a8b _public_6f12a8b
#define public_6f12a90 _public_6f12a90
#define public_6f12a98 _public_6f12a98
#define public_6f12aad _public_6f12aad
#define public_6f12aba _public_6f12aba
#define public_6f12ad3 _public_6f12ad3
#define public_6f12ae7 _public_6f12ae7
#define public_6f12b01 _public_6f12b01
#define public_6f12b15 _public_6f12b15
#define public_6f12b4a _public_6f12b4a
#define public_6f12bb6 _public_6f12bb6
#define public_6f12be3 _public_6f12be3
#define public_6f12be9 _public_6f12be9
#define public_6f12c05 _public_6f12c05

PROC_DECLARE(0x6f11ff0, internal_6f11ff0, public_6f11ff0);
extern "C" NAKED register_t __cdecl internal_6f11ff0()
{
    __asm
    {
        sub esp, 0x350
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x16C]
        mov ecx, dword ptr ds : [esi+0x168]
        lea ebp, ds:[esi+0x164]
        push edi
        push eax
        push ecx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], esi
        call public_6f1efd0
        lea eax, ds:[esi+0xC]
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f12c05
        mov ecx, dword ptr ds : [esi+8]
        call public_6f478c0
        test eax, eax
        mov dword ptr ss : [esp+0x24], eax
        je public_6f12c05
        lea edx, ss:[esp+0x18]
        lea ecx, ds:[esi+0xA4]
        push edx
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+0xA8]
        je public_6f124f4
        public_6f12063 : nop
        mov esi, dword ptr ds : [eax+0x10]
        fld dword ptr ds : [esi+0x1BC]
        fcomp dword ptr ds : [public_6fb8584]
        fnstsw ax
        test ah, 0x44
        jnp public_6f120cf
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ds:[esi+0x17C]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [esi+0x180]
        je public_6f124d7
        lea esp, ss:[esp]
        public_6f120a0 : nop
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, dword ptr ds : [public_6fd068c]
        je public_6f120cf
        push 0
        lea edx, ss:[esp+0xC0]
        push edx
        lea ecx, ss:[esp+0x24]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [esi+0x180]
        jne public_6f120a0
        jmp public_6f124d7
        public_6f120cf : nop
        mov ebx, dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0xC]
        push esi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f12187
        mov ecx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x3C], 0
        mov edx, dword ptr ds : [ecx+0xC]
        push eax
        push edx
        call dword ptr ds : [public_6fb364c]
        lea eax, ss:[esp+0x34]
        push eax
        push esi
        call dword ptr ds : [public_6fb3618]
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        call dword ptr ds : [public_6fb365c]
        fld dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [ebp+8]
        add esi, 0xD4
        mov ecx, 0xD
        lea edi, ss:[esp+0x2E0]
        rep movsd
        add esp, 0x1C
        mov ecx, 0xD
        lea esi, ss:[esp+0x2C4]
        lea edi, ss:[esp+0x1DC]
        rep movsd
        lea edx, ss:[esp+0x1DC]
        mov ecx, 0xD
        mov esi, offset public_6fd0690
        lea edi, ss:[esp+0x210]
        rep movsd
        push edx
        push eax
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x254]
        call public_6f1ede0
        public_6f12187 : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        lea ecx, ds:[ebx+0xA4]
        call public_6f1df30
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [ebx+0xA8]
        je public_6f122cc
        public_6f121a7 : nop
        mov esi, dword ptr ds : [ecx+0x10]
        fld dword ptr ds : [esi+0x1BC]
        fcomp dword ptr ds : [public_6fb8584]
        fnstsw ax
        test ah, 0x44
        jnp public_6f12210
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ds:[esi+0x17C]
        call public_6f1df30
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [esi+0x180]
        je public_6f122b3
        lea ecx, ds:[ecx]
        public_6f121e0 : nop
        mov eax, dword ptr ds : [eax+8]
        cmp eax, dword ptr ds : [public_6fd068c]
        je public_6f1220c
        push 0
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, dword ptr ds : [esi+0x180]
        jne public_6f121e0
        jmp public_6f122b3
        public_6f1220c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f12210 : nop
        mov dword ptr ss : [esp+0x34], 0
        mov eax, dword ptr ds : [ecx+0xC]
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x34]
        push edx
        mov edx, dword ptr ds : [ecx+0xC]
        push eax
        push edx
        call public_6f68360
        add esp, 0xC
        test al, al
        je public_6f122b3
        mov eax, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [ebp+8]
        add esi, 0xD4
        mov ecx, 0xD
        lea edi, ss:[esp+0x32C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [ecx+0x10]
        add esi, 0xD4
        mov ecx, 0xD
        lea edi, ss:[esp+0x2F8]
        rep movsd
        mov ecx, 0xD
        lea esi, ss:[esp+0x2F8]
        lea edi, ss:[esp+0x250]
        rep movsd
        lea edx, ss:[esp+0x250]
        mov ecx, 0xD
        lea esi, ss:[esp+0x32C]
        lea edi, ss:[esp+0x284]
        rep movsd
        push edx
        push eax
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x2C8]
        call public_6f1ede0
        public_6f122b3 : nop
        lea ecx, ss:[esp+0x10]
        call public_6f1fa00
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [ebx+0xA8]
        jne public_6f121a7
        public_6f122cc : nop
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0xC8]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_6f12396
        public_6f122e0 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [ecx+0x48]
        cmp edx, dword ptr ds : [ebx+0x458]
        jne public_6f12388
        cmp dword ptr ds : [ebx+0xC], 1
        jne public_6f12388
        mov ecx, dword ptr ds : [ebx+8]
        mov edx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x34], 0
        mov eax, dword ptr ds : [edx+0xC]
        push ecx
        push eax
        call public_6f68360
        add esp, 0xC
        test al, al
        je public_6f12388
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x30]
        mov esi, dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [ebp+8]
        add esi, 0xD4
        mov ecx, 0xD
        lea edi, ss:[esp+0x134]
        rep movsd
        mov ecx, 0xD
        lea esi, ss:[esp+0x134]
        lea edi, ss:[esp+0x168]
        rep movsd
        lea edx, ss:[esp+0x168]
        lea esi, ds:[ebx+0x3F0]
        mov ecx, 0xD
        lea edi, ss:[esp+0x19C]
        rep movsd
        push edx
        push eax
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x1E0]
        call public_6f1ede0
        mov edi, dword ptr ss : [esp+0x14]
        public_6f12388 : nop
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edi+0xC8]
        jne public_6f122e0
        public_6f12396 : nop
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov eax, dword ptr ds : [edx+0xC]
        push ecx
        push eax
        call dword ptr ds : [public_6fb364c]
        mov esi, dword ptr ds : [edi+0x178]
        mov eax, dword ptr ds : [edi+0x17C]
        add esp, 8
        cmp esi, eax
        je public_6f124d7
        mov ebx, dword ptr ds : [public_6fb365c]
        xor edi, edi
        public_6f123d0 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0xB0], ecx
        mov dword ptr ss : [esp+0x48], edi
        mov byte ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x7C], edi
        mov byte ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0xB4], 0xFFFFFFFF
        mov dword ptr ss : [esp+0xB8], 0
        mov eax, dword ptr ds : [edx+0x10]
        add eax, 0xD8
        push eax
        lea ecx, ss:[esp+0x80]
        call public_6ed0160
        lea ecx, ss:[esp+0xB8]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        push esi
        call ebx
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0xC
        lea eax, ss:[esp+0x48]
        push eax
        push ecx
        mov ecx, ebp
        call public_6f1ede0
        mov edx, dword ptr ss : [esp+0x18]
        or eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x128], eax
        mov dword ptr ss : [esp+0x12C], eax
        mov dword ptr ss : [esp+0xC0], edi
        mov byte ptr ss : [esp+0xC4], 0
        mov dword ptr ss : [esp+0xF4], edi
        mov byte ptr ss : [esp+0xF8], 0
        mov dword ptr ss : [esp+0x130], 0
        mov eax, dword ptr ds : [edx+0x10]
        add eax, 0xD8
        push eax
        lea ecx, ss:[esp+0xC4]
        call public_6ed0160
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0x130]
        push edx
        lea eax, ss:[esp+0x24]
        push esi
        push eax
        mov dword ptr ss : [esp+0x138], ecx
        call ebx
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0xC
        lea ecx, ss:[esp+0xC0]
        push ecx
        push edx
        mov ecx, ebp
        call public_6f1ede0
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [eax+0x17C]
        add esi, 4
        cmp esi, ecx
        jne public_6f123d0
        public_6f124d7 : nop
        lea ecx, ss:[esp+0x18]
        call public_6f1fa00
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [ecx+0xA8]
        jne public_6f12063
        public_6f124f4 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0xC8]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x10], ecx
        je public_6f1297e
        lea esp, ss:[esp]
        public_6f12510 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+0x48]
        mov edx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [edx+0x458]
        jne public_6f12964
        mov eax, edx
        cmp dword ptr ds : [eax+0xC], 1
        jne public_6f12964
        mov ebx, dword ptr ss : [esp+0x14]
        lea edi, ds:[ebx+0xC]
        push edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f125cf
        mov esi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ss:[esp+0x2C]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x38], 0
        call dword ptr ds : [public_6fb364c]
        lea eax, ss:[esp+0x40]
        push eax
        push edi
        call dword ptr ds : [public_6fb3618]
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        call dword ptr ds : [public_6fb365c]
        fld dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [ebp+8]
        add esi, 0x3F0
        mov ecx, 0xD
        lea edi, ss:[esp+0x184]
        rep movsd
        mov ecx, 0xD
        mov esi, offset public_6fd0690
        lea edi, ss:[esp+0x1B8]
        rep movsd
        add esp, 0x1C
        lea ecx, ss:[esp+0x168]
        push ecx
        push edx
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x1E0]
        call public_6f1ede0
        public_6f125cf : nop
        mov eax, dword ptr ds : [ebx+0xA8]
        mov edx, dword ptr ds : [eax]
        cmp edx, eax
        mov dword ptr ss : [esp+0x1C], edx
        je public_6f126e5
        public_6f125e3 : nop
        mov esi, dword ptr ds : [edx+0x10]
        fld dword ptr ds : [esi+0x1BC]
        fcomp dword ptr ds : [public_6fb8584]
        fnstsw ax
        test ah, 0x44
        jnp public_6f1263f
        mov ecx, dword ptr ds : [esi+0x180]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x34], eax
        je public_6f126c8
        jmp public_6f12613
        public_6f1260f : nop
        mov edx, dword ptr ss : [esp+0x1C]
        public_6f12613 : nop
        mov eax, dword ptr ds : [eax+8]
        cmp eax, dword ptr ds : [public_6fd068c]
        je public_6f1263f
        push 0
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_6f68e30
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, dword ptr ds : [esi+0x180]
        jne public_6f1260f
        jmp public_6f126c8
        public_6f1263f : nop
        mov ebx, dword ptr ss : [esp+0x10]
        lea eax, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x3C], 0
        mov ecx, dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [ebx+8]
        push eax
        push ecx
        push edx
        call public_6f68360
        add esp, 0xC
        test al, al
        je public_6f126c8
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ss : [ebp+8]
        add esi, 0xD4
        mov ecx, 0xD
        lea edi, ss:[esp+0x134]
        rep movsd
        lea esi, ds:[ebx+0x3F0]
        mov ecx, 0xD
        lea edi, ss:[esp+0x250]
        rep movsd
        mov ecx, 0xD
        lea esi, ss:[esp+0x134]
        lea edi, ss:[esp+0x284]
        rep movsd
        lea ecx, ss:[esp+0x250]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x2CC]
        call public_6f202f0
        public_6f126c8 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6f1fa00
        mov eax, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, dword ptr ds : [eax+0xA8]
        jne public_6f125e3
        public_6f126e5 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+0xC8]
        mov ebx, dword ptr ds : [eax]
        cmp ebx, eax
        je public_6f12798
        lea esp, ss:[esp]
        public_6f12700 : nop
        mov edx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [edx+0x48]
        cmp eax, dword ptr ds : [ebx+0x458]
        jne public_6f12786
        cmp dword ptr ds : [ebx+0xC], 1
        jne public_6f12786
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, dword ptr ds : [eax+8]
        push edx
        push ecx
        mov dword ptr ss : [esp+0x34], 0
        call public_6f68360
        add esp, 0xC
        test al, al
        je public_6f12786
        mov edx, dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x28]
        lea esi, ds:[edx+0x3F0]
        mov ecx, 0xD
        lea edi, ss:[esp+0x1DC]
        rep movsd
        lea eax, ss:[esp+0x1DC]
        push eax
        lea esi, ds:[ebx+0x3F0]
        mov ecx, 0xD
        lea edi, ss:[esp+0x214]
        rep movsd
        mov ecx, dword ptr ss : [ebp+8]
        push 1
        push ecx
        mov ecx, ebp
        fstp dword ptr ss : [esp+0x258]
        call public_6f202f0
        public_6f12786 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, dword ptr ds : [edx+0xC8]
        jne public_6f12700
        public_6f12798 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+8]
        lea eax, ss:[esp+0x20]
        push eax
        push edx
        mov dword ptr ss : [esp+0x28], 0xFFFFFFFF
        call dword ptr ds : [public_6fb364c]
        mov eax, dword ptr ss : [esp+0x1C]
        mov ebx, dword ptr ds : [eax+0x178]
        mov ecx, dword ptr ds : [eax+0x17C]
        add esp, 8
        cmp ebx, ecx
        je public_6f12964
        xor esi, esi
        public_6f127d0 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx]
        or ecx, 0xFFFFFFFF
        lea edi, ds:[edx+0x3F4]
        cmp edi, esi
        mov dword ptr ss : [esp+0x48], esi
        mov byte ptr ss : [esp+0x4C], 0
        mov byte ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0xB4], ecx
        mov dword ptr ss : [esp+0xB8], 0
        mov dword ptr ss : [esp+0xB0], eax
        jne public_6f1281b
        mov dword ptr ss : [esp+0x7C], esi
        mov byte ptr ss : [esp+0x80], 0
        jmp public_6f1285d
        public_6f1281b : nop
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f1282e
        mov eax, 0x2F
        public_6f1282e : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, eax
        lea esi, ds:[edx+0x3F4]
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x80]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x80], 0
        mov dword ptr ss : [esp+0x7C], eax
        xor esi, esi
        public_6f1285d : nop
        lea eax, ss:[esp+0xB8]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        push ebx
        call dword ptr ds : [public_6fb365c]
        mov eax, dword ptr ss : [ebp+8]
        add esp, 0xC
        lea edx, ss:[esp+0x48]
        push edx
        push 1
        push eax
        mov ecx, ebp
        call public_6f202f0
        mov ecx, dword ptr ss : [esp+0x10]
        lea edi, ds:[ecx+0x3F4]
        cmp edi, esi
        mov byte ptr ss : [esp+0xC4], 0
        mov dword ptr ss : [esp+0xF4], esi
        mov byte ptr ss : [esp+0xF8], 0
        mov dword ptr ss : [esp+0x128], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x130], 0
        jne public_6f128d2
        mov dword ptr ss : [esp+0xC0], esi
        mov byte ptr ss : [esp+0xC4], 0
        jmp public_6f1291a
        public_6f128d2 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        jb public_6f128e8
        mov eax, 0x2F
        public_6f128e8 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, eax
        lea esi, ds:[edx+0x3F4]
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0xC4]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0xC4], 0
        mov dword ptr ss : [esp+0xC0], eax
        xor esi, esi
        public_6f1291a : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x130]
        push ecx
        lea edx, ss:[esp+0x24]
        push ebx
        push edx
        mov dword ptr ss : [esp+0x138], eax
        call dword ptr ds : [public_6fb365c]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 0xC
        lea eax, ss:[esp+0xC0]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f202f0
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0x17C]
        add ebx, 4
        cmp ebx, eax
        jne public_6f127d0
        public_6f12964 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+0xC8]
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f12510
        public_6f1297e : nop
        mov esi, dword ptr ss : [esp+0x14]
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ds:[esi+0xC]
        push eax
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3618]
        mov eax, dword ptr ds : [esi+0x178]
        mov ecx, dword ptr ds : [esi+0x17C]
        add esp, 8
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        je public_6f12c05
        mov ebx, eax
        public_6f129b6 : nop
        mov eax, dword ptr ds : [ebx]
        or ecx, 0xFFFFFFFF
        mov dword ptr ss : [esp+0xB0], eax
        xor eax, eax
        mov dword ptr ss : [esp+0xB4], ecx
        mov edi, offset public_6fd0694
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        mov dword ptr ss : [esp+0x48], 0
        mov byte ptr ss : [esp+0x4C], 0
        mov byte ptr ss : [esp+0x80], 0
        mov dword ptr ss : [esp+0xB8], 0
        jb public_6f12a01
        mov eax, 0x2F
        public_6f12a01 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fd0694
        lea edi, ss:[esp+0x80]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x80], 0
        mov dword ptr ss : [esp+0x7C], eax
        lea eax, ss:[esp+0xB8]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        push ebx
        call dword ptr ds : [public_6fb365c]
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ss : [ebp+0xC]
        sub edi, ecx
        mov eax, 0x8D3DCB09
        imul edi
        add edx, edi
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        add esp, 0xC
        cmp edx, 1
        mov esi, ecx
        jae public_6f12b4a
        mov ebx, dword ptr ss : [ebp+4]
        test ebx, ebx
        je public_6f12a8b
        mov edi, ecx
        sub edi, ebx
        mov eax, 0x8D3DCB09
        imul edi
        add edx, edi
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        mov edi, edx
        ja public_6f12a90
        public_6f12a8b : nop
        mov edi, 1
        public_6f12a90 : nop
        test ebx, ebx
        jne public_6f12a98
        xor edx, edx
        jmp public_6f12aad
        public_6f12a98 : nop
        sub ecx, ebx
        mov eax, 0x8D3DCB09
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_6f12aad : nop
        lea eax, ds:[edx+edi]
        test eax, eax
        mov dword ptr ss : [esp+0x38], eax
        jge public_6f12aba
        xor eax, eax
        public_6f12aba : nop
        imul eax, 0x74
        push eax
        call public_6fa912a
        mov ebx, dword ptr ss : [ebp+4]
        add esp, 4
        cmp ebx, esi
        mov dword ptr ss : [esp+0x2C], eax
        mov edi, eax
        je public_6f12ae7
        public_6f12ad3 : nop
        push ebx
        push edi
        call public_6f227a0
        add ebx, 0x74
        add esp, 8
        add edi, 0x74
        cmp ebx, esi
        jne public_6f12ad3
        public_6f12ae7 : nop
        lea edx, ss:[esp+0x48]
        push edx
        push edi
        call public_6f227a0
        mov ebx, dword ptr ss : [ebp+8]
        add esp, 8
        cmp esi, ebx
        je public_6f12b15
        sub edi, esi
        add edi, 0x74
        public_6f12b01 : nop
        lea eax, ds:[esi+edi]
        push esi
        push eax
        call public_6f227a0
        add esi, 0x74
        add esp, 8
        cmp esi, ebx
        jne public_6f12b01
        public_6f12b15 : nop
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ss : [esp+0x30]
        imul eax, 0x74
        add eax, esi
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], eax
        call public_6f1edb0
        mov ebx, dword ptr ss : [esp+0x24]
        inc eax
        imul eax, 0x74
        add eax, esi
        mov dword ptr ss : [ebp+4], esi
        jmp public_6f12be9
        public_6f12b4a : nop
        mov edi, ecx
        sub edi, esi
        mov eax, 0x8D3DCB09
        imul edi
        add edx, edi
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edx, 1
        jae public_6f12bb6
        lea edx, ds:[esi+0x74]
        push edx
        push ecx
        push esi
        mov ecx, ebp
        call public_6f214e0
        mov edi, dword ptr ss : [ebp+8]
        lea eax, ss:[esp+0x48]
        push eax
        mov ecx, edi
        sub ecx, esi
        mov eax, 0x8D3DCB09
        imul ecx
        add edx, ecx
        sar edx, 6
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov eax, 1
        sub eax, edx
        push eax
        push edi
        mov ecx, ebp
        call public_6f21520
        mov edx, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x48]
        push ecx
        push edx
        push esi
        call public_6f22330
        add esp, 0xC
        jmp public_6f12be3
        public_6f12bb6 : nop
        push ecx
        push ecx
        add ecx, 0xFFFFFF8C
        push ecx
        mov ecx, ebp
        call public_6f214e0
        mov eax, dword ptr ss : [ebp+8]
        push eax
        add eax, 0xFFFFFF8C
        push eax
        push esi
        call public_6f22400
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ds:[esi+0x74]
        push ecx
        push esi
        call public_6f22330
        add esp, 0x18
        public_6f12be3 : nop
        mov eax, dword ptr ss : [ebp+8]
        add eax, 0x74
        public_6f12be9 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ds : [edx+0x17C]
        add ebx, 4
        cmp ebx, eax
        mov dword ptr ss : [esp+0x24], ebx
        jne public_6f129b6
        public_6f12c05 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x350
        ret 
        UNREACHABLE_TRAP(0x6f11ff0)
    }
}

#undef public_6f12063
#undef public_6f120a0
#undef public_6f120cf
#undef public_6f12187
#undef public_6f121a7
#undef public_6f121e0
#undef public_6f1220c
#undef public_6f12210
#undef public_6f122b3
#undef public_6f122cc
#undef public_6f122e0
#undef public_6f12388
#undef public_6f12396
#undef public_6f123d0
#undef public_6f124d7
#undef public_6f124f4
#undef public_6f12510
#undef public_6f125cf
#undef public_6f125e3
#undef public_6f1260f
#undef public_6f12613
#undef public_6f1263f
#undef public_6f126c8
#undef public_6f126e5
#undef public_6f12700
#undef public_6f12786
#undef public_6f12798
#undef public_6f127d0
#undef public_6f1281b
#undef public_6f1282e
#undef public_6f1285d
#undef public_6f128d2
#undef public_6f128e8
#undef public_6f1291a
#undef public_6f12964
#undef public_6f1297e
#undef public_6f129b6
#undef public_6f12a01
#undef public_6f12a8b
#undef public_6f12a90
#undef public_6f12a98
#undef public_6f12aad
#undef public_6f12aba
#undef public_6f12ad3
#undef public_6f12ae7
#undef public_6f12b01
#undef public_6f12b15
#undef public_6f12b4a
#undef public_6f12bb6
#undef public_6f12be3
#undef public_6f12be9
#undef public_6f12c05
