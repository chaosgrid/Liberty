#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_579aa0);
CLANG_FORWARD_PROC_SYMBOL(public_579bd0);
CLANG_FORWARD_PROC_SYMBOL(public_595db0);

#define public_579c09 _public_579c09
#define public_579c23 _public_579c23

PROC_DECLARE(0x579bd0, internal_579bd0, public_579bd0);
extern "C" NAKED register_t __cdecl internal_579bd0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        push esi
        mov esi, ecx
        je public_579c09
        mov eax, dword ptr ds : [esi+0x3F0]
        test eax, eax
        jne public_579c23
        call public_579aa0
        test eax, eax
        mov dword ptr ds : [esi+0x3F0], eax
        je public_579c23
        fild dword ptr ds : [esi+0x364]
        push ecx
        mov ecx, eax
        fstp dword ptr ss : [esp]
        call public_595db0
        pop esi
        ret 4
        public_579c09 : nop
        mov ecx, dword ptr ds : [esi+0x3F0]
        test ecx, ecx
        je public_579c23
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x3F0], 0
        public_579c23 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x579bd0)
    }
}

#undef public_579c09
#undef public_579c23
