#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5d80);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5f10);
CLANG_FORWARD_PROC_SYMBOL(public_6ce6020);

#define public_6ce6075 _public_6ce6075
#define public_6ce609f _public_6ce609f
#define public_6ce60b2 _public_6ce60b2
#define public_6ce60be _public_6ce60be
#define public_6ce60c7 _public_6ce60c7
#define public_6ce60cf _public_6ce60cf
#define public_6ce60f0 _public_6ce60f0

PROC_DECLARE(0x6ce6020, internal_6ce6020, public_6ce6020);
extern "C" NAKED register_t __cdecl internal_6ce6020()
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
        je public_6ce60f0
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ce60f0
        cmp cl, 0xFF
        je public_6ce60f0
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
        jbe public_6ce6075
        call dword ptr ds : [public_6d64b4c]
        public_6ce6075 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_6ce609f
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6ce609f
        cmp cl, 0xFF
        je public_6ce609f
        cmp ebx, esi
        jne public_6ce60c7
        dec cl
        mov byte ptr ds : [eax-1], cl
        push esi
        mov ecx, ebp
        call public_6ce5d80
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6ce609f : nop
        cmp ebx, esi
        jne public_6ce60b2
        push 1
        mov ecx, ebp
        call public_6ce5d80
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6ce60b2 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6ce60be
        cmp eax, ebx
        jae public_6ce60cf
        public_6ce60be : nop
        push 1
        mov ecx, ebp
        call public_6ce5d80
        public_6ce60c7 : nop
        mov ecx, ebp
        push ebx
        call public_6ce5f10
        public_6ce60cf : nop
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
        public_6ce60f0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ce6020)
    }
}

#undef public_6ce6075
#undef public_6ce609f
#undef public_6ce60b2
#undef public_6ce60be
#undef public_6ce60c7
#undef public_6ce60cf
#undef public_6ce60f0
