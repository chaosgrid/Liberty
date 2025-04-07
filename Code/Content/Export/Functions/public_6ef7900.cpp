#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef7900);

#define public_6ef7908 _public_6ef7908

PROC_DECLARE(0x6ef7900, internal_6ef7900, public_6ef7900);
extern "C" NAKED register_t __cdecl internal_6ef7900()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6ef7908
        ret 
        public_6ef7908 : nop
        mov ecx, dword ptr ds : [ecx+8]
        sub ecx, eax
        mov eax, 0x92492493
        imul ecx
        add edx, ecx
        sar edx, 5
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6ef7900)
    }
}

#undef public_6ef7908
