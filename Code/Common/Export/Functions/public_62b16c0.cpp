#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_62b16c0);

#define public_62b16f5 _public_62b16f5

PROC_DECLARE(0x62b16c0, internal_62b16c0, public_62b16c0);
extern "C" NAKED register_t __cdecl internal_62b16c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        mov dword ptr ds : [ecx+0x29C], eax
        push 0x20000
        add ecx, 0xE4
        call public_629b720
        mov esi, eax
        test esi, esi
        je public_62b16f5
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        jne public_62b16f5
        mov eax, dword ptr ds : [esi]
        push 1
        mov ecx, esi
        call dword ptr ds : [eax+0x30]
        public_62b16f5 : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x62b16c0)
    }
}

#undef public_62b16f5
