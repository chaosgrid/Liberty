#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7960);
CLANG_FORWARD_PROC_SYMBOL(public_6ef7f40);

#define public_6ef7973 _public_6ef7973
#define public_6ef798f _public_6ef798f

PROC_DECLARE(0x6ef7960, internal_6ef7960, public_6ef7960);
extern "C" NAKED register_t __cdecl internal_6ef7960()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_6ef798f
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_6ef7973 : nop
        push esi
        push edi
        call public_6ef7f40
        add esi, 0x38
        add esp, 8
        add edi, 0x38
        cmp esi, ebx
        jne public_6ef7973
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_6ef798f : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ef7960)
    }
}

#undef public_6ef7973
#undef public_6ef798f
