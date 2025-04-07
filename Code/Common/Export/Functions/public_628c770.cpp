#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bc60);

#define public_628c797 _public_628c797

PROC_DECLARE(0x628c770, internal_628c770, public_628c770);
extern "C" NAKED register_t __cdecl internal_628c770()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push esi
        push edi
        call public_634bc60
        mov ecx, dword ptr ds : [public_63fc0c0]
        test ecx, ecx
        je public_628c797
        cmp eax, 1
        jne public_628c797
        push esi
        push edi
        call ecx
        add esp, 8
        public_628c797 : nop
        pop edi
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x628c770)
    }
}

#undef public_628c797
