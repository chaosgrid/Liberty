#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ece900);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ece912 _public_6ece912
#define public_6ece931 _public_6ece931

PROC_DECLARE(0x6ece900, internal_6ece900, public_6ece900);
extern "C" NAKED register_t __cdecl internal_6ece900()
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
        je public_6ece931
        public_6ece912 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6ece900
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6ed0c50
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6ece912
        public_6ece931 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ece900)
    }
}

#undef public_6ece912
#undef public_6ece931
