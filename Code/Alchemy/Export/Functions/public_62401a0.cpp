#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6217ab0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_62401a0);

#define public_62401c6 _public_62401c6
#define public_6240286 _public_6240286
#define public_62402cf _public_62402cf
#define public_62402fa _public_62402fa
#define public_624030d _public_624030d
#define public_624033e _public_624033e
#define public_6240389 _public_6240389
#define public_62403a6 _public_62403a6
#define public_62403db _public_62403db

PROC_DECLARE(0x62401a0, internal_62401a0, public_62401a0);
extern "C" NAKED register_t __cdecl internal_62401a0()
{
    __asm
    {
        sub esp, 0x90
        push esi
        mov esi, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ds : [esi+4]
        test al, 8
        je public_62401c6
        and al, 0xF7
        mov dword ptr ds : [esi+4], eax
        xor eax, eax
        pop esi
        add esp, 0x90
        ret 0xC
        public_62401c6 : nop
        push ebp
        push edi
        test al, 4
        je public_624033e
        test al, 2
        jne public_62402fa
        mov eax, dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [eax+0x24]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x20]
        test al, al
        jne public_62402fa
        mov edx, dword ptr ds : [esi+0x80]
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        mov dword ptr ss : [esp+0x1C], 0x3F800000
        mov dword ptr ss : [esp+0xC], 0x3F800000
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov eax, dword ptr ds : [edx+0x24]
        lea edx, ss:[esp+0xC]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ds : [esi+0x84]
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ds : [public_6257bd0]
        xor ebp, ebp
        cmp eax, ebp
        jne public_6240286
        call public_623e830
        mov dword ptr ds : [public_6257bd0], eax
        public_6240286 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x1C]
        push ebx
        push edx
        mov edx, dword ptr ss : [esp+0xB0]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x70]
        lea ecx, ss:[esp+0x40]
        push eax
        call public_6217ab0
        lea ebx, ds:[esi+0x4C]
        mov ecx, 0xC
        lea esi, ss:[esp+0x40]
        mov edi, ebx
        rep movsd
        mov eax, dword ptr ds : [public_6257bd0]
        cmp eax, ebp
        jne public_62402cf
        call public_623e830
        mov dword ptr ds : [public_6257bd0], eax
        public_62402cf : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x44]
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x40]
        lea ecx, ss:[esp+0x70]
        push eax
        call public_6217ab0
        mov edi, ebx
        lea esi, ss:[esp+0x70]
        pop ebx
        jmp public_62403db
        public_62402fa : nop
        mov eax, dword ptr ds : [public_6257bd0]
        test eax, eax
        jne public_624030d
        call public_623e830
        mov dword ptr ds : [public_6257bd0], eax
        public_624030d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x1C]
        push edx
        mov edx, dword ptr ss : [esp+0xAC]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0x3C]
        lea ecx, ss:[esp+0x6C]
        push eax
        call public_6217ab0
        lea edi, ds:[esi+0x4C]
        lea esi, ss:[esp+0x6C]
        jmp public_62403db
        public_624033e : nop
        test al, 2
        jne public_62403a6
        mov ecx, dword ptr ds : [esi+0x80]
        mov eax, dword ptr ds : [ecx+0x24]
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+0x20]
        test al, al
        jne public_62403a6
        mov eax, dword ptr ds : [esi+0x80]
        mov edx, dword ptr ds : [esi+0x84]
        lea edi, ds:[esi+0x1C]
        mov eax, dword ptr ds : [eax+0x24]
        push edi
        push edx
        mov edx, dword ptr ds : [esi+0x8C]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ds : [public_6257bd0]
        test eax, eax
        jne public_6240389
        call public_623e830
        mov dword ptr ds : [public_6257bd0], eax
        public_6240389 : nop
        mov edx, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea edi, ds:[esi+0x4C]
        lea esi, ss:[esp+0x3C]
        jmp public_62403db
        public_62403a6 : nop
        mov eax, 0x3F800000
        xor ebp, ebp
        mov dword ptr ds : [esi+0x3C], eax
        mov dword ptr ds : [esi+0x2C], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov dword ptr ds : [esi+0x38], ebp
        mov dword ptr ds : [esi+0x34], ebp
        mov dword ptr ds : [esi+0x30], ebp
        mov dword ptr ds : [esi+0x28], ebp
        mov dword ptr ds : [esi+0x24], ebp
        mov dword ptr ds : [esi+0x20], ebp
        mov dword ptr ds : [esi+0x48], ebp
        mov dword ptr ds : [esi+0x44], ebp
        mov dword ptr ds : [esi+0x40], ebp
        lea edi, ds:[esi+0x4C]
        mov esi, dword ptr ss : [esp+0xA8]
        public_62403db : nop
        mov ecx, 0xC
        xor eax, eax
        rep movsd
        pop edi
        pop ebp
        pop esi
        add esp, 0x90
        ret 0xC
        UNREACHABLE_TRAP(0x62401a0)
    }
}

#undef public_62401c6
#undef public_6240286
#undef public_62402cf
#undef public_62402fa
#undef public_624030d
#undef public_624033e
#undef public_6240389
#undef public_62403a6
#undef public_62403db
