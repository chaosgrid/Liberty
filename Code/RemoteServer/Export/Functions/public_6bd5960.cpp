#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd5960);

#define public_6bd5971 _public_6bd5971
#define public_6bd5982 _public_6bd5982

PROC_DECLARE(0x6bd5960, internal_6bd5960, public_6bd5960);
extern "C" NAKED register_t __cdecl internal_6bd5960()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6bd5982
        push esi
        public_6bd5971 : nop
        mov si, word ptr ds : [ecx]
        mov word ptr ds : [eax], si
        add ecx, 2
        add eax, 2
        cmp ecx, edx
        jne public_6bd5971
        pop esi
        public_6bd5982 : nop
        ret 
        UNREACHABLE_TRAP(0x6bd5960)
    }
}

#undef public_6bd5971
#undef public_6bd5982
