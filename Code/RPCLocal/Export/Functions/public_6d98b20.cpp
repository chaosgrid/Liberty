#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d98b20);
CLANG_FORWARD_PROC_SYMBOL(public_6d98c70);
CLANG_FORWARD_PROC_SYMBOL(public_6db1dc2);

#define public_6d98b41 _public_6d98b41
#define public_6d98b50 _public_6d98b50
#define public_6d98b63 _public_6d98b63
#define public_6d98b9d _public_6d98b9d
#define public_6d98bac _public_6d98bac
#define public_6d98bc2 _public_6d98bc2
#define public_6d98be2 _public_6d98be2
#define public_6d98bee _public_6d98bee
#define public_6d98c03 _public_6d98c03
#define public_6d98c21 _public_6d98c21
#define public_6d98c3f _public_6d98c3f
#define public_6d98c48 _public_6d98c48
#define public_6d98c57 _public_6d98c57
#define public_6d98c63 _public_6d98c63

PROC_DECLARE(0x6d98b20, internal_6d98b20, public_6d98b20);
extern "C" NAKED register_t __cdecl internal_6d98b20()
{
    __asm
    {
        or byte ptr ds : [ecx+0x20], 0x10
        mov eax, dword ptr ds : [public_6db31a8]
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ebx+8]
        push esi
        push edi
        mov edi, eax
        cmp ebp, edi
        lea esi, ds:[ecx+0x40]
        jae public_6d98b41
        mov edi, ebp
        public_6d98b41 : nop
        cmp esi, ebx
        jne public_6d98bac
        cmp dword ptr ds : [esi+8], edi
        jae public_6d98b50
        call dword ptr ds : [public_6db3150]
        public_6d98b50 : nop
        mov ecx, esi
        call dword ptr ds : [public_6db315c]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebp
        jae public_6d98b63
        mov ebp, eax
        public_6d98b63 : nop
        test ebp, ebp
        jbe public_6d98b9d
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[edi+ebp]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6d98c70
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6db316c]
        test al, al
        je public_6d98b9d
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6db3158]
        public_6d98b9d : nop
        mov ecx, esi
        call dword ptr ds : [public_6db315c]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6d98bac : nop
        xor ebp, ebp
        cmp edi, ebp
        jbe public_6d98c21
        cmp edi, eax
        jne public_6d98c21
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6d98bc2
        mov eax, dword ptr ds : [public_6db3190]
        public_6d98bc2 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6d98c21
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebp
        je public_6d98bee
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d98be2
        cmp cl, 0xFF
        je public_6d98be2
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6d98bee
        public_6d98be2 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6db1dc2
        add esp, 4
        public_6d98bee : nop
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0xC], ebp
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, ebp
        jne public_6d98c03
        mov eax, dword ptr ds : [public_6db3190]
        public_6d98c03 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        ret 4
        public_6d98c21 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6db316c]
        test al, al
        je public_6d98c63
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov ecx, dword ptr ds : [public_6db3190]
        je public_6d98c3f
        mov ecx, ebx
        public_6d98c3f : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_6d98c57
        mov edx, edi
        public_6d98c48 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6d98c48
        public_6d98c57 : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6d98c63 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d98b20)
    }
}

#undef public_6d98b41
#undef public_6d98b50
#undef public_6d98b63
#undef public_6d98b9d
#undef public_6d98bac
#undef public_6d98bc2
#undef public_6d98be2
#undef public_6d98bee
#undef public_6d98c03
#undef public_6d98c21
#undef public_6d98c3f
#undef public_6d98c48
#undef public_6d98c57
#undef public_6d98c63
