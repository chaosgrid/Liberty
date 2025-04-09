#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414570);
CLANG_FORWARD_PROC_SYMBOL(public_4155c0);

#define public_414585 _public_414585

PROC_DECLARE(0x414570, internal_414570, public_414570);
extern "C" NAKED register_t __cdecl internal_414570()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, dword ptr ds : [public_6105b0]
        je public_414585
        mov ecx, esi
        call public_4155c0
        public_414585 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+0x24]
        mov dword ptr ds : [eax+4], edx
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x414570)
    }
}

#undef public_414585
