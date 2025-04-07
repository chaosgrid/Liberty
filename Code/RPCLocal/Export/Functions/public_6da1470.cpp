#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1730);

#define public_6da14d6 _public_6da14d6

PROC_DECLARE(0x6da1470, internal_6da1470, public_6da1470);
extern "C" NAKED register_t __cdecl internal_6da1470()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ds : [esi+0x14], eax
        xor eax, eax
        mov dword ptr ds : [esi+0x18], ecx
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x1C], eax
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0x1C], eax
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [esi+0xC]
        push edi
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        mov ecx, offset public_6dbbf4c
        call public_6da1730
        mov ecx, eax
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [ecx+0x1C]
        inc edi
        mov dword ptr ds : [ecx+4], edi
        mov eax, dword ptr ds : [esi+0x10]
        add eax, 2
        add edx, eax
        mov dword ptr ds : [ecx+0x1C], edx
        mov edx, dword ptr ds : [ecx+0x14]
        mov esi, dword ptr ds : [esi+0x10]
        add edx, 2
        cmp esi, edx
        jbe public_6da14d6
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6da14d6 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        pop edi
        pop esi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6da1470)
    }
}

#undef public_6da14d6
