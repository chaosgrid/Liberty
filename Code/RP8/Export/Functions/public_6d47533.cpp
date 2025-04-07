#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d47533);

#define public_6d4754f _public_6d4754f

PROC_DECLARE(0x6d47533, internal_6d47533, public_6d47533);
extern "C" NAKED register_t __cdecl internal_6d47533()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp byte ptr ds : [eax+0x4A], 0
        push esi
        mov esi, dword ptr ds : [eax+0x17C]
        je public_6d4754f
        mov ecx, dword ptr ds : [eax+0x1A4]
        push eax
        call dword ptr ds : [ecx+8]
        pop ecx
        public_6d4754f : nop
        inc dword ptr ds : [esi+0xC]
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d47533)
    }
}

#undef public_6d4754f
