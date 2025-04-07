#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417cd0);

#define public_417ce1 _public_417ce1
#define public_417ce9 _public_417ce9
#define public_417cf4 _public_417cf4

PROC_DECLARE(0x417cd0, internal_417cd0, public_417cd0);
extern "C" NAKED register_t __cdecl internal_417cd0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ss : [esp+8]
        cmp ecx, edx
        mov eax, dword ptr ss : [esp+0xC]
        je public_417cf4
        push esi
        public_417ce1 : nop
        test eax, eax
        je public_417ce9
        mov esi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], esi
        public_417ce9 : nop
        add ecx, 4
        add eax, 4
        cmp ecx, edx
        jne public_417ce1
        pop esi
        public_417cf4 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x417cd0)
    }
}

#undef public_417ce1
#undef public_417ce9
#undef public_417cf4
