#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6a640);

#define public_6f6a651 _public_6f6a651
#define public_6f6a660 _public_6f6a660

PROC_DECLARE(0x6f6a640, internal_6f6a640, public_6f6a640);
extern "C" NAKED register_t __cdecl internal_6f6a640()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6f6a660
        push esi
        public_6f6a651 : nop
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6f6a651
        pop esi
        public_6f6a660 : nop
        ret 
        UNREACHABLE_TRAP(0x6f6a640)
    }
}

#undef public_6f6a651
#undef public_6f6a660
