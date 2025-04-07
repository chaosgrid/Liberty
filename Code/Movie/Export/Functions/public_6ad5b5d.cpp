#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad0953);
CLANG_FORWARD_PROC_SYMBOL(public_6ad5b5d);

#define public_6ad5b86 _public_6ad5b86
#define public_6ad5b97 _public_6ad5b97

PROC_DECLARE(0x6ad5b5d, internal_6ad5b5d, public_6ad5b5d);
extern "C" NAKED register_t __cdecl internal_6ad5b5d()
{
    __asm
    {
        inc dword ptr ds : [public_6ae1098]
        push 0x1000
        call public_6ad0953
        pop ecx
        mov ecx, dword ptr ss : [esp+4]
        test eax, eax
        mov dword ptr ds : [ecx+8], eax
        je public_6ad5b86
        or dword ptr ds : [ecx+0xC], 8
        mov dword ptr ds : [ecx+0x18], 0x1000
        jmp public_6ad5b97
        public_6ad5b86 : nop
        or dword ptr ds : [ecx+0xC], 4
        lea eax, ds:[ecx+0x14]
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [ecx+0x18], 2
        public_6ad5b97 : nop
        mov eax, dword ptr ds : [ecx+8]
        and dword ptr ds : [ecx+4], 0
        mov dword ptr ds : [ecx], eax
        ret 
        UNREACHABLE_TRAP(0x6ad5b5d)
    }
}

#undef public_6ad5b86
#undef public_6ad5b97
