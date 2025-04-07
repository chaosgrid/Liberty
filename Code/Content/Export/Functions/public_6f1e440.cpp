#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e440);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f1e45e _public_6f1e45e
#define public_6f1e47e _public_6f1e47e

PROC_DECLARE(0x6f1e440, internal_6f1e440, public_6f1e440);
extern "C" NAKED register_t __cdecl internal_6f1e440()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        mov ebx, ecx
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f1e45e
        mov edi, eax
        public_6f1e45e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6f1e47e
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], esi
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], edx
        public_6f1e47e : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f1e440)
    }
}

#undef public_6f1e45e
#undef public_6f1e47e
