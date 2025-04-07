#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6edae70);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f34ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab321);

#define public_6edaf5d _public_6edaf5d
#define public_6edafae _public_6edafae
#define public_6edb032 _public_6edb032
#define public_6edb0b9 _public_6edb0b9
#define public_6edb11d _public_6edb11d
#define public_6edb17d _public_6edb17d
#define public_6edb18c _public_6edb18c
#define public_6edb213 _public_6edb213
#define public_6edb218 _public_6edb218
#define public_6edb235 _public_6edb235
#define public_6edb238 _public_6edb238

PROC_DECLARE(0x6edae70, internal_6edae70, public_6edae70);
extern "C" NAKED register_t __cdecl internal_6edae70()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab321 @0x6edae72*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab321
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x178
        mov eax, dword ptr ss : [esp+0x18C]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x194]
        push ebp
        push esi
        push edi
        lea edx, ss:[esp+0x1B]
        mov dword ptr ds : [ebx+8], ecx
        xor edi, edi
        lea ebp, ds:[ebx+0x14]
        lea esi, ds:[ebx+0xC]
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [esi], edi
        mov dword ptr ds : [ebx+0x10], edi
        call public_6ead6a0
        mov eax, dword ptr ss : [esp+0x198]
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x19C]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x198], edi
        mov dword ptr ds : [ebx], offset public_6fb6934
        call dword ptr ds : [public_6fb3444]
        push esi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, edi
        je public_6edb235
        push 0x10
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edb235
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x198]
        push edx
        call public_6f73930
        mov esi, eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], esi
        call public_6f34ca0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x4C]
        mov edi, eax
        test edi, edi
        mov dword ptr ss : [esp+0x2C], edi
        jne public_6edb0b9
        mov dword ptr ds : [ebx+0x28], 0x4A39
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        je public_6edaf5d
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jae public_6edafae
        public_6edaf5d : nop
        push 4
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+4], esi
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], edx
        public_6edafae : nop
        lea ecx, ss:[esp+0x1C]
        call public_6eac620
        mov esi, dword ptr ds : [esi+0x154]
        lea eax, ss:[esp+0x1C]
        push esi
        push eax
        mov byte ptr ss : [esp+0x198], 1
        call public_6f66220
        add esp, 8
        lea ecx, ss:[esp+0x1C]
        call public_6fa3db0
        cmp eax, 1
        lea ecx, ss:[esp+0x1C]
        seta byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x190], 0
        call public_6eec8d0
        xor esi, esi
/*FIXUP push offset public_6fb6920 @0x6edaff7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6920
        lea ecx, ss:[esp+0xC0]
        mov dword ptr ss : [esp+0xC0], esi
        mov byte ptr ss : [esp+0xC4], 0
        call public_6ead640
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov dword ptr ss : [esp+0x34], esi
        mov byte ptr ss : [esp+0x38], 0
        mov eax, offset public_6fb6844
        jne public_6edb032
        mov eax, offset public_6fb6840
/*FIXUP public_6edb032 : nop
        push offset public_6fb572c @0x6edb032*/
  FIXUP public_6edb032 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push eax
        lea ecx, ss:[esp+0xC8]
        push ecx
        lea edx, ss:[esp+0x40]
/*FIXUP push offset public_6fb6838 @0x6edb044*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6838
        push edx
        call public_6eec2b0
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
        mov ecx, 0x11
        lea esi, ss:[esp+0x4C]
        lea edi, ss:[esp+0x118]
        rep movsd
/*FIXUP push offset public_6fb6064 @0x6edb065*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x120]
        push ecx
        lea edx, ss:[esp+0x164]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0xA0]
        mov ecx, 0x11
        lea edi, ss:[esp+0x9C]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x28
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6eb5770
        jmp public_6edb238
        public_6edb0b9 : nop
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x28], 0x4A3B
        call public_6eb6b30
        cmp eax, 3
        jae public_6edb11d
        push 0xC
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+4], esi
        mov esi, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+8], edx
        public_6edb11d : nop
        lea ecx, ss:[esp+0x1C]
        call public_6eac620
        mov esi, dword ptr ds : [esi+0x154]
        lea eax, ss:[esp+0x1C]
        push esi
        push eax
        mov byte ptr ss : [esp+0x198], 2
        call public_6f66220
        add esp, 8
        lea ecx, ss:[esp+0x1C]
        call public_6fa3db0
        cmp eax, 1
        lea ecx, ss:[esp+0x1C]
        seta byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x190], 0
        call public_6eec8d0
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_6edb17d
        cmp edi, 1
        mov eax, offset public_6fb6908
        je public_6edb18c
        mov eax, offset public_6fb68f4
        jmp public_6edb18c
        public_6edb17d : nop
        cmp edi, 1
        mov eax, offset public_6fb68dc
        je public_6edb18c
        mov eax, offset public_6fb68c8
        public_6edb18c : nop
        push eax
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6eb5770
/*FIXUP push offset public_6fb572c @0x6edb1aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push edi
        lea eax, ss:[esp+0x3C]
/*FIXUP push offset public_6fb63a4 @0x6edb1b4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63a4
        push eax
        mov dword ptr ss : [esp+0x44], 0
        mov byte ptr ss : [esp+0x48], 0
        call public_6eec2b0
        mov ecx, 0x11
        lea esi, ss:[esp+0x44]
        lea edi, ss:[esp+0x88]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        lea ecx, ss:[esp+0x8C]
        push ecx
        call esi
        add esp, 0x14
        lea edx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
        cmp dword ptr ss : [esp+0x2C], 1
        jne public_6edb213
/*FIXUP push offset public_6fb68b0 @0x6edb20c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb68b0
        jmp public_6edb218
/*FIXUP public_6edb213 : nop
        push offset public_6fb6898 @0x6edb213*/
  FIXUP public_6edb213 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6898
        public_6edb218 : nop
        call esi
        mov edx, dword ptr ss : [ebp+8]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], eax
        call public_6f937c0
        jmp public_6edb238
        public_6edb235 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6edb238 : nop
        mov ecx, dword ptr ss : [esp+0x188]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x184
        ret 0xC
        UNREACHABLE_TRAP(0x6edae70)
    }
}

#undef public_6edaf5d
#undef public_6edafae
#undef public_6edb032
#undef public_6edb0b9
#undef public_6edb11d
#undef public_6edb17d
#undef public_6edb18c
#undef public_6edb213
#undef public_6edb218
#undef public_6edb235
#undef public_6edb238
