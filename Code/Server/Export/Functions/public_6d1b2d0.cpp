#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b2d0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d1b2ee _public_6d1b2ee
#define public_6d1b30e _public_6d1b30e

PROC_DECLARE(0x6d1b2d0, internal_6d1b2d0, public_6d1b2d0);
extern "C" NAKED register_t __cdecl internal_6d1b2d0()
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
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d1b2ee
        mov edi, eax
        public_6d1b2ee : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6d1b30e
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], esi
        mov edx, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], edx
        public_6d1b30e : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d1b2d0)
    }
}

#undef public_6d1b2ee
#undef public_6d1b30e
