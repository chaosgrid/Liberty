#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bebe90);
CLANG_FORWARD_PROC_SYMBOL(public_6bebeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec240);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6c08f40);

#define public_6bf8b22 _public_6bf8b22
#define public_6bf8b4a _public_6bf8b4a
#define public_6bf8b73 _public_6bf8b73
#define public_6bf8bb0 _public_6bf8bb0
#define public_6bf8bdf _public_6bf8bdf
#define public_6bf8c24 _public_6bf8c24
#define public_6bf8c45 _public_6bf8c45
#define public_6bf8c81 _public_6bf8c81
#define public_6bf8c8d _public_6bf8c8d

PROC_DECLARE(0x6bf8ae0, internal_6bf8ae0, public_6bf8ae0);
extern "C" NAKED register_t __cdecl internal_6bf8ae0()
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
        je public_6bf8b22
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bf8b22 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push ebp
        push edx
        mov ecx, edi
        call public_6c08f40
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6bf8b4a
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf8b4a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf8c8d
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ds : [ebx], eax
        mov byte ptr ds : [edi+0x9C], cl
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf8b73
        mov dword ptr ds : [esi+0xC], ebp
        public_6bf8b73 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf8c8d
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edi+0x9D], dl
        mov dword ptr ds : [ebx], eax
        call dword ptr ds : [public_6c0b080]
        test al, al
        jne public_6bf8c24
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf8bb0
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf8bb0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf8c8d
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0xB0], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6bf8bdf
        mov dword ptr ds : [esi+0xC], 0x17
        public_6bf8bdf : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6bf8c8d
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        movsx edx, cl
        mov dword ptr ss : [esp+0x14], edx
        inc eax
        mov dword ptr ds : [ebx], eax
        fild dword ptr ss : [esp+0x14]
        lea eax, ds:[edi+0xA0]
        push eax
        fmul qword ptr ds : [public_6c0df48]
        mov ecx, edi
        fstp dword ptr ds : [edi+0xB4]
        call public_6bec240
        lea ecx, ds:[edi+0xA8]
        push ecx
        mov ecx, edi
        call public_6bec240
        public_6bf8c24 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push edx
        push ebx
        mov ecx, edi
        call public_6bebeb0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6bf8c45
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6bf8c45 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov edx, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi]
        add eax, 2
        add ebp, eax
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add edx, 2
        cmp esi, edx
        jbe public_6bf8c81
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6bf8c81 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6bf8c8d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6bf8ae0)
    }
}

#undef public_6bf8b22
#undef public_6bf8b4a
#undef public_6bf8b73
#undef public_6bf8bb0
#undef public_6bf8bdf
#undef public_6bf8c24
#undef public_6bf8c45
#undef public_6bf8c81
#undef public_6bf8c8d
