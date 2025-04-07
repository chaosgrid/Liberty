#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);

#define public_6d34305 _public_6d34305
#define public_6d3433a _public_6d3433a
#define public_6d34352 _public_6d34352
#define public_6d3438a _public_6d3438a
#define public_6d3439a _public_6d3439a
#define public_6d343b6 _public_6d343b6
#define public_6d343d0 _public_6d343d0
#define public_6d343d5 _public_6d343d5
#define public_6d343ff _public_6d343ff
#define public_6d34412 _public_6d34412
#define public_6d3441a _public_6d3441a
#define public_6d34431 _public_6d34431
#define public_6d34433 _public_6d34433
#define public_6d34444 _public_6d34444

PROC_DECLARE(0x6d342a0, internal_6d342a0, public_6d342a0);
extern "C" NAKED register_t __cdecl internal_6d342a0()
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
        je public_6d3441a
        mov eax, dword ptr ds : [eax+0xC]
        push edx
        mov ecx, eax
        call public_6d3e6f0
        test al, al
        je public_6d3441a
        mov ebx, dword ptr ds : [edi+0x10]
        add ebx, 2
        mov eax, ebx
        sub eax, esi
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x10], ebx
        jne public_6d3433a
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d34305 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov esi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, esi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d34431
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d34433
        public_6d3433a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d34412
        cmp eax, 1
        mov dword ptr ss : [esp+0x1C], 1
        jbe public_6d34305
        public_6d34352 : nop
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], edx
        mov ecx, dword ptr ds : [edi+0x10]
        xor esi, esi
        mov si, word ptr ds : [ecx]
        test si, si
        je public_6d343ff
        cmp si, 0xFF
        mov ebx, dword ptr ds : [eax+0xC]
        ja public_6d3439a
        push esi
        lea ecx, ds:[ebx+8]
        call public_6d2b9c0
        mov ebp, dword ptr ss : [esp+0x10]
        movzx eax, al
        test eax, eax
        jne public_6d343d0
        public_6d3438a : nop
        push esi
        mov ecx, ebx
        call public_6d3eb00
        test al, al
        jne public_6d343d0
        xor eax, eax
        jmp public_6d343d5
        public_6d3439a : nop
        lea ecx, ds:[ebx+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d343b6
        push esi
        mov ecx, ebx
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d343d0
        public_6d343b6 : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x28]
        test ax, ax
        je public_6d3438a
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d3438a
        public_6d343d0 : nop
        mov eax, 1
        public_6d343d5 : nop
        movzx edx, byte ptr ds : [ebx+4]
        cmp edx, eax
        je public_6d343ff
        mov esi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ss : [esp+0x1C]
        add esi, 2
        mov dword ptr ds : [edi+0x10], esi
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jb public_6d34352
        jmp public_6d34305
        public_6d343ff : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x10], eax
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d34412 : nop
        mov dword ptr ds : [edi+0x10], esi
        jmp public_6d34305
        public_6d3441a : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d34305
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        public_6d34431 : nop
        mov eax, edx
        public_6d34433 : nop
        test eax, eax
        je public_6d34444
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d34444 : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d342a0)
    }
}

#undef public_6d34305
#undef public_6d3433a
#undef public_6d34352
#undef public_6d3438a
#undef public_6d3439a
#undef public_6d343b6
#undef public_6d343d0
#undef public_6d343d5
#undef public_6d343ff
#undef public_6d34412
#undef public_6d3441a
#undef public_6d34431
#undef public_6d34433
#undef public_6d34444
