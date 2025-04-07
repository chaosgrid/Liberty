#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d1f50d _public_6d1f50d
#define public_6d1f527 _public_6d1f527

PROC_DECLARE(0x6d1f4f0, internal_6d1f4f0, public_6d1f4f0);
extern "C" NAKED register_t __cdecl internal_6d1f4f0()
{
    __asm
    {
        push ebx
        push esi
        mov ebx, ecx
        mov esi, dword ptr ds : [ebx+4]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6d60012
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6d1f50d
        mov edi, eax
        public_6d1f50d : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6d1f527
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ds : [eax], ecx
        public_6d1f527 : nop
        mov eax, dword ptr ds : [ebx+8]
        pop edi
        inc eax
        pop esi
        mov dword ptr ds : [ebx+8], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d1f4f0)
    }
}

#undef public_6d1f50d
#undef public_6d1f527
