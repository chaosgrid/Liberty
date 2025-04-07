#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f19b80);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6ec0d4b _public_6ec0d4b
#define public_6ec0d81 _public_6ec0d81
#define public_6ec0d94 _public_6ec0d94
#define public_6ec0dc0 _public_6ec0dc0
#define public_6ec0dcb _public_6ec0dcb
#define public_6ec0dce _public_6ec0dce
#define public_6ec0dd2 _public_6ec0dd2
#define public_6ec0de0 _public_6ec0de0
#define public_6ec0dea _public_6ec0dea
#define public_6ec0dee _public_6ec0dee
#define public_6ec0df2 _public_6ec0df2
#define public_6ec0df8 _public_6ec0df8
#define public_6ec0e10 _public_6ec0e10
#define public_6ec0e1c _public_6ec0e1c
#define public_6ec0e24 _public_6ec0e24
#define public_6ec0e2e _public_6ec0e2e
#define public_6ec0e35 _public_6ec0e35
#define public_6ec0e3e _public_6ec0e3e
#define public_6ec0e4a _public_6ec0e4a
#define public_6ec0e59 _public_6ec0e59
#define public_6ec0e5d _public_6ec0e5d

PROC_DECLARE(0x6ec0cf0, internal_6ec0cf0, public_6ec0cf0);
extern "C" NAKED register_t __cdecl internal_6ec0cf0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x1C]
        xor bl, bl
        test edi, edi
        mov esi, ecx
        mov byte ptr ss : [esp+0x13], bl
        je public_6ec0e5d
        mov eax, dword ptr ds : [esi+4]
        add eax, 0xC
        push eax
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6ec0e5d
        mov eax, dword ptr ds : [esi+0x50]
        cmp dword ptr ds : [edi+0x10], eax
        je public_6ec0d4b
        cmp eax, 0x3E7
        je public_6ec0d4b
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+8]
        mov ecx, dword ptr ds : [edx+0x10]
        test ecx, ecx
        je public_6ec0e5d
        cmp eax, 0x3E6
        jne public_6ec0e5d
        public_6ec0d4b : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [esi+4]
        lea ebp, ds:[esi+0x14]
        push ebp
        push eax
        call public_6f19b80
        test al, al
        je public_6ec0e59
        mov ecx, dword ptr ds : [esi+0x18]
        test ecx, ecx
        lea eax, ds:[esi+0x18]
        je public_6ec0d81
        test dword ptr ds : [esi+0x4C], 0x3FFFFFFF
        jne public_6ec0d81
        mov ecx, dword ptr ds : [esi+4]
        push eax
        call public_6f15940
        mov dword ptr ds : [esi+0x4C], eax
        public_6ec0d81 : nop
        mov eax, dword ptr ds : [esi+0x4C]
        test eax, 0x3FFFFFFF
        je public_6ec0d94
        cmp eax, dword ptr ds : [edi+4]
        jne public_6ec0e59
        public_6ec0d94 : nop
        mov eax, dword ptr ds : [esi+0x10]
        cmp eax, 0xFFFFFFFF
        jne public_6ec0e4a
        mov esi, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0xF0]
        mov ecx, dword ptr ds : [edx+4]
        add esi, 0xEC
        mov esi, dword ptr ds : [esi+8]
        mov eax, ecx
        cmp eax, esi
        mov ebx, edx
        je public_6ec0dd2
        mov edi, dword ptr ss : [ebp]
        public_6ec0dc0 : nop
        cmp edi, dword ptr ds : [eax+0xC]
        jae public_6ec0dcb
        mov ebx, eax
        mov eax, dword ptr ds : [eax]
        jmp public_6ec0dce
        public_6ec0dcb : nop
        mov eax, dword ptr ds : [eax+8]
        public_6ec0dce : nop
        cmp eax, esi
        jne public_6ec0dc0
        public_6ec0dd2 : nop
        cmp ecx, esi
        mov eax, edx
        je public_6ec0df2
        mov edx, dword ptr ss : [ebp]
        nop 
        lea esp, ss:[esp]
        public_6ec0de0 : nop
        cmp dword ptr ds : [ecx+0xC], edx
        jae public_6ec0dea
        mov ecx, dword ptr ds : [ecx+8]
        jmp public_6ec0dee
        public_6ec0dea : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx]
        public_6ec0dee : nop
        cmp ecx, esi
        jne public_6ec0de0
        public_6ec0df2 : nop
        xor edx, edx
        cmp eax, ebx
        je public_6ec0e3e
        public_6ec0df8 : nop
        mov ecx, dword ptr ds : [eax+8]
        inc edx
        cmp byte ptr ds : [ecx+0x15], 0
        jne public_6ec0e1c
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        jne public_6ec0e35
        lea esp, ss:[esp]
        public_6ec0e10 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        cmp byte ptr ds : [ecx+0x15], 0
        je public_6ec0e10
        jmp public_6ec0e35
        public_6ec0e1c : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ec0e2e
        public_6ec0e24 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [ecx+4]
        cmp eax, dword ptr ds : [ecx+8]
        je public_6ec0e24
        public_6ec0e2e : nop
        cmp dword ptr ds : [eax+8], ecx
        je public_6ec0e35
        mov eax, ecx
        public_6ec0e35 : nop
        cmp eax, ebx
        jne public_6ec0df8
        cmp edx, 1
        jg public_6ec0e59
        public_6ec0e3e : nop
        pop edi
        pop esi
        mov bl, 1
        pop ebp
        mov al, bl
        pop ebx
        pop ecx
        ret 8
        public_6ec0e4a : nop
        mov edx, dword ptr ds : [esi+0xC]
        inc edx
        mov ecx, edx
        cmp ecx, eax
        mov dword ptr ds : [esi+0xC], edx
        mov bl, 1
        je public_6ec0e5d
        public_6ec0e59 : nop
        mov bl, byte ptr ss : [esp+0x13]
        public_6ec0e5d : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec0cf0)
    }
}

#undef public_6ec0d4b
#undef public_6ec0d81
#undef public_6ec0d94
#undef public_6ec0dc0
#undef public_6ec0dcb
#undef public_6ec0dce
#undef public_6ec0dd2
#undef public_6ec0de0
#undef public_6ec0dea
#undef public_6ec0dee
#undef public_6ec0df2
#undef public_6ec0df8
#undef public_6ec0e10
#undef public_6ec0e1c
#undef public_6ec0e24
#undef public_6ec0e2e
#undef public_6ec0e35
#undef public_6ec0e3e
#undef public_6ec0e4a
#undef public_6ec0e59
#undef public_6ec0e5d
