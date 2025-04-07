#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4032a0);
CLANG_FORWARD_PROC_SYMBOL(public_405510);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_405522 _public_405522
#define public_405549 _public_405549

PROC_DECLARE(0x405510, internal_405510, public_405510);
extern "C" NAKED register_t __cdecl internal_405510()
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
        je public_405549
        public_405522 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_405510
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_4032a0
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_405522
        public_405549 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x405510)
    }
}

#undef public_405522
#undef public_405549
