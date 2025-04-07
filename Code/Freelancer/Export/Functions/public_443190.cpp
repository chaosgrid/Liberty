#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_443190);
CLANG_FORWARD_PROC_SYMBOL(public_4dd9a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4431a2 _public_4431a2
#define public_4431c9 _public_4431c9

PROC_DECLARE(0x443190, internal_443190, public_443190);
extern "C" NAKED register_t __cdecl internal_443190()
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
        je public_4431c9
        public_4431a2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_443190
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_4dd9a0
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_4431a2
        public_4431c9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x443190)
    }
}

#undef public_4431a2
#undef public_4431c9
