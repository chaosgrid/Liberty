#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e6f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);

#define public_6d37963 _public_6d37963
#define public_6d37967 _public_6d37967
#define public_6d379a5 _public_6d379a5
#define public_6d379e5 _public_6d379e5
#define public_6d379f5 _public_6d379f5
#define public_6d37a11 _public_6d37a11
#define public_6d37a2b _public_6d37a2b
#define public_6d37a30 _public_6d37a30
#define public_6d37a4e _public_6d37a4e
#define public_6d37a50 _public_6d37a50
#define public_6d37a5d _public_6d37a5d
#define public_6d37a6f _public_6d37a6f

PROC_DECLARE(0x6d37900, internal_6d37900, public_6d37900);
extern "C" NAKED register_t __cdecl internal_6d37900()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ebx+0x10]
        push ebp
        mov ebp, ecx
        push esi
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ss : [ebp+0x10]
        push edi
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        je public_6d37967
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x18], ecx
        mov edx, dword ptr ds : [ebx+0x10]
        movzx edx, word ptr ds : [edx]
        test dx, dx
        je public_6d37967
        mov eax, dword ptr ds : [eax+8]
        push edx
        mov ecx, eax
        call public_6d3e6f0
        test al, al
        je public_6d37967
        mov esi, dword ptr ds : [ebx+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        add esi, 2
        mov eax, esi
        sub eax, edx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [ebx+0x10], esi
        jne public_6d379a5
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d37963 : nop
        mov edi, dword ptr ss : [esp+0x1C]
        public_6d37967 : nop
        cmp edi, dword ptr ss : [ebp+0xC]
        jb public_6d37a6f
        mov ecx, dword ptr ds : [ebx+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov esi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, esi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d37a4e
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d37a50
        public_6d379a5 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        inc edi
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], edi
        jae public_6d37967
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ebx+0x18], edx
        mov ecx, dword ptr ds : [ebx+0x10]
        xor esi, esi
        mov si, word ptr ds : [ecx]
        test si, si
        je public_6d37967
        cmp si, 0xFF
        mov edi, dword ptr ds : [eax+8]
        ja public_6d379f5
        push esi
        lea ecx, ds:[edi+8]
        call public_6d2b9c0
        mov ebp, dword ptr ss : [esp+0x10]
        movzx eax, al
        test eax, eax
        jne public_6d37a2b
        public_6d379e5 : nop
        push esi
        mov ecx, edi
        call public_6d3eb00
        test al, al
        jne public_6d37a2b
        xor eax, eax
        jmp public_6d37a30
        public_6d379f5 : nop
        lea ecx, ds:[edi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d37a11
        push esi
        mov ecx, edi
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d37a2b
        public_6d37a11 : nop
        xor eax, eax
        mov ax, word ptr ds : [edi+0x28]
        test ax, ax
        je public_6d379e5
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d379e5
        public_6d37a2b : nop
        mov eax, 1
        public_6d37a30 : nop
        movzx edx, byte ptr ds : [edi+4]
        cmp edx, eax
        je public_6d37963
        mov eax, dword ptr ds : [ebx+0x10]
        mov edi, dword ptr ss : [esp+0x1C]
        add eax, 2
        mov dword ptr ds : [ebx+0x10], eax
        jmp public_6d379a5
        public_6d37a4e : nop
        mov eax, edx
        public_6d37a50 : nop
        test eax, eax
        je public_6d37a5d
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edi
        public_6d37a5d : nop
        mov edx, dword ptr ss : [ebp+4]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x18], edx
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d37a6f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x10], eax
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d37900)
    }
}

#undef public_6d37963
#undef public_6d37967
#undef public_6d379a5
#undef public_6d379e5
#undef public_6d379f5
#undef public_6d37a11
#undef public_6d37a2b
#undef public_6d37a30
#undef public_6d37a4e
#undef public_6d37a50
#undef public_6d37a5d
#undef public_6d37a6f
