#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a1d40);

#define public_62a1d60 _public_62a1d60
#define public_62a1d6b _public_62a1d6b
#define public_62a1d6f _public_62a1d6f
#define public_62a1d74 _public_62a1d74
#define public_62a1d97 _public_62a1d97

PROC_DECLARE(0x62a1d40, internal_62a1d40, public_62a1d40);
extern "C" NAKED register_t __cdecl internal_62a1d40()
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
        je public_62a1d74
        push edi
        mov di, word ptr ds : [ebx]
        lea ebx, ds:[ebx]
        public_62a1d60 : nop
        cmp word ptr ds : [eax+0xC], di
        jae public_62a1d6b
        mov eax, dword ptr ds : [eax+8]
        jmp public_62a1d6f
        public_62a1d6b : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_62a1d6f : nop
        cmp eax, ecx
        jne public_62a1d60
        pop edi
        public_62a1d74 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_62a1d97
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ds : [esi+0xC]
        jb public_62a1d97
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_62a1d97 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x62a1d40)
    }
}

#undef public_62a1d60
#undef public_62a1d6b
#undef public_62a1d6f
#undef public_62a1d74
#undef public_62a1d97
