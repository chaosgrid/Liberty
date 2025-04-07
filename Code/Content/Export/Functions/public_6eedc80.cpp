#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eedc80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eedc92 _public_6eedc92
#define public_6eedcb1 _public_6eedcb1

PROC_DECLARE(0x6eedc80, internal_6eedc80, public_6eedc80);
extern "C" NAKED register_t __cdecl internal_6eedc80()
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
        je public_6eedcb1
        public_6eedc92 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6eedc80
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6eedc92
        public_6eedcb1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eedc80)
    }
}

#undef public_6eedc92
#undef public_6eedcb1
