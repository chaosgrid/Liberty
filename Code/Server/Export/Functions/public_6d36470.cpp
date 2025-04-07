#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d31890);
CLANG_FORWARD_PROC_SYMBOL(public_6d3eb00);
CLANG_FORWARD_PROC_SYMBOL(public_6d3ebf0);

#define public_6d364d1 _public_6d364d1
#define public_6d364e1 _public_6d364e1
#define public_6d364fd _public_6d364fd
#define public_6d36517 _public_6d36517
#define public_6d3651c _public_6d3651c
#define public_6d36543 _public_6d36543
#define public_6d36585 _public_6d36585
#define public_6d365c6 _public_6d365c6
#define public_6d365de _public_6d365de
#define public_6d365ee _public_6d365ee
#define public_6d3660a _public_6d3660a
#define public_6d36624 _public_6d36624
#define public_6d36629 _public_6d36629
#define public_6d3663e _public_6d3663e
#define public_6d36640 _public_6d36640
#define public_6d3664d _public_6d3664d
#define public_6d3665f _public_6d3665f

PROC_DECLARE(0x6d36470, internal_6d36470, public_6d36470);
extern "C" NAKED register_t __cdecl internal_6d36470()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi+0x10]
        mov ebp, ecx
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ss : [ebp+0x10]
        test eax, eax
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x1C], 0
        je public_6d36543
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [edi+0x18], ecx
        mov ecx, dword ptr ds : [edi+0x10]
        cmp edx, ecx
        je public_6d36543
        mov ebx, dword ptr ds : [eax+8]
        xor esi, esi
        mov si, word ptr ds : [ecx]
        cmp si, 0xFF
        ja public_6d364e1
        push esi
        lea ecx, ds:[ebx+8]
        call public_6d2b9c0
        movzx eax, al
        test eax, eax
        jne public_6d36517
        public_6d364d1 : nop
        push esi
        mov ecx, ebx
        call public_6d3eb00
        test al, al
        jne public_6d36517
        xor eax, eax
        jmp public_6d3651c
        public_6d364e1 : nop
        lea ecx, ds:[ebx+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d364fd
        push esi
        mov ecx, ebx
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d36517
        public_6d364fd : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0x28]
        test ax, ax
        je public_6d364d1
        push eax
        push esi
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d364d1
        public_6d36517 : nop
        mov eax, 1
        public_6d3651c : nop
        movzx edx, byte ptr ds : [ebx+4]
        cmp edx, eax
        je public_6d36543
        mov esi, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        add esi, 2
        mov eax, esi
        sub eax, edx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [edi+0x10], esi
        jne public_6d36585
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d36543 : nop
        mov esi, dword ptr ss : [esp+0x1C]
        cmp esi, dword ptr ss : [ebp+0xC]
        jb public_6d3665f
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov ebx, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, ebx
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3663e
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d36640
        public_6d36585 : nop
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [ebp+0x10]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x1C], eax
        jae public_6d36543
        mov eax, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edi+0x18], edx
        mov ecx, dword ptr ds : [edi+0x10]
        cmp dword ptr ds : [edi+0xC], ecx
        je public_6d36543
        mov bx, word ptr ds : [ecx]
        cmp bx, 0xFF
        mov esi, dword ptr ds : [eax+8]
        ja public_6d365ee
        xor eax, eax
        mov al, bl
        mov ecx, eax
        and ecx, 0x8000001F
        jns public_6d365c6
        dec ecx
        or ecx, 0xFFFFFFE0
        inc ecx
        public_6d365c6 : nop
        shr eax, 5
        mov edx, 1
        shl edx, cl
        test dword ptr ds : [esi+eax*4+8], edx
        setne al
        movzx eax, al
        test eax, eax
        jne public_6d36624
        public_6d365de : nop
        push ebx
        mov ecx, esi
        call public_6d3eb00
        test al, al
        jne public_6d36624
        xor eax, eax
        jmp public_6d36629
        public_6d365ee : nop
        lea ecx, ds:[esi+0x2C]
        call public_6d31890
        test eax, eax
        je public_6d3660a
        push ebx
        mov ecx, esi
        call public_6d3ebf0
        test al, al
        mov ebp, dword ptr ss : [esp+0x10]
        jne public_6d36624
        public_6d3660a : nop
        xor eax, eax
        mov ax, word ptr ds : [esi+0x28]
        test ax, ax
        je public_6d365de
        push eax
        push ebx
        call dword ptr ds : [public_6d64bb0]
        add esp, 8
        test eax, eax
        je public_6d365de
        public_6d36624 : nop
        mov eax, 1
        public_6d36629 : nop
        movzx ecx, byte ptr ds : [esi+4]
        cmp ecx, eax
        je public_6d36543
        add dword ptr ds : [edi+0x10], 2
        jmp public_6d36585
        public_6d3663e : nop
        mov eax, edx
        public_6d36640 : nop
        test eax, eax
        je public_6d3664d
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax], edx
        mov dword ptr ds : [eax+4], esi
        public_6d3664d : nop
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ds : [edi+0x18], eax
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 8
        ret 4
        public_6d3665f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [edi+0x10], ecx
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6d36470)
    }
}

#undef public_6d364d1
#undef public_6d364e1
#undef public_6d364fd
#undef public_6d36517
#undef public_6d3651c
#undef public_6d36543
#undef public_6d36585
#undef public_6d365c6
#undef public_6d365de
#undef public_6d365ee
#undef public_6d3660a
#undef public_6d36624
#undef public_6d36629
#undef public_6d3663e
#undef public_6d36640
#undef public_6d3664d
#undef public_6d3665f
