#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f3df10);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e020);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);

#define public_6f3e10d _public_6f3e10d
#define public_6f3e144 _public_6f3e144
#define public_6f3e17e _public_6f3e17e
#define public_6f3e1b8 _public_6f3e1b8
#define public_6f3e1f2 _public_6f3e1f2
#define public_6f3e235 _public_6f3e235
#define public_6f3e26f _public_6f3e26f
#define public_6f3e2a9 _public_6f3e2a9
#define public_6f3e2e3 _public_6f3e2e3
#define public_6f3e326 _public_6f3e326
#define public_6f3e360 _public_6f3e360
#define public_6f3e39a _public_6f3e39a
#define public_6f3e3d5 _public_6f3e3d5
#define public_6f3e3dd _public_6f3e3dd
#define public_6f3e402 _public_6f3e402
#define public_6f3e438 _public_6f3e438
#define public_6f3e440 _public_6f3e440
#define public_6f3e458 _public_6f3e458
#define public_6f3e48e _public_6f3e48e
#define public_6f3e496 _public_6f3e496
#define public_6f3e4ac _public_6f3e4ac
#define public_6f3e4ec _public_6f3e4ec
#define public_6f3e4f4 _public_6f3e4f4
#define public_6f3e526 _public_6f3e526
#define public_6f3e534 _public_6f3e534
#define public_6f3e541 _public_6f3e541

PROC_DECLARE(0x6f3e020, internal_6f3e020, public_6f3e020);
extern "C" NAKED register_t __cdecl internal_6f3e020()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x468
        push ebx
        push ebp
        push esi
        push edi
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fd0aa0
        xor bl, bl
        call public_6f7b0f0
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, dword ptr ds : [public_6fd0aa4]
        je public_6f3e541
        mov esi, dword ptr ds : [public_6fb3030]
        lea ecx, ss:[esp+0x18]
        call esi
        lea ecx, ss:[esp+0x1C]
        call esi
        lea ecx, ss:[esp+0x20]
        call esi
        lea ecx, ss:[esp+0x24]
        call esi
        lea ecx, ss:[esp+0x28]
        call esi
        lea ecx, ss:[esp+0x2C]
        call esi
        lea ecx, ss:[esp+0x30]
        call esi
        lea ecx, ss:[esp+0x34]
        call esi
        lea ecx, ss:[esp+0x38]
        call esi
        lea ecx, ss:[esp+0x3C]
        call esi
        lea ecx, ss:[esp+0x40]
        call esi
        lea ecx, ss:[esp+0x44]
        call esi
        lea ecx, ss:[esp+0x48]
        call esi
        lea ecx, ss:[esp+0x4C]
        call esi
        lea ecx, ss:[esp+0x50]
        call esi
        lea ecx, ss:[esp+0x54]
        call esi
        lea ecx, ss:[esp+0x58]
        call esi
        mov ebx, dword ptr ds : [public_6fb3050]
        lea esi, ds:[edi+0x10]
        mov ecx, 0x11
        lea edi, ss:[esp+0x18]
        rep movsd
        lea ecx, ss:[esp+0x1C]
        call ebx
        test al, al
        mov ebp, dword ptr ss : [esp+0x480]
        jne public_6f3e10d
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fd0a8c
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd0a90]
        je public_6f3e10d
        lea esi, ds:[eax+0x10]
        mov ecx, 0x16
        mov edi, ebp
        rep movsd
        public_6f3e10d : nop
        lea ecx, ss:[esp+0x20]
        call ebx
        test al, al
        jne public_6f3e144
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6fd0a78
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd0a7c]
        je public_6f3e144
        lea esi, ds:[eax+0x10]
        lea edi, ss:[ebp+0x58]
        mov ecx, 0xF
        rep movsd
        public_6f3e144 : nop
        lea ecx, ss:[esp+0x24]
        call ebx
        test al, al
        jne public_6f3e17e
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fd0a64
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd0a68]
        je public_6f3e17e
        lea esi, ds:[eax+0x10]
        lea edi, ss:[ebp+0x94]
        mov ecx, 0x18
        rep movsd
        public_6f3e17e : nop
        lea ecx, ss:[esp+0x28]
        call ebx
        test al, al
        jne public_6f3e1b8
        lea edx, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fd0a50
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd0a54]
        je public_6f3e1b8
        lea esi, ds:[eax+0x10]
        lea edi, ss:[ebp+0xF4]
        mov ecx, 0xD
        rep movsd
        public_6f3e1b8 : nop
        lea ecx, ss:[esp+0x2C]
        call ebx
        test al, al
        jne public_6f3e1f2
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6fd0a3c
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd0a40]
        je public_6f3e1f2
        lea esi, ds:[eax+0x10]
        lea edi, ss:[ebp+0x128]
        mov ecx, 7
        rep movsd
        public_6f3e1f2 : nop
        lea ecx, ss:[esp+0x30]
        call ebx
        test al, al
        jne public_6f3e235
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fd0a28
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd0a2c]
        je public_6f3e235
        add eax, 0x10
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[ebp+0x144]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        public_6f3e235 : nop
        lea ecx, ss:[esp+0x34]
        call ebx
        test al, al
        jne public_6f3e26f
        lea ecx, ss:[esp+0x34]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6fd0a14
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd0a18]
        je public_6f3e26f
        lea esi, ds:[eax+0x10]
        lea edi, ss:[ebp+0x150]
        mov ecx, 5
        rep movsd
        public_6f3e26f : nop
        lea ecx, ss:[esp+0x38]
        call ebx
        test al, al
        jne public_6f3e2a9
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fd0a00
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd0a04]
        je public_6f3e2a9
        lea esi, ds:[eax+0x10]
        lea edi, ss:[ebp+0x164]
        mov ecx, 6
        rep movsd
        public_6f3e2a9 : nop
        lea ecx, ss:[esp+0x3C]
        call ebx
        test al, al
        jne public_6f3e2e3
        lea edx, ss:[esp+0x3C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fd09ec
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd09f0]
        je public_6f3e2e3
        lea esi, ds:[eax+0x10]
        lea edi, ss:[ebp+0x17C]
        mov ecx, 0x10
        rep movsd
        public_6f3e2e3 : nop
        lea ecx, ss:[esp+0x40]
        call ebx
        test al, al
        jne public_6f3e326
        lea ecx, ss:[esp+0x40]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6fd09d8
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd09dc]
        je public_6f3e326
        add eax, 0x10
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x1BC]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        public_6f3e326 : nop
        lea ecx, ss:[esp+0x44]
        call ebx
        test al, al
        jne public_6f3e360
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6fd09c4
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd09c8]
        je public_6f3e360
        lea esi, ds:[eax+0x10]
        lea edi, ss:[ebp+0x1C8]
        mov ecx, 9
        rep movsd
        public_6f3e360 : nop
        lea ecx, ss:[esp+0x48]
        call ebx
        test al, al
        jne public_6f3e39a
        lea eax, ss:[esp+0x48]
        push eax
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, offset public_6fd09b0
        call public_6f7b0f0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_6fd09b4]
        je public_6f3e39a
        lea esi, ds:[eax+0x10]
        lea edi, ss:[ebp+0x1EC]
        mov ecx, 0x11
        rep movsd
        public_6f3e39a : nop
        lea ecx, ss:[esp+0x4C]
        call ebx
        test al, al
        jne public_6f3e402
        lea edx, ss:[esp+0x4C]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, offset public_6fd099c
        call public_6f2e220
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [public_6fd09a0]
        cmp eax, ecx
        je public_6f3e3d5
        mov edx, dword ptr ss : [esp+0x4C]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f3e3d5
        lea eax, ss:[esp+0x10]
        jmp public_6f3e3dd
        public_6f3e3d5 : nop
        mov dword ptr ss : [esp+0x14], ecx
        lea eax, ss:[esp+0x14]
        public_6f3e3dd : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f3e402
        add eax, 0x10
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x230]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [eax+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        public_6f3e402 : nop
        lea ecx, ss:[esp+0x50]
        call ebx
        test al, al
        jne public_6f3e458
        lea ecx, ss:[esp+0x50]
        push ecx
        mov ecx, offset public_6fd0988
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fd098c]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f3e438
        mov edx, dword ptr ss : [esp+0x50]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f3e438
        lea eax, ss:[esp+0x14]
        jmp public_6f3e440
        public_6f3e438 : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6f3e440 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f3e458
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ss : [ebp+0x240], ecx
        mov edx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [ebp+0x244], edx
        public_6f3e458 : nop
        lea ecx, ss:[esp+0x54]
        call ebx
        test al, al
        jne public_6f3e4ac
        lea eax, ss:[esp+0x54]
        push eax
        mov ecx, offset public_6fd0974
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fd0978]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f3e48e
        mov edx, dword ptr ss : [esp+0x54]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f3e48e
        lea eax, ss:[esp+0x14]
        jmp public_6f3e496
        public_6f3e48e : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6f3e496 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f3e4ac
        lea esi, ds:[eax+0x10]
        lea edi, ss:[ebp+0x248]
        mov ecx, 0x16
        rep movsd
        public_6f3e4ac : nop
        lea ecx, ss:[esp+0x58]
        call ebx
        test al, al
        jne public_6f3e534
        lea ecx, ss:[esp+0x18]
        call ebx
        test al, al
        jne public_6f3e526
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, offset public_6fd0aa0
        call public_6fa7200
        mov ecx, dword ptr ds : [public_6fd0aa4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f3e4ec
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f3e4ec
        lea eax, ss:[esp+0x14]
        jmp public_6f3e4f4
        public_6f3e4ec : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6f3e4f4 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        je public_6f3e526
        lea esi, ds:[eax+0x10]
        mov ecx, 0x11
        lea edi, ss:[esp+0x5C]
        rep movsd
        lea ecx, ss:[esp+0xA0]
        call dword ptr ds : [public_6fb309c]
        lea eax, ss:[esp+0x9C]
        push ebp
        push eax
        call public_6f3df10
        add esp, 8
        public_6f3e526 : nop
        lea ecx, ss:[esp+0x58]
        push ebp
        push ecx
        call public_6f3df10
        add esp, 8
        public_6f3e534 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x468
        ret 
        public_6f3e541 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x468
        ret 
        UNREACHABLE_TRAP(0x6f3e020)
    }
}

#undef public_6f3e10d
#undef public_6f3e144
#undef public_6f3e17e
#undef public_6f3e1b8
#undef public_6f3e1f2
#undef public_6f3e235
#undef public_6f3e26f
#undef public_6f3e2a9
#undef public_6f3e2e3
#undef public_6f3e326
#undef public_6f3e360
#undef public_6f3e39a
#undef public_6f3e3d5
#undef public_6f3e3dd
#undef public_6f3e402
#undef public_6f3e438
#undef public_6f3e440
#undef public_6f3e458
#undef public_6f3e48e
#undef public_6f3e496
#undef public_6f3e4ac
#undef public_6f3e4ec
#undef public_6f3e4f4
#undef public_6f3e526
#undef public_6f3e534
#undef public_6f3e541
