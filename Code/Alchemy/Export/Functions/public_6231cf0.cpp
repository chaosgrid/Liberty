#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231cf0);
CLANG_FORWARD_PROC_SYMBOL(public_623f920);
CLANG_FORWARD_PROC_SYMBOL(public_6244320);

#define public_6231d1c _public_6231d1c

PROC_DECLARE(0x6231cf0, internal_6231cf0, public_6231cf0);
extern "C" NAKED register_t __cdecl internal_6231cf0()
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
        call public_6244320
        test eax, eax
        jne public_6231d1c
        push edi
        push ebx
/*FIXUP push offset public_6256780 @0x6231d10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6256780
        mov ecx, esi
        call public_623f920
        public_6231d1c : nop
        pop edi
        pop esi
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6231cf0)
    }
}

#undef public_6231d1c
