#include "THORN-PCH.h"


#define public_6f4517c _public_6f4517c

PROC_DECLARE(0x6f45160, internal_6f45160, public_6f45160);
extern "C" NAKED register_t __cdecl internal_6f45160()
{
    __asm
    {
        mov dl, byte ptr ds : [ecx+0x30]
        mov al, 1
        test al, dl
        je public_6f4517c
        fld dword ptr ds : [ecx+0x58]
        mov dword ptr ds : [ecx+0x1C], 0xFFFFFFFF
        fsub dword ptr ds : [ecx+0x54]
        fstp dword ptr ds : [ecx+0x5C]
        ret 8
        public_6f4517c : nop
        fld dword ptr ds : [ecx+0x58]
        mov edx, dword ptr ds : [ecx+0x40]
        fsub dword ptr ds : [ecx+0x54]
        add edx, dword ptr ds : [ecx+0x2C]
        fstp dword ptr ds : [ecx+0x5C]
        mov dword ptr ds : [ecx+0x1C], edx
        ret 8
        UNREACHABLE_TRAP(0x6f45160)
    }
}

#undef public_6f4517c
