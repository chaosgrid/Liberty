#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0ed0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed0ef1 _public_6ed0ef1
#define public_6ed0f0e _public_6ed0f0e

PROC_DECLARE(0x6ed0ed0, internal_6ed0ed0, public_6ed0ed0);
extern "C" NAKED register_t __cdecl internal_6ed0ed0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x98
        mov ebx, ecx
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6ed0ef1
        mov edi, eax
        public_6ed0ef1 : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+8]
        test edi, edi
        mov dword ptr ds : [ecx], eax
        je public_6ed0f0e
        mov esi, dword ptr ss : [esp+0x18]
        mov ecx, 0x24
        rep movsd
        public_6ed0f0e : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ed0ed0)
    }
}

#undef public_6ed0ef1
#undef public_6ed0f0e
