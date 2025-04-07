#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f52d90);
CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);

#define public_6f52dc3 _public_6f52dc3

PROC_DECLARE(0x6f52d90, internal_6f52d90, public_6f52d90);
extern "C" NAKED register_t __cdecl internal_6f52d90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f61e28]
        mov ecx, dword ptr ds : [eax+0x34]
        test ecx, ecx
        push esi
        je public_6f52dc3
        mov esi, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, dword ptr ds : [ecx+0x20]
        je public_6f52dc3
        push 0
        push eax
        push 0x3C
        push esi
        call public_6f52dd0
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [esi+0x1C]
        add esp, 0x10
        mov dword ptr ds : [edx+0x20], eax
        public_6f52dc3 : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f52d90)
    }
}

#undef public_6f52dc3
