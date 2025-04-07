#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfb6d2 _public_6bfb6d2
#define public_6bfb6ea _public_6bfb6ea
#define public_6bfb712 _public_6bfb712
#define public_6bfb73a _public_6bfb73a
#define public_6bfb764 _public_6bfb764
#define public_6bfb78e _public_6bfb78e
#define public_6bfb7b4 _public_6bfb7b4
#define public_6bfb7e2 _public_6bfb7e2
#define public_6bfb820 _public_6bfb820
#define public_6bfb82c _public_6bfb82c

PROC_DECLARE(0x6bfb690, internal_6bfb690, public_6bfb690);
extern "C" NAKED register_t __cdecl internal_6bfb690()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        push edi
        mov edi, ecx
        lea esi, ds:[edi+0x10]
        push esi
        push ebp
        lea ebx, ds:[edi+0x18]
        push ebx
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bfb6d2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfb6d2 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6bfb6ea
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfb6ea : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfb82c
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bfb712
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfb712 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfb82c
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bfb73a
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfb73a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfb82c
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x28], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bfb764
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfb764 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfb82c
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x2A], dx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bfb78e
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfb78e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfb82c
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x2C], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc eax
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bfb7b4
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfb7b4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfb82c
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        push esi
        push ebp
        mov byte ptr ds : [edi+0x30], cl
        inc eax
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bfb7e2
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfb7e2 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6bec3b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6bfb820
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bfb820 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bfb82c : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bfb690)
    }
}

#undef public_6bfb6d2
#undef public_6bfb6ea
#undef public_6bfb712
#undef public_6bfb73a
#undef public_6bfb764
#undef public_6bfb78e
#undef public_6bfb7b4
#undef public_6bfb7e2
#undef public_6bfb820
#undef public_6bfb82c
