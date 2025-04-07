#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d4350);
CLANG_FORWARD_PROC_SYMBOL(public_65d4460);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cc3);

#define public_65d44b4 _public_65d44b4
#define public_65d44de _public_65d44de
#define public_65d44f1 _public_65d44f1
#define public_65d44fd _public_65d44fd
#define public_65d4506 _public_65d4506
#define public_65d450e _public_65d450e
#define public_65d452f _public_65d452f

PROC_DECLARE(0x65d4460, internal_65d4460, public_65d4460);
extern "C" NAKED register_t __cdecl internal_65d4460()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        xor esi, esi
        push edi
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_65d452f
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_65d452f
        cmp cl, 0xFF
        je public_65d452f
        mov bl, cl
        mov edi, eax
        dec bl
        or ecx, 0xFFFFFFFF
        mov byte ptr ds : [eax-1], bl
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
        jbe public_65d44b4
        call public_65d6cc3
        public_65d44b4 : nop
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, esi
        je public_65d44de
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_65d44de
        cmp cl, 0xFF
        je public_65d44de
        cmp ebx, esi
        jne public_65d4506
        dec cl
        push esi
        mov byte ptr ds : [eax-1], cl
        mov ecx, ebp
        call public_65d3b40
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_65d44de : nop
        cmp ebx, esi
        jne public_65d44f1
        push 1
        mov ecx, ebp
        call public_65d3b40
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        public_65d44f1 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_65d44fd
        cmp eax, ebx
        jae public_65d450e
        public_65d44fd : nop
        push 1
        mov ecx, ebp
        call public_65d3b40
        public_65d4506 : nop
        mov ecx, ebp
        push ebx
        call public_65d4350
        public_65d450e : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [ebp+4]
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
        public_65d452f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x65d4460)
    }
}

#undef public_65d44b4
#undef public_65d44de
#undef public_65d44f1
#undef public_65d44fd
#undef public_65d4506
#undef public_65d450e
#undef public_65d452f
