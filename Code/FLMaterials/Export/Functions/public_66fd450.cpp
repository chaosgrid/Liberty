#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66fd450);
CLANG_FORWARD_PROC_SYMBOL(public_6700710);

#define public_66fd462 _public_66fd462
#define public_66fd481 _public_66fd481

PROC_DECLARE(0x66fd450, internal_66fd450, public_66fd450);
extern "C" NAKED register_t __cdecl internal_66fd450()
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
        je public_66fd481
        public_66fd462 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_66fd450
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6700710
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_66fd462
        public_66fd481 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x66fd450)
    }
}

#undef public_66fd462
#undef public_66fd481
