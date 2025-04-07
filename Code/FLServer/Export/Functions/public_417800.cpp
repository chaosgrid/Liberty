#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417800);

#define public_417820 _public_417820
#define public_41782a _public_41782a
#define public_41782e _public_41782e
#define public_417833 _public_417833
#define public_417854 _public_417854

PROC_DECLARE(0x417800, internal_417800, public_417800);
extern "C" NAKED register_t __cdecl internal_417800()
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
        je public_417833
        push edi
        mov edi, dword ptr ds : [ebx]
        lea esp, ss:[esp]
        public_417820 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_41782a
        mov eax, dword ptr ds : [eax+8]
        jmp public_41782e
        public_41782a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_41782e : nop
        cmp eax, ecx
        jne public_417820
        pop edi
        public_417833 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_417854
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_417854
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_417854 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x417800)
    }
}

#undef public_417820
#undef public_41782a
#undef public_41782e
#undef public_417833
#undef public_417854
