#include "Server-PCH.h"


#define public_6d2b5bc _public_6d2b5bc
#define public_6d2b5be _public_6d2b5be
#define public_6d2b5c6 _public_6d2b5c6
#define public_6d2b5d6 _public_6d2b5d6

PROC_DECLARE(0x6d2b590, internal_6d2b590, public_6d2b590);
extern "C" NAKED register_t __cdecl internal_6d2b590()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov dx, word ptr ds : [eax]
        test dx, dx
        je public_6d2b5d6
        cmp dx, 0xA
        je public_6d2b5d6
        mov ecx, dword ptr ds : [ecx+4]
        add eax, 2
        test ecx, ecx
        je public_6d2b5c6
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+8]
        push eax
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d2b5bc : nop
        je public_6d2b5d6
        public_6d2b5be : nop
        mov eax, 1
        ret 8
        public_6d2b5c6 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        je public_6d2b5be
        cmp dword ptr ds : [ecx+8], eax
        jmp public_6d2b5bc
        public_6d2b5d6 : nop
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6d2b590)
    }
}

#undef public_6d2b5bc
#undef public_6d2b5be
#undef public_6d2b5c6
#undef public_6d2b5d6
