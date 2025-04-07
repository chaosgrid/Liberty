#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6229f90);
CLANG_FORWARD_PROC_SYMBOL(public_622a1f0);
CLANG_FORWARD_PROC_SYMBOL(public_622a440);
CLANG_FORWARD_PROC_SYMBOL(public_622a490);
CLANG_FORWARD_PROC_SYMBOL(public_622a520);
CLANG_FORWARD_PROC_SYMBOL(public_622a540);
CLANG_FORWARD_PROC_SYMBOL(public_622b0e0);

#define public_6229fac _public_6229fac
#define public_6229fbf _public_6229fbf
#define public_6229fc2 _public_6229fc2
#define public_6229fc6 _public_6229fc6
#define public_622a027 _public_622a027
#define public_622a03f _public_622a03f
#define public_622a049 _public_622a049
#define public_622a04d _public_622a04d
#define public_622a05b _public_622a05b
#define public_622a096 _public_622a096
#define public_622a0a5 _public_622a0a5
#define public_622a0c6 _public_622a0c6
#define public_622a0e7 _public_622a0e7
#define public_622a0f5 _public_622a0f5
#define public_622a114 _public_622a114
#define public_622a120 _public_622a120
#define public_622a13c _public_622a13c
#define public_622a157 _public_622a157
#define public_622a160 _public_622a160
#define public_622a183 _public_622a183

PROC_DECLARE(0x6229f90, internal_6229f90, public_6229f90);
extern "C" NAKED register_t __cdecl internal_6229f90()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov al, 1
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov esi, ecx
        mov ebp, dword ptr ds : [ecx+4]
        cmp ebp, edx
        je public_6229fc6
        public_6229fac : nop
        mov eax, dword ptr ds : [ebx]
        mov esi, ebp
        cmp eax, dword ptr ss : [ebp+0xC]
        setb al
        test al, al
        je public_6229fbf
        mov ebp, dword ptr ss : [ebp]
        jmp public_6229fc2
        public_6229fbf : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6229fc2 : nop
        cmp ebp, edx
        jne public_6229fac
        public_6229fc6 : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_622a13c
        push 0
        push esi
        mov ecx, edi
        call public_622a520
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_622b0e0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_622a027
        cmp ebp, dword ptr ds : [edi+8]
        jne public_622a027
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jb public_622a027
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_622a04d
        mov dword ptr ds : [eax+8], ebx
        jmp public_622a04d
        public_622a027 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_622a03f
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_622a049
        public_622a03f : nop
        cmp esi, dword ptr ds : [eax]
        jne public_622a049
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_622a049 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_622a04d : nop
        mov edx, dword ptr ds : [edi+4]
        mov esi, ebx
        cmp ebx, dword ptr ds : [edx+4]
        je public_622a120
        public_622a05b : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_622a120
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_622a0c6
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_622a096
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_622a114
        public_622a096 : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_622a0a5
        mov esi, eax
        mov ecx, edi
        push esi
        call public_622a440
        public_622a0a5 : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_622a490
        jmp public_622a114
        public_622a0c6 : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_622a0e7
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_622a114
        public_622a0e7 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_622a0f5
        mov esi, eax
        mov ecx, edi
        push esi
        call public_622a490
        public_622a0f5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov ecx, edi
        mov eax, dword ptr ds : [edx+4]
        push eax
        call public_622a440
        public_622a114 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_622a05b
        public_622a120 : nop
        mov edx, dword ptr ds : [edi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_622a13c : nop
        mov edx, esi
        test al, al
        mov dword ptr ss : [esp+0x10], edx
        je public_622a157
        cmp esi, dword ptr ds : [ecx]
        je public_622a160
        lea ecx, ss:[esp+0x10]
        call public_622a540
        mov edx, dword ptr ss : [esp+0x10]
        public_622a157 : nop
        mov eax, dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [ebx]
        cmp eax, ecx
        jae public_622a183
        public_622a160 : nop
        push ebx
        push esi
        lea ecx, ss:[esp+0x24]
        push ebp
        push ecx
        mov ecx, edi
        call public_622a1f0
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
        public_622a183 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6229f90)
    }
}

#undef public_6229fac
#undef public_6229fbf
#undef public_6229fc2
#undef public_6229fc6
#undef public_622a027
#undef public_622a03f
#undef public_622a049
#undef public_622a04d
#undef public_622a05b
#undef public_622a096
#undef public_622a0a5
#undef public_622a0c6
#undef public_622a0e7
#undef public_622a0f5
#undef public_622a114
#undef public_622a120
#undef public_622a13c
#undef public_622a157
#undef public_622a160
#undef public_622a183
