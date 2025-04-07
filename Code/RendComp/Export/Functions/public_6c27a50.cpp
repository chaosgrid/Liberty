#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27a50);

#define public_6c27a76 _public_6c27a76
#define public_6c27a91 _public_6c27a91

PROC_DECLARE(0x6c27a50, internal_6c27a50, public_6c27a50);
extern "C" NAKED register_t __cdecl internal_6c27a50()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [edi]
        mov esi, ecx
        mov dword ptr ds : [esi], eax
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ds : [esi+4], ecx
        mov eax, dword ptr ds : [esi+8]
        test eax, eax
        je public_6c27a76
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+8], 0
        public_6c27a76 : nop
        mov eax, dword ptr ds : [edi+8]
        test eax, eax
        mov dword ptr ds : [esi+8], eax
        je public_6c27a91
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+0xC]
        pop edi
        mov dword ptr ds : [esi+0xC], edx
        pop esi
        ret 4
        public_6c27a91 : nop
        mov eax, dword ptr ds : [edi+0xC]
        pop edi
        mov dword ptr ds : [esi+0xC], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c27a50)
    }
}

#undef public_6c27a76
#undef public_6c27a91
