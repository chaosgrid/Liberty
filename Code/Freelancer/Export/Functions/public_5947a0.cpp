#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5947a0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5947be _public_5947be
#define public_5947d8 _public_5947d8

PROC_DECLARE(0x5947a0, internal_5947a0, public_5947a0);
extern "C" NAKED register_t __cdecl internal_5947a0()
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
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_5947be
        mov edi, eax
        public_5947be : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_5947d8
        mov edx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        public_5947d8 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x5947a0)
    }
}

#undef public_5947be
#undef public_5947d8
