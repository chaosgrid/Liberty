#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecaa00);

#define public_6ecaa20 _public_6ecaa20
#define public_6ecaa2a _public_6ecaa2a
#define public_6ecaa2e _public_6ecaa2e
#define public_6ecaa33 _public_6ecaa33
#define public_6ecaa54 _public_6ecaa54

PROC_DECLARE(0x6ecaa00, internal_6ecaa00, public_6ecaa00);
extern "C" NAKED register_t __cdecl internal_6ecaa00()
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
        je public_6ecaa33
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_6ecaa20 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_6ecaa2a
        mov eax, dword ptr ds : [eax+8]
        jmp public_6ecaa2e
        public_6ecaa2a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6ecaa2e : nop
        cmp eax, ecx
        jne public_6ecaa20
        pop edi
        public_6ecaa33 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6ecaa54
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_6ecaa54
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6ecaa54 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ecaa00)
    }
}

#undef public_6ecaa20
#undef public_6ecaa2a
#undef public_6ecaa2e
#undef public_6ecaa33
#undef public_6ecaa54
