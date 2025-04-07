#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d05d90);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d05dae _public_6d05dae
#define public_6d05dc8 _public_6d05dc8

PROC_DECLARE(0x6d05d90, internal_6d05d90, public_6d05d90);
extern "C" NAKED register_t __cdecl internal_6d05d90()
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
        jne public_6d05dae
        mov edi, eax
        public_6d05dae : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_6d05dc8
        mov edx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        public_6d05dc8 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d05d90)
    }
}

#undef public_6d05dae
#undef public_6d05dc8
