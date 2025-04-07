#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ceeb40);

#define public_6cf425e _public_6cf425e

PROC_DECLARE(0x6cf4240, internal_6cf4240, public_6cf4240);
extern "C" NAKED register_t __cdecl internal_6cf4240()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [eax+4]
        push esi
        mov esi, dword ptr ds : [edx+0x90]
        test esi, esi
        pop esi
        je public_6cf425e
        mov eax, dword ptr ss : [esp+8]
        mov byte ptr ds : [eax+0xC], 1
        ret 8
        public_6cf425e : nop
        mov dword ptr ss : [esp+4], eax
        jmp public_6ceeb40
        UNREACHABLE_TRAP(0x6cf4240)
    }
}

#undef public_6cf425e
