#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62bbb20);

#define public_62bbb49 _public_62bbb49

PROC_DECLARE(0x62bbb20, internal_62bbb20, public_62bbb20);
extern "C" NAKED register_t __cdecl internal_62bbb20()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        mov ax, word ptr ds : [edx]
        cmp ax, word ptr ds : [ecx]
        jne public_62bbb49
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [ecx+4]
        fnstsw ax
        test ah, 0x44
        jp public_62bbb49
        mov edx, dword ptr ds : [edx+8]
        cmp edx, dword ptr ds : [ecx+8]
        jne public_62bbb49
        mov eax, 1
        ret 4
        public_62bbb49 : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x62bbb20)
    }
}

#undef public_62bbb49
