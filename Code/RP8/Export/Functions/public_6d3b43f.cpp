#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);
CLANG_FORWARD_PROC_SYMBOL(public_6d3b0e2);

#define public_6d3b45a _public_6d3b45a
#define public_6d3b4c6 _public_6d3b4c6

PROC_DECLARE(0x6d3b43f, internal_6d3b43f, public_6d3b43f);
extern "C" NAKED register_t __cdecl internal_6d3b43f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ebx
        mov ebx, ecx
        cmp dword ptr ds : [ebx+0x1048], 0
        push esi
        je public_6d3b45a
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        mov dword ptr ss : [ebp+0x10], eax
        public_6d3b45a : nop
        mov ecx, dword ptr ds : [ebx+0x1088]
        mov eax, dword ptr ss : [ebp+8]
        add eax, dword ptr ds : [ebx+0x1034]
        mov esi, dword ptr ss : [ebp+0xC]
        add esi, dword ptr ds : [ebx+0x1040]
        xor edx, edx
        cmp ecx, dword ptr ds : [ebx+0x1058]
        mov ecx, ebx
        setne dl
        push edx
        push esi
        push eax
        call public_6d3b0e2
        test eax, eax
        jl public_6d3b4c6
        mov ecx, dword ptr ds : [ebx+0x1058]
        mov esi, dword ptr ss : [ebp+0x10]
        push edi
        mov edi, dword ptr ds : [ebx+0x1030]
        sub edi, dword ptr ds : [ebx+0x1070]
        shl ecx, 4
        shl edi, 4
        add edi, dword ptr ds : [ebx+0x106C]
        mov eax, ecx
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov dword ptr ds : [ebx+0x108C], 1
        pop edi
        public_6d3b4c6 : nop
        pop esi
        pop ebx
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d3b43f)
    }
}

#undef public_6d3b45a
#undef public_6d3b4c6
