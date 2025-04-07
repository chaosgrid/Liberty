#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3c520);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f200);
CLANG_FORWARD_PROC_SYMBOL(public_6f3f310);

#define public_6f3f365 _public_6f3f365
#define public_6f3f38f _public_6f3f38f
#define public_6f3f3a2 _public_6f3f3a2
#define public_6f3f3ae _public_6f3f3ae
#define public_6f3f3b7 _public_6f3f3b7
#define public_6f3f3bf _public_6f3f3bf
#define public_6f3f3e0 _public_6f3f3e0

PROC_DECLARE(0x6f3f310, internal_6f3f310, public_6f3f310);
extern "C" NAKED register_t __cdecl internal_6f3f310()
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
        je public_6f3f3e0
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f3f3e0
        cmp cl, 0xFF
        je public_6f3f3e0
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
        jbe public_6f3f365
        call dword ptr ds : [public_6f5a01c]
        public_6f3f365 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_6f3f38f
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_6f3f38f
        cmp cl, 0xFF
        je public_6f3f38f
        cmp ebx, esi
        jne public_6f3f3b7
        dec cl
        mov byte ptr ds : [eax-1], cl
        push esi
        mov ecx, ebp
        call public_6f3c520
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6f3f38f : nop
        cmp ebx, esi
        jne public_6f3f3a2
        push 1
        mov ecx, ebp
        call public_6f3c520
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_6f3f3a2 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_6f3f3ae
        cmp eax, ebx
        jae public_6f3f3bf
        public_6f3f3ae : nop
        push 1
        mov ecx, ebp
        call public_6f3c520
        public_6f3f3b7 : nop
        mov ecx, ebp
        push ebx
        call public_6f3f200
        public_6f3f3bf : nop
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
        public_6f3f3e0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6f3f310)
    }
}

#undef public_6f3f365
#undef public_6f3f38f
#undef public_6f3f3a2
#undef public_6f3f3ae
#undef public_6f3f3b7
#undef public_6f3f3bf
#undef public_6f3f3e0
