#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6be3120);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);

#define public_6be3158 _public_6be3158

PROC_DECLARE(0x6be3120, internal_6be3120, public_6be3120);
extern "C" NAKED register_t __cdecl internal_6be3120()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        test ebx, ebx
        push ebp
        push esi
        mov ebp, ecx
        jbe public_6be3158
        mov esi, dword ptr ss : [esp+0x10]
        test esi, esi
        je public_6be3158
        push edi
        push ebx
        call public_6c09d26
        mov dword ptr ss : [ebp+0x34], eax
        mov ecx, ebx
        mov edi, eax
        mov eax, ecx
        shr ecx, 2
        rep movsd
        add esp, 4
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov dword ptr ss : [ebp+0x28], ebx
        pop edi
        public_6be3158 : nop
        pop esi
        pop ebp
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x6be3120)
    }
}

#undef public_6be3158
