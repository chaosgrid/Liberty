#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e74a0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62cb150 _public_62cb150
#define public_62cb165 _public_62cb165

PROC_DECLARE(0x62cb110, internal_62cb110, public_62cb110);
extern "C" NAKED register_t __cdecl internal_62cb110()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        push esi
        mov esi, ecx
        je public_62cb165
        mov ecx, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [esi+0x1E8], ecx
        mov ecx, dword ptr ds : [esi+0x24]
        add eax, 0xC
        push eax
        add ecx, 0x34
        call public_62e74a0
        test eax, eax
        je public_62cb165
        mov edx, dword ptr ds : [esi+0x1D4]
        lea ecx, ds:[esi+0x1D4]
        add eax, 8
        cmp eax, edx
        je public_62cb150
        push eax
        call public_6341610
        public_62cb150 : nop
        mov cl, byte ptr ds : [esi+0x28]
        mov al, 1
        or cl, 2
        mov byte ptr ds : [esi+0x1E0], al
        mov byte ptr ds : [esi+0x28], cl
        pop esi
        ret 4
        public_62cb165 : nop
        and byte ptr ds : [esi+0x28], 0xFD
        xor al, al
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62cb110)
    }
}

#undef public_62cb150
#undef public_62cb165
