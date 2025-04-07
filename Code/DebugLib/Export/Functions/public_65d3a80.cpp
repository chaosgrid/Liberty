#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3a80);
CLANG_FORWARD_PROC_SYMBOL(public_65d3df0);
CLANG_FORWARD_PROC_SYMBOL(public_65d4350);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cc3);

#define public_65d3a9b _public_65d3a9b
#define public_65d3ab4 _public_65d3ab4
#define public_65d3ae2 _public_65d3ae2
#define public_65d3afb _public_65d3afb
#define public_65d3b00 _public_65d3b00
#define public_65d3b08 _public_65d3b08
#define public_65d3b2e _public_65d3b2e

PROC_DECLARE(0x65d3a80, internal_65d3a80, public_65d3a80);
extern "C" NAKED register_t __cdecl internal_65d3a80()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        or eax, 0xFFFFFFFF
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [ebp+8]
        push edi
        sub eax, edx
        cmp eax, esi
        ja public_65d3a9b
        call public_65d6cc3
        public_65d3a9b : nop
        xor edi, edi
        cmp esi, edi
        jbe public_65d3b2e
        mov ebx, dword ptr ss : [ebp+8]
        add ebx, esi
        cmp ebx, 0xFFFFFFFD
        jbe public_65d3ab4
        call public_65d6cc3
        public_65d3ab4 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edi
        je public_65d3ae2
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_65d3ae2
        cmp cl, 0xFF
        je public_65d3ae2
        cmp ebx, edi
        jne public_65d3b00
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_65d3ae2 : nop
        cmp ebx, edi
        jne public_65d3afb
        cmp eax, edi
        je public_65d3b2e
        push edi
        mov ecx, ebp
        call public_65d3df0
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 8
        public_65d3afb : nop
        cmp dword ptr ss : [ebp+0xC], ebx
        jae public_65d3b08
        public_65d3b00 : nop
        mov ecx, ebp
        push ebx
        call public_65d4350
        public_65d3b08 : nop
        mov edi, dword ptr ss : [ebp+4]
        mov edx, dword ptr ss : [ebp+8]
        mov ecx, esi
        mov esi, dword ptr ss : [esp+0x14]
        add edi, edx
        mov edx, ecx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [ebp+8], ebx
        mov byte ptr ds : [ebx+eax], 0
        public_65d3b2e : nop
        pop edi
        mov eax, ebp
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65d3a80)
    }
}

#undef public_65d3a9b
#undef public_65d3ab4
#undef public_65d3ae2
#undef public_65d3afb
#undef public_65d3b00
#undef public_65d3b08
#undef public_65d3b2e
