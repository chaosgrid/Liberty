#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4454e0);
CLANG_FORWARD_PROC_SYMBOL(public_4568d0);

#define public_445521 _public_445521
#define public_445533 _public_445533

PROC_DECLARE(0x4454e0, internal_4454e0, public_4454e0);
extern "C" NAKED register_t __cdecl internal_4454e0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        jne public_445533
        mov eax, dword ptr ds : [esi+0x360]
        test eax, eax
        je public_445521
        push eax
        mov ecx, offset public_66d2d0
        call public_4568d0
        lea eax, ds:[esi+0x364]
        push eax
        mov dword ptr ds : [esi+0x360], 0
        mov byte ptr ds : [esi+0x368], 0
        call dword ptr ds : [public_5c60c8]
        add esp, 4
        public_445521 : nop
        mov eax, 1
        mov dword ptr ds : [esi+0x36C], eax
        mov byte ptr ds : [esi+4], al
        pop esi
        ret 4
        public_445533 : nop
        mov byte ptr ds : [esi+4], 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x4454e0)
    }
}

#undef public_445521
#undef public_445533
