#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62af400);

#define public_62b5cf6 _public_62b5cf6

PROC_DECLARE(0x62b5cd0, internal_62b5cd0, public_62b5cd0);
extern "C" NAKED register_t __cdecl internal_62b5cd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, ecx
        call public_62af400
        mov eax, dword ptr ds : [esi+0xE0]
        test eax, eax
        jne public_62b5cf6
        mov ecx, dword ptr ds : [esi+0x88]
        mov edx, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [esi+0xE0], edx
        public_62b5cf6 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62b5cd0)
    }
}

#undef public_62b5cf6
