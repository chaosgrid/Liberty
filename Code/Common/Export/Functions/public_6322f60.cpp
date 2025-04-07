#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_631ee30);
CLANG_FORWARD_PROC_SYMBOL(public_6322f60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6322f72 _public_6322f72
#define public_6322f99 _public_6322f99

PROC_DECLARE(0x6322f60, internal_6322f60, public_6322f60);
extern "C" NAKED register_t __cdecl internal_6322f60()
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
        je public_6322f99
        public_6322f72 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6322f60
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_631ee30
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6322f72
        public_6322f99 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6322f60)
    }
}

#undef public_6322f72
#undef public_6322f99
