#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_46d660);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_503f40);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_52bb68 _public_52bb68
#define public_52bb7d _public_52bb7d
#define public_52bb8a _public_52bb8a
#define public_52bba4 _public_52bba4
#define public_52bbc5 _public_52bbc5
#define public_52bbd0 _public_52bbd0
#define public_52bc0f _public_52bc0f
#define public_52bc46 _public_52bc46
#define public_52bcbd _public_52bcbd
#define public_52bce7 _public_52bce7
#define public_52bceb _public_52bceb
#define public_52bd04 _public_52bd04
#define public_52bd18 _public_52bd18
#define public_52bd20 _public_52bd20
#define public_52bd24 _public_52bd24
#define public_52bd72 _public_52bd72
#define public_52bda1 _public_52bda1
#define public_52be01 _public_52be01
#define public_52be20 _public_52be20
#define public_52be2c _public_52be2c
#define public_52be2e _public_52be2e
#define public_52be52 _public_52be52
#define public_52be6b _public_52be6b
#define public_52be83 _public_52be83

PROC_DECLARE(0x52bb00, internal_52bb00, public_52bb00);
extern "C" NAKED register_t __cdecl internal_52bb00()
{
    __asm
    {
        sub esp, 0xD8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp]
        push edi
        call dword ptr ds : [eax+0x18]
        test al, al
        jne public_52be01
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_4215b0
        mov eax, dword ptr ss : [ebp+0x34]
        xor bl, bl
        test eax, eax
        mov dword ptr ss : [esp+0x6C], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x64], 0
        je public_52bb68
        mov ecx, dword ptr ss : [ebp+0x38]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        mov dword ptr ss : [esp+0x14], edx
        jne public_52bb7d
        public_52bb68 : nop
        mov ecx, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov edi, eax
        mov dword ptr ss : [esp+0x20], edi
        mov bl, 1
        jmp public_52bd24
        public_52bb7d : nop
        mov eax, dword ptr ss : [ebp+0x34]
        test eax, eax
        jne public_52bb8a
        mov dword ptr ss : [esp+0x18], eax
        jmp public_52bba4
        public_52bb8a : nop
        mov ecx, dword ptr ss : [ebp+0x38]
        sub ecx, eax
        mov eax, 0x4EC4EC4F
        imul ecx
        sar edx, 4
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x18], edx
        public_52bba4 : nop
        call dword ptr ds : [public_5c71dc]
        imul eax, dword ptr ss : [esp+0x18]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x14], eax
        jmp public_52bbd0
        public_52bbc5 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        lea esp, ss:[esp]
        public_52bbd0 : nop
        mov edi, dword ptr ss : [ebp+0x34]
        mov ecx, dword ptr ds : [public_675420]
        mov esi, eax
        imul esi, 0x34
        mov eax, dword ptr ds : [esi+edi]
        add esi, edi
        push ecx
        push eax
        call dword ptr ds : [public_5c6d24]
        mov ecx, dword ptr ss : [ebp+0x24]
        add esp, 8
        test eax, eax
        jne public_52bc0f
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x20], eax
        add esi, 4
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        jmp public_52bce7
        public_52bc0f : nop
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x70]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        push eax
        call dword ptr ds : [public_5c6588]
        add esp, 0x10
        test al, al
        je public_52bceb
        mov eax, dword ptr ds : [public_675430]
        test eax, eax
        jne public_52bc46
        call public_5b73e0
        mov dword ptr ds : [public_675430], eax
        public_52bc46 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x28]
        push edx
        lea edx, ss:[esp+0x84]
        push edx
        lea edx, ss:[esp+0x3C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x7C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x84]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x80]
        fstp dword ptr ss : [esp]
        call public_422b80
        mov eax, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, dword ptr ds : [public_675430]
        test eax, eax
        mov dword ptr ss : [esp+0x68], ecx
        mov dword ptr ss : [esp+0x6C], edx
        jne public_52bcbd
        call public_5b73e0
        mov dword ptr ds : [public_675430], eax
        public_52bcbd : nop
        mov ecx, dword ptr ds : [eax]
        add esi, 4
        push esi
        lea edx, ss:[esp+0x84]
        push edx
        lea edx, ss:[esp+0xC0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov ecx, 9
        lea esi, ss:[esp+0xB8]
        lea edi, ss:[esp+0x40]
        public_52bce7 : nop
        rep movsd
        mov bl, 1
        public_52bceb : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x18]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jne public_52bd04
        mov dword ptr ss : [esp+0x1C], 0
        public_52bd04 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ss : [esp+0x14]
        je public_52bd18
        test bl, bl
        je public_52bbc5
        jmp public_52bd20
        public_52bd18 : nop
        test bl, bl
        je public_52be01
        public_52bd20 : nop
        mov edi, dword ptr ss : [esp+0x20]
        public_52bd24 : nop
        mov al, byte ptr ss : [ebp+0x2C]
        test al, al
        je public_52bd72
        cmp edi, 0xFFFFFFFF
        je public_52bd72
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ss : [esp+0x14], ecx
        lea esi, ss:[ebp+0x28]
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52be01
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ss:[ebp+0x44]
        push edx
        lea eax, ss:[esp+0x44]
        push eax
        push edi
        push ecx
        push esi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503070
        jmp public_52be01
        public_52bd72 : nop
        test bl, bl
        je public_52be01
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov esi, eax
        mov eax, dword ptr ds : [public_675430]
        test eax, eax
        jne public_52bda1
        call public_5b73e0
        mov dword ptr ds : [public_675430], eax
        public_52bda1 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x40]
        push ecx
        push esi
        lea ecx, ss:[esp+0xC0]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        mov ecx, 0xC
        lea esi, ss:[esp+0xB8]
        lea edi, ss:[esp+0x70]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0x24]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x28]
        push eax
        call dword ptr ds : [edx+4]
        lea esi, ss:[ebp+0x28]
        mov ecx, esi
        mov edi, eax
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_52be01
        push 0
        push edi
        lea ecx, ss:[esp+0x78]
        push ecx
        push esi
        call public_40f080
        add esp, 4
        push eax
        mov ecx, offset public_674c60
        call public_503f40
        public_52be01 : nop
        mov edx, dword ptr ss : [esp+0xF0]
        lea esi, ss:[ebp+0x14]
        mov byte ptr ss : [ebp+0x10], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], edx
        je public_52be2c
        lea ecx, ds:[ecx]
        public_52be20 : nop
        cmp word ptr ds : [eax], dx
        je public_52be2e
        add eax, 2
        cmp eax, ecx
        jne public_52be20
        public_52be2c : nop
        mov eax, ecx
        public_52be2e : nop
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_52be6b
        lea edx, ss:[esp+0x18]
        push edx
        push ecx
        mov ecx, esi
        call dword ptr ds : [public_5c689c]
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_52be83
        mov ecx, dword ptr ss : [esp+0x18]
        public_52be52 : nop
        cmp word ptr ds : [eax], cx
        je public_52be83
        add eax, 2
        cmp eax, esi
        jne public_52be52
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD8
        ret 8
        public_52be6b : nop
        lea eax, ss:[esp+0x13]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x1B], 0
        call public_46d660
        public_52be83 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xD8
        ret 8
        UNREACHABLE_TRAP(0x52bb00)
    }
}

#undef public_52bb68
#undef public_52bb7d
#undef public_52bb8a
#undef public_52bba4
#undef public_52bbc5
#undef public_52bbd0
#undef public_52bc0f
#undef public_52bc46
#undef public_52bcbd
#undef public_52bce7
#undef public_52bceb
#undef public_52bd04
#undef public_52bd18
#undef public_52bd20
#undef public_52bd24
#undef public_52bd72
#undef public_52bda1
#undef public_52be01
#undef public_52be20
#undef public_52be2c
#undef public_52be2e
#undef public_52be52
#undef public_52be6b
#undef public_52be83
