#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63691b0);

#define public_63691c6 _public_63691c6
#define public_63691de _public_63691de
#define public_63691e4 _public_63691e4

PROC_DECLARE(0x63691b0, internal_63691b0, public_63691b0);
extern "C" NAKED register_t __cdecl internal_63691b0()
{
    __asm
    {
        fld dword ptr ds : [public_63a53d4]
        xor edx, edx
        mov dx, word ptr ds : [ecx+0x26]
        dec edx
        js public_63691e4
        mov eax, dword ptr ds : [ecx+0x28]
        lea eax, ds:[eax+edx*4]
        inc edx
        public_63691c6 : nop
        mov ecx, dword ptr ds : [eax]
        test byte ptr ds : [ecx], 0xC
        jne public_63691de
        fld dword ptr ds : [ecx+0x20]
        fmul dword ptr ds : [public_63a58a4]
        fmul dword ptr ds : [public_63a5464]
        faddp 
        public_63691de : nop
        sub eax, 4
        dec edx
        jne public_63691c6
        public_63691e4 : nop
        ret 
        UNREACHABLE_TRAP(0x63691b0)
    }
}

#undef public_63691c6
#undef public_63691de
#undef public_63691e4
