#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eed502 _public_6eed502
#define public_6eed529 _public_6eed529

PROC_DECLARE(0x6eed4f0, internal_6eed4f0, public_6eed4f0);
extern "C" NAKED register_t __cdecl internal_6eed4f0()
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
        je public_6eed529
        public_6eed502 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6eed4f0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6eec9b0
        push edi
        call public_6fa8fe0
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6eed502
        public_6eed529 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6eed4f0)
    }
}

#undef public_6eed502
#undef public_6eed529
