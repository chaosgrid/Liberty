#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6267de0);

#define public_6267df3 _public_6267df3
#define public_6267dfd _public_6267dfd
#define public_6267e04 _public_6267e04

PROC_DECLARE(0x6267de0, internal_6267de0, public_6267de0);
extern "C" NAKED register_t __cdecl internal_6267de0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_6267e04
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_6267df3 : nop
        test eax, eax
        je public_6267dfd
        mov si, word ptr ds : [edx]
        mov word ptr ds : [eax], si
        public_6267dfd : nop
        add eax, 2
        dec ecx
        jne public_6267df3
        pop esi
        public_6267e04 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6267de0)
    }
}

#undef public_6267df3
#undef public_6267dfd
#undef public_6267e04
