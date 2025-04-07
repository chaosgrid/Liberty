#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f400e0);

#define public_6f400f0 _public_6f400f0
#define public_6f40110 _public_6f40110

PROC_DECLARE(0x6f400e0, internal_6f400e0, public_6f400e0);
extern "C" NAKED register_t __cdecl internal_6f400e0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        mov ecx, edi
        lea esp, ss:[esp]
        public_6f400f0 : nop
        sub ecx, 4
        test esi, esi
        je public_6f40110
        mov eax, dword ptr ds : [ecx]
        test eax, eax
        je public_6f40110
        mov edx, dword ptr ds : [esi+0x10]
        cmp edx, dword ptr ds : [eax+0x10]
        setl dl
        test dl, dl
        je public_6f40110
        mov dword ptr ds : [edi], eax
        mov edi, ecx
        jmp public_6f400f0
        public_6f40110 : nop
        mov dword ptr ds : [edi], esi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f400e0)
    }
}

#undef public_6f400f0
#undef public_6f40110
