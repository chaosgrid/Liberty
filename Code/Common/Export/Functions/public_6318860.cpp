#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316470);
CLANG_FORWARD_PROC_SYMBOL(public_6318860);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6318872 _public_6318872
#define public_6318899 _public_6318899

PROC_DECLARE(0x6318860, internal_6318860, public_6318860);
extern "C" NAKED register_t __cdecl internal_6318860()
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
        je public_6318899
        public_6318872 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6318860
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6316470
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6318872
        public_6318899 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6318860)
    }
}

#undef public_6318872
#undef public_6318899
