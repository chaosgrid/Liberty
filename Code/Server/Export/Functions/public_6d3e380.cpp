#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e380);

#define public_6d3e3a0 _public_6d3e3a0
#define public_6d3e3ab _public_6d3e3ab
#define public_6d3e3af _public_6d3e3af
#define public_6d3e3b4 _public_6d3e3b4
#define public_6d3e3d7 _public_6d3e3d7

PROC_DECLARE(0x6d3e380, internal_6d3e380, public_6d3e380);
extern "C" NAKED register_t __cdecl internal_6d3e380()
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
        je public_6d3e3b4
        push edi
        mov di, word ptr ds : [ebx]
        lea ebx, ds:[ebx]
        public_6d3e3a0 : nop
        cmp word ptr ds : [eax+0xC], di
        jae public_6d3e3ab
        mov eax, dword ptr ds : [eax+8]
        jmp public_6d3e3af
        public_6d3e3ab : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_6d3e3af : nop
        cmp eax, ecx
        jne public_6d3e3a0
        pop edi
        public_6d3e3b4 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_6d3e3d7
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ds : [esi+0xC]
        jb public_6d3e3d7
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6d3e3d7 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6d3e380)
    }
}

#undef public_6d3e3a0
#undef public_6d3e3ab
#undef public_6d3e3af
#undef public_6d3e3b4
#undef public_6d3e3d7
