#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f39230);
CLANG_FORWARD_PROC_SYMBOL(public_6f4ae90);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f4aea2 _public_6f4aea2
#define public_6f4aec9 _public_6f4aec9

PROC_DECLARE(0x6f4ae90, internal_6f4ae90, public_6f4ae90);
extern "C" NAKED register_t __cdecl internal_6f4ae90()
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
        je public_6f4aec9
        public_6f4aea2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6f4ae90
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6f39230
        push edi
        call public_6f57e26
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6f4aea2
        public_6f4aec9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f4ae90)
    }
}

#undef public_6f4aea2
#undef public_6f4aec9
