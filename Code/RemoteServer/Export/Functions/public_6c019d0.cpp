#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6c01a14 _public_6c01a14
#define public_6c01a2c _public_6c01a2c
#define public_6c01a56 _public_6c01a56
#define public_6c01a80 _public_6c01a80
#define public_6c01aaa _public_6c01aaa
#define public_6c01ad6 _public_6c01ad6
#define public_6c01b0e _public_6c01b0e
#define public_6c01b4c _public_6c01b4c
#define public_6c01b58 _public_6c01b58

PROC_DECLARE(0x6c019d0, internal_6c019d0, public_6c019d0);
extern "C" NAKED register_t __cdecl internal_6c019d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6bebe90
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c01a14
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c01a14 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6c01a2c
        mov dword ptr ds : [esi+0xC], ecx
        public_6c01a2c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c01b58
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6c01a56
        mov dword ptr ds : [esi+0xC], ecx
        public_6c01a56 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c01b58
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6c01a80
        mov dword ptr ds : [esi+0xC], ecx
        public_6c01a80 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c01b58
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 2
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6c01aaa
        mov dword ptr ds : [esi+0xC], ecx
        public_6c01aaa : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c01b58
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x2C], dx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6c01ad6
        mov dword ptr ds : [esi+0xC], ecx
        public_6c01ad6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6c01b58
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x30]
        call public_6bda4c0
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        add ebp, 0xC
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6c01b0e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6c01b0e : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
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
        jbe public_6c01b4c
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6c01b4c : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6c01b58 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c019d0)
    }
}

#undef public_6c01a14
#undef public_6c01a2c
#undef public_6c01a56
#undef public_6c01a80
#undef public_6c01aaa
#undef public_6c01ad6
#undef public_6c01b0e
#undef public_6c01b4c
#undef public_6c01b58
