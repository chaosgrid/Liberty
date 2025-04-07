#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62369d0);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_623f960);

#define public_62369fc _public_62369fc

PROC_DECLARE(0x62369d0, internal_62369d0, public_62369d0);
extern "C" NAKED register_t __cdecl internal_62369d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esi, ds:[eax+4]
        push edi
        push ebx
        push esi
        call public_623f960
        test eax, eax
        jne public_62369fc
        push edi
        push ebx
/*FIXUP push offset public_62569c8 @0x62369f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62569c8
        mov ecx, esi
        call public_623f920
        public_62369fc : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62369d0)
    }
}

#undef public_62369fc
