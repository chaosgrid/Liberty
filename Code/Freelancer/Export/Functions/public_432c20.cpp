#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432c20);
CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_432c32 _public_432c32
#define public_432c59 _public_432c59

PROC_DECLARE(0x432c20, internal_432c20, public_432c20);
extern "C" NAKED register_t __cdecl internal_432c20()
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
        je public_432c59
        public_432c32 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_432c20
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_455e90
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_432c32
        public_432c59 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x432c20)
    }
}

#undef public_432c32
#undef public_432c59
