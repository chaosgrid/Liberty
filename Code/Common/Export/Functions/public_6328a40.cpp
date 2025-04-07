#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6329c70);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6328a55 _public_6328a55
#define public_6328a63 _public_6328a63
#define public_6328a79 _public_6328a79
#define public_6328a8c _public_6328a8c
#define public_6328ac5 _public_6328ac5
#define public_6328ad4 _public_6328ad4
#define public_6328ae8 _public_6328ae8
#define public_6328b08 _public_6328b08
#define public_6328b14 _public_6328b14
#define public_6328b29 _public_6328b29
#define public_6328b47 _public_6328b47
#define public_6328b65 _public_6328b65
#define public_6328b70 _public_6328b70
#define public_6328b7f _public_6328b7f
#define public_6328b8b _public_6328b8b

PROC_DECLARE(0x6328a40, internal_6328a40, public_6328a40);
extern "C" NAKED register_t __cdecl internal_6328a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        jge public_6328a55
        mov eax, dword ptr ss : [ebp+8]
        public_6328a55 : nop
        lea esi, ds:[ecx+4]
        mov ecx, dword ptr ss : [ebp+8]
        mov edi, ecx
        cmp eax, edi
        jae public_6328a63
        mov edi, eax
        public_6328a63 : nop
        cmp esi, ebp
        jne public_6328ad4
        mov eax, dword ptr ds : [public_6399170]
        mov ebp, dword ptr ds : [eax]
        cmp dword ptr ds : [esi+8], edi
        jae public_6328a79
        call dword ptr ds : [public_63991c4]
        public_6328a79 : nop
        mov ecx, esi
        call dword ptr ds : [public_63991c8]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebp
        jae public_6328a8c
        mov ebp, eax
        public_6328a8c : nop
        cmp ebp, ebx
        jbe public_6328ac5
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebp
        push eax
        lea edx, ds:[edi+ebp]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6329c70
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push ebx
        sub edi, ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        test al, al
        je public_6328ac5
        push edi
        mov ecx, esi
        call dword ptr ds : [public_639916c]
        public_6328ac5 : nop
        mov ecx, esi
        call dword ptr ds : [public_63991c8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_6328ad4 : nop
        cmp edi, ebx
        jbe public_6328b47
        cmp edi, ecx
        jne public_6328b47
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        jne public_6328ae8
        mov eax, dword ptr ds : [public_639914c]
        public_6328ae8 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6328b47
        mov eax, dword ptr ds : [esi+4]
        cmp eax, ebx
        je public_6328b14
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_6328b08
        cmp cl, 0xFF
        je public_6328b08
        dec cl
        mov byte ptr ds : [eax-1], cl
        jmp public_6328b14
        public_6328b08 : nop
        add eax, 0xFFFFFFFE
        push eax
        call public_6391d5a
        add esp, 4
        public_6328b14 : nop
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, ebx
        jne public_6328b29
        mov eax, dword ptr ds : [public_639914c]
        public_6328b29 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        mov cl, byte ptr ds : [eax-1]
        pop edi
        pop esi
        inc cl
        pop ebp
        mov byte ptr ds : [eax-1], cl
        pop ebx
        ret 8
        public_6328b47 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        test al, al
        je public_6328b8b
        mov ebp, dword ptr ss : [ebp+4]
        test ebp, ebp
        mov ecx, dword ptr ds : [public_639914c]
        je public_6328b65
        mov ecx, ebp
        public_6328b65 : nop
        test edi, edi
        mov eax, dword ptr ds : [esi+4]
        jbe public_6328b7f
        mov edx, edi
        mov edi, edi
        public_6328b70 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_6328b70
        public_6328b7f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        mov word ptr ds : [edx+edi*2], 0
        public_6328b8b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6328a40)
    }
}

#undef public_6328a55
#undef public_6328a63
#undef public_6328a79
#undef public_6328a8c
#undef public_6328ac5
#undef public_6328ad4
#undef public_6328ae8
#undef public_6328b08
#undef public_6328b14
#undef public_6328b29
#undef public_6328b47
#undef public_6328b65
#undef public_6328b70
#undef public_6328b7f
#undef public_6328b8b
