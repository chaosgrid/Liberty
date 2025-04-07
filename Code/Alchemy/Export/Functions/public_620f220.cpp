#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_620f249 _public_620f249

PROC_DECLARE(0x620f220, internal_620f220, public_620f220);
extern "C" NAKED register_t __cdecl internal_620f220()
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
        jne public_620f249
        push esi
        push edi
/*FIXUP push offset public_6255918 @0x620f23d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255918
        mov ecx, ebx
        call public_623f920
        public_620f249 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x620f220)
    }
}

#undef public_620f249
