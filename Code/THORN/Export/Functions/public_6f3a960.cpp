#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3a960);
CLANG_FORWARD_PROC_SYMBOL(public_6f3af50);

#define public_6f3a980 _public_6f3a980
#define public_6f3a992 _public_6f3a992
#define public_6f3a9a5 _public_6f3a9a5
#define public_6f3a9b7 _public_6f3a9b7
#define public_6f3a9e0 _public_6f3a9e0
#define public_6f3a9ee _public_6f3a9ee
#define public_6f3a9f4 _public_6f3a9f4

PROC_DECLARE(0x6f3a960, internal_6f3a960, public_6f3a960);
extern "C" NAKED register_t __cdecl internal_6f3a960()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xCC]
        mov ecx, dword ptr ds : [esi+0xD0]
        cmp eax, ecx
        push edi
        mov dword ptr ss : [esp+8], eax
        je public_6f3a9f4
        mov edx, dword ptr ss : [esp+0x10]
        lea ecx, ds:[ecx]
        public_6f3a980 : nop
        mov edi, dword ptr ds : [eax]
        cmp dword ptr ds : [edi+8], edx
        jae public_6f3a992
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+8], eax
        jne public_6f3a980
        public_6f3a992 : nop
        cmp eax, ecx
        je public_6f3a9f4
        mov edi, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi+8], edx
        ja public_6f3a9f4
        mov dword ptr ss : [esp+0x10], eax
        public_6f3a9a5 : nop
        mov edi, dword ptr ds : [eax]
        cmp dword ptr ds : [edi+8], edx
        ja public_6f3a9b7
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_6f3a9a5
        public_6f3a9b7 : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, esi
        call public_6f3af50
        mov edx, dword ptr ds : [esi+0xD0]
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, edx
        mov ecx, dword ptr ss : [esp+8]
        je public_6f3a9ee
        lea ebx, ds:[ebx]
        public_6f3a9e0 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_6f3a9e0
        public_6f3a9ee : nop
        mov dword ptr ds : [esi+0xD0], ecx
        public_6f3a9f4 : nop
        pop edi
        pop esi
        xor eax, eax
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f3a960)
    }
}

#undef public_6f3a980
#undef public_6f3a992
#undef public_6f3a9a5
#undef public_6f3a9b7
#undef public_6f3a9e0
#undef public_6f3a9ee
#undef public_6f3a9f4
