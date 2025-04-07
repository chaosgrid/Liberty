#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec4e00);

#define public_6ec4e20 _public_6ec4e20
#define public_6ec4e2a _public_6ec4e2a
#define public_6ec4e2e _public_6ec4e2e
#define public_6ec4e33 _public_6ec4e33
#define public_6ec4e54 _public_6ec4e54

PROC_DECLARE(0x6ec4e00, internal_6ec4e00, public_6ec4e00);
extern "C" NAKED register_t __cdecl internal_6ec4e00()
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
        je public_6ec4e33
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6ec4e20 : nop
        cmp dword ptr ds : [eax+0x10], edi
        jge public_6ec4e2a
        mov eax, dword ptr ds : [eax+8]
        jmp public_6ec4e2e
        public_6ec4e2a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6ec4e2e : nop
        cmp eax, ecx
        jne public_6ec4e20
        pop edi
        public_6ec4e33 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6ec4e54
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0x10]
        jl public_6ec4e54
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6ec4e54 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec4e00)
    }
}

#undef public_6ec4e20
#undef public_6ec4e2a
#undef public_6ec4e2e
#undef public_6ec4e33
#undef public_6ec4e54
