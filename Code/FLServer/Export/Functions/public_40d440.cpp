#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418d38);

#define public_40d462 _public_40d462

PROC_DECLARE(0x40d440, internal_40d440, public_40d440);
extern "C" NAKED register_t __cdecl internal_40d440()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        call public_418d38
        cmp eax, dword ptr ds : [esi+0xB90]
        pop esi
        jne public_40d462
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax+0x1C], 1
        ret 4
        public_40d462 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], 0
        jmp dword ptr ds : [edx]
        UNREACHABLE_TRAP(0x40d440)
    }
}

#undef public_40d462
