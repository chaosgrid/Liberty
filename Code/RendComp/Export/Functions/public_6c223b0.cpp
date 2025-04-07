#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21080);

#define public_6c223c0 _public_6c223c0
#define public_6c223e1 _public_6c223e1

PROC_DECLARE(0x6c223b0, internal_6c223b0, public_6c223b0);
extern "C" NAKED register_t __cdecl internal_6c223b0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        jbe public_6c223c0
        dec eax
        mov dword ptr ds : [esi+0x34], eax
        public_6c223c0 : nop
        mov eax, dword ptr ds : [esi+0x34]
        test eax, eax
        jne public_6c223e1
        mov ecx, esi
        mov dword ptr ds : [esi+0x34], 1
        call public_6c21080
        push esi
        call dword ptr ds : [public_6c3603c]
        add esp, 4
        xor eax, eax
        public_6c223e1 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6c223b0)
    }
}

#undef public_6c223c0
#undef public_6c223e1
