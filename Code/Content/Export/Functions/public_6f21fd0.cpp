#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21fd0);

#define public_6f21fe3 _public_6f21fe3

PROC_DECLARE(0x6f21fd0, internal_6f21fd0, public_6f21fd0);
extern "C" NAKED register_t __cdecl internal_6f21fd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        test ecx, ecx
        mov dword ptr ds : [esi], ecx
        je public_6f21fe3
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        public_6f21fe3 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f21fd0)
    }
}

#undef public_6f21fe3
