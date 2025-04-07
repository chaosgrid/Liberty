#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_6224839 _public_6224839

PROC_DECLARE(0x6224810, internal_6224810, public_6224810);
extern "C" NAKED register_t __cdecl internal_6224810()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        mov esi, dword ptr ss : [esp+0x14]
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebx
        call public_6244320
        test eax, eax
        jne public_6224839
        push esi
        push edi
/*FIXUP push offset public_6256298 @0x622482d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256298
        mov ecx, ebx
        call public_623f920
        public_6224839 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6224810)
    }
}

#undef public_6224839
