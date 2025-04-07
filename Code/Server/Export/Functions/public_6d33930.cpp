#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e580);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ea70);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb90);

#define public_6d33995 _public_6d33995
#define public_6d339ca _public_6d339ca
#define public_6d339e2 _public_6d339e2
#define public_6d33a1a _public_6d33a1a
#define public_6d33a2a _public_6d33a2a
#define public_6d33a46 _public_6d33a46
#define public_6d33a60 _public_6d33a60
#define public_6d33a65 _public_6d33a65
#define public_6d33a8f _public_6d33a8f
#define public_6d33aa2 _public_6d33aa2
#define public_6d33aaa _public_6d33aaa
#define public_6d33ac1 _public_6d33ac1
#define public_6d33ac3 _public_6d33ac3
#define public_6d33ad4 _public_6d33ad4

PROC_DECLARE(0x6d33930, internal_6d33930, public_6d33930);
extern "C" NAKED register_t __cdecl internal_6d33930()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ds : [edi+0x10]
        mov edx, esi
        mov dword ptr ds : [edi+0x18], ecx
        movzx edx, word ptr ds : [edx]
        test dx, dx
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], esi
        mov dword ptr ss : [esp+0x1C], 0
        je public_6d33aaa
        mov eax, dword ptr ds : [eax+0xC]
        push edx
        mov ecx, eax
        call public_6d3e580
        test al, al
        je public_6d33aaa
        mov ebx, dword ptr ds : [edi+0x10]
        add ebx, 2
        mov eax, ebx
        sub eax, esi
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x10], ebx
        jne public_6d339ca
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d33995 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov esi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, esi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d33ac1
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d33ac3
        public_6d339ca : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d33aa2
        cmp eax, 1
        mov dword ptr ss : [esp+0x1C], 1
        jbe public_6d33995
        public_6d339e2 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], edx
        mov ecx, dword ptr ds : [edi+0x10]
        xor esi, esi
        mov si, word ptr ds : [ecx]
        test si, si
        je public_6d33a8f
        cmp si, 0xFF
        mov ebx, dword ptr ds : [eax+0xC]
        ja public_6d33a2a
        push esi
        lea ecx, ds:[ebx+8]
        call public_6d2b9c0
        mov ebp, dword ptr ss : [esp+0x10]
        movzx eax, al
        test eax, eax
        jne public_6d33a60
        public_6d33a1a : nop
        push esi
        mov ecx, ebx
        call public_6d3ea70
        test al, al
        jne public_6d33a60
        xor eax, eax
        jmp public_6d33a65
        public_6d33a2a : nop
        lea ecx, ds:[ebx+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d33a46
        push esi
        mov ecx, ebx
        call public_6d3eb90
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d33a60
        public_6d33a46 : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x28]
        test ax, ax
        je public_6d33a1a
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d33a1a
        public_6d33a60 : nop
        mov eax, 1
        public_6d33a65 : nop
        movzx edx, byte ptr ds : [ebx+4]
        cmp edx, eax
        je public_6d33a8f
        mov esi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 2
        mov dword ptr ds : [edi+0x10], esi
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jb public_6d339e2
        jmp public_6d33995
        public_6d33a8f : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x10], eax
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d33aa2 : nop
        mov dword ptr ds : [edi+0x10], esi
        jmp public_6d33995
        public_6d33aaa : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d33995
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d33ac1 : nop
        mov eax, edx
        public_6d33ac3 : nop
        test eax, eax
        je public_6d33ad4
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d33ad4 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d33930)
    }
}

#undef public_6d33995
#undef public_6d339ca
#undef public_6d339e2
#undef public_6d33a1a
#undef public_6d33a2a
#undef public_6d33a46
#undef public_6d33a60
#undef public_6d33a65
#undef public_6d33a8f
#undef public_6d33aa2
#undef public_6d33aaa
#undef public_6d33ac1
#undef public_6d33ac3
#undef public_6d33ad4
