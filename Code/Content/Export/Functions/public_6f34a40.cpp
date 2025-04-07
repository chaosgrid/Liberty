#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f32480);
CLANG_FORWARD_PROC_SYMBOL(public_6f348f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f34a40);

PROC_DECLARE(0x6f34a40, internal_6f34a40, public_6f34a40);
extern "C" NAKED register_t __cdecl internal_6f34a40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push esi
/*FIXUP push offset public_6fd0830 @0x6f34a45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fd0830
        push eax
        call public_6f32480
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x18]
        push ecx
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x14]
        push edx
        push esi
        push eax
        call public_6f348f0
        add esp, 0x18
        xor eax, eax
        test esi, esi
        setne al
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f34a40)
    }
}
