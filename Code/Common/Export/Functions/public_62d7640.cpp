#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d7640);

#define public_62d767d _public_62d767d

PROC_DECLARE(0x62d7640, internal_62d7640, public_62d7640);
extern "C" NAKED register_t __cdecl internal_62d7640()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [edx]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62d767d
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62d767d
        fld dword ptr ds : [edx+8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62d767d
        mov byte ptr ds : [ecx+0xAD], 0
        ret 4
        public_62d767d : nop
        mov byte ptr ds : [ecx+0xAD], 1
        mov eax, dword ptr ds : [edx]
        add ecx, 0xB0
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx+4], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        ret 4
        UNREACHABLE_TRAP(0x62d7640)
    }
}

#undef public_62d767d
