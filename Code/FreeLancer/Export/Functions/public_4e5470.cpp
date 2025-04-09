#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5470);
CLANG_FORWARD_PROC_SYMBOL(public_55e280);

#define public_4e5485 _public_4e5485
#define public_4e54b7 _public_4e54b7

PROC_DECLARE(0x4e5470, internal_4e5470, public_4e5470);
extern "C" NAKED register_t __cdecl internal_4e5470()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        je public_4e5485
        mov eax, dword ptr ds : [esi+0x648]
        pop esi
        ret 4
        public_4e5485 : nop
        mov al, byte ptr ds : [esi+0x4D0]
        test al, al
        je public_4e54b7
        lea ecx, ds:[esi+0x364]
        call public_55e280
        test al, al
        jne public_4e54b7
        lea ecx, ds:[esi+0x4E0]
        call public_55e280
        test al, al
        jne public_4e54b7
        mov eax, dword ptr ds : [esi+0x648]
        pop esi
        ret 4
        public_4e54b7 : nop
        mov eax, 3
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4e5470)
    }
}

#undef public_4e5485
#undef public_4e54b7
