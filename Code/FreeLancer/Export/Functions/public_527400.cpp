#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_527400);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_527412 _public_527412
#define public_527431 _public_527431

PROC_DECLARE(0x527400, internal_527400, public_527400);
extern "C" NAKED register_t __cdecl internal_527400()
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
        je public_527431
        public_527412 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_527400
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_527412
        public_527431 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x527400)
    }
}

#undef public_527412
#undef public_527431
