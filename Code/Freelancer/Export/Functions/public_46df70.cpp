#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46df70);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_46df82 _public_46df82
#define public_46dfa1 _public_46dfa1

PROC_DECLARE(0x46df70, internal_46df70, public_46df70);
extern "C" NAKED register_t __cdecl internal_46df70()
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
        je public_46dfa1
        public_46df82 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_46df70
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_46df82
        public_46dfa1 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x46df70)
    }
}

#undef public_46df82
#undef public_46dfa1
