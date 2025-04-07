#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d11850);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a930);

#define public_6d5a95b _public_6d5a95b

PROC_DECLARE(0x6d5a930, internal_6d5a930, public_6d5a930);
extern "C" NAKED register_t __cdecl internal_6d5a930()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6d11850
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax+4], ecx
        mov dword ptr ds : [eax], 0
        mov dword ptr ds : [eax+8], edx
        mov ecx, dword ptr ds : [esi+8]
        test ecx, ecx
        je public_6d5a95b
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 4
        public_6d5a95b : nop
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6d5a930)
    }
}

#undef public_6d5a95b
