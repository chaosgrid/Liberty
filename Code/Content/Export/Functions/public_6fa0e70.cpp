#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f46410);
CLANG_FORWARD_PROC_SYMBOL(public_6f7cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa0e70);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3900);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3cb0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3ce0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa4870);

#define public_6fa0e90 _public_6fa0e90
#define public_6fa0ea3 _public_6fa0ea3
#define public_6fa0ea6 _public_6fa0ea6
#define public_6fa0eaa _public_6fa0eaa
#define public_6fa0f09 _public_6fa0f09
#define public_6fa0f21 _public_6fa0f21
#define public_6fa0f2b _public_6fa0f2b
#define public_6fa0f2f _public_6fa0f2f
#define public_6fa0f40 _public_6fa0f40
#define public_6fa0f8d _public_6fa0f8d
#define public_6fa0f9c _public_6fa0f9c
#define public_6fa0fc3 _public_6fa0fc3
#define public_6fa0ff0 _public_6fa0ff0
#define public_6fa0ffe _public_6fa0ffe
#define public_6fa1023 _public_6fa1023
#define public_6fa102f _public_6fa102f
#define public_6fa104e _public_6fa104e
#define public_6fa1069 _public_6fa1069
#define public_6fa1070 _public_6fa1070
#define public_6fa1093 _public_6fa1093

PROC_DECLARE(0x6fa0e70, internal_6fa0e70, public_6fa0e70);
extern "C" NAKED register_t __cdecl internal_6fa0e70()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6fa0eaa
        lea esp, ss:[esp]
        public_6fa0e90 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_6fa0ea3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6fa0ea6
        public_6fa0ea3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6fa0ea6 : nop
        cmp ebp, edx
        jne public_6fa0e90
        public_6fa0eaa : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6fa104e
        push 0
        push esi
        mov ecx, edi
        call public_6fa3cb0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6fa4870
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6fa0f09
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6fa0f09
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6fa0f09
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6fa0f2f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6fa0f2f
        public_6fa0f09 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6fa0f21
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6fa0f2b
        public_6fa0f21 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6fa0f2b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6fa0f2b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6fa0f2f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6fa102f
        lea ecx, ds:[ecx]
        public_6fa0f40 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x124]
        test cl, cl
        jne public_6fa102f
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6fa0fc3
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x124]
        test dl, dl
        jne public_6fa0f8d
        mov byte ptr ds : [eax+0x124], 1
        mov byte ptr ds : [ecx+0x124], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x124], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6fa1023
        public_6fa0f8d : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6fa0f9c
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f7cc30
        public_6fa0f9c : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x124], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x124], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6f46410
        jmp public_6fa1023
        public_6fa0fc3 : nop
        mov dl, byte ptr ds : [ecx+0x124]
        test dl, dl
        jne public_6fa0ff0
        mov byte ptr ds : [eax+0x124], 1
        mov byte ptr ds : [ecx+0x124], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x124], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6fa1023
        public_6fa0ff0 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6fa0ffe
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6f46410
        public_6fa0ffe : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x124], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x124], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6f7cc30
        public_6fa1023 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6fa0f40
        public_6fa102f : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x124], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6fa104e : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6fa1069
        cmp esi, dword ptr ds : [ecx]
        je public_6fa1070
        lea ecx, ss:[esp+0x10]
        call public_6fa3ce0
        mov edx, dword ptr ss : [esp+0x10]
        public_6fa1069 : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_6fa1093
        public_6fa1070 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6fa3900
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6fa1093 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6fa0e70)
    }
}

#undef public_6fa0e90
#undef public_6fa0ea3
#undef public_6fa0ea6
#undef public_6fa0eaa
#undef public_6fa0f09
#undef public_6fa0f21
#undef public_6fa0f2b
#undef public_6fa0f2f
#undef public_6fa0f40
#undef public_6fa0f8d
#undef public_6fa0f9c
#undef public_6fa0fc3
#undef public_6fa0ff0
#undef public_6fa0ffe
#undef public_6fa1023
#undef public_6fa102f
#undef public_6fa104e
#undef public_6fa1069
#undef public_6fa1070
#undef public_6fa1093
