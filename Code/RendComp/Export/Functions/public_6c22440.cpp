#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c22440);
CLANG_FORWARD_PROC_SYMBOL(public_6c225f0);

#define public_6c22512 _public_6c22512
#define public_6c22528 _public_6c22528
#define public_6c2253e _public_6c2253e

PROC_DECLARE(0x6c22440, internal_6c22440, public_6c22440);
extern "C" NAKED register_t __cdecl internal_6c22440()
{
    __asm
    {
        push ecx
        mov al, byte ptr ss : [esp+3]
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+4], offset public_6c361dc
        mov dword ptr ds : [esi+8], offset public_6c361c0
        mov byte ptr ds : [esi+0xC], al
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        push edi
        xor eax, eax
        mov ecx, 7
        lea edi, ds:[esi+0x8C]
        rep stosd
        mov dword ptr ds : [esi+0x21C], ebx
        mov dword ptr ds : [esi+0x220], ebx
        mov dword ptr ds : [esi+0x224], ebx
        mov ecx, dword ptr ds : [esi+0x14]
        mov dword ptr ds : [esi+0x1E8], ecx
        mov dword ptr ds : [esi], offset public_6c36148
        mov dword ptr ds : [esi+4], offset public_6c36134
        mov dword ptr ds : [esi+8], offset public_6c36118
        mov dword ptr ds : [esi+0x1EC], ebx
        mov dword ptr ds : [esi+0x1F0], ebx
        mov dword ptr ds : [esi+0x1F4], ebx
        mov dword ptr ds : [esi+0x1F8], ebx
        mov dword ptr ds : [esi+0x1FC], ebx
        mov dword ptr ds : [esi+0x200], ebx
        mov dword ptr ds : [esi+0x204], ebx
        mov dword ptr ds : [esi+0x208], ebx
        mov dword ptr ds : [esi+0x20C], ebx
        mov dword ptr ds : [esi+0x210], ebx
        mov dword ptr ds : [esi+0x214], ebx
        mov dword ptr ds : [esi+0x1E4], ebx
        mov ecx, 0x1C
        lea edi, ds:[esi+0x1C]
        rep stosd
        mov byte ptr ds : [esi+0xAC], bl
        mov eax, dword ptr ds : [esi+0x21C]
        cmp eax, ebx
        je public_6c22512
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x21C], ebx
        public_6c22512 : nop
        mov eax, dword ptr ds : [esi+0x220]
        cmp eax, ebx
        je public_6c22528
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x220], ebx
        public_6c22528 : nop
        mov eax, dword ptr ds : [esi+0x224]
        cmp eax, ebx
        je public_6c2253e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x224], ebx
        public_6c2253e : nop
        push esi
        call public_6c225f0
        pop edi
        mov eax, esi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6c22440)
    }
}

#undef public_6c22512
#undef public_6c22528
#undef public_6c2253e
