#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4410);

#define public_62f5019 _public_62f5019

PROC_DECLARE(0x62f5000, internal_62f5000, public_62f5000);
extern "C" NAKED register_t __cdecl internal_62f5000()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push edi
        mov esi, ecx
        call public_62f4410
        mov eax, dword ptr ds : [edi+0x70]
        cmp eax, dword ptr ds : [esi+0x70]
        je public_62f5019
        mov dword ptr ds : [esi+0x70], eax
        public_62f5019 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62f5000)
    }
}

#undef public_62f5019
