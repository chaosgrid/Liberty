#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f7ae20);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f7ae3e _public_6f7ae3e
#define public_6f7ae6a _public_6f7ae6a

PROC_DECLARE(0x6f7ae20, internal_6f7ae20, public_6f7ae20);
extern "C" NAKED register_t __cdecl internal_6f7ae20()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0x18
        mov ebx, ecx
        call public_6fa912a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f7ae3e
        mov edi, eax
        public_6f7ae3e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6f7ae6a
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        public_6f7ae6a : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f7ae20)
    }
}

#undef public_6f7ae3e
#undef public_6f7ae6a
