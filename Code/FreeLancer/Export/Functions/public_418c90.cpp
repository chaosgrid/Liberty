#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418c90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_418ca2 _public_418ca2
#define public_418cc1 _public_418cc1

PROC_DECLARE(0x418c90, internal_418c90, public_418c90);
extern "C" NAKED register_t __cdecl internal_418c90()
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
        je public_418cc1
        public_418ca2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_418c90
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_418ca2
        public_418cc1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x418c90)
    }
}

#undef public_418ca2
#undef public_418cc1
