#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b77dd0);

#define public_6b77e47 _public_6b77e47
#define public_6b77e58 _public_6b77e58
#define public_6b77e79 _public_6b77e79
#define public_6b77e93 _public_6b77e93
#define public_6b77eb6 _public_6b77eb6
#define public_6b77ecd _public_6b77ecd
#define public_6b77ed2 _public_6b77ed2
#define public_6b77ed9 _public_6b77ed9
#define public_6b77ee1 _public_6b77ee1
#define public_6b77f02 _public_6b77f02
#define public_6b77f16 _public_6b77f16
#define public_6b77f20 _public_6b77f20
#define public_6b77f34 _public_6b77f34
#define public_6b77f39 _public_6b77f39
#define public_6b77f3d _public_6b77f3d
#define public_6b77f43 _public_6b77f43
#define public_6b77f59 _public_6b77f59
#define public_6b77f8f _public_6b77f8f
#define public_6b77fa0 _public_6b77fa0
#define public_6b77fae _public_6b77fae

PROC_DECLARE(0x6b77dd0, internal_6b77dd0, public_6b77dd0);
extern "C" NAKED register_t __cdecl internal_6b77dd0()
{
    __asm
    {
        sub esp, 0x38
        push esi
        mov esi, dword ptr ss : [esp+0x44]
        push edi
        mov ecx, 0xB
        xor eax, eax
        lea edi, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x10], offset public_6b7a028
        mov dword ptr ss : [esp+0x48], eax
        rep stosd
        mov edi, dword ptr ss : [esp+0x4C]
        mov byte ptr ss : [esp+0xB], 0
        mov dword ptr ss : [esp+0x1C], 0x80000000
        mov dword ptr ss : [esp+0x20], 1
        mov dword ptr ds : [edi], eax
        mov al, byte ptr ds : [esi]
        cmp al, 0x5C
        mov dword ptr ss : [esp+0x28], 3
        mov dword ptr ss : [esp+0x2C], 0x8000080
        mov dword ptr ss : [esp+0x18], esi
        mov dword ptr ss : [esp+0xC], 0x34
        mov dword ptr ss : [esp+0x3C], 0xFFFFFFFF
        mov dword ptr ss : [esp+0x14], offset public_6b7a1d8
        je public_6b77e47
        cmp al, 0x2F
        jne public_6b77ee1
        public_6b77e47 : nop
        mov cl, byte ptr ds : [esi+1]
        cmp cl, 0x5C
        je public_6b77e58
        cmp cl, 0x2F
        jne public_6b77ee1
        public_6b77e58 : nop
        mov al, byte ptr ds : [esi+2]
        cmp al, 0x5C
        je public_6b77fae
        cmp al, 0x2F
        je public_6b77fae
        mov al, byte ptr ds : [esi+3]
        lea ecx, ds:[esi+3]
        test al, al
        je public_6b77fae
        public_6b77e79 : nop
        cmp al, 0x5C
        je public_6b77e93
        cmp al, 0x2F
        je public_6b77e93
        mov al, byte ptr ds : [ecx+1]
        inc ecx
        test al, al
        jne public_6b77e79
        mov al, byte ptr ss : [esp+0xB]
        pop edi
        pop esi
        add esp, 0x38
        ret 
        public_6b77e93 : nop
        cmp byte ptr ds : [ecx], 0
        je public_6b77fae
        mov al, byte ptr ds : [ecx+1]
        inc ecx
        cmp al, 0x5C
        je public_6b77fae
        cmp al, 0x2F
        je public_6b77fae
        mov al, byte ptr ds : [ecx]
        test al, al
        je public_6b77ed2
        public_6b77eb6 : nop
        cmp al, 0x5C
        je public_6b77ecd
        cmp al, 0x2F
        je public_6b77ecd
        mov al, byte ptr ds : [ecx+1]
        inc ecx
        test al, al
        jne public_6b77eb6
        xor esi, esi
        jmp public_6b77f59
        public_6b77ecd : nop
        cmp byte ptr ds : [ecx], 0
        jne public_6b77ed9
        public_6b77ed2 : nop
        xor esi, esi
        jmp public_6b77f59
        public_6b77ed9 : nop
        mov byte ptr ds : [ecx], 0
        lea esi, ds:[ecx+1]
        jmp public_6b77f59
        public_6b77ee1 : nop
        movsx eax, al
        push eax
        call dword ptr ds : [public_6b7908c]
        add esp, 4
        test eax, eax
        je public_6b77f16
        cmp byte ptr ds : [esi+1], 0x3A
        jne public_6b77f16
        mov al, byte ptr ds : [esi+3]
        lea ecx, ds:[esi+3]
        test al, al
        je public_6b77f39
        public_6b77f02 : nop
        cmp al, 0x5C
        je public_6b77f34
        cmp al, 0x2F
        je public_6b77f34
        mov al, byte ptr ds : [ecx+1]
        inc ecx
        test al, al
        jne public_6b77f02
        xor esi, esi
        jmp public_6b77f43
        public_6b77f16 : nop
        mov al, byte ptr ds : [esi+1]
        lea ecx, ds:[esi+1]
        test al, al
        je public_6b77f39
        public_6b77f20 : nop
        cmp al, 0x5C
        je public_6b77f34
        cmp al, 0x2F
        je public_6b77f34
        mov al, byte ptr ds : [ecx+1]
        inc ecx
        test al, al
        jne public_6b77f20
        xor esi, esi
        jmp public_6b77f43
        public_6b77f34 : nop
        cmp byte ptr ds : [ecx], 0
        jne public_6b77f3d
        public_6b77f39 : nop
        xor esi, esi
        jmp public_6b77f43
        public_6b77f3d : nop
        mov byte ptr ds : [ecx], 0
        lea esi, ds:[ecx+1]
        public_6b77f43 : nop
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        je public_6b77f59
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x48], 0
        public_6b77f59 : nop
        mov eax, dword ptr ss : [esp+0x44]
        lea ecx, ss:[esp+0x48]
        push ecx
        lea ecx, ss:[esp+0x10]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0xC]
        test eax, eax
        jne public_6b77fa0
        test esi, esi
        je public_6b77f8f
        cmp byte ptr ds : [esi], 0
        je public_6b77f8f
        mov edx, dword ptr ss : [esp+0x48]
        push edi
        push esi
        push edx
        call public_6b77dd0
        add esp, 0xC
        mov byte ptr ss : [esp+0xB], al
        jmp public_6b77fa0
        public_6b77f8f : nop
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [edi], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        mov byte ptr ss : [esp+0xB], 1
        public_6b77fa0 : nop
        mov eax, dword ptr ss : [esp+0x48]
        test eax, eax
        je public_6b77fae
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        public_6b77fae : nop
        mov al, byte ptr ss : [esp+0xB]
        pop edi
        pop esi
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6b77dd0)
    }
}

#undef public_6b77e47
#undef public_6b77e58
#undef public_6b77e79
#undef public_6b77e93
#undef public_6b77eb6
#undef public_6b77ecd
#undef public_6b77ed2
#undef public_6b77ed9
#undef public_6b77ee1
#undef public_6b77f02
#undef public_6b77f16
#undef public_6b77f20
#undef public_6b77f34
#undef public_6b77f39
#undef public_6b77f3d
#undef public_6b77f43
#undef public_6b77f59
#undef public_6b77f8f
#undef public_6b77fa0
#undef public_6b77fae
