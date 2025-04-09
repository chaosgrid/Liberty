#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_458cc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_458cd2 _public_458cd2
#define public_458cf1 _public_458cf1

PROC_DECLARE(0x458cc0, internal_458cc0, public_458cc0);
extern "C" NAKED register_t __cdecl internal_458cc0()
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
        je public_458cf1
        public_458cd2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_458cc0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_458cd2
        public_458cf1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x458cc0)
    }
}

#undef public_458cd2
#undef public_458cf1
