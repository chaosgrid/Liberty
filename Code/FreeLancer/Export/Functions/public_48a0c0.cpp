#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48a120);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x48a0c0, internal_48a0c0, public_48a0c0);
extern "C" NAKED register_t __cdecl internal_48a0c0()
{
    __asm
    {
        xor eax, eax
/*FIXUP push offset _public_48a120 @0x48a0c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_48a120
        mov dword ptr ds : [public_671f80], eax
        mov dword ptr ds : [public_671f84], eax
        mov byte ptr ds : [public_671f88], al
        mov byte ptr ds : [public_671f89], al
        mov byte ptr ds : [public_671f8a], al
        mov byte ptr ds : [public_671f8b], al
        mov byte ptr ds : [public_671f8c], al
        mov byte ptr ds : [public_671f8d], al
        mov byte ptr ds : [public_671f8e], al
        mov byte ptr ds : [public_671f8f], al
        mov byte ptr ds : [public_671f90], al
        mov byte ptr ds : [public_671f91], al
        mov byte ptr ds : [public_671f92], al
        mov byte ptr ds : [public_671f93], al
        mov byte ptr ds : [public_671f94], al
        mov byte ptr ds : [public_671f95], al
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x48a0c0)
    }
}
