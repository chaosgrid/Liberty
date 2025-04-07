#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b76470);

#define public_6b76489 _public_6b76489
#define public_6b76493 _public_6b76493
#define public_6b76497 _public_6b76497
#define public_6b7649c _public_6b7649c
#define public_6b764bf _public_6b764bf

PROC_DECLARE(0x6b76470, internal_6b76470, public_6b76470);
extern "C" NAKED register_t __cdecl internal_6b76470()
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
        je public_6b7649c
        push edi
        mov edi, dword ptr ds : [ebx]
        public_6b76489 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_6b76493
        mov eax, dword ptr ds : [eax+8]
        jmp public_6b76497
        public_6b76493 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6b76497 : nop
        cmp eax, ecx
        jne public_6b76489
        pop edi
        public_6b7649c : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6b764bf
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jb public_6b764bf
        lea eax, ss:[esp+0x14]
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        public_6b764bf : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6b76470)
    }
}

#undef public_6b76489
#undef public_6b76493
#undef public_6b76497
#undef public_6b7649c
#undef public_6b764bf
