#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3af30);
CLANG_FORWARD_PROC_SYMBOL(public_6f3e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f3e3a2 _public_6f3e3a2
#define public_6f3e3c9 _public_6f3e3c9

PROC_DECLARE(0x6f3e390, internal_6f3e390, public_6f3e390);
extern "C" NAKED register_t __cdecl internal_6f3e390()
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
        je public_6f3e3c9
        public_6f3e3a2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f3e390
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f3af30
        push edi
        call public_6f57e26
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f3e3a2
        public_6f3e3c9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f3e390)
    }
}

#undef public_6f3e3a2
#undef public_6f3e3c9
