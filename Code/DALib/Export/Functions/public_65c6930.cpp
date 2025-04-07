#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6870);

#define public_65c6940 _public_65c6940
#define public_65c697e _public_65c697e

PROC_DECLARE(0x65c6930, internal_65c6930, public_65c6930);
extern "C" NAKED register_t __cdecl internal_65c6930()
{
    __asm
    {
        sub esp, 8
        push esi
        mov esi, ecx
        xor ecx, ecx
        lea eax, ds:[esi+0x16]
        nop 
        lea esp, ss:[esp]
        public_65c6940 : nop
        mov dl, byte ptr ds : [eax-2]
        mov byte ptr ss : [esp+ecx+4], dl
        mov dl, byte ptr ds : [eax-1]
        mov byte ptr ss : [esp+ecx+5], dl
        mov dl, byte ptr ds : [eax]
        mov byte ptr ss : [esp+ecx+6], dl
        mov dl, byte ptr ds : [eax+1]
        mov byte ptr ss : [esp+ecx+7], dl
        add ecx, 4
        add eax, 4
        cmp ecx, 8
        jb public_65c6940
        mov eax, dword ptr ds : [esi+0x14]
        shr eax, 3
        and eax, 0x3F
        cmp eax, 0x38
        mov ecx, 0x38
        jb public_65c697e
        mov ecx, 0x78
        public_65c697e : nop
        sub ecx, eax
        push ecx
/*FIXUP push offset public_65ca068 @0x65c6981*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_65ca068
        mov ecx, esi
        call public_65c6870
        push 8
        lea eax, ss:[esp+8]
        push eax
        mov ecx, esi
        call public_65c6870
        mov al, 1
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x65c6930)
    }
}

#undef public_65c6940
#undef public_65c697e
