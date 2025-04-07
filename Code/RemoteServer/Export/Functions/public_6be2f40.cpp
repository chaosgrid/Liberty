#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be2f82 _public_6be2f82
#define public_6be2f9a _public_6be2f9a
#define public_6be2fc2 _public_6be2fc2
#define public_6be2fea _public_6be2fea
#define public_6be3010 _public_6be3010
#define public_6be3036 _public_6be3036
#define public_6be3078 _public_6be3078
#define public_6be30ac _public_6be30ac
#define public_6be30cc _public_6be30cc
#define public_6be310a _public_6be310a
#define public_6be3116 _public_6be3116

PROC_DECLARE(0x6be2f40, internal_6be2f40, public_6be2f40);
extern "C" NAKED register_t __cdecl internal_6be2f40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        mov ebp, ecx
        lea ebx, ss:[ebp+0x10]
        push ebx
        push edi
        lea esi, ss:[ebp+0x18]
        push esi
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6be2f82
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6be2f82 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        mov ecx, 0x17
        jbe public_6be2f9a
        mov dword ptr ds : [ebx+0xC], ecx
        public_6be2f9a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6be3116
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x20], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6be2fc2
        mov dword ptr ds : [ebx+0xC], ecx
        public_6be2fc2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6be3116
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x24], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6be2fea
        mov dword ptr ds : [ebx+0xC], ecx
        public_6be2fea : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6be3116
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov dword ptr ss : [ebp+0x2C], edx
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6be3010
        mov dword ptr ds : [ebx+0xC], ecx
        public_6be3010 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6be3116
        mov eax, dword ptr ds : [esi]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [esi], eax
        mov byte ptr ss : [ebp+0x30], dl
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [ebx], eax
        jbe public_6be3036
        mov dword ptr ds : [ebx+0xC], ecx
        public_6be3036 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6be3116
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [esi], eax
        mov eax, ecx
        test eax, eax
        mov dword ptr ss : [ebp+0x28], ecx
        jbe public_6be30ac
        push eax
        call public_6c09d26
        mov edx, dword ptr ss : [ebp+0x28]
        mov dword ptr ss : [ebp+0x34], eax
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edi, edx
        mov eax, edi
        add esp, 4
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6be3078
        mov dword ptr ds : [ebx+0xC], 0x17
        public_6be3078 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6be3116
        mov eax, dword ptr ss : [ebp+0x28]
        mov esi, dword ptr ds : [esi]
        mov edi, dword ptr ss : [ebp+0x34]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x14], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        public_6be30ac : nop
        push ebx
        push edi
        lea eax, ss:[ebp+0x18]
        push eax
        mov ecx, ebp
        call public_6bebeb0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6be30cc
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6be30cc : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6bec3b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov esi, edx
        mov edx, dword ptr ds : [ebx]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov ebx, dword ptr ds : [ebx]
        add eax, 2
        cmp ebx, eax
        jbe public_6be310a
        add ebx, 2
        mov dword ptr ds : [ecx+0x14], ebx
        public_6be310a : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6be3116 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6be2f40)
    }
}

#undef public_6be2f82
#undef public_6be2f9a
#undef public_6be2fc2
#undef public_6be2fea
#undef public_6be3010
#undef public_6be3036
#undef public_6be3078
#undef public_6be30ac
#undef public_6be30cc
#undef public_6be310a
#undef public_6be3116
