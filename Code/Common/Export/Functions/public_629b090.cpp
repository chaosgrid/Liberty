#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6285c90);
CLANG_FORWARD_PROC_SYMBOL(public_6285cb0);

#define public_629b0b3 _public_629b0b3

PROC_DECLARE(0x629b090, internal_629b090, public_629b090);
extern "C" NAKED register_t __cdecl internal_629b090()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+0x10]
        test al, al
        jne public_629b0b3
        mov eax, dword ptr ss : [esp+8]
        push eax
        push esi
        mov byte ptr ds : [esi+0x10], 1
        call public_6285cb0
        add esp, 8
        mov ecx, esi
        call public_6285c90
        public_629b0b3 : nop
        mov al, byte ptr ds : [esi+0x10]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x629b090)
    }
}

#undef public_629b0b3
