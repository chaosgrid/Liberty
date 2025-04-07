#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d44170);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d4418e _public_6d4418e
#define public_6d441ab _public_6d441ab

PROC_DECLARE(0x6d44170, internal_6d44170, public_6d44170);
extern "C" NAKED register_t __cdecl internal_6d44170()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x20
        mov ebx, ecx
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d4418e
        mov edi, eax
        public_6d4418e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6d441ab
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, 6
        rep movsd
        public_6d441ab : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d44170)
    }
}

#undef public_6d4418e
#undef public_6d441ab
