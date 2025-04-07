#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce1960);
CLANG_FORWARD_PROC_SYMBOL(public_6d0b7e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d10480);
CLANG_FORWARD_PROC_SYMBOL(public_6d18be0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b270);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b290);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b320);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b3a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d1b670);
CLANG_FORWARD_PROC_SYMBOL(public_6d1f300);
CLANG_FORWARD_PROC_SYMBOL(public_6d276f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d28880);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61e9c);

#define public_6d18c72 _public_6d18c72
#define public_6d18c7b _public_6d18c7b
#define public_6d18cab _public_6d18cab
#define public_6d18cc5 _public_6d18cc5
#define public_6d18cdd _public_6d18cdd
#define public_6d18d14 _public_6d18d14
#define public_6d18d2a _public_6d18d2a
#define public_6d18d48 _public_6d18d48
#define public_6d18db3 _public_6d18db3
#define public_6d18dda _public_6d18dda
#define public_6d18e01 _public_6d18e01
#define public_6d18e15 _public_6d18e15
#define public_6d18e2e _public_6d18e2e
#define public_6d18e46 _public_6d18e46
#define public_6d18e71 _public_6d18e71
#define public_6d18e73 _public_6d18e73

PROC_DECLARE(0x6d18be0, internal_6d18be0, public_6d18be0);
extern "C" NAKED register_t __cdecl internal_6d18be0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61e9c @0x6d18be2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61e9c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x8C
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [ebx], 0
        push esi
        mov dword ptr ss : [esp+0x30], ebx
        je public_6d18e71
        lea ecx, ss:[esp+0x10]
        call public_6d10480
        mov eax, dword ptr ss : [esp+0xA8]
        mov esi, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0
        push eax
        lea ecx, ss:[esp+0x60]
        mov dword ptr ss : [esp+0xA8], 0
        mov dword ptr ss : [esp+0x2C], eax
        call public_6d1b320
        lea edx, ss:[esp+0x54]
        push edx
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, esi
        call public_6d1f300
        mov al, byte ptr ss : [esp+0x3C]
        test al, al
        je public_6d18e46
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        je public_6d18e2e
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        jne public_6d18c72
        xor esi, esi
        jmp public_6d18c7b
        public_6d18c72 : nop
        mov esi, dword ptr ss : [esp+0x18]
        sub esi, eax
        sar esi, 5
        public_6d18c7b : nop
        mov cl, byte ptr ss : [esp+0xB]
        mov byte ptr ss : [esp+0x54], cl
        push 0
        lea ecx, ss:[esp+0x58]
        mov dword ptr ss : [esp+0x2C], esi
        call dword ptr ds : [public_6d64b58]
        test esi, esi
        mov dl, byte ptr ss : [esp+0xB]
        mov byte ptr ss : [esp+0x9C], 1
        mov byte ptr ss : [esp+0x34], dl
        mov eax, esi
        jge public_6d18cab
        xor eax, eax
        public_6d18cab : nop
        push ebp
        shl eax, 4
        push edi
        push eax
        call public_6d60012
        add esp, 4
        test esi, esi
        mov dword ptr ss : [esp+0x40], eax
        mov edi, eax
        jbe public_6d18cdd
        mov ebp, esi
        public_6d18cc5 : nop
        lea eax, ss:[esp+0x5C]
        push eax
        push edi
        call public_6d1b4f0
        add esp, 8
        add edi, 0x10
        dec ebp
        jne public_6d18cc5
        mov eax, dword ptr ss : [esp+0x40]
        public_6d18cdd : nop
        mov ecx, esi
        shl ecx, 4
        add ecx, eax
        mov dword ptr ss : [esp+0x44], ecx
        mov dword ptr ss : [esp+0x48], ecx
        push 1
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0xA8], 3
        call dword ptr ds : [public_6d64b58]
        xor ebp, ebp
        test esi, esi
        jle public_6d18dda
        xor ebx, ebx
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x2C], ebx
        public_6d18d14 : nop
        lea ecx, ss:[esp+0x18]
        call public_6d1b270
        cmp eax, ebp
        ja public_6d18d2a
        lea ecx, ss:[esp+0x18]
        call public_6d1b3a0
        public_6d18d2a : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x34], ecx
        lea ecx, ss:[esp+0x18]
        call public_6d1b270
        cmp eax, ebp
        ja public_6d18d48
        lea ecx, ss:[esp+0x18]
        call public_6d1b3a0
        public_6d18d48 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        lea esi, ds:[ebx+edx]
        mov ecx, 8
        lea edi, ss:[esp+0x7C]
        rep movsd
        mov edi, dword ptr ss : [esp+0x40]
        push ebp
        lea ecx, ss:[esp+0x1C]
        call public_6d1b290
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ebx+ecx+4]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        call public_6d276f0
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 8
        mov esi, eax
        add edi, ecx
        push 1
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d64b5c]
        test al, al
        je public_6d18db3
        mov edx, dword ptr ss : [esp+0x7C]
        mov eax, dword ptr ds : [edi+4]
        push esi
        push edx
        push eax
        call public_6ce1960
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], esi
        lea esi, ds:[eax+esi*2]
        add esp, 0xC
        mov word ptr ds : [esi], 0
        public_6d18db3 : nop
        mov ebx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x30]
        inc ebp
        add ebx, 0x20
        add ecx, 0x10
        cmp ebp, eax
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x14], ecx
        jl public_6d18d14
        mov ebx, dword ptr ss : [esp+0x38]
        public_6d18dda : nop
        mov edx, dword ptr ss : [esp+0xAC]
        lea ecx, ss:[esp+0x3C]
        push ecx
        push edx
        call dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [esp+0x4C]
        mov esi, dword ptr ss : [esp+0x48]
        add esp, 8
        cmp esi, edi
        mov byte ptr ss : [esp+0xA4], 0
        je public_6d18e15
        public_6d18e01 : nop
        push 0
        mov ecx, esi
        call public_6d1b670
        add esi, 0x10
        cmp esi, edi
        jne public_6d18e01
        mov esi, dword ptr ss : [esp+0x40]
        public_6d18e15 : nop
        push esi
        call public_6d5ffb0
        add esp, 4
        xor eax, eax
        pop edi
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x40], eax
        mov dword ptr ss : [esp+0x44], eax
        pop ebp
        public_6d18e2e : nop
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x9C], 0xFFFFFFFF
        call public_6d0b7e0
        mov al, 1
        jmp public_6d18e73
        public_6d18e46 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x14]
        push eax
        push ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0xA4], 0xFFFFFFFF
        call public_6d28880
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        call public_6d5ffb0
        add esp, 4
        public_6d18e71 : nop
        xor al, al
        public_6d18e73 : nop
        mov ecx, dword ptr ss : [esp+0x94]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x98
        ret 8
        UNREACHABLE_TRAP(0x6d18be0)
    }
}

#undef public_6d18c72
#undef public_6d18c7b
#undef public_6d18cab
#undef public_6d18cc5
#undef public_6d18cdd
#undef public_6d18d14
#undef public_6d18d2a
#undef public_6d18d48
#undef public_6d18db3
#undef public_6d18dda
#undef public_6d18e01
#undef public_6d18e15
#undef public_6d18e2e
#undef public_6d18e46
#undef public_6d18e71
#undef public_6d18e73
