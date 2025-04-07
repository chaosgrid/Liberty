#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_622b7a9 _public_622b7a9

PROC_DECLARE(0x622b780, internal_622b780, public_622b780);
extern "C" NAKED register_t __cdecl internal_622b780()
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
        jne public_622b7a9
        push esi
        push edi
/*FIXUP push offset public_62565b8 @0x622b79d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62565b8
        mov ecx, ebx
        call public_623f920
        public_622b7a9 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x622b780)
    }
}

#undef public_622b7a9
