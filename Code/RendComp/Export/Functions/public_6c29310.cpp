#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c24c60);
CLANG_FORWARD_PROC_SYMBOL(public_6c29310);
CLANG_FORWARD_PROC_SYMBOL(public_6c34eac);

#define public_6c2934d _public_6c2934d

PROC_DECLARE(0x6c29310, internal_6c29310, public_6c29310);
extern "C" NAKED register_t __cdecl internal_6c29310()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov dword ptr ds : [edi+0x10], esi
        mov dword ptr ds : [edi+0xC], esi
        mov dword ptr ds : [edi+0x1C], eax
        mov eax, dword ptr ds : [esi+0x8C]
        test eax, eax
        jbe public_6c2934d
        push 0x14
        call public_6c34eac
        mov dword ptr ds : [edi+0x14], eax
        mov ecx, dword ptr ds : [esi+0x88]
        push ecx
        push eax
        add esi, 0x5C
        push esi
        call public_6c24c60
        add esp, 0x10
        public_6c2934d : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6c29310)
    }
}

#undef public_6c2934d
