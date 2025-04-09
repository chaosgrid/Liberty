#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420d60);
CLANG_FORWARD_PROC_SYMBOL(public_5a0340);
CLANG_FORWARD_PROC_SYMBOL(public_5a1130);

#define public_492294 _public_492294
#define public_4922a9 _public_4922a9
#define public_49233c _public_49233c
#define public_4923bd _public_4923bd

PROC_DECLARE(0x492270, internal_492270, public_492270);
extern "C" NAKED register_t __cdecl internal_492270()
{
    __asm
    {
        sub esp, 0x78
        push ebx
        mov ebx, dword ptr ss : [esp+0x80]
        push esi
        push edi
        push ebx
        mov esi, ecx
        call public_5a0340
        test al, al
        je public_492294
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x78
        ret 4
        public_492294 : nop
        mov al, byte ptr ds : [esi+0xBC0]
        test al, al
        jne public_4922a9
        pop edi
        pop esi
        xor al, al
        pop ebx
        add esp, 0x78
        ret 4
        public_4922a9 : nop
        lea ecx, ds:[esi+0x80]
        mov dword ptr ss : [esp+0x44], 0x3F800000
        mov dword ptr ss : [esp+0x34], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0x3F800000
        mov dword ptr ss : [esp+0x40], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        call public_420d60
        test al, al
        je public_49233c
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x84]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov ecx, 0xC
        mov esi, eax
        lea edi, ss:[esp+0x24]
        rep movsd
        public_49233c : nop
        fld dword ptr ss : [esp+0x48]
        mov ecx, 0xC
        fadd dword ptr ds : [public_5d1234]
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0x54]
        rep movsd
        fstp dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ss : [esp+0x7C]
        mov dword ptr ss : [esp+0x80], ecx
        mov dword ptr ss : [esp+0xC], 0x3E428F5C
        mov edx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x7C], eax
        push ebx
        lea edx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x14], 0x3E8F5C29
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x24], ecx
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x24], eax
        call public_5a1130
        test al, al
        je public_4923bd
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x78
        ret 4
        public_4923bd : nop
        fld dword ptr ss : [esp+0x48]
        mov ecx, 0xC
        fsub dword ptr ds : [public_5d3dc0]
        lea esi, ss:[esp+0x24]
        lea edi, ss:[esp+0x54]
        rep movsd
        fstp dword ptr ss : [esp+0x78]
        mov ecx, dword ptr ss : [esp+0x80]
        mov eax, dword ptr ss : [esp+0x7C]
        push ebx
        lea edx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x84], ecx
        push edx
        lea ecx, ss:[esp+0x20]
        mov dword ptr ss : [esp+0x84], eax
        call public_5a1130
        pop edi
        pop esi
        pop ebx
        add esp, 0x78
        ret 4
        UNREACHABLE_TRAP(0x492270)
    }
}

#undef public_492294
#undef public_4922a9
#undef public_49233c
#undef public_4923bd
