#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6bfbc42 _public_6bfbc42
#define public_6bfbc5a _public_6bfbc5a
#define public_6bfbc82 _public_6bfbc82
#define public_6bfbcaa _public_6bfbcaa
#define public_6bfbcd2 _public_6bfbcd2
#define public_6bfbcf8 _public_6bfbcf8
#define public_6bfbd1e _public_6bfbd1e
#define public_6bfbd4e _public_6bfbd4e
#define public_6bfbd8c _public_6bfbd8c
#define public_6bfbd98 _public_6bfbd98

PROC_DECLARE(0x6bfbc00, internal_6bfbc00, public_6bfbc00);
extern "C" NAKED register_t __cdecl internal_6bfbc00()
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
        je public_6bfbc42
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfbc42 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6bfbc5a
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfbc5a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfbd98
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
        jbe public_6bfbc82
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfbc82 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfbd98
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bfbcaa
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfbcaa : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfbd98
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], edx
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bfbcd2
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfbcd2 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfbd98
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
        jbe public_6bfbcf8
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfbcf8 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfbd98
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov byte ptr ds : [edi+0x30], dl
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, edx
        mov dword ptr ds : [esi], eax
        jbe public_6bfbd1e
        mov dword ptr ds : [esi+0xC], ecx
        public_6bfbd1e : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bfbd98
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push ebp
        mov dword ptr ds : [edi+0x34], ecx
        add eax, 4
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], eax
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bfbd4e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bfbd4e : nop
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
        jbe public_6bfbd8c
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bfbd8c : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bfbd98 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bfbc00)
    }
}

#undef public_6bfbc42
#undef public_6bfbc5a
#undef public_6bfbc82
#undef public_6bfbcaa
#undef public_6bfbcd2
#undef public_6bfbcf8
#undef public_6bfbd1e
#undef public_6bfbd4e
#undef public_6bfbd8c
#undef public_6bfbd98
