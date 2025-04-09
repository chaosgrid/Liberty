#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_487c30);
CLANG_FORWARD_PROC_SYMBOL(public_5adf80);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5adf92 _public_5adf92
#define public_5adfb9 _public_5adfb9

PROC_DECLARE(0x5adf80, internal_5adf80, public_5adf80);
extern "C" NAKED register_t __cdecl internal_5adf80()
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
        je public_5adfb9
        public_5adf92 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_5adf80
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_487c30
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_5adf92
        public_5adfb9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x5adf80)
    }
}

#undef public_5adf92
#undef public_5adfb9
