#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f33a0);

#define public_65f33b0 _public_65f33b0
#define public_65f33bb _public_65f33bb

PROC_DECLARE(0x65f33a0, internal_65f33a0, public_65f33a0);
extern "C" NAKED register_t __cdecl internal_65f33a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        jne public_65f33bb
        lea ecx, ds:[ecx]
        public_65f33b0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov dl, byte ptr ds : [ecx+0x15]
        test dl, dl
        je public_65f33b0
        public_65f33bb : nop
        ret 
        UNREACHABLE_TRAP(0x65f33a0)
    }
}

#undef public_65f33b0
#undef public_65f33bb
