#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6229d50);

#define public_6229d69 _public_6229d69
#define public_6229d73 _public_6229d73
#define public_6229d77 _public_6229d77
#define public_6229d7c _public_6229d7c
#define public_6229d9f _public_6229d9f

PROC_DECLARE(0x6229d50, internal_6229d50, public_6229d50);
extern "C" NAKED register_t __cdecl internal_6229d50()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push esi
        cmp eax, ecx
        mov esi, edx
        je public_6229d7c
        push edi
        mov edi, dword ptr ds : [ebx]
        public_6229d69 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_6229d73
        mov eax, dword ptr ds : [eax+8]
        jmp public_6229d77
        public_6229d73 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6229d77 : nop
        cmp eax, ecx
        jne public_6229d69
        pop edi
        public_6229d7c : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6229d9f
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jb public_6229d9f
        lea eax, ss:[esp+0x14]
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        public_6229d9f : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6229d50)
    }
}

#undef public_6229d69
#undef public_6229d73
#undef public_6229d77
#undef public_6229d7c
#undef public_6229d9f
