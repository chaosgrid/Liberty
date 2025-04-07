#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb59a0);

#define public_6eb59e6 _public_6eb59e6

PROC_DECLARE(0x6eb59a0, internal_6eb59a0, public_6eb59a0);
extern "C" NAKED register_t __cdecl internal_6eb59a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [esi+0x14]
        or eax, 0xFFFFFFFF
        test edx, edx
        je public_6eb59e6
        mov esi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx+4]
        push edi
        mov edi, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push 0
        push edi
        mov edi, dword ptr ss : [esp+0x24]
        lea esi, ds:[esi+edi*2]
        mov edi, dword ptr ss : [esp+0x1C]
        push esi
        mov esi, dword ptr ss : [esp+0x24]
        push esi
        mov esi, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx]
        add esi, edi
        push esi
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x120]
        pop edi
        public_6eb59e6 : nop
        pop esi
        ret 0x1C
        UNREACHABLE_TRAP(0x6eb59a0)
    }
}

#undef public_6eb59e6
