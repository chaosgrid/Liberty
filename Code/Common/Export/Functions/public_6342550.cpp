#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6341af0);
CLANG_FORWARD_PROC_SYMBOL(public_6342550);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6342562 _public_6342562
#define public_6342589 _public_6342589

PROC_DECLARE(0x6342550, internal_6342550, public_6342550);
extern "C" NAKED register_t __cdecl internal_6342550()
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
        je public_6342589
        public_6342562 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6342550
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6341af0
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6342562
        public_6342589 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6342550)
    }
}

#undef public_6342562
#undef public_6342589
