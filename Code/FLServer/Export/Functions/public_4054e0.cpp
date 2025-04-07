#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4054e0);
CLANG_FORWARD_PROC_SYMBOL(public_405d40);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4054f2 _public_4054f2
#define public_405519 _public_405519

PROC_DECLARE(0x4054e0, internal_4054e0, public_4054e0);
extern "C" NAKED register_t __cdecl internal_4054e0()
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
        je public_405519
        public_4054f2 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, ebx
        call public_4054e0
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[edi+0xC]
        call public_405d40
        push edi
        call public_418978
        mov eax, dword ptr ds : [ebx+8]
        add esp, 4
        cmp esi, eax
        mov edi, esi
        jne public_4054f2
        public_405519 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4054e0)
    }
}

#undef public_4054f2
#undef public_405519
