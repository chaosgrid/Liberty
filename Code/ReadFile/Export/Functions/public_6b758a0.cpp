#include "ReadFile-PCH.h"


#define public_6b758e3 _public_6b758e3
#define public_6b758f3 _public_6b758f3
#define public_6b758fc _public_6b758fc
#define public_6b75914 _public_6b75914
#define public_6b7592b _public_6b7592b
#define public_6b7592f _public_6b7592f
#define public_6b7593f _public_6b7593f
#define public_6b75942 _public_6b75942
#define public_6b75947 _public_6b75947
#define public_6b75961 _public_6b75961
#define public_6b7597a _public_6b7597a
#define public_6b75989 _public_6b75989
#define public_6b7598e _public_6b7598e
#define public_6b7599c _public_6b7599c
#define public_6b759af _public_6b759af
#define public_6b759b3 _public_6b759b3
#define public_6b759c4 _public_6b759c4
#define public_6b759d5 _public_6b759d5
#define public_6b75a0b _public_6b75a0b
#define public_6b75a10 _public_6b75a10
#define public_6b75a28 _public_6b75a28
#define public_6b75a34 _public_6b75a34
#define public_6b75a42 _public_6b75a42

PROC_DECLARE(0x6b758a0, internal_6b758a0, public_6b758a0);
extern "C" NAKED register_t __cdecl internal_6b758a0()
{
    __asm
    {
        sub esp, 0x108
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x118]
        mov eax, dword ptr ds : [edi+0x128]
        test eax, eax
        jne public_6b75a42
        mov edx, dword ptr ss : [esp+0x11C]
        test edx, edx
        je public_6b75a42
        mov bl, byte ptr ds : [edx]
        test bl, bl
        je public_6b758f3
        cmp bl, 0x5C
        je public_6b758e3
        cmp bl, 0x2F
        je public_6b758e3
        cmp byte ptr ds : [edx+1], 0x3A
        jne public_6b758f3
        public_6b758e3 : nop
        push 0x104
        lea eax, ss:[esp+0x10]
        push edx
        push eax
        jmp public_6b759c4
        public_6b758f3 : nop
        mov cl, byte ptr ds : [edi+0xD]
        xor eax, eax
        test cl, cl
        je public_6b75914
        public_6b758fc : nop
        cmp eax, 0x103
        jge public_6b75a10
        mov byte ptr ss : [esp+eax+0xC], cl
        mov cl, byte ptr ds : [edi+eax+0xE]
        inc eax
        test cl, cl
        jne public_6b758fc
        public_6b75914 : nop
        lea ecx, ss:[esp+eax+0xC]
        lea eax, ss:[esp+0xC]
        cmp ecx, eax
        je public_6b7592b
        mov al, byte ptr ds : [ecx-1]
        cmp al, 0x5C
        je public_6b7592f
        cmp al, 0x2F
        je public_6b7592f
        public_6b7592b : nop
        mov byte ptr ds : [ecx], 0x5C
        inc ecx
        public_6b7592f : nop
        cmp bl, 0x2E
        jne public_6b75942
        mov al, byte ptr ds : [edx+1]
        cmp al, 0x5C
        je public_6b7593f
        cmp al, 0x2F
        jne public_6b75942
        public_6b7593f : nop
        add edx, 2
        public_6b75942 : nop
        cmp byte ptr ds : [edx], 0x2E
        jne public_6b7599c
        public_6b75947 : nop
        cmp byte ptr ds : [edx+1], 0x2E
        jne public_6b7599c
        mov eax, ecx
        lea esi, ss:[esp+0xC]
        sub eax, esi
        cmp eax, 2
        jle public_6b75a10
        sub ecx, 2
        public_6b75961 : nop
        mov al, byte ptr ds : [ecx]
        cmp al, 0x5C
        je public_6b7597a
        cmp al, 0x2F
        je public_6b7597a
        lea eax, ss:[esp+0xC]
        cmp ecx, eax
        je public_6b75a10
        dec ecx
        jmp public_6b75961
        public_6b7597a : nop
        mov al, byte ptr ds : [edx+2]
        cmp al, 0x5C
        je public_6b75989
        cmp al, 0x2F
        je public_6b75989
        xor eax, eax
        jmp public_6b7598e
        public_6b75989 : nop
        mov eax, 1
        public_6b7598e : nop
        and eax, 0xFF
        lea edx, ds:[edx+eax+2]
        cmp byte ptr ds : [edx], 0x2E
        je public_6b75947
        public_6b7599c : nop
        lea eax, ss:[esp+0xC]
        cmp ecx, eax
        je public_6b759af
        mov al, byte ptr ds : [ecx-1]
        cmp al, 0x5C
        je public_6b759b3
        cmp al, 0x2F
        je public_6b759b3
        public_6b759af : nop
        mov byte ptr ds : [ecx], 0x5C
        inc ecx
        public_6b759b3 : nop
        lea eax, ss:[esp+0x110]
        sub eax, ecx
        cmp eax, 1
        jle public_6b75a0b
        push eax
        push edx
        push ecx
        public_6b759c4 : nop
        call dword ptr ds : [public_6b79074]
        add esp, 0xC
        mov byte ptr ss : [esp+0x10F], 0
        public_6b759d5 : nop
        lea ecx, ss:[esp+0xC]
        push ecx
        call dword ptr ds : [public_6b7903c]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_6b75a34
        mov eax, dword ptr ds : [edi+0x120]
        test eax, eax
        je public_6b75a28
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x78]
        mov dword ptr ds : [edi+0x11C], eax
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 0x108
        ret 8
        public_6b75a0b : nop
        mov byte ptr ds : [ecx], 0
        jmp public_6b759d5
        public_6b75a10 : nop
        mov dword ptr ds : [edi+0x11C], 0xA1
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x108
        ret 8
        public_6b75a28 : nop
        call dword ptr ds : [public_6b79038]
        mov dword ptr ds : [edi+0x11C], eax
        public_6b75a34 : nop
        mov eax, esi
        pop edi
        pop esi
        pop ebx
        add esp, 0x108
        ret 8
        public_6b75a42 : nop
        mov dword ptr ds : [edi+0x11C], 5
        pop edi
        pop esi
        xor eax, eax
        pop ebx
        add esp, 0x108
        ret 8
        UNREACHABLE_TRAP(0x6b758a0)
    }
}

#undef public_6b758e3
#undef public_6b758f3
#undef public_6b758fc
#undef public_6b75914
#undef public_6b7592b
#undef public_6b7592f
#undef public_6b7593f
#undef public_6b75942
#undef public_6b75947
#undef public_6b75961
#undef public_6b7597a
#undef public_6b75989
#undef public_6b7598e
#undef public_6b7599c
#undef public_6b759af
#undef public_6b759b3
#undef public_6b759c4
#undef public_6b759d5
#undef public_6b75a0b
#undef public_6b75a10
#undef public_6b75a28
#undef public_6b75a34
#undef public_6b75a42
