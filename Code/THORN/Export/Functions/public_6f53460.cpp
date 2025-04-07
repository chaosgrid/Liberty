#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53460);
CLANG_FORWARD_PROC_SYMBOL(public_6f534c0);

#define public_6f5348b _public_6f5348b
#define public_6f534ad _public_6f534ad

PROC_DECLARE(0x6f53460, internal_6f53460, public_6f53460);
extern "C" NAKED register_t __cdecl internal_6f53460()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ecx
        jge public_6f5348b
        mov ebx, dword ptr ds : [esi+8]
        mov ecx, eax
        shl ecx, 4
        add ecx, ebx
        cmp dword ptr ds : [ecx], 0xFFFFFFFE
        jne public_6f5348b
        cmp dword ptr ds : [ecx+8], edi
        je public_6f534ad
        public_6f5348b : nop
        push edx
        call public_6f534c0
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        add esp, 4
        shl ecx, 4
        mov dword ptr ds : [edx+ecx], 0xFFFFFFFE
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+ecx+8], edi
        mov dword ptr ds : [edi+0xC], eax
        public_6f534ad : nop
        pop edi
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f53460)
    }
}

#undef public_6f5348b
#undef public_6f534ad
