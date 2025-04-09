#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42c750);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_42c762 _public_42c762
#define public_42c788 _public_42c788

PROC_DECLARE(0x42c750, internal_42c750, public_42c750);
extern "C" NAKED register_t __cdecl internal_42c750()
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
        je public_42c788
        public_42c762 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_42c750
        mov esi, dword ptr ds : [esi]
        push edi
        mov dword ptr ds : [edi+0xC], offset public_5ca36c
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_42c762
        public_42c788 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x42c750)
    }
}

#undef public_42c762
#undef public_42c788
