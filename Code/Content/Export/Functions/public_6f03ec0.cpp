#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f036c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f03ec0);

#define public_6f03f15 _public_6f03f15
#define public_6f03f3f _public_6f03f3f
#define public_6f03f52 _public_6f03f52
#define public_6f03f5e _public_6f03f5e
#define public_6f03f67 _public_6f03f67
#define public_6f03f6f _public_6f03f6f
#define public_6f03f90 _public_6f03f90

PROC_DECLARE(0x6f03ec0, internal_6f03ec0, public_6f03ec0);
extern "C" NAKED register_t __cdecl internal_6f03ec0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        xor esi, esi
        cmp eax, esi
        push edi
        je public_6f03f90
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f03f90
        cmp cl, 0xFF
        je public_6f03f90
        mov bl, cl
        dec bl
        mov byte ptr ds : [eax-1], bl
        mov edi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        repne scasb
        not ecx
        dec ecx
        mov ebx, ecx
        cmp ebx, 0xFFFFFFFD
        jbe public_6f03f15
        call dword ptr ds : [public_6fb32dc]
        public_6f03f15 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_6f03f3f
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f03f3f
        cmp cl, 0xFF
        je public_6f03f3f
        cmp ebx, esi
        jne public_6f03f67
        dec cl
        mov byte ptr ds : [eax-1], cl
        push esi
        mov ecx, ebp
        call public_6f02b10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6f03f3f : nop
        cmp ebx, esi
        jne public_6f03f52
        push 1
        mov ecx, ebp
        call public_6f02b10
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6f03f52 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6f03f5e
        cmp eax, ebx
        jae public_6f03f6f
        public_6f03f5e : nop
        push 1
        mov ecx, ebp
        call public_6f02b10
        public_6f03f67 : nop
        mov ecx, ebp
        push ebx
        call public_6f036c0
        public_6f03f6f : nop
        mov edi, dword ptr ss : [ebp+4]
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, ebx
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+ecx], 0
        public_6f03f90 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f03ec0)
    }
}

#undef public_6f03f15
#undef public_6f03f3f
#undef public_6f03f52
#undef public_6f03f5e
#undef public_6f03f67
#undef public_6f03f6f
#undef public_6f03f90
