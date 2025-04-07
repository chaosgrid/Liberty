#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62fcf02 _public_62fcf02
#define public_62fcf21 _public_62fcf21

PROC_DECLARE(0x62fcef0, internal_62fcef0, public_62fcef0);
extern "C" NAKED register_t __cdecl internal_62fcef0()
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
        je public_62fcf21
        public_62fcf02 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_62fcef0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_62fcf02
        public_62fcf21 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62fcef0)
    }
}

#undef public_62fcf02
#undef public_62fcf21
