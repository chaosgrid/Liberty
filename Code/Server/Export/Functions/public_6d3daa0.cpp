#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1baa0);
CLANG_FORWARD_PROC_SYMBOL(public_6d3daa0);

#define public_6d3dabd _public_6d3dabd
#define public_6d3dad7 _public_6d3dad7

PROC_DECLARE(0x6d3daa0, internal_6d3daa0, public_6d3daa0);
extern "C" NAKED register_t __cdecl internal_6d3daa0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx]
        push 0xC
        call public_6d1baa0
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d3dabd
        mov edi, eax
        public_6d3dabd : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6d3dad7
        mov edx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        public_6d3dad7 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d3daa0)
    }
}

#undef public_6d3dabd
#undef public_6d3dad7
