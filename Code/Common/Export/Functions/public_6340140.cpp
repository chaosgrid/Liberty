#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6340140);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6340152 _public_6340152
#define public_6340179 _public_6340179

PROC_DECLARE(0x6340140, internal_6340140, public_6340140);
extern "C" NAKED register_t __cdecl internal_6340140()
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
        je public_6340179
        public_6340152 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6340140
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_633bbb0
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6340152
        public_6340179 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6340140)
    }
}

#undef public_6340152
#undef public_6340179
