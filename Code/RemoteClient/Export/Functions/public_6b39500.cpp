#include "RemoteClient-PCH.h"


#define public_6b3954f _public_6b3954f

PROC_DECLARE(0x6b39500, internal_6b39500, public_6b39500);
extern "C" NAKED register_t __cdecl internal_6b39500()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        push edi
        lea eax, ss:[esp+0x10]
        push eax
        push ecx
        push 0x200
/*FIXUP push offset public_6b73920 @0x6b39510*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b73920
        call dword ptr ds : [public_6b6b1e0]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0x10
        mov edi, offset public_6b73920
        repne scasb
        not ecx
        mov dl, byte ptr ds : [ecx+public_6b7391e]
        dec ecx
        mov al, 0xA
        cmp dl, al
        pop edi
        je public_6b3954f
        cmp ecx, 0x1FF
        jae public_6b3954f
        mov byte ptr ds : [ecx+public_6b73920], al
        mov byte ptr ds : [ecx+public_6b73921], 0
/*FIXUP public_6b3954f : nop
        push offset public_6b73920 @0x6b3954f*/
  FIXUP public_6b3954f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6b73920
        call dword ptr ds : [public_6b6b108]
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6b39500)
    }
}

#undef public_6b3954f
