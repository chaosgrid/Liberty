#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6359090);

#define public_63590a5 _public_63590a5

PROC_DECLARE(0x6359090, internal_6359090, public_6359090);
extern "C" NAKED register_t __cdecl internal_6359090()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+0x1A]
        cmp ax, word ptr ds : [ecx+0x18]
        push esi
        lea esi, ds:[ecx+0x18]
        jb public_63590a5
        mov ecx, esi
        call public_63441a0
        public_63590a5 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+8]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        mov dword ptr ds : [edx+ecx*4], eax
        inc word ptr ds : [esi+2]
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6359090)
    }
}

#undef public_63590a5
