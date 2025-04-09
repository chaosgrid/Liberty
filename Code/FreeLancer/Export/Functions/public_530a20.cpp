#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_530a20);
CLANG_FORWARD_PROC_SYMBOL(public_5310c0);

#define public_530a91 _public_530a91
#define public_530ab9 _public_530ab9
#define public_530adf _public_530adf
#define public_530b28 _public_530b28
#define public_530b3b _public_530b3b
#define public_530b48 _public_530b48
#define public_530b6e _public_530b6e
#define public_530b9b _public_530b9b
#define public_530bb3 _public_530bb3
#define public_530bcc _public_530bcc
#define public_530bf2 _public_530bf2
#define public_530c0f _public_530c0f
#define public_530c2a _public_530c2a
#define public_530c7f _public_530c7f
#define public_530c90 _public_530c90
#define public_530d04 _public_530d04
#define public_530d0d _public_530d0d

PROC_DECLARE(0x530a20, internal_530a20, public_530a20);
extern "C" NAKED register_t __cdecl internal_530a20()
{
    __asm
    {
        sub esp, 0x64
        push ebp
        push esi
        mov esi, dword ptr ds : [public_5c6030]
        push edi
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0x7F7FFFFF
        mov dword ptr ss : [esp+0x54], 1
        call esi
        lea ecx, ss:[esp+0x5C]
        call esi
        lea ecx, ss:[esp+0xC]
        mov dword ptr ss : [esp+0x60], 0
        mov dword ptr ss : [esp+0x64], 0
        mov dword ptr ss : [esp+0x68], 0
        mov dword ptr ss : [esp+0x6C], 0
        call esi
        mov ebp, dword ptr ss : [esp+0x74]
        mov ecx, ebp
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_530c90
        push ebx
        mov ebx, dword ptr ds : [public_5c6cf4]
/*FIXUP public_530a91 : nop
        push offset public_5c866c @0x530a91*/
  FIXUP public_530a91 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c866c
        mov ecx, ebp
        call ebx
        test al, al
        mov ecx, ebp
        je public_530ab9
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        jmp public_530c7f
/*FIXUP public_530ab9 : nop
        push offset public_5de09c @0x530ab9*/
  FIXUP public_530ab9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de09c
        call ebx
        test al, al
        mov ecx, ebp
        je public_530adf
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ss : [esp+0x60], eax
        jmp public_530c7f
/*FIXUP public_530adf : nop
        push offset public_5de090 @0x530adf*/
  FIXUP public_530adf : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de090
        call ebx
        test al, al
        mov ecx, ebp
        je public_530b48
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x50]
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c6cf8]
        test al, al
        jne public_530b3b
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c6cfc]
        fcomp dword ptr ss : [esp+0x50]
        fnstsw ax
        test ah, 5
        jp public_530b28
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x54], eax
        jmp public_530c7f
        public_530b28 : nop
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x54]
        jmp public_530c7f
        public_530b3b : nop
        mov ecx, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [esp+0x54], ecx
        jmp public_530c7f
/*FIXUP public_530b48 : nop
        push offset public_5dd350 @0x530b48*/
  FIXUP public_530b48 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd350
        call ebx
        test al, al
        mov ecx, ebp
        je public_530b6e
        call dword ptr ds : [public_5c6698]
        push eax
        call dword ptr ds : [public_5c6020]
        add esp, 4
        mov dword ptr ss : [esp+0x5C], eax
        jmp public_530c7f
/*FIXUP public_530b6e : nop
        push offset public_5de080 @0x530b6e*/
  FIXUP public_530b6e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de080
        call ebx
        test al, al
        mov ecx, ebp
        je public_530c0f
        call dword ptr ds : [public_5c6698]
        mov esi, eax
        xor eax, eax
        cmp esi, eax
        mov dword ptr ss : [esp+0x28], eax
        mov byte ptr ss : [esp+0x2C], al
        jne public_530b9b
        mov byte ptr ss : [esp+0x2C], al
        jmp public_530bcc
        public_530b9b : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x10
        jb public_530bb3
        mov eax, 0xF
        public_530bb3 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        lea edi, ss:[esp+0x2C]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x2C], 0
        public_530bcc : nop
        mov esi, dword ptr ds : [public_5c6d24]
        mov dword ptr ss : [esp+0x28], eax
        lea eax, ss:[esp+0x2C]
/*FIXUP push offset public_5de074 @0x530bda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de074
        push eax
        call esi
        add esp, 8
        test eax, eax
        jne public_530bf2
        mov dword ptr ss : [esp+0x58], eax
        jmp public_530c7f
        public_530bf2 : nop
        lea ecx, ss:[esp+0x2C]
/*FIXUP push offset public_5de068 @0x530bf6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de068
        push ecx
        call esi
        add esp, 8
        test eax, eax
        jne public_530c7f
        mov dword ptr ss : [esp+0x58], 1
        jmp public_530c7f
/*FIXUP public_530c0f : nop
        push offset public_5de05c @0x530c0f*/
  FIXUP public_530c0f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de05c
        call ebx
        test al, al
        mov ecx, ebp
        je public_530c2a
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x64]
        jmp public_530c7f
/*FIXUP public_530c2a : nop
        push offset public_5de04c @0x530c2a*/
  FIXUP public_530c2a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de04c
        call ebx
        test al, al
        je public_530c7f
        push 2
        mov ecx, ebp
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x14]
        push 1
        mov ecx, ebp
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x78]
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_5c6cfc]
        mov edx, dword ptr ss : [esp+0x78]
        mov eax, dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x68], ecx
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ss : [esp+0x70], eax
        public_530c7f : nop
        mov ecx, ebp
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_530a91
        pop ebx
        public_530c90 : nop
        lea ecx, ss:[esp+0xC]
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_530d04
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x24], ecx
        lea edx, ss:[esp+0x24]
        mov ecx, 9
        lea esi, ss:[esp+0x4C]
        lea edi, ss:[esp+0x28]
        push edx
        lea eax, ss:[esp+0x14]
        rep movsd
        push eax
        mov ecx, offset public_6754f4
        call public_5310c0
        mov al, byte ptr ss : [esp+0x14]
        test al, al
        jne public_530d0d
        mov al, byte ptr ss : [esp+0x78]
        test al, al
        jne public_530d04
        lea ecx, ss:[esp+0xC]
        mov esi, 0x100002
        call dword ptr ds : [public_5c6044]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0xF8
/*FIXUP push offset public_5de01c @0x530cf4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5de01c
/*FIXUP push offset public_5ddfc8 @0x530cf9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5ddfc8
        push esi
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_530d04 : nop
        pop edi
        pop esi
        xor al, al
        pop ebp
        add esp, 0x64
        ret 
        public_530d0d : nop
        pop edi
        pop esi
        mov al, 1
        pop ebp
        add esp, 0x64
        ret 
        UNREACHABLE_TRAP(0x530a20)
    }
}

#undef public_530a91
#undef public_530ab9
#undef public_530adf
#undef public_530b28
#undef public_530b3b
#undef public_530b48
#undef public_530b6e
#undef public_530b9b
#undef public_530bb3
#undef public_530bcc
#undef public_530bf2
#undef public_530c0f
#undef public_530c2a
#undef public_530c7f
#undef public_530c90
#undef public_530d04
#undef public_530d0d
