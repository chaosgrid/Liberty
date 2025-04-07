#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3b40);
CLANG_FORWARD_PROC_SYMBOL(public_65d3d50);
CLANG_FORWARD_PROC_SYMBOL(public_65d4350);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cc3);

#define public_65d3d62 _public_65d3d62
#define public_65d3d90 _public_65d3d90
#define public_65d3da4 _public_65d3da4
#define public_65d3db0 _public_65d3db0
#define public_65d3db9 _public_65d3db9
#define public_65d3dc1 _public_65d3dc1

PROC_DECLARE(0x65d3d50, internal_65d3d50, public_65d3d50);
extern "C" NAKED register_t __cdecl internal_65d3d50()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push ebp
        cmp ebx, 0xFFFFFFFD
        mov ebp, ecx
        jbe public_65d3d62
        call public_65d6cc3
        public_65d3d62 : nop
        mov eax, dword ptr ss : [ebp+4]
        xor edx, edx
        cmp eax, edx
        je public_65d3d90
        mov cl, byte ptr ds : [eax-1]
        test cl, cl
        je public_65d3d90
        cmp cl, 0xFF
        je public_65d3d90
        cmp ebx, edx
        jne public_65d3db9
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ss : [ebp+4], edx
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+0xC], edx
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        public_65d3d90 : nop
        cmp ebx, edx
        jne public_65d3da4
        push 1
        mov ecx, ebp
        call public_65d3b40
        mov eax, ebp
        pop ebp
        pop ebx
        ret 8
        public_65d3da4 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        cmp eax, 0x1F
        ja public_65d3db0
        cmp eax, ebx
        jae public_65d3dc1
        public_65d3db0 : nop
        push 1
        mov ecx, ebp
        call public_65d3b40
        public_65d3db9 : nop
        mov ecx, ebp
        push ebx
        call public_65d4350
        public_65d3dc1 : nop
        mov ecx, ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, ecx
        push edi
        mov edi, dword ptr ss : [ebp+4]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        mov eax, ebp
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [ebp+4]
        pop edi
        mov dword ptr ss : [ebp+8], ebx
        pop esi
        mov byte ptr ds : [ebx+ecx], 0
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x65d3d50)
    }
}

#undef public_65d3d62
#undef public_65d3d90
#undef public_65d3da4
#undef public_65d3db0
#undef public_65d3db9
#undef public_65d3dc1
