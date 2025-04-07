#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efd050);
CLANG_FORWARD_PROC_SYMBOL(public_6efdcf0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6efdd02 _public_6efdd02
#define public_6efdd29 _public_6efdd29

PROC_DECLARE(0x6efdcf0, internal_6efdcf0, public_6efdcf0);
extern "C" NAKED register_t __cdecl internal_6efdcf0()
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
        je public_6efdd29
        public_6efdd02 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6efdcf0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6efd050
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6efdd02
        public_6efdd29 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6efdcf0)
    }
}

#undef public_6efdd02
#undef public_6efdd29
