#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fcea0);
CLANG_FORWARD_PROC_SYMBOL(public_4fd480);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4fcebd _public_4fcebd

PROC_DECLARE(0x4fcea0, internal_4fcea0, public_4fcea0);
extern "C" NAKED register_t __cdecl internal_4fcea0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov ebx, dword ptr ds : [edi+4]
        push 0x18
        call public_5b7e84
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_4fcebd
        mov ebx, eax
        public_4fcebd : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_4fd480
        mov eax, dword ptr ds : [esi+8]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x4fcea0)
    }
}

#undef public_4fcebd
