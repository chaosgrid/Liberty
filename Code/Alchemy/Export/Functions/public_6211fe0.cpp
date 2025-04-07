#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6211fe0);

#define public_6212002 _public_6212002

PROC_DECLARE(0x6211fe0, internal_6211fe0, public_6211fe0);
extern "C" NAKED register_t __cdecl internal_6211fe0()
{
    __asm
    {
        cmp dword ptr ss : [esp+8], 0x48767E8
        jne public_6212002
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x74]
        mov dword ptr ds : [ecx], eax
        push eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        public_6212002 : nop
        mov eax, 0xFFFFFFF8
        ret 0xC
        UNREACHABLE_TRAP(0x6211fe0)
    }
}

#undef public_6212002
