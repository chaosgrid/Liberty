#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4f93f0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4f9360, internal_4f9360, public_4f9360);
extern "C" NAKED register_t __cdecl internal_4f9360()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_674c80], eax
        mov dword ptr ds : [public_674c84], eax
        mov dword ptr ds : [public_674c8c], eax
        mov dword ptr ds : [public_674c90], eax
        mov dword ptr ds : [public_674c94], eax
        mov dword ptr ds : [public_674c9c], eax
        mov dword ptr ds : [public_674ca0], eax
        mov byte ptr ds : [public_674ca4], al
        mov byte ptr ds : [public_674ca5], al
        mov dword ptr ds : [public_674ca8], eax
        mov al, 0xFF
/*FIXUP push offset _public_4f93f0 @0x4f9396*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4f93f0
        mov dword ptr ds : [public_674c7c], 1
        mov dword ptr ds : [public_674c88], 0x142
        mov dword ptr ds : [public_674c98], 0x80
        mov byte ptr ds : [public_674caf], al
        mov byte ptr ds : [public_674cae], al
        mov byte ptr ds : [public_674cad], al
        mov byte ptr ds : [public_674cac], al
        mov dword ptr ds : [public_674cb4], 0
        mov dword ptr ds : [public_674cb0], 0
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4f9360)
    }
}
