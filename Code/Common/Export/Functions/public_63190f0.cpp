#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62baf00);
CLANG_FORWARD_PROC_SYMBOL(public_63190f0);

#define public_6319103 _public_6319103
#define public_6319115 _public_6319115

PROC_DECLARE(0x63190f0, internal_63190f0, public_63190f0);
extern "C" NAKED register_t __cdecl internal_63190f0()
{
    __asm
    {
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        test edi, edi
        jbe public_6319115
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        public_6319103 : nop
        push ebx
        push esi
        call public_62baf00
        add esp, 8
        add esi, 0x10
        dec edi
        jne public_6319103
        pop esi
        pop ebx
        public_6319115 : nop
        pop edi
        ret 0xC
        UNREACHABLE_TRAP(0x63190f0)
    }
}

#undef public_6319103
#undef public_6319115
