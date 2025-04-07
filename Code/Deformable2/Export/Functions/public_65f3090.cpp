#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f3090);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f30a2 _public_65f30a2
#define public_65f30c1 _public_65f30c1

PROC_DECLARE(0x65f3090, internal_65f3090, public_65f3090);
extern "C" NAKED register_t __cdecl internal_65f3090()
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
        je public_65f30c1
        public_65f30a2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_65f3090
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6600bb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_65f30a2
        public_65f30c1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65f3090)
    }
}

#undef public_65f30a2
#undef public_65f30c1
