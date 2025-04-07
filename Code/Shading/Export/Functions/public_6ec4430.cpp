#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec4430);

#define public_6ec4450 _public_6ec4450
#define public_6ec445a _public_6ec445a
#define public_6ec445e _public_6ec445e
#define public_6ec4463 _public_6ec4463
#define public_6ec4484 _public_6ec4484

PROC_DECLARE(0x6ec4430, internal_6ec4430, public_6ec4430);
extern "C" NAKED register_t __cdecl internal_6ec4430()
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
        je public_6ec4463
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6ec4450 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jge public_6ec445a
        mov eax, dword ptr ds : [eax+8]
        jmp public_6ec445e
        public_6ec445a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6ec445e : nop
        cmp eax, ecx
        jne public_6ec4450
        pop edi
        public_6ec4463 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6ec4484
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6ec4484
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6ec4484 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ec4430)
    }
}

#undef public_6ec4450
#undef public_6ec445a
#undef public_6ec445e
#undef public_6ec4463
#undef public_6ec4484
