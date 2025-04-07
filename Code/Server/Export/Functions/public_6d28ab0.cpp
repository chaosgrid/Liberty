#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d28ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3d9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eca0);
CLANG_FORWARD_PROC_SYMBOL(public_6d601a2);
CLANG_FORWARD_JUMP_SYMBOL(public_6d62bcb);

#define public_6d28b3c _public_6d28b3c
#define public_6d28b8b _public_6d28b8b
#define public_6d28bad _public_6d28bad
#define public_6d28c0b _public_6d28c0b
#define public_6d28c22 _public_6d28c22
#define public_6d28c46 _public_6d28c46
#define public_6d28c77 _public_6d28c77
#define public_6d28c90 _public_6d28c90
#define public_6d28ca0 _public_6d28ca0
#define public_6d28cba _public_6d28cba
#define public_6d28ccc _public_6d28ccc
#define public_6d28cd1 _public_6d28cd1
#define public_6d28cf3 _public_6d28cf3
#define public_6d28d16 _public_6d28d16
#define public_6d28d1e _public_6d28d1e
#define public_6d28d29 _public_6d28d29
#define public_6d28d31 _public_6d28d31
#define public_6d28d40 _public_6d28d40
#define public_6d28d48 _public_6d28d48
#define public_6d28d53 _public_6d28d53
#define public_6d28d65 _public_6d28d65

PROC_DECLARE(0x6d28ab0, internal_6d28ab0, public_6d28ab0);
extern "C" NAKED register_t __cdecl internal_6d28ab0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov dx, word ptr ss : [esp+4]
        push 0xFFFFFFFF
/*FIXUP push public_6d62bcb @0x6d28abd*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d62bcb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        mov si, word ptr ss : [esp+0x50]
        cmp dx, si
        push edi
        mov edi, ecx
        jbe public_6d28b8b
        mov al, byte ptr ss : [esp+0x58]
        push 0
        lea ecx, ss:[esp+0x18]
        mov byte ptr ss : [esp+0x18], al
        call dword ptr ds : [public_6d64b74]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6d695c0
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        push 1
        push ebx
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6d64b84]
        test al, al
        je public_6d28b3c
        mov edi, dword ptr ss : [esp+0x18]
        mov ecx, ebx
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6d695c0
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x1C], ebx
        mov byte ptr ds : [eax+ebx], 0
        public_6d28b3c : nop
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x5C], offset public_6d66ee4
        call dword ptr ds : [public_6d64c5c]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x4C], 1
        call dword ptr ds : [public_6d64ad0]
/*FIXUP push offset public_6d72fc0 @0x6d28b6f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72fc0
        lea eax, ss:[esp+0x28]
        push eax
        mov byte ptr ss : [esp+0x50], 0
        mov dword ptr ss : [esp+0x2C], offset public_6d68ab0
        call public_6d601a2
        public_6d28b8b : nop
        cmp dx, 0xFF
        ja public_6d28cd1
        cmp si, 0xFF
        mov dword ptr ss : [esp+0x10], 0xFF
        lea eax, ss:[esp+0x54]
        jb public_6d28bad
        lea eax, ss:[esp+0x10]
        public_6d28bad : nop
        mov cl, byte ptr ds : [eax]
        cmp dl, cl
        jbe public_6d28c0b
        mov cl, byte ptr ss : [esp+0x58]
        mov byte ptr ss : [esp+0x14], cl
        push 0
        lea ecx, ss:[esp+0x18]
        call dword ptr ds : [public_6d64b74]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6d695c0
        repne scasb
        not ecx
        dec ecx
        push ecx
/*FIXUP push offset public_6d695c0 @0x6d28bd7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d695c0
        lea ecx, ss:[esp+0x1C]
        call dword ptr ds : [public_6d64b08]
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x4C], 2
        call public_6d1b8f0
/*FIXUP push offset public_6d72fc0 @0x6d28bfc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d72fc0
        lea eax, ss:[esp+0x28]
        push eax
        call public_6d601a2
        public_6d28c0b : nop
        mov al, byte ptr ss : [esp+0x58]
        xor ebx, ebx
        test al, al
        je public_6d28c90
        mov bl, dl
        movzx ebp, cl
        cmp ebx, ebp
        ja public_6d28cd1
        public_6d28c22 : nop
        movsx esi, bl
        push esi
        call dword ptr ds : [public_6d64c50]
        xor ecx, ecx
        mov cl, al
        mov edx, ecx
        shr edx, 5
        and ecx, 0x8000001F
        lea eax, ds:[edi+edx*4+8]
        jns public_6d28c46
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d28c46 : nop
        mov edx, 1
        shl edx, cl
        mov ecx, dword ptr ds : [eax]
        push esi
        or ecx, edx
        mov dword ptr ds : [eax], ecx
        call dword ptr ds : [public_6d64ba8]
        xor ecx, ecx
        mov cl, al
        add esp, 8
        mov eax, ecx
        shr eax, 5
        and ecx, 0x8000001F
        lea eax, ds:[edi+eax*4+8]
        jns public_6d28c77
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d28c77 : nop
        mov esi, dword ptr ds : [eax]
        mov edx, 1
        shl edx, cl
        or esi, edx
        inc ebx
        cmp ebx, ebp
        mov dword ptr ds : [eax], esi
        jbe public_6d28c22
        mov dx, word ptr ss : [esp+0x50]
        jmp public_6d28ccc
        public_6d28c90 : nop
        xor eax, eax
        mov al, dl
        mov bl, cl
        cmp eax, ebx
        ja public_6d28cd1
        lea ebx, ds:[ebx]
        public_6d28ca0 : nop
        xor ecx, ecx
        mov cl, al
        mov esi, ecx
        shr esi, 5
        and ecx, 0x8000001F
        lea esi, ds:[edi+esi*4+8]
        jns public_6d28cba
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d28cba : nop
        mov ebp, 1
        shl ebp, cl
        mov ecx, dword ptr ds : [esi]
        or ecx, ebp
        inc eax
        cmp eax, ebx
        mov dword ptr ds : [esi], ecx
        jbe public_6d28ca0
        public_6d28ccc : nop
        mov si, word ptr ss : [esp+0x54]
        public_6d28cd1 : nop
        cmp si, 0xFF
        jbe public_6d28d65
        cmp dx, 0x100
        mov dword ptr ss : [esp+0x58], 0x100
        lea eax, ss:[esp+0x50]
        ja public_6d28cf3
        lea eax, ss:[esp+0x58]
        public_6d28cf3 : nop
        mov ax, word ptr ds : [eax]
        mov word ptr ss : [esp+0x58], ax
        mov eax, dword ptr ds : [edi+0x30]
        add edi, 0x2C
        test eax, eax
        mov word ptr ss : [esp+0x5A], si
        mov ecx, dword ptr ss : [esp+0x58]
        mov dword ptr ss : [esp+0x58], ecx
        jne public_6d28d16
        xor ecx, ecx
        jmp public_6d28d1e
        public_6d28d16 : nop
        mov ecx, dword ptr ds : [edi+0xC]
        sub ecx, eax
        sar ecx, 2
        public_6d28d1e : nop
        mov edx, dword ptr ds : [edi+4]
        test edx, edx
        jne public_6d28d29
        xor eax, eax
        jmp public_6d28d31
        public_6d28d29 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, edx
        sar eax, 2
        public_6d28d31 : nop
        cmp ecx, eax
        jne public_6d28d53
        mov ecx, dword ptr ds : [edi+4]
        test ecx, ecx
        jne public_6d28d40
        xor eax, eax
        jmp public_6d28d48
        public_6d28d40 : nop
        mov eax, dword ptr ds : [edi+8]
        sub eax, ecx
        sar eax, 2
        public_6d28d48 : nop
        add eax, 5
        push eax
        mov ecx, edi
        call public_6d3d9c0
        public_6d28d53 : nop
        mov eax, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x58]
        push edx
        push 1
        push eax
        mov ecx, edi
        call public_6d3eca0
        public_6d28d65 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 0xC
        UNREACHABLE_TRAP(0x6d28ab0)
    }
}

#undef public_6d28b3c
#undef public_6d28b8b
#undef public_6d28bad
#undef public_6d28c0b
#undef public_6d28c22
#undef public_6d28c46
#undef public_6d28c77
#undef public_6d28c90
#undef public_6d28ca0
#undef public_6d28cba
#undef public_6d28ccc
#undef public_6d28cd1
#undef public_6d28cf3
#undef public_6d28d16
#undef public_6d28d1e
#undef public_6d28d29
#undef public_6d28d31
#undef public_6d28d40
#undef public_6d28d48
#undef public_6d28d53
#undef public_6d28d65
