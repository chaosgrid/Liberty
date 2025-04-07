#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62242d0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);

#define public_6223b50 _public_6223b50
#define public_6223b70 _public_6223b70

PROC_DECLARE(0x6223b40, internal_6223b40, public_6223b40);
extern "C" NAKED register_t __cdecl internal_6223b40()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        jbe public_6223b50
        dec eax
        mov dword ptr ds : [esi+0x54], eax
        public_6223b50 : nop
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        jne public_6223b70
        mov ecx, esi
        mov dword ptr ds : [esi+0x54], 1
        call public_62242d0
        push esi
        call public_62460e0
        add esp, 4
        xor eax, eax
        public_6223b70 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6223b40)
    }
}

#undef public_6223b50
#undef public_6223b70
