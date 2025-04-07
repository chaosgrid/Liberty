#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b0b0);

#define public_6d5b0dc _public_6d5b0dc

PROC_DECLARE(0x6d5b0b0, internal_6d5b0b0, public_6d5b0b0);
extern "C" NAKED register_t __cdecl internal_6d5b0b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d11850
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d5b0dc
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 4
        public_6d5b0dc : nop
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+4], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d5b0b0)
    }
}

#undef public_6d5b0dc
