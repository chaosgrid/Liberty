#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_418d38);

#define public_40d3de _public_40d3de

PROC_DECLARE(0x40d3b0, internal_40d3b0, public_40d3b0);
extern "C" NAKED register_t __cdecl internal_40d3b0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x20]
        call public_418d38
        mov ecx, dword ptr ds : [esi+0xB90]
        mov esi, dword ptr ss : [esp+8]
        cmp eax, ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        jne public_40d3de
        push 0
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+8]
        pop esi
        ret 4
        public_40d3de : nop
        push 1
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [edx+8]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x40d3b0)
    }
}

#undef public_40d3de
