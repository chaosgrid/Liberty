#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5bb80);

#define public_6d55fc6 _public_6d55fc6

PROC_DECLARE(0x6d55fa0, internal_6d55fa0, public_6d55fa0);
extern "C" NAKED register_t __cdecl internal_6d55fa0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [public_6d90260]
        imul eax, 0x418
        mov ecx, dword ptr ds : [eax+ecx-0x14]
        test ecx, ecx
        je public_6d55fc6
        call public_6d5bb80
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ds : [edx], eax
        xor eax, eax
        ret 
        public_6d55fc6 : nop
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], 1
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6d55fa0)
    }
}

#undef public_6d55fc6
