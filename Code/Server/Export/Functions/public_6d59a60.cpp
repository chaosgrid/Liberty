#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5d80);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5f10);
CLANG_FORWARD_PROC_SYMBOL(public_6d59a60);

#define public_6d59a73 _public_6d59a73
#define public_6d59aa1 _public_6d59aa1
#define public_6d59ab5 _public_6d59ab5
#define public_6d59ac1 _public_6d59ac1
#define public_6d59aca _public_6d59aca
#define public_6d59ad2 _public_6d59ad2

PROC_DECLARE(0x6d59a60, internal_6d59a60, public_6d59a60);
extern "C" NAKED register_t __cdecl internal_6d59a60()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, 0xFFFFFFFD
        push ebp
        mov ebp, ecx
        jbe public_6d59a73
        call dword ptr ds : [public_6d64b4c]
        public_6d59a73 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        cmp eax, edx
        je public_6d59aa1
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6d59aa1
        cmp cl, 0xFF
        je public_6d59aa1
        cmp ebx, edx
        jne public_6d59aca
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        public_6d59aa1 : nop
        cmp ebx, edx
        jne public_6d59ab5
        push 1
        mov ecx, ebp
        call public_6ce5d80
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        public_6d59ab5 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6d59ac1
        cmp eax, ebx
        jae public_6d59ad2
        public_6d59ac1 : nop
        push 1
        mov ecx, ebp
        call public_6ce5d80
        public_6d59aca : nop
        mov ecx, ebp
        push ebx
        call public_6ce5f10
        public_6d59ad2 : nop
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [ebp+4]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        mov eax, ebp
        pop ebp
        mov byte ptr ds : [ebx+ecx], 0
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6d59a60)
    }
}

#undef public_6d59a73
#undef public_6d59aa1
#undef public_6d59ab5
#undef public_6d59ac1
#undef public_6d59aca
#undef public_6d59ad2
