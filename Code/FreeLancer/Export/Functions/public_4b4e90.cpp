#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b4e90);

#define public_4b4ea5 _public_4b4ea5
#define public_4b4eb4 _public_4b4eb4
#define public_4b4ebd _public_4b4ebd

PROC_DECLARE(0x4b4e90, internal_4b4e90, public_4b4e90);
extern "C" NAKED register_t __cdecl internal_4b4e90()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_4b4ebd
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov edx, eax
        mov eax, dword ptr ss : [esp+0xC]
        push edi
        public_4b4ea5 : nop
        test eax, eax
        je public_4b4eb4
        mov ecx, 8
        mov esi, ebx
        mov edi, eax
        rep movsd
        public_4b4eb4 : nop
        add eax, 0x20
        dec edx
        jne public_4b4ea5
        pop edi
        pop esi
        pop ebx
        public_4b4ebd : nop
        ret 0xC
        UNREACHABLE_TRAP(0x4b4e90)
    }
}

#undef public_4b4ea5
#undef public_4b4eb4
#undef public_4b4ebd
