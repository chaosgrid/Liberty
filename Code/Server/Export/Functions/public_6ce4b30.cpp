#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce4b30);
CLANG_FORWARD_PROC_SYMBOL(public_6d572a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6ce4b42 _public_6ce4b42
#define public_6ce4b69 _public_6ce4b69

PROC_DECLARE(0x6ce4b30, internal_6ce4b30, public_6ce4b30);
extern "C" NAKED register_t __cdecl internal_6ce4b30()
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
        je public_6ce4b69
        public_6ce4b42 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6ce4b30
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6d572a0
        push edi
        call public_6d5ffb0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6ce4b42
        public_6ce4b69 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ce4b30)
    }
}

#undef public_6ce4b42
#undef public_6ce4b69
