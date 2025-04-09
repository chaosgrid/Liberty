#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4388f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_438902 _public_438902
#define public_438921 _public_438921

PROC_DECLARE(0x4388f0, internal_4388f0, public_4388f0);
extern "C" NAKED register_t __cdecl internal_4388f0()
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
        je public_438921
        public_438902 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_4388f0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_438902
        public_438921 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4388f0)
    }
}

#undef public_438902
#undef public_438921
