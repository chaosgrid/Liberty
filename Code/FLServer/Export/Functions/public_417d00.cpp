#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417d00);

#define public_417d13 _public_417d13
#define public_417d1b _public_417d1b
#define public_417d22 _public_417d22

PROC_DECLARE(0x417d00, internal_417d00, public_417d00);
extern "C" NAKED register_t __cdecl internal_417d00()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jbe public_417d22
        mov edx, dword ptr ss : [esp+0xC]
        mov ecx, eax
        mov eax, dword ptr ss : [esp+4]
        push esi
        public_417d13 : nop
        test eax, eax
        je public_417d1b
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [eax], esi
        public_417d1b : nop
        add eax, 4
        dec ecx
        jne public_417d13
        pop esi
        public_417d22 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x417d00)
    }
}

#undef public_417d13
#undef public_417d1b
#undef public_417d22
