#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6267db0);

#define public_6267dc1 _public_6267dc1
#define public_6267dcb _public_6267dcb
#define public_6267dd6 _public_6267dd6

PROC_DECLARE(0x6267db0, internal_6267db0, public_6267db0);
extern "C" NAKED register_t __cdecl internal_6267db0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6267dd6
        push esi
        public_6267dc1 : nop
        test eax, eax
        je public_6267dcb
        mov si, word ptr ds : [ecx]
        mov word ptr ds : [eax], si
        public_6267dcb : nop
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6267dc1
        pop esi
        public_6267dd6 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6267db0)
    }
}

#undef public_6267dc1
#undef public_6267dcb
#undef public_6267dd6
