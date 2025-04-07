#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312b70);

#define public_6312b92 _public_6312b92
#define public_6312b96 _public_6312b96
#define public_6312be6 _public_6312be6
#define public_6312bea _public_6312bea

PROC_DECLARE(0x6312b70, internal_6312b70, public_6312b70);
extern "C" NAKED register_t __cdecl internal_6312b70()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, ecx
        mov edx, dword ptr ds : [ebx+0xC]
        xor eax, eax
        cmp edx, 4
        push ebp
        jl public_6312b92
        mov ecx, dword ptr ds : [ebx+8]
        mov ebp, dword ptr ds : [ecx]
        add ecx, 4
        add edx, 0xFFFFFFFC
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edx
        jmp public_6312b96
        public_6312b92 : nop
        mov ebp, dword ptr ss : [esp+8]
        public_6312b96 : nop
        cmp ebp, 0xFFFFFFFF
        je public_6312bea
        cmp ebp, 0x4000
        jae public_6312bea
        lea eax, ss:[ebp+1]
        push eax
        call dword ptr ds : [public_6399328]
        mov ecx, dword ptr ds : [ebx+0xC]
        add esp, 4
        cmp ebp, ecx
        jg public_6312be6
        test ebp, ebp
        jl public_6312be6
        je public_6312be6
        push esi
        mov esi, dword ptr ds : [ebx+8]
        push edi
        mov ecx, ebp
        mov edx, ecx
        shr ecx, 2
        mov edi, eax
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov edx, dword ptr ds : [ebx+8]
        mov ecx, dword ptr ds : [ebx+0xC]
        add edx, ebp
        sub ecx, ebp
        pop edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx+0xC], ecx
        pop esi
        public_6312be6 : nop
        mov byte ptr ds : [eax+ebp], 0
        public_6312bea : nop
        pop ebp
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6312b70)
    }
}

#undef public_6312b92
#undef public_6312b96
#undef public_6312be6
#undef public_6312bea
