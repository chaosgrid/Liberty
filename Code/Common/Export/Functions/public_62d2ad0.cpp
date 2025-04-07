#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d2ad0);

#define public_62d2ae1 _public_62d2ae1

PROC_DECLARE(0x62d2ad0, internal_62d2ad0, public_62d2ad0);
extern "C" NAKED register_t __cdecl internal_62d2ad0()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+0x110]
        test ecx, ecx
        je public_62d2ae1
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+0x10]
        public_62d2ae1 : nop
        mov eax, dword ptr ds : [eax+8]
        add eax, 0x14FC
        mov eax, dword ptr ds : [eax+0x84]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0xBC]
        xor al, al
        ret 0x18
        UNREACHABLE_TRAP(0x62d2ad0)
    }
}

#undef public_62d2ae1
