#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4eee10);
CLANG_FORWARD_PROC_SYMBOL(public_4f3480);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f3492 _public_4f3492
#define public_4f34b9 _public_4f34b9

PROC_DECLARE(0x4f3480, internal_4f3480, public_4f3480);
extern "C" NAKED register_t __cdecl internal_4f3480()
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
        je public_4f34b9
        public_4f3492 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_4f3480
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_4eee10
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_4f3492
        public_4f34b9 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4f3480)
    }
}

#undef public_4f3492
#undef public_4f34b9
