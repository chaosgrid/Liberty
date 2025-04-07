#include "Common-PCH.h"


#define public_6308921 _public_6308921

PROC_DECLARE(0x6308900, internal_6308900, public_6308900);
extern "C" NAKED register_t __cdecl internal_6308900()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x21]
        test al, al
        je public_6308921
        mov eax, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ds : [ecx+8], eax
        mov eax, dword ptr ds : [ecx+0x1C]
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ds : [ecx+0x18], eax
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [ecx+0x21], 0
        public_6308921 : nop
        ret 
        UNREACHABLE_TRAP(0x6308900)
    }
}

#undef public_6308921
