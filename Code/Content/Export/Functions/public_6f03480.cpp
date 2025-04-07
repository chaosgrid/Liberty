#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f02b10);
CLANG_FORWARD_PROC_SYMBOL(public_6f03480);
CLANG_FORWARD_PROC_SYMBOL(public_6f036c0);

#define public_6f03493 _public_6f03493
#define public_6f034c1 _public_6f034c1
#define public_6f034d5 _public_6f034d5
#define public_6f034e1 _public_6f034e1
#define public_6f034ea _public_6f034ea
#define public_6f034f2 _public_6f034f2

PROC_DECLARE(0x6f03480, internal_6f03480, public_6f03480);
extern "C" NAKED register_t __cdecl internal_6f03480()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, 0xFFFFFFFD
        push ebp
        mov ebp, ecx
        jbe public_6f03493
        call dword ptr ds : [public_6fb32dc]
        public_6f03493 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        cmp eax, edx
        je public_6f034c1
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f034c1
        cmp cl, 0xFF
        je public_6f034c1
        cmp ebx, edx
        jne public_6f034ea
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        public_6f034c1 : nop
        cmp ebx, edx
        jne public_6f034d5
        push 1
        mov ecx, ebp
        call public_6f02b10
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        public_6f034d5 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6f034e1
        cmp eax, ebx
        jae public_6f034f2
        public_6f034e1 : nop
        push 1
        mov ecx, ebp
        call public_6f02b10
        public_6f034ea : nop
        mov ecx, ebp
        push ebx
        call public_6f036c0
        public_6f034f2 : nop
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
        UNREACHABLE_TRAP(0x6f03480)
    }
}

#undef public_6f03493
#undef public_6f034c1
#undef public_6f034d5
#undef public_6f034e1
#undef public_6f034ea
#undef public_6f034f2
