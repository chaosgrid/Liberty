#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd56d0);

#define public_6bd56e1 _public_6bd56e1
#define public_6bd56e9 _public_6bd56e9
#define public_6bd56f4 _public_6bd56f4

PROC_DECLARE(0x6bd56d0, internal_6bd56d0, public_6bd56d0);
extern "C" NAKED register_t __cdecl internal_6bd56d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_6bd56f4
        push esi
        public_6bd56e1 : nop
        test eax, eax
        je public_6bd56e9
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_6bd56e9 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_6bd56e1
        pop esi
        public_6bd56f4 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6bd56d0)
    }
}

#undef public_6bd56e1
#undef public_6bd56e9
#undef public_6bd56f4
