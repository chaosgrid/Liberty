#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_405d80);
CLANG_FORWARD_PROC_SYMBOL(public_405f10);
CLANG_FORWARD_PROC_SYMBOL(public_406020);

#define public_406075 _public_406075
#define public_40609f _public_40609f
#define public_4060b2 _public_4060b2
#define public_4060be _public_4060be
#define public_4060c7 _public_4060c7
#define public_4060cf _public_4060cf
#define public_4060f0 _public_4060f0

PROC_DECLARE(0x406020, internal_406020, public_406020);
extern "C" NAKED register_t __cdecl internal_406020()
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
        je public_4060f0
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_4060f0
        cmp cl, 0xFF
        je public_4060f0
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
        jbe public_406075
        call dword ptr ds : [public_41b8a0]
        public_406075 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_40609f
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_40609f
        cmp cl, 0xFF
        je public_40609f
        cmp ebx, esi
        jne public_4060c7
        dec cl
        mov byte ptr ds : [eax-1], cl
        push esi
        mov ecx, ebp
        call public_405d80
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_40609f : nop
        cmp ebx, esi
        jne public_4060b2
        push 1
        mov ecx, ebp
        call public_405d80
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_4060b2 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_4060be
        cmp eax, ebx
        jae public_4060cf
        public_4060be : nop
        push 1
        mov ecx, ebp
        call public_405d80
        public_4060c7 : nop
        mov ecx, ebp
        push ebx
        call public_405f10
        public_4060cf : nop
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
        public_4060f0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x406020)
    }
}

#undef public_406075
#undef public_40609f
#undef public_4060b2
#undef public_4060be
#undef public_4060c7
#undef public_4060cf
#undef public_4060f0
