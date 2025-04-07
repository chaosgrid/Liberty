#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630df60);

#define public_6313807 _public_6313807
#define public_6313824 _public_6313824

PROC_DECLARE(0x63137f0, internal_63137f0, public_63137f0);
extern "C" NAKED register_t __cdecl internal_63137f0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, 8
        mov dword ptr ds : [ecx], edx
        jne public_6313807
        mov dword ptr ds : [ecx+4], edx
        ret 
        public_6313807 : nop
        cmp edx, 1
        jne public_6313824
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [ecx+4], edx
        add ecx, 8
        push eax
        push ecx
        mov ecx, dword ptr ss : [esp+0x10]
        call public_630df60
        add eax, 8
        public_6313824 : nop
        ret 
        UNREACHABLE_TRAP(0x63137f0)
    }
}

#undef public_6313807
#undef public_6313824
