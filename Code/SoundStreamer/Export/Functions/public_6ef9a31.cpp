#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9a31);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9a95);
CLANG_FORWARD_PROC_SYMBOL(public_6efb1a4);

PROC_DECLARE(0x6ef9a31, internal_6ef9a31, public_6ef9a31);
extern "C" NAKED register_t __cdecl internal_6ef9a31()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push esi
        lea eax, ss:[ebp+8]
        push edi
        push eax
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ef9a95
        pop ecx
        lea esi, ss:[ebp-0xC]
        pop ecx
/*FIXUP push offset public_6f01250 @0x6ef9a4b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f01250
        push 0
        push 0x11
        sub esp, 0xC
        mov edi, esp
        movsd 
        movsd 
        movsw 
        call public_6efb1a4
        mov dword ptr ds : [public_6f01278], eax
        add esp, 0x18
        movsx eax, byte ptr ds : [public_6f01252]
        mov dword ptr ds : [public_6f01270], eax
        pop edi
        movsx eax, word ptr ds : [public_6f01250]
        mov dword ptr ds : [public_6f01274], eax
        mov dword ptr ds : [public_6f0127c], offset public_6f01254
        mov eax, offset public_6f01270
        pop esi
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef9a31)
    }
}
