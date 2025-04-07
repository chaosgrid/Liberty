#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bb4d0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62bb4fe _public_62bb4fe
#define public_62bb50e _public_62bb50e

PROC_DECLARE(0x62bb4d0, internal_62bb4d0, public_62bb4d0);
extern "C" NAKED register_t __cdecl internal_62bb4d0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        cmp ecx, 0xFFFFFFFF
        je public_62bb4fe
        mov eax, dword ptr ds : [public_6399038]
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi], 0xFFFFFFFF
        public_62bb4fe : nop
        test byte ptr ss : [esp+8], 1
        je public_62bb50e
        push esi
        call public_6391d5a
        add esp, 4
        public_62bb50e : nop
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62bb4d0)
    }
}

#undef public_62bb4fe
#undef public_62bb50e
