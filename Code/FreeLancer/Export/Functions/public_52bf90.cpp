#include "FreeLancer-PCH.h"


#define public_52bfb0 _public_52bfb0
#define public_52bfe7 _public_52bfe7
#define public_52c001 _public_52c001
#define public_52c01b _public_52c01b
#define public_52c05d _public_52c05d
#define public_52c06e _public_52c06e

PROC_DECLARE(0x52bf90, internal_52bf90, public_52bf90);
extern "C" NAKED register_t __cdecl internal_52bf90()
{
    __asm
    {
        push ecx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, ecx
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_52c06e
        push ebx
        mov ebx, dword ptr ds : [public_5c6cf4]
        public_52bfb0 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_5c6894]
        test al, al
        jne public_52c05d
/*FIXUP push offset public_5dd344 @0x52bfc1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd344
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_52bfe7
        call dword ptr ds : [public_5c6698]
        push 0
        push eax
        call dword ptr ds : [public_5c6028]
        add esp, 8
        mov dword ptr ds : [edi+0x28], eax
        jmp public_52c05d
/*FIXUP public_52bfe7 : nop
        push offset public_5dd41c @0x52bfe7*/
  FIXUP public_52bfe7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd41c
        call ebx
        test al, al
        mov ecx, esi
        je public_52c001
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x2C]
        jmp public_52c05d
/*FIXUP public_52c001 : nop
        push offset public_5d6e4c @0x52c001*/
  FIXUP public_52c001 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d6e4c
        call ebx
        test al, al
        mov ecx, esi
        je public_52c01b
        push 0
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ds : [edi+0x30]
        jmp public_52c05d
/*FIXUP public_52c01b : nop
        push offset public_5dd338 @0x52c01b*/
  FIXUP public_52c01b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dd338
        call ebx
        test al, al
        je public_52c05d
        push 2
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0xC]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        fstp dword ptr ss : [esp+0x14]
        push 0
        mov ecx, esi
        call dword ptr ds : [public_5c6cfc]
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0xC]
        fstp dword ptr ds : [edi+0x34]
        mov dword ptr ds : [edi+0x38], eax
        mov dword ptr ds : [edi+0x3C], ecx
        public_52c05d : nop
        mov ecx, esi
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_52bfb0
        pop ebx
        public_52c06e : nop
        pop edi
        mov al, 1
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x52bf90)
    }
}

#undef public_52bfb0
#undef public_52bfe7
#undef public_52c001
#undef public_52c01b
#undef public_52c05d
#undef public_52c06e
