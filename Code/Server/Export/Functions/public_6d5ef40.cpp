#include "Server-PCH.h"


#define public_6d5ef70 _public_6d5ef70
#define public_6d5ef95 _public_6d5ef95

PROC_DECLARE(0x6d5ef40, internal_6d5ef40, public_6d5ef40);
extern "C" NAKED register_t __cdecl internal_6d5ef40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        dec eax
        je public_6d5ef70
        dec eax
        jne public_6d5ef95
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x3C6
/*FIXUP push offset public_6d6b9dc @0x6d5ef5a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b9dc
        mov eax, 0x100001
/*FIXUP push offset public_6d6bb08 @0x6d5ef64*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bb08
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        ret 
        public_6d5ef70 : nop
        mov ecx, dword ptr ss : [esp+4]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x3C5
/*FIXUP push offset public_6d6b9dc @0x6d5ef80*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6b9dc
        mov eax, 0x100002
/*FIXUP push offset public_6d6bae8 @0x6d5ef8a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6bae8
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d5ef95 : nop
        ret 
        UNREACHABLE_TRAP(0x6d5ef40)
    }
}

#undef public_6d5ef70
#undef public_6d5ef95
