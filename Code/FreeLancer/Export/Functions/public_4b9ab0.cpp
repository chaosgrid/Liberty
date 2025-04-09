#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4b9b10);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x4b9ab0, internal_4b9ab0, public_4b9ab0);
extern "C" NAKED register_t __cdecl internal_4b9ab0()
{
    __asm
    {
        xor eax, eax
/*FIXUP push offset _public_4b9b10 @0x4b9ab2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4b9b10
        mov dword ptr ds : [public_67230c], eax
        mov dword ptr ds : [public_672310], eax
        mov byte ptr ds : [public_672314], al
        mov byte ptr ds : [public_672315], al
        mov byte ptr ds : [public_672316], al
        mov byte ptr ds : [public_672317], al
        mov byte ptr ds : [public_672318], al
        mov byte ptr ds : [public_672319], al
        mov byte ptr ds : [public_67231a], al
        mov byte ptr ds : [public_67231b], al
        mov byte ptr ds : [public_67231c], al
        mov byte ptr ds : [public_67231d], al
        mov byte ptr ds : [public_67231e], al
        mov byte ptr ds : [public_67231f], al
        mov byte ptr ds : [public_672320], al
        mov byte ptr ds : [public_672321], al
        call public_5b7e6c
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x4b9ab0)
    }
}
