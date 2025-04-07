#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b45ae9 _public_6b45ae9
#define public_6b45b01 _public_6b45b01
#define public_6b45b11 _public_6b45b11
#define public_6b45b38 _public_6b45b38
#define public_6b45b48 _public_6b45b48
#define public_6b45b54 _public_6b45b54
#define public_6b45b6d _public_6b45b6d
#define public_6b45b7d _public_6b45b7d
#define public_6b45b89 _public_6b45b89
#define public_6b45ba2 _public_6b45ba2
#define public_6b45bb2 _public_6b45bb2
#define public_6b45bbe _public_6b45bbe
#define public_6b45bd7 _public_6b45bd7
#define public_6b45be7 _public_6b45be7
#define public_6b45c06 _public_6b45c06
#define public_6b45c16 _public_6b45c16
#define public_6b45c22 _public_6b45c22
#define public_6b45c41 _public_6b45c41
#define public_6b45c51 _public_6b45c51
#define public_6b45c72 _public_6b45c72
#define public_6b45c82 _public_6b45c82
#define public_6b45c91 _public_6b45c91
#define public_6b45cb5 _public_6b45cb5
#define public_6b45cce _public_6b45cce
#define public_6b45cde _public_6b45cde
#define public_6b45cec _public_6b45cec
#define public_6b45d05 _public_6b45d05
#define public_6b45d15 _public_6b45d15
#define public_6b45d25 _public_6b45d25
#define public_6b45d3f _public_6b45d3f
#define public_6b45d4f _public_6b45d4f
#define public_6b45d5d _public_6b45d5d
#define public_6b45d74 _public_6b45d74
#define public_6b45d84 _public_6b45d84
#define public_6b45da0 _public_6b45da0
#define public_6b45db6 _public_6b45db6
#define public_6b45dcd _public_6b45dcd
#define public_6b45de4 _public_6b45de4
#define public_6b45ded _public_6b45ded
#define public_6b45e1e _public_6b45e1e

PROC_DECLARE(0x6b45aa0, internal_6b45aa0, public_6b45aa0);
extern "C" NAKED register_t __cdecl internal_6b45aa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0xC]
        lea ebx, ss:[ebp+0x10]
        push esi
        push edi
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push ebx
        push eax
        lea edi, ss:[ebp+0x18]
        push edi
        mov ecx, ebp
        call public_6b4e740
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b45ae9
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6b45ae9 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov esi, 0x16
        jbe public_6b45b01
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45b01 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b45b11
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45b11 : nop
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ss : [ebp+0x20]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [edi], eax
        test byte ptr ss : [ebp+0x20], 8
        je public_6b45b54
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b45b38
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45b38 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b45b48
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45b48 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6b45b54 : nop
        test byte ptr ss : [ebp+0x20], 4
        je public_6b45b89
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b45b6d
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45b6d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b45b7d
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45b7d : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+0x24]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6b45b89 : nop
        test byte ptr ss : [ebp+0x20], 1
        je public_6b45bbe
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b45ba2
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45ba2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b45bb2
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45bb2 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6b45bbe : nop
        test byte ptr ss : [ebp+0x20], 2
        je public_6b45c22
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b45bd7
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45bd7 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b45be7
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45be7 : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+0x38]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b45c06
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45c06 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b45c16
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45c16 : nop
        mov eax, dword ptr ds : [edi]
        mov edx, dword ptr ss : [ebp+0x3C]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ds : [edi], eax
        public_6b45c22 : nop
        test byte ptr ss : [ebp+0x20], 0x10
        je public_6b45cb5
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov cx, word ptr ss : [ebp+0x48]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6b45c41
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45c41 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b45c51
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45c51 : nop
        mov eax, dword ptr ds : [edi]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [ebx+4]
        xor eax, eax
        mov ax, cx
        mov ecx, dword ptr ds : [ebx]
        shl eax, 1
        add ecx, eax
        cmp ecx, edx
        mov dword ptr ds : [ebx], ecx
        jbe public_6b45c72
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45c72 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        je public_6b45c82
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45c82 : nop
        mov ecx, dword ptr ss : [ebp+0x44]
        test ecx, ecx
        mov esi, dword ptr ds : [public_6b6b138]
        je public_6b45c91
        mov esi, ecx
        public_6b45c91 : nop
        mov edi, dword ptr ds : [edi]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        mov esi, 0x16
        public_6b45cb5 : nop
        test byte ptr ss : [ebp+0x20], 0x20
        je public_6b45cec
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b45cce
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45cce : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b45cde
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45cde : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x54]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6b45cec : nop
        test byte ptr ss : [ebp+0x20], 0x40
        je public_6b45d25
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b45d05
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45d05 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b45d15
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45d15 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ss : [ebp+0x2C]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        public_6b45d25 : nop
        mov al, byte ptr ss : [ebp+0x20]
        test al, al
        jns public_6b45d5d
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b45d3f
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45d3f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b45d4f
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45d4f : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [eax], edx
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        public_6b45d5d : nop
        test byte ptr ss : [ebp+0x21], 1
        je public_6b45dcd
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b45d74
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45d74 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6b45d84
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45d84 : nop
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ss : [ebp+0x68]
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [ebp+0x60]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [ebp+0x5C]
        cmp eax, ecx
        je public_6b45dcd
        lea ebx, ds:[ebx]
        public_6b45da0 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        add eax, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6b45db6
        mov dword ptr ds : [ebx+0xC], esi
        public_6b45db6 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6b45de4
        mov ecx, dword ptr ss : [ebp+0x18]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp+0x18], ecx
        cmp eax, dword ptr ss : [ebp+0x60]
        jne public_6b45da0
        public_6b45dcd : nop
        mov edx, dword ptr ss : [ebp+0x14]
        push ebx
        push edx
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6b4e790
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6b45ded
        public_6b45de4 : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_6b45ded : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        call public_6b4ecd0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6b45e1e
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b45e1e : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6b45aa0)
    }
}

#undef public_6b45ae9
#undef public_6b45b01
#undef public_6b45b11
#undef public_6b45b38
#undef public_6b45b48
#undef public_6b45b54
#undef public_6b45b6d
#undef public_6b45b7d
#undef public_6b45b89
#undef public_6b45ba2
#undef public_6b45bb2
#undef public_6b45bbe
#undef public_6b45bd7
#undef public_6b45be7
#undef public_6b45c06
#undef public_6b45c16
#undef public_6b45c22
#undef public_6b45c41
#undef public_6b45c51
#undef public_6b45c72
#undef public_6b45c82
#undef public_6b45c91
#undef public_6b45cb5
#undef public_6b45cce
#undef public_6b45cde
#undef public_6b45cec
#undef public_6b45d05
#undef public_6b45d15
#undef public_6b45d25
#undef public_6b45d3f
#undef public_6b45d4f
#undef public_6b45d5d
#undef public_6b45d74
#undef public_6b45d84
#undef public_6b45da0
#undef public_6b45db6
#undef public_6b45dcd
#undef public_6b45de4
#undef public_6b45ded
#undef public_6b45e1e
