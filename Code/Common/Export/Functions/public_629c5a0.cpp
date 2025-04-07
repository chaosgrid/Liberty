#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b440);
CLANG_FORWARD_PROC_SYMBOL(public_6293380);

#define public_629c5c8 _public_629c5c8

PROC_DECLARE(0x629c5a0, internal_629c5a0, public_629c5a0);
extern "C" NAKED register_t __cdecl internal_629c5a0()
{
    __asm
    {
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+0x80]
        test esi, esi
        je public_629c5c8
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov dword ptr ds : [esi+0xC], 0xFFFFFFFF
        call public_628b440
        add esp, 4
        mov dword ptr ds : [esi+8], 0
        public_629c5c8 : nop
        mov ecx, edi
        pop edi
        pop esi
        jmp public_6293380
        UNREACHABLE_TRAP(0x629c5a0)
    }
}

#undef public_629c5c8
