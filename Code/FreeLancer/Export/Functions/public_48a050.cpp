#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48a0b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x48a050, internal_48a050, public_48a050);
extern "C" NAKED register_t __cdecl internal_48a050()
{
    __asm
    {
        xor eax, eax
/*FIXUP push offset _public_48a0b0 @0x48a052*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_48a0b0
        mov dword ptr ds : [public_671f98], eax
        mov dword ptr ds : [public_671f9c], eax
        mov byte ptr ds : [public_671fa0], al
        mov byte ptr ds : [public_671fa1], al
        mov byte ptr ds : [public_671fa2], al
        mov byte ptr ds : [public_671fa3], al
        mov byte ptr ds : [public_671fa4], al
        mov byte ptr ds : [public_671fa5], al
        mov byte ptr ds : [public_671fa6], al
        mov byte ptr ds : [public_671fa7], al
        mov byte ptr ds : [public_671fa8], al
        mov byte ptr ds : [public_671fa9], al
        mov byte ptr ds : [public_671faa], al
        mov byte ptr ds : [public_671fab], al
        mov byte ptr ds : [public_671fac], al
        mov byte ptr ds : [public_671fad], al
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x48a050)
    }
}
