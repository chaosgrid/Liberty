#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce36f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5030);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce5042 _public_6ce5042
#define public_6ce5069 _public_6ce5069

PROC_DECLARE(0x6ce5030, internal_6ce5030, public_6ce5030);
extern "C" NAKED register_t __cdecl internal_6ce5030()
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
        je public_6ce5069
        public_6ce5042 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6ce5030
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6ce36f0
        push edi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6ce5042
        public_6ce5069 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ce5030)
    }
}

#undef public_6ce5042
#undef public_6ce5069
