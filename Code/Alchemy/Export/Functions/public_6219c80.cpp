#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_6219ca9 _public_6219ca9

PROC_DECLARE(0x6219c80, internal_6219c80, public_6219c80);
extern "C" NAKED register_t __cdecl internal_6219c80()
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
        call public_623f960
        test eax, eax
        jne public_6219ca9
        push esi
        push edi
/*FIXUP push offset public_6255d78 @0x6219c9d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255d78
        mov ecx, ebx
        call public_623f920
        public_6219ca9 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6219c80)
    }
}

#undef public_6219ca9
