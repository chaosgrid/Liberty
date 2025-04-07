#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42fdb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42fdc2 _public_42fdc2
#define public_42fde1 _public_42fde1

PROC_DECLARE(0x42fdb0, internal_42fdb0, public_42fdb0);
extern "C" NAKED register_t __cdecl internal_42fdb0()
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
        je public_42fde1
        public_42fdc2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_42fdb0
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_42fdc2
        public_42fde1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x42fdb0)
    }
}

#undef public_42fdc2
#undef public_42fde1
