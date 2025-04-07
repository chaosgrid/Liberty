#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_62158f9 _public_62158f9

PROC_DECLARE(0x62158d0, internal_62158d0, public_62158d0);
extern "C" NAKED register_t __cdecl internal_62158d0()
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
        jne public_62158f9
        push esi
        push edi
/*FIXUP push offset public_6255b70 @0x62158ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6255b70
        mov ecx, ebx
        call public_623f920
        public_62158f9 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62158d0)
    }
}

#undef public_62158f9
