#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ced317 _public_6ced317
#define public_6ced327 _public_6ced327

PROC_DECLARE(0x6ced300, internal_6ced300, public_6ced300);
extern "C" NAKED register_t __cdecl internal_6ced300()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ds : [esi], offset public_6d65744
        je public_6ced317
        push esi
        call dword ptr ds : [public_6d64330]
        public_6ced317 : nop
        test byte ptr ss : [esp+8], 1
        je public_6ced327
        push esi
        call public_6d5ffb0
        add esp, 4
        public_6ced327 : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6ced300)
    }
}

#undef public_6ced317
#undef public_6ced327
