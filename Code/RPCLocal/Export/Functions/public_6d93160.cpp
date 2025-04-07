#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d93160);
CLANG_FORWARD_PROC_SYMBOL(public_6d93280);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d9317d _public_6d9317d

PROC_DECLARE(0x6d93160, internal_6d93160, public_6d93160);
extern "C" NAKED register_t __cdecl internal_6d93160()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov edi, dword ptr ds : [esi+0x2C]
        mov ebx, dword ptr ds : [edi+4]
        push 0x50
        call public_6db1f8a
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6d9317d
        mov ebx, eax
        public_6d9317d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6d93280
        mov eax, dword ptr ds : [esi+0x30]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x30], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6d93160)
    }
}

#undef public_6d9317d
