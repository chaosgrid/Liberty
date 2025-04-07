#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e20);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d41e3e _public_6d41e3e
#define public_6d41e5a _public_6d41e5a

PROC_DECLARE(0x6d41e20, internal_6d41e20, public_6d41e20);
extern "C" NAKED register_t __cdecl internal_6d41e20()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        mov ebx, ecx
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d41e3e
        mov edi, eax
        public_6d41e3e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6d41e5a
        mov edx, dword ptr ss : [esp+0x18]
        mov dx, word ptr ds : [edx]
        mov word ptr ds : [ecx], dx
        public_6d41e5a : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d41e20)
    }
}

#undef public_6d41e3e
#undef public_6d41e5a
