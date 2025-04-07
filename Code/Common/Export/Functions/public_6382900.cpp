#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6382900);

#define public_6382918 _public_6382918
#define public_6382926 _public_6382926

PROC_DECLARE(0x6382900, internal_6382900, public_6382900);
extern "C" NAKED register_t __cdecl internal_6382900()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        test edx, edx
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0xC]
        fld qword ptr ds : [ecx]
        je public_6382926
        mov ecx, dword ptr ss : [esp+8]
        sub ecx, eax
        public_6382918 : nop
        fld qword ptr ds : [ecx+eax]
        add eax, 8
        dec edx
        fmul qword ptr ds : [eax-8]
        faddp 
        jne public_6382918
        public_6382926 : nop
        ret 
        UNREACHABLE_TRAP(0x6382900)
    }
}

#undef public_6382918
#undef public_6382926
