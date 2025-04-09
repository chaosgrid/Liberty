#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_53f330);

#define public_572359 _public_572359
#define public_57235e _public_57235e

PROC_DECLARE(0x572330, internal_572330, public_572330);
extern "C" NAKED register_t __cdecl internal_572330()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xF
        jne public_57235e
        mov al, byte ptr ds : [ecx+0x90]
        test al, al
        jne public_572359
        push 1
/*FIXUP push offset public_5c95fc @0x572345*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c95fc
        mov dword ptr ds : [ecx+0x34], 1
        call public_41dde0
        add esp, 8
        public_572359 : nop
        mov al, 1
        ret 4
        public_57235e : nop
        mov dword ptr ss : [esp+4], eax
        jmp public_53f330
        UNREACHABLE_TRAP(0x572330)
    }
}

#undef public_572359
#undef public_57235e
