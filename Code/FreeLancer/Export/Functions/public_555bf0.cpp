#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_555b90);
CLANG_FORWARD_PROC_SYMBOL(public_555ba0);
CLANG_FORWARD_PROC_SYMBOL(public_555bf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_555c5b _public_555c5b

PROC_DECLARE(0x555bf0, internal_555bf0, public_555bf0);
extern "C" NAKED register_t __cdecl internal_555bf0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xFFFFFFFF
        push esi
        mov esi, ecx
        mov dword ptr ds : [esi+0xC], eax
        mov dword ptr ds : [esi+0x10], eax
        je public_555c5b
        push esi
        mov dword ptr ds : [esi], 0
        mov ecx, dword ptr ds : [public_5c6d40]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
/*FIXUP push offset _public_555b90 @0x555c14*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_555b90
        push ecx
        call dword ptr ds : [edx+0x1C]
        mov eax, dword ptr ds : [esi]
        shl eax, 2
        push eax
        call public_5b7e84
        mov ecx, dword ptr ds : [esi]
        shl ecx, 2
        push ecx
        mov dword ptr ds : [esi+4], eax
        call public_5b7e84
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0x14], 0
        mov edx, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        add esp, 8
        push esi
        push edx
/*FIXUP push offset _public_555ba0 @0x555c52*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_555ba0
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_555c5b : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x14], 0
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x555bf0)
    }
}

#undef public_555c5b
