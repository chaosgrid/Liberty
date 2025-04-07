#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4e5d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4fe10);

#define public_6f4e5f2 _public_6f4e5f2
#define public_6f4e5fd _public_6f4e5fd

PROC_DECLARE(0x6f4e5d0, internal_6f4e5d0, public_6f4e5d0);
extern "C" NAKED register_t __cdecl internal_6f4e5d0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov eax, esi
        shl eax, 5
        push eax
        push 0
        call public_6f4fe10
        add esp, 8
        test esi, esi
        jle public_6f4e5fd
        mov edx, esi
        mov ecx, eax
        mov esi, 0xFFFFFFFA
        public_6f4e5f2 : nop
        mov dword ptr ds : [ecx+0x10], esi
        mov dword ptr ds : [ecx], esi
        add ecx, 0x20
        dec edx
        jne public_6f4e5f2
        public_6f4e5fd : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4e5d0)
    }
}

#undef public_6f4e5f2
#undef public_6f4e5fd
