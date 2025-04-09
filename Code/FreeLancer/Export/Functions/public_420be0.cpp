#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_420be0);
CLANG_FORWARD_PROC_SYMBOL(public_420cb0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_420bf2 _public_420bf2
#define public_420c19 _public_420c19

PROC_DECLARE(0x420be0, internal_420be0, public_420be0);
extern "C" NAKED register_t __cdecl internal_420be0()
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
        je public_420c19
        public_420bf2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_420be0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_420cb0
        push edi
        call public_5b7e1d
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_420bf2
        public_420c19 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x420be0)
    }
}

#undef public_420bf2
#undef public_420c19
