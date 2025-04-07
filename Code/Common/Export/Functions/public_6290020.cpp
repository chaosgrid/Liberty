#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289850);
CLANG_FORWARD_PROC_SYMBOL(public_6290020);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6290032 _public_6290032
#define public_6290059 _public_6290059

PROC_DECLARE(0x6290020, internal_6290020, public_6290020);
extern "C" NAKED register_t __cdecl internal_6290020()
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
        je public_6290059
        public_6290032 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_6290020
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_6289850
        push edi
        call public_6391d5a
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_6290032
        public_6290059 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6290020)
    }
}

#undef public_6290032
#undef public_6290059
