#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d39440);

#define public_6d3c666 _public_6d3c666
#define public_6d3c692 _public_6d3c692
#define public_6d3c6a3 _public_6d3c6a3
#define public_6d3c6d6 _public_6d3c6d6
#define public_6d3c6ee _public_6d3c6ee
#define public_6d3c700 _public_6d3c700
#define public_6d3c722 _public_6d3c722
#define public_6d3c735 _public_6d3c735
#define public_6d3c743 _public_6d3c743
#define public_6d3c747 _public_6d3c747
#define public_6d3c74b _public_6d3c74b
#define public_6d3c74f _public_6d3c74f
#define public_6d3c760 _public_6d3c760
#define public_6d3c777 _public_6d3c777
#define public_6d3c78e _public_6d3c78e
#define public_6d3c79a _public_6d3c79a
#define public_6d3c7a6 _public_6d3c7a6

PROC_DECLARE(0x6d3c620, internal_6d3c620, public_6d3c620);
extern "C" NAKED register_t __cdecl internal_6d3c620()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x10]
        push esi
        xor ecx, ecx
        cmp eax, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x14], ebp
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x24], eax
        je public_6d3c74f
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ebx+0xC]
        mov ecx, dword ptr ds : [ebx+0x18]
        mov esi, edi
        mov edi, dword ptr ds : [ebx+8]
        cmp edi, eax
        je public_6d3c6a3
        sub ecx, edi
        mov dword ptr ss : [esp+0x1C], ecx
        public_6d3c666 : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push esi
        push eax
        lea ecx, ds:[ebx+0x14]
        call public_6d39440
        test al, al
        jne public_6d3c747
        mov ax, word ptr ds : [esi]
        cmp word ptr ds : [edi], ax
        je public_6d3c692
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp word ptr ds : [edi+ecx], ax
        jne public_6d3c747
        public_6d3c692 : nop
        mov eax, dword ptr ds : [ebx+0xC]
        add edi, 2
        add esi, 2
        cmp edi, eax
        jne public_6d3c666
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d3c6a3 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        mov eax, esi
        sub eax, ecx
        sar eax, 1
        neg eax
        mov edi, esi
        mov dword ptr ss : [esp+0x18], eax
        jne public_6d3c700
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x2C]
        je public_6d3c6d6
        mov edx, dword ptr ds : [ecx]
        push esi
        push eax
        call dword ptr ds : [edx+4]
        pop edi
        pop esi
        pop ebp
        movzx eax, al
        pop ebx
        add esp, 0x18
        ret 8
        public_6d3c6d6 : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3c6ee
        cmp dword ptr ds : [eax+8], esi
        jne public_6d3c6ee
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x18
        ret 8
        public_6d3c6ee : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x18
        ret 8
        lea ecx, ds:[ecx]
        public_6d3c700 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x24]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jae public_6d3c74f
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [ebx+0xC]
        cmp eax, esi
        mov edx, edi
        je public_6d3c743
        mov ebp, dword ptr ds : [ebx+0x18]
        sub ebp, eax
        public_6d3c722 : nop
        mov cx, word ptr ds : [edx]
        test cx, cx
        je public_6d3c74b
        cmp word ptr ds : [eax], cx
        je public_6d3c735
        cmp word ptr ds : [eax+ebp], cx
        jne public_6d3c74b
        public_6d3c735 : nop
        add eax, 2
        add edx, 2
        cmp eax, esi
        jne public_6d3c722
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d3c743 : nop
        mov edi, edx
        jmp public_6d3c700
        public_6d3c747 : nop
        mov edi, dword ptr ss : [esp+0x30]
        public_6d3c74b : nop
        mov ebp, dword ptr ss : [esp+0x14]
        public_6d3c74f : nop
        mov ecx, dword ptr ss : [esp+0x10]
        cmp dword ptr ss : [ebp+0xC], ecx
        ja public_6d3c7a6
        mov esi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_6d3c760 : nop
        mov ecx, dword ptr ss : [ebp+4]
        test ecx, ecx
        mov eax, dword ptr ss : [esp+0x2C]
        je public_6d3c78e
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d3c777 : nop
        jne public_6d3c79a
        mov ecx, dword ptr ss : [ebp+0xC]
        mov eax, dword ptr ss : [esp+0x10]
        cmp ecx, eax
        je public_6d3c7a6
        dec eax
        mov dword ptr ss : [esp+0x10], eax
        lea edi, ds:[edi+esi*2]
        jmp public_6d3c760
        public_6d3c78e : nop
        mov cl, byte ptr ds : [eax+0x1C]
        test cl, cl
        je public_6d3c79a
        cmp dword ptr ds : [eax+8], edi
        jmp public_6d3c777
        public_6d3c79a : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x18
        ret 8
        public_6d3c7a6 : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x18
        ret 8
        UNREACHABLE_TRAP(0x6d3c620)
    }
}

#undef public_6d3c666
#undef public_6d3c692
#undef public_6d3c6a3
#undef public_6d3c6d6
#undef public_6d3c6ee
#undef public_6d3c700
#undef public_6d3c722
#undef public_6d3c735
#undef public_6d3c743
#undef public_6d3c747
#undef public_6d3c74b
#undef public_6d3c74f
#undef public_6d3c760
#undef public_6d3c777
#undef public_6d3c78e
#undef public_6d3c79a
#undef public_6d3c7a6
