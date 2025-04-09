#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c5f60);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4c5f72 _public_4c5f72
#define public_4c5f91 _public_4c5f91

PROC_DECLARE(0x4c5f60, internal_4c5f60, public_4c5f60);
extern "C" NAKED register_t __cdecl internal_4c5f60()
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
        je public_4c5f91
        public_4c5f72 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_4c5f60
        mov esi, dword ptr ds : [esi]
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_4c5f72
        public_4c5f91 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4c5f60)
    }
}

#undef public_4c5f72
#undef public_4c5f91
