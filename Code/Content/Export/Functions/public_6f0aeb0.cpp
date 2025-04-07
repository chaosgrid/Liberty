#include "Content-PCH.h"


#define public_6f0aec6 _public_6f0aec6
#define public_6f0aec8 _public_6f0aec8

PROC_DECLARE(0x6f0aeb0, internal_6f0aeb0, public_6f0aeb0);
extern "C" NAKED register_t __cdecl internal_6f0aeb0()
{
    __asm
    {
        mov al, byte ptr ss : [esp+4]
        test al, al
        mov byte ptr ds : [ecx+0x25], al
        je public_6f0aec6
        mov al, byte ptr ds : [ecx+0x24]
        test al, al
        je public_6f0aec6
        mov al, 1
        jmp public_6f0aec8
        public_6f0aec6 : nop
        xor al, al
        public_6f0aec8 : nop
        mov ecx, dword ptr ds : [ecx+0x30]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [edx+0x1C]
        UNREACHABLE_TRAP(0x6f0aeb0)
    }
}

#undef public_6f0aec6
#undef public_6f0aec8
