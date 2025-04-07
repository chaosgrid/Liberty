#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bde990);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6bde88d _public_6bde88d

PROC_DECLARE(0x6bde870, internal_6bde870, public_6bde870);
extern "C" NAKED register_t __cdecl internal_6bde870()
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
        call public_6c09d26
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_6bde88d
        mov ebx, eax
        public_6bde88d : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6bde990
        mov eax, dword ptr ds : [esi+0x30]
        add esp, 8
        inc eax
        pop edi
        mov dword ptr ds : [esi+0x30], eax
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6bde870)
    }
}

#undef public_6bde88d
