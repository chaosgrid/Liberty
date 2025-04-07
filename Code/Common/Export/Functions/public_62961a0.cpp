#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62961a0);

#define public_62961bb _public_62961bb

PROC_DECLARE(0x62961a0, internal_62961a0, public_62961a0);
extern "C" NAKED register_t __cdecl internal_62961a0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        test al, al
        je public_62961bb
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+0x20]
        lea ecx, ds:[esi+0x20]
        push eax
        call dword ptr ds : [edx+0x28]
        pop esi
        ret 
        public_62961bb : nop
        xor al, al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x62961a0)
    }
}

#undef public_62961bb
