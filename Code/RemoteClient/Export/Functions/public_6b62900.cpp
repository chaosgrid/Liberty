#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4e780);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4eb30);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b51750);

#define public_6b62942 _public_6b62942
#define public_6b6296a _public_6b6296a
#define public_6b62993 _public_6b62993
#define public_6b629d0 _public_6b629d0
#define public_6b629ff _public_6b629ff
#define public_6b62a44 _public_6b62a44
#define public_6b62a65 _public_6b62a65
#define public_6b62aa1 _public_6b62aa1
#define public_6b62aad _public_6b62aad

PROC_DECLARE(0x6b62900, internal_6b62900, public_6b62900);
extern "C" NAKED register_t __cdecl internal_6b62900()
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
        call public_6b4e780
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b62942
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b62942 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push ebp
        push edx
        mov ecx, edi
        call public_6b51750
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ebp, 0x17
        jbe public_6b6296a
        mov dword ptr ds : [esi+0xC], ebp
        public_6b6296a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b62aad
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
        jbe public_6b62993
        mov dword ptr ds : [esi+0xC], ebp
        public_6b62993 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b62aad
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edi+0x9D], dl
        mov dword ptr ds : [ebx], eax
        call dword ptr ds : [public_6b6b0a4]
        test al, al
        jne public_6b62a44
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6b629d0
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b629d0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b62aad
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
        jbe public_6b629ff
        mov dword ptr ds : [esi+0xC], 0x17
        public_6b629ff : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b62aad
        mov eax, dword ptr ds : [ebx]
        mov cl, byte ptr ds : [eax]
        movsx edx, cl
        mov dword ptr ss : [esp+0x14], edx
        inc eax
        mov dword ptr ds : [ebx], eax
        fild dword ptr ss : [esp+0x14]
        lea eax, ds:[edi+0xA0]
        push eax
        fmul qword ptr ds : [public_6b6c1e8]
        mov ecx, edi
        fstp dword ptr ds : [edi+0xB4]
        call public_6b4eb30
        lea ecx, ds:[edi+0xA8]
        push ecx
        mov ecx, edi
        call public_6b4eb30
        public_6b62a44 : nop
        mov edx, dword ptr ss : [esp+0x18]
        push esi
        push edx
        push ebx
        mov ecx, edi
        call public_6b4e7a0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6b62a65
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6b62a65 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [edi+0xC]
        push edx
        call public_6b4ecd0
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
        jbe public_6b62aa1
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6b62aa1 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6b62aad : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6b62900)
    }
}

#undef public_6b62942
#undef public_6b6296a
#undef public_6b62993
#undef public_6b629d0
#undef public_6b629ff
#undef public_6b62a44
#undef public_6b62a65
#undef public_6b62aa1
#undef public_6b62aad
