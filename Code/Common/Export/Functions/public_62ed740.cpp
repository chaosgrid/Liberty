#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ed740);

#define public_62ed76f _public_62ed76f

PROC_DECLARE(0x62ed740, internal_62ed740, public_62ed740);
extern "C" NAKED register_t __cdecl internal_62ed740()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x48]
        xor edx, edx
        cmp al, dl
        je public_62ed76f
        fld dword ptr ss : [esp+4]
        fadd dword ptr ds : [ecx+0x4C]
        fst dword ptr ds : [ecx+0x4C]
        fcomp dword ptr ds : [public_63a0814]
        fnstsw ax
        test ah, 0x41
        jne public_62ed76f
        mov dword ptr ds : [ecx+0x4C], edx
        mov dword ptr ds : [ecx+0x44], edx
        mov dword ptr ds : [ecx+0x40], edx
        mov dword ptr ds : [ecx+0x3C], edx
        mov byte ptr ds : [ecx+0x48], dl
        public_62ed76f : nop
        ret 4
        UNREACHABLE_TRAP(0x62ed740)
    }
}

#undef public_62ed76f
