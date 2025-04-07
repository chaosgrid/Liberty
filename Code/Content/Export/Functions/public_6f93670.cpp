#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f93670);

#define public_6f93678 _public_6f93678

PROC_DECLARE(0x6f93670, internal_6f93670, public_6f93670);
extern "C" NAKED register_t __cdecl internal_6f93670()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_6f93678
        ret 
        public_6f93678 : nop
        mov ecx, dword ptr ds : [ecx+0xC]
        sub ecx, eax
        mov eax, 0x3E0F83E1
        imul ecx
        sar edx, 6
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov eax, edx
        ret 
        UNREACHABLE_TRAP(0x6f93670)
    }
}

#undef public_6f93678
