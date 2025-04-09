#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b6870);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4b6882 _public_4b6882
#define public_4b68a1 _public_4b68a1

PROC_DECLARE(0x4b6870, internal_4b6870, public_4b6870);
extern "C" NAKED register_t __cdecl internal_4b6870()
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
        je public_4b68a1
        public_4b6882 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_4b6870
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_4b6882
        public_4b68a1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4b6870)
    }
}

#undef public_4b6882
#undef public_4b68a1
