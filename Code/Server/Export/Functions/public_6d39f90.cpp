#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f540);
CLANG_FORWARD_PROC_SYMBOL(public_6d39440);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e550);

#define public_6d39fe7 _public_6d39fe7
#define public_6d39ff0 _public_6d39ff0
#define public_6d3a034 _public_6d3a034
#define public_6d3a04d _public_6d3a04d
#define public_6d3a082 _public_6d3a082
#define public_6d3a0a0 _public_6d3a0a0
#define public_6d3a0d3 _public_6d3a0d3
#define public_6d3a0d7 _public_6d3a0d7
#define public_6d3a113 _public_6d3a113
#define public_6d3a12f _public_6d3a12f
#define public_6d3a142 _public_6d3a142
#define public_6d3a14a _public_6d3a14a
#define public_6d3a14e _public_6d3a14e
#define public_6d3a165 _public_6d3a165
#define public_6d3a167 _public_6d3a167
#define public_6d3a178 _public_6d3a178

PROC_DECLARE(0x6d39f90, internal_6d39f90, public_6d39f90);
extern "C" NAKED register_t __cdecl internal_6d39f90()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        push esi
        mov esi, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0x18], edx
        mov edx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [ecx+8]
        shl eax, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d3a14e
        mov edi, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp edi, eax
        mov ebx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d3a034
        jmp public_6d39ff0
        public_6d39fe7 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        nop 
        lea esp, ss:[esp]
        public_6d39ff0 : nop
        push ebx
        push esi
        add ecx, 0xD
        call public_6d39440
        test al, al
        jne public_6d3a14a
        mov edx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov ax, word ptr ds : [edi]
        xor ecx, ecx
        mov cx, word ptr ds : [ebx]
        push eax
        push ecx
        lea ecx, ds:[edx+0xC]
        call public_6d3e550
        test al, al
        jne public_6d3a14a
        mov eax, dword ptr ss : [esp+0x1C]
        add edi, 2
        add ebx, 2
        cmp edi, eax
        jne public_6d39fe7
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d3a034 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, ebx
        sub eax, ecx
        test eax, 0xFFFFFFFE
        mov dword ptr ds : [esi+0x10], ebx
        jne public_6d3a082
        mov ecx, dword ptr ss : [ebp+0x10]
        mov dword ptr ss : [esp+0x24], ecx
        public_6d3a04d : nop
        mov ecx, dword ptr ds : [esi+0x14]
        mov edx, dword ptr ds : [ecx+0x1008]
        mov edi, dword ptr ds : [ecx+0x100C]
        lea eax, ds:[edx+8]
        cmp eax, edi
        mov dword ptr ds : [ecx+0x1008], eax
        jbe public_6d3a165
        add eax, 0xFFFFFFF8
        push 8
        mov dword ptr ds : [ecx+0x1008], eax
        call public_6d1f540
        jmp public_6d3a167
        public_6d3a082 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d3a142
        cmp eax, 1
        mov dword ptr ss : [esp+0x24], 1
        jbe public_6d3a04d
        lea ebx, ds:[ebx]
        public_6d3a0a0 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [esi+0x18], edx
        mov eax, dword ptr ds : [ecx+8]
        mov edx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [edx+4]
        shl eax, 5
        add eax, edx
        mov dl, byte ptr ds : [eax+8]
        test dl, dl
        mov dword ptr ss : [esp+0x18], ecx
        je public_6d3a12f
        mov ebx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        cmp ebx, eax
        mov edi, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d3a113
        jmp public_6d3a0d7
        public_6d3a0d3 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        public_6d3a0d7 : nop
        push edi
        push esi
        add ecx, 0xD
        call public_6d39440
        test al, al
        jne public_6d3a12f
        mov edx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov ax, word ptr ds : [ebx]
        xor ecx, ecx
        mov cx, word ptr ds : [edi]
        push eax
        push ecx
        lea ecx, ds:[edx+0xC]
        call public_6d3e550
        test al, al
        jne public_6d3a12f
        mov eax, dword ptr ss : [esp+0x1C]
        add ebx, 2
        add edi, 2
        cmp ebx, eax
        jne public_6d3a0d3
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d3a113 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x10], edi
        mov ecx, dword ptr ss : [ebp+0xC]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x24], eax
        jb public_6d3a0a0
        jmp public_6d3a04d
        public_6d3a12f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x10], eax
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        public_6d3a142 : nop
        mov dword ptr ds : [esi+0x10], ecx
        jmp public_6d3a04d
        public_6d3a14a : nop
        mov ebp, dword ptr ss : [esp+0x10]
        public_6d3a14e : nop
        mov eax, dword ptr ss : [ebp+0xC]
        test eax, eax
        je public_6d3a04d
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x10
        ret 4
        public_6d3a165 : nop
        mov eax, edx
        public_6d3a167 : nop
        test eax, eax
        je public_6d3a178
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        public_6d3a178 : nop
        mov eax, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ds : [esi+0x18], eax
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x6d39f90)
    }
}

#undef public_6d39fe7
#undef public_6d39ff0
#undef public_6d3a034
#undef public_6d3a04d
#undef public_6d3a082
#undef public_6d3a0a0
#undef public_6d3a0d3
#undef public_6d3a0d7
#undef public_6d3a113
#undef public_6d3a12f
#undef public_6d3a142
#undef public_6d3a14a
#undef public_6d3a14e
#undef public_6d3a165
#undef public_6d3a167
#undef public_6d3a178
