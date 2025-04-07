#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_62361f9 _public_62361f9

PROC_DECLARE(0x62361d0, internal_62361d0, public_62361d0);
extern "C" NAKED register_t __cdecl internal_62361d0()
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
        jne public_62361f9
        push esi
        push edi
/*FIXUP push offset public_62569c8 @0x62361ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62569c8
        mov ecx, ebx
        call public_623f920
        public_62361f9 : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62361d0)
    }
}

#undef public_62361f9
