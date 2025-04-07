#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6209d20);
CLANG_FORWARD_PROC_SYMBOL(public_6209d30);
CLANG_FORWARD_PROC_SYMBOL(public_6209d40);
CLANG_FORWARD_PROC_SYMBOL(public_620d4d0);
CLANG_FORWARD_PROC_SYMBOL(public_620d570);

#define public_620952c _public_620952c
#define public_620954e _public_620954e
#define public_62095cc _public_62095cc
#define public_6209604 _public_6209604
#define public_6209628 _public_6209628
#define public_62096e9 _public_62096e9
#define public_62096ed _public_62096ed
#define public_62096ef _public_62096ef
#define public_6209738 _public_6209738
#define public_6209750 _public_6209750

PROC_DECLARE(0x62094c0, internal_62094c0, public_62094c0);
extern "C" NAKED register_t __cdecl internal_62094c0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        mov ebp, dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        push esi
        mov esi, dword ptr ds : [ebx+0xC]
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        lea edi, ds:[esi+ebp*8]
        mov edx, edi
        mov dword ptr ss : [esp+0x28], edx
        fcom dword ptr ds : [edx]
        fnstsw ax
        and eax, 0x4100
        jne public_62095cc
        mov ecx, dword ptr ds : [ebx+0x14]
        lea eax, ss:[ebp+1]
        inc ecx
        cmp eax, ecx
        je public_62096e9
        fcom dword ptr ds : [esi+eax*8]
        fnstsw ax
        test ah, 0x41
        jnp public_62096e9
        mov eax, dword ptr ds : [ebx+0x14]
        mov ecx, dword ptr ds : [ebx+0xC]
        lea esi, ds:[ebx+8]
        add edx, 8
        lea ecx, ds:[ecx+eax*8+8]
        mov dword ptr ss : [esp+0x28], edx
        cmp edx, ecx
        setne al
        test al, al
        je public_620954e
        public_620952c : nop
        fcom dword ptr ds : [edx]
        fnstsw ax
        test ah, 5
        jnp public_620954e
        mov eax, dword ptr ss : [esp+0x10]
        add edx, 8
        inc eax
        cmp edx, ecx
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x28], edx
        setne al
        test al, al
        jne public_620952c
        public_620954e : nop
        mov edx, dword ptr ds : [edi]
        mov edi, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], edx
        push ebp
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, esi
        call public_6209d20
        mov ebp, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0xC]
        mov ecx, eax
        sub ecx, ebp
        sar ecx, 3
        sub edx, ecx
        lea ecx, ds:[eax+8]
        shl edx, 3
        push edx
        push ecx
        push eax
        call dword ptr ds : [public_624b060]
        mov eax, dword ptr ds : [esi+0xC]
        add esp, 0xC
        lea edx, ss:[esp+0x24]
        dec eax
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ds : [esi+0xC], eax
        call public_6209d40
        push 1
        push ecx
        lea eax, ss:[esp+0x2C]
        mov ecx, esp
        push eax
        call public_6209d30
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, esi
        call public_620d570
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62096ef
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax], edx
        jmp public_62096ef
        public_62095cc : nop
        fcom dword ptr ds : [edx]
        fnstsw ax
        test ah, 5
        jp public_62096ed
        test ebp, ebp
        je public_62096e9
        fcom dword ptr ds : [edi-8]
        lea ecx, ds:[edi-8]
        fnstsw ax
        and eax, 0x100
        je public_62096e9
        lea edx, ds:[esi-8]
        mov dword ptr ss : [esp+0x28], ecx
        cmp ecx, edx
        setne al
        test al, al
        je public_6209628
        public_6209604 : nop
        fcom dword ptr ds : [ecx]
        fnstsw ax
        and eax, 0x4100
        je public_6209628
        mov esi, dword ptr ss : [esp+0x10]
        sub ecx, 8
        dec esi
        cmp ecx, edx
        setne al
        test al, al
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x10], esi
        jne public_6209604
        public_6209628 : nop
        add ecx, 8
        lea esi, ds:[ebx+8]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x18], eax
        push ebp
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, esi
        call public_6209d20
        mov ecx, dword ptr ds : [esi+4]
        mov edx, eax
        sub edx, ecx
        mov ecx, dword ptr ds : [esi+0xC]
        sar edx, 3
        mov ebp, dword ptr ds : [public_624b060]
        sub ecx, edx
        shl ecx, 3
        lea edx, ds:[eax+8]
        push ecx
        push edx
        push eax
        call ebp
        mov edx, dword ptr ds : [esi+0xC]
        add esp, 0xC
        lea eax, ss:[esp+0x28]
        dec edx
        push eax
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [esi+0xC], edx
        call public_6209d30
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ss:[esp+0x30]
        call public_6209d30
        mov edi, dword ptr ss : [esp+0x2C]
        mov ebx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0xC]
        sub edi, ebx
        sar edi, 3
        sub edx, edi
        push 1
        mov ecx, esi
        lea ebx, ds:[edx*8+8]
        call public_620d4d0
        mov eax, dword ptr ds : [esi+4]
        push ebx
        lea eax, ds:[eax+edi*8]
        mov dword ptr ss : [esp+0x30], eax
        push eax
        add eax, 8
        push eax
        call ebp
        mov edx, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ss : [esp+0x38]
        mov ebx, dword ptr ss : [esp+0x30]
        add esp, 0xC
        inc edx
        test eax, eax
        mov dword ptr ds : [esi+0xC], edx
        je public_62096ef
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        jmp public_62096ef
        public_62096e9 : nop
        fstp dword ptr ds : [edx]
        jmp public_62096ef
        public_62096ed : nop
        fstp st(0)
        public_62096ef : nop
        xor eax, eax
        mov dword ptr ds : [ebx+0x20], eax
        mov dword ptr ds : [ebx+0x1C], eax
        mov eax, dword ptr ds : [ebx+0x14]
        inc eax
        cmp eax, 1
        jle public_6209750
        mov eax, dword ptr ds : [ebx+0xC]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ds : [eax]
        fcom dword ptr ds : [public_624bc38]
        fnstsw ax
        test ah, 0x44
        jnp public_6209738
        fld dword ptr ds : [public_624bac4]
        fdiv st, st(1)
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x10]
        xor eax, eax
        fstp dword ptr ds : [ebx+0x1C]
        mov dword ptr ds : [ecx], edx
        fstp st(0)
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x10
        public_6209738 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x10]
        fstp st(0)
        mov dword ptr ds : [eax], ecx
        xor eax, eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0x10
        public_6209750 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [edx], eax
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x10
        ret 0x10
        UNREACHABLE_TRAP(0x62094c0)
    }
}

#undef public_620952c
#undef public_620954e
#undef public_62095cc
#undef public_6209604
#undef public_6209628
#undef public_62096e9
#undef public_62096ed
#undef public_62096ef
#undef public_6209738
#undef public_6209750
