#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f36420);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f36432 _public_6f36432
#define public_6f36451 _public_6f36451

PROC_DECLARE(0x6f36420, internal_6f36420, public_6f36420);
extern "C" NAKED register_t __cdecl internal_6f36420()
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
        je public_6f36451
        public_6f36432 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f36420
        mov esi, dword ptr ds : [esi]
        push edi
        call public_6f57e26
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f36432
        public_6f36451 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f36420)
    }
}

#undef public_6f36432
#undef public_6f36451
