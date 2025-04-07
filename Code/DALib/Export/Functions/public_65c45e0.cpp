#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c45e0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

#define public_65c45fe _public_65c45fe
#define public_65c4618 _public_65c4618

PROC_DECLARE(0x65c45e0, internal_65c45e0, public_65c45e0);
extern "C" NAKED register_t __cdecl internal_65c45e0()
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
        call public_65c6a66
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_65c45fe
        mov edi, eax
        public_65c45fe : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        lea ecx, ds:[eax+8]
        test ecx, ecx
        je public_65c4618
        mov edx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], edx
        public_65c4618 : nop
        inc dword ptr ds : [ebx+8]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        mov eax, ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65c45e0)
    }
}

#undef public_65c45fe
#undef public_65c4618
