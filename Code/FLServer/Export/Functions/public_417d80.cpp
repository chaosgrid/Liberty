#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417d80);

#define public_417d90 _public_417d90

PROC_DECLARE(0x417d80, internal_417d80, public_417d80);
extern "C" NAKED register_t __cdecl internal_417d80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_417d90
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edx
        public_417d90 : nop
        ret 
        UNREACHABLE_TRAP(0x417d80)
    }
}

#undef public_417d90
