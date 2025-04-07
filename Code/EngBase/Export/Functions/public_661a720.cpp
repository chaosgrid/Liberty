#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66281d0);

#define public_661a72f _public_661a72f
#define public_661a748 _public_661a748

PROC_DECLARE(0x661a720, internal_661a720, public_661a720);
extern "C" NAKED register_t __cdecl internal_661a720()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jbe public_661a72f
        dec eax
        mov dword ptr ds : [ecx+4], eax
        public_661a72f : nop
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        jne public_661a748
        push ecx
        mov dword ptr ds : [ecx+4], 1
        call public_66281d0
        add esp, 4
        xor eax, eax
        public_661a748 : nop
        ret 4
        UNREACHABLE_TRAP(0x661a720)
    }
}

#undef public_661a72f
#undef public_661a748
