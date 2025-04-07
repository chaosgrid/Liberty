#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6366b10);
CLANG_FORWARD_PROC_SYMBOL(public_6367f80);

#define public_6366b37 _public_6366b37
#define public_6366b3d _public_6366b3d

PROC_DECLARE(0x6366b10, internal_6366b10, public_6366b10);
extern "C" NAKED register_t __cdecl internal_6366b10()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x68]
        test eax, eax
        jne public_6366b37
        mov eax, dword ptr ss : [esp+8]
        push eax
        lea ecx, ds:[esi+0x6C]
        call public_6367f80
        cmp eax, 1
        je public_6366b3d
        mov dword ptr ds : [esi+0x68], 2
        pop esi
        ret 4
        public_6366b37 : nop
        dec dword ptr ds : [esi+0x94]
        public_6366b3d : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6366b10)
    }
}

#undef public_6366b37
#undef public_6366b3d
