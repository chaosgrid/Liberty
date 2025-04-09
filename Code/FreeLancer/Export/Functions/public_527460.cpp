#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_522480);
CLANG_FORWARD_PROC_SYMBOL(public_527460);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_527472 _public_527472
#define public_527499 _public_527499

PROC_DECLARE(0x527460, internal_527460, public_527460);
extern "C" NAKED register_t __cdecl internal_527460()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+8]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        cmp edi, eax
        mov esi, edi
        je public_527499
        public_527472 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_527460
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_522480
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_527472
        public_527499 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x527460)
    }
}

#undef public_527472
#undef public_527499
