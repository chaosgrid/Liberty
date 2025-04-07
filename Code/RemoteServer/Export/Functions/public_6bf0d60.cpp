#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bf0d94 _public_6bf0d94

PROC_DECLARE(0x6bf0d60, internal_6bf0d60, public_6bf0d60);
extern "C" NAKED register_t __cdecl internal_6bf0d60()
{
    __asm
    {
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        mov esi, ecx
        je public_6bf0d94
        push edi
        call dword ptr ds : [public_6c0b210]
        mov dword ptr ds : [esi+0xD8], eax
        lea eax, ds:[eax+eax+2]
        push eax
        call public_6c09d26
        push edi
        push eax
        mov dword ptr ds : [esi+0xDC], eax
        call dword ptr ds : [public_6c0b220]
        add esp, 0x10
        public_6bf0d94 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6bf0d60)
    }
}

#undef public_6bf0d94
