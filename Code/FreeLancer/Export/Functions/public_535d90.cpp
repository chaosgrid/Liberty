#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_535d90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_535da2 _public_535da2
#define public_535dc1 _public_535dc1

PROC_DECLARE(0x535d90, internal_535d90, public_535d90);
extern "C" NAKED register_t __cdecl internal_535d90()
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
        je public_535dc1
        public_535da2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_535d90
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_535da2
        public_535dc1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x535d90)
    }
}

#undef public_535da2
#undef public_535dc1
