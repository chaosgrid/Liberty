#include "Server-PCH.h"


#define public_6cfe110 _public_6cfe110
#define public_6cfe14a _public_6cfe14a
#define public_6cfe150 _public_6cfe150
#define public_6cfe168 _public_6cfe168
#define public_6cfe175 _public_6cfe175

PROC_DECLARE(0x6cfe0f0, internal_6cfe0f0, public_6cfe0f0);
extern "C" NAKED register_t __cdecl internal_6cfe0f0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [public_6d6455c]
        test al, al
        je public_6cfe175
        push ebp
        mov ebp, dword ptr ds : [public_6d64568]
        nop 
        lea esp, ss:[esp]
        public_6cfe110 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d64558]
        test al, al
        jne public_6cfe168
/*FIXUP push offset public_6d66f0c @0x6cfe11d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f0c
        mov ecx, esi
        call ebp
        test al, al
        mov ecx, esi
        je public_6cfe150
        call dword ptr ds : [public_6d64564]
/*FIXUP push offset public_6d66f00 @0x6cfe132*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f00
        push eax
        call dword ptr ds : [public_6d64a48]
        add esp, 8
        test eax, eax
        jne public_6cfe14a
        mov byte ptr ds : [edi+0x2C], al
        jmp public_6cfe168
        public_6cfe14a : nop
        mov byte ptr ds : [edi+0x2C], 1
        jmp public_6cfe168
/*FIXUP public_6cfe150 : nop
        push offset public_6d66ef4 @0x6cfe150*/
  FIXUP public_6cfe150 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66ef4
        call ebp
        test al, al
        je public_6cfe168
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d64560]
        mov dword ptr ds : [edi+0x28], eax
        public_6cfe168 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6cfe110
        pop ebp
        public_6cfe175 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cfe0f0)
    }
}

#undef public_6cfe110
#undef public_6cfe14a
#undef public_6cfe150
#undef public_6cfe168
#undef public_6cfe175
