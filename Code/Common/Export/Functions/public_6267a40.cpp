#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6267a76 _public_6267a76
#define public_6267a78 _public_6267a78
#define public_6267a80 _public_6267a80
#define public_6267a84 _public_6267a84
#define public_6267a90 _public_6267a90
#define public_6267ab0 _public_6267ab0
#define public_6267aba _public_6267aba
#define public_6267ac4 _public_6267ac4
#define public_6267ad0 _public_6267ad0
#define public_6267adb _public_6267adb
#define public_6267ae7 _public_6267ae7
#define public_6267af2 _public_6267af2
#define public_6267afd _public_6267afd
#define public_6267b07 _public_6267b07
#define public_6267b39 _public_6267b39
#define public_6267b53 _public_6267b53
#define public_6267b72 _public_6267b72
#define public_6267b80 _public_6267b80
#define public_6267b8a _public_6267b8a
#define public_6267ba0 _public_6267ba0
#define public_6267baa _public_6267baa
#define public_6267bb8 _public_6267bb8
#define public_6267bd0 _public_6267bd0
#define public_6267bee _public_6267bee
#define public_6267c00 _public_6267c00
#define public_6267c0e _public_6267c0e
#define public_6267c18 _public_6267c18
#define public_6267c23 _public_6267c23
#define public_6267c34 _public_6267c34
#define public_6267c40 _public_6267c40
#define public_6267c4e _public_6267c4e
#define public_6267c51 _public_6267c51

PROC_DECLARE(0x6267a40, internal_6267a40, public_6267a40);
extern "C" NAKED register_t __cdecl internal_6267a40()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        sub edi, ebx
        sub ecx, eax
        sar edi, 1
        sar ecx, 1
        cmp ecx, edi
        jae public_6267b53
        mov edx, dword ptr ss : [ebp+4]
        test edx, edx
        je public_6267a76
        mov ecx, eax
        sub ecx, edx
        sar ecx, 1
        cmp edi, ecx
        jb public_6267a78
        public_6267a76 : nop
        mov ecx, edi
        public_6267a78 : nop
        test edx, edx
        jne public_6267a80
        xor eax, eax
        jmp public_6267a84
        public_6267a80 : nop
        sub eax, edx
        sar eax, 1
        public_6267a84 : nop
        add eax, ecx
        test eax, eax
        mov dword ptr ss : [esp+0x10], eax
        jge public_6267a90
        xor eax, eax
        public_6267a90 : nop
        lea edx, ds:[eax+eax]
        push edx
        call public_6391d9c
        mov ecx, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x1C]
        add esp, 4
        cmp ecx, esi
        mov ebx, eax
        je public_6267ac4
        lea esp, ss:[esp]
        public_6267ab0 : nop
        test eax, eax
        je public_6267aba
        mov dx, word ptr ds : [ecx]
        mov word ptr ds : [eax], dx
        public_6267aba : nop
        add ecx, 2
        add eax, 2
        cmp ecx, esi
        jne public_6267ab0
        public_6267ac4 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ss : [esp+0x20]
        je public_6267ae7
        sub ecx, eax
        public_6267ad0 : nop
        test eax, eax
        je public_6267adb
        mov dx, word ptr ds : [ecx+eax]
        mov word ptr ds : [eax], dx
        public_6267adb : nop
        add eax, 2
        lea edx, ds:[ecx+eax]
        cmp edx, dword ptr ss : [esp+0x20]
        jne public_6267ad0
        public_6267ae7 : nop
        mov edx, dword ptr ss : [ebp+8]
        cmp esi, edx
        je public_6267b07
        mov ecx, esi
        sub ecx, eax
        public_6267af2 : nop
        test eax, eax
        je public_6267afd
        mov si, word ptr ds : [ecx+eax]
        mov word ptr ds : [eax], si
        public_6267afd : nop
        add eax, 2
        lea esi, ds:[ecx+eax]
        cmp esi, edx
        jne public_6267af2
        public_6267b07 : nop
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[ebx+ecx*2]
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        test ecx, ecx
        mov dword ptr ss : [ebp+0xC], edx
        jne public_6267b39
        xor eax, eax
        mov eax, edi
        pop edi
        lea eax, ds:[ebx+eax*2]
        pop esi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6267b39 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, ecx
        sar eax, 1
        add eax, edi
        pop edi
        lea eax, ds:[ebx+eax*2]
        pop esi
        mov dword ptr ss : [ebp+4], ebx
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6267b53 : nop
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, eax
        sub ecx, esi
        sar ecx, 1
        cmp ecx, edi
        jae public_6267bee
        add edi, edi
        cmp esi, eax
        lea edx, ds:[edi+esi]
        je public_6267b8a
        mov ecx, edx
        sub ecx, edi
        public_6267b72 : nop
        test edx, edx
        je public_6267b80
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [edx], bx
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6267b80 : nop
        add ecx, 2
        add edx, 2
        cmp ecx, eax
        jne public_6267b72
        public_6267b8a : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, ecx
        sub edx, esi
        sar edx, 1
        lea eax, ds:[ebx+edx*2]
        cmp eax, dword ptr ss : [esp+0x20]
        je public_6267bb8
        lea esp, ss:[esp]
        public_6267ba0 : nop
        test ecx, ecx
        je public_6267baa
        mov dx, word ptr ds : [eax]
        mov word ptr ds : [ecx], dx
        public_6267baa : nop
        mov edx, dword ptr ss : [esp+0x20]
        add eax, 2
        add ecx, 2
        cmp eax, edx
        jne public_6267ba0
        public_6267bb8 : nop
        mov eax, dword ptr ss : [ebp+8]
        sub eax, esi
        sar eax, 1
        lea ecx, ds:[ebx+eax*2]
        cmp ebx, ecx
        mov eax, ebx
        je public_6267c4e
        sub esi, ebx
        mov edi, edi
        public_6267bd0 : nop
        mov dx, word ptr ds : [eax]
        mov word ptr ds : [esi+eax], dx
        add eax, 2
        cmp eax, ecx
        jne public_6267bd0
        mov eax, dword ptr ss : [ebp+8]
        add eax, edi
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        public_6267bee : nop
        test edi, edi
        jbe public_6267c51
        add edi, edi
        mov ecx, eax
        sub ecx, edi
        cmp ecx, eax
        mov edx, eax
        je public_6267c18
        mov edi, edi
        public_6267c00 : nop
        test edx, edx
        je public_6267c0e
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [edx], bx
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6267c0e : nop
        add ecx, 2
        add edx, 2
        cmp ecx, eax
        jne public_6267c00
        public_6267c18 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, ecx
        sub eax, edi
        cmp esi, eax
        je public_6267c34
        public_6267c23 : nop
        mov dx, word ptr ds : [eax-2]
        sub eax, 2
        sub ecx, 2
        cmp eax, esi
        mov word ptr ds : [ecx], dx
        jne public_6267c23
        public_6267c34 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ebx, ecx
        mov eax, ebx
        je public_6267c4e
        sub esi, ebx
        public_6267c40 : nop
        mov dx, word ptr ds : [eax]
        mov word ptr ds : [esi+eax], dx
        add eax, 2
        cmp eax, ecx
        jne public_6267c40
        public_6267c4e : nop
        add dword ptr ss : [ebp+8], edi
        public_6267c51 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6267a40)
    }
}

#undef public_6267a76
#undef public_6267a78
#undef public_6267a80
#undef public_6267a84
#undef public_6267a90
#undef public_6267ab0
#undef public_6267aba
#undef public_6267ac4
#undef public_6267ad0
#undef public_6267adb
#undef public_6267ae7
#undef public_6267af2
#undef public_6267afd
#undef public_6267b07
#undef public_6267b39
#undef public_6267b53
#undef public_6267b72
#undef public_6267b80
#undef public_6267b8a
#undef public_6267ba0
#undef public_6267baa
#undef public_6267bb8
#undef public_6267bd0
#undef public_6267bee
#undef public_6267c00
#undef public_6267c0e
#undef public_6267c18
#undef public_6267c23
#undef public_6267c34
#undef public_6267c40
#undef public_6267c4e
#undef public_6267c51
