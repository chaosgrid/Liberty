#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d43130);

#define public_6d43150 _public_6d43150
#define public_6d43154 _public_6d43154

PROC_DECLARE(0x6d43130, internal_6d43130, public_6d43130);
extern "C" NAKED register_t __cdecl internal_6d43130()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ax, word ptr ds : [edx]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov cx, word ptr ds : [esi]
        cmp cx, ax
        ja public_6d43154
        jb public_6d43150
        mov ax, word ptr ds : [edx+2]
        cmp ax, word ptr ds : [esi+2]
        jb public_6d43154
        public_6d43150 : nop
        xor eax, eax
        pop esi
        ret 
        public_6d43154 : nop
        mov eax, 1
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d43130)
    }
}

#undef public_6d43150
#undef public_6d43154
