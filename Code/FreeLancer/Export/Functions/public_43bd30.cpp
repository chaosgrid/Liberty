#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_43bd30);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_43bd4e _public_43bd4e
#define public_43bd7a _public_43bd7a

PROC_DECLARE(0x43bd30, internal_43bd30, public_43bd30);
extern "C" NAKED register_t __cdecl internal_43bd30()
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
        call public_5b7e84
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_43bd4e
        mov edi, eax
        public_43bd4e : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_43bd7a
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], esi
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], esi
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], edx
        public_43bd7a : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x43bd30)
    }
}

#undef public_43bd4e
#undef public_43bd7a
