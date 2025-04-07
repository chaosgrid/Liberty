#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f70);
CLANG_FORWARD_PROC_SYMBOL(public_6344cf0);

#define public_6344d19 _public_6344d19

PROC_DECLARE(0x6344cf0, internal_6344cf0, public_6344cf0);
extern "C" NAKED register_t __cdecl internal_6344cf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov esi, ecx
        xor ecx, ecx
        cmp eax, ecx
        mov word ptr ds : [esi], ax
        mov word ptr ds : [esi+2], cx
        je public_6344d19
        shl eax, 2
        push eax
        call public_6343f70
        mov dword ptr ds : [esi+4], eax
        add esp, 4
        mov eax, esi
        pop esi
        ret 4
        public_6344d19 : nop
        mov dword ptr ds : [esi+4], ecx
        mov eax, esi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6344cf0)
    }
}

#undef public_6344d19
