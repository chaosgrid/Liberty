#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628efc0);
CLANG_FORWARD_PROC_SYMBOL(public_6290530);

#define public_628efd3 _public_628efd3
#define public_628efef _public_628efef

PROC_DECLARE(0x628efc0, internal_628efc0, public_628efc0);
extern "C" NAKED register_t __cdecl internal_628efc0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, ebx
        je public_628efef
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        public_628efd3 : nop
        push esi
        push edi
        call public_6290530
        add esi, 8
        add esp, 8
        add edi, 8
        cmp esi, ebx
        jne public_628efd3
        mov eax, edi
        pop edi
        pop esi
        pop ebx
        ret 0xC
        public_628efef : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x628efc0)
    }
}

#undef public_628efd3
#undef public_628efef
