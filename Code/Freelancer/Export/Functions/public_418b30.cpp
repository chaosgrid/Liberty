#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418b30);

#define public_418b50 _public_418b50
#define public_418b5a _public_418b5a
#define public_418b5e _public_418b5e
#define public_418b63 _public_418b63
#define public_418b84 _public_418b84

PROC_DECLARE(0x418b30, internal_418b30, public_418b30);
extern "C" NAKED register_t __cdecl internal_418b30()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, edx
        je public_418b63
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_418b50 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jge public_418b5a
        mov eax, dword ptr ds : [eax+8]
        jmp public_418b5e
        public_418b5a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_418b5e : nop
        cmp eax, ecx
        jne public_418b50
        pop edi
        public_418b63 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_418b84
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_418b84
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_418b84 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x418b30)
    }
}

#undef public_418b50
#undef public_418b5a
#undef public_418b5e
#undef public_418b63
#undef public_418b84
