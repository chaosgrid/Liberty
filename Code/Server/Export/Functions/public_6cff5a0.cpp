#include "Server-PCH.h"


#define public_6cff5c0 _public_6cff5c0
#define public_6cff5f0 _public_6cff5f0
#define public_6cff61a _public_6cff61a
#define public_6cff641 _public_6cff641
#define public_6cff668 _public_6cff668
#define public_6cff68f _public_6cff68f
#define public_6cff6a7 _public_6cff6a7
#define public_6cff6b8 _public_6cff6b8

PROC_DECLARE(0x6cff5a0, internal_6cff5a0, public_6cff5a0);
extern "C" NAKED register_t __cdecl internal_6cff5a0()
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
        je public_6cff6b8
        push ebx
        mov ebx, dword ptr ds : [public_6d64568]
        nop 
        public_6cff5c0 : nop
        push esi
        mov ecx, edi
        call dword ptr ds : [public_6d64558]
        test al, al
        jne public_6cff6a7
/*FIXUP push offset public_6d66fdc @0x6cff5d1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66fdc
        mov ecx, esi
        call ebx
        test al, al
        mov ecx, esi
        je public_6cff5f0
        push 0
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x28]
        jmp public_6cff6a7
/*FIXUP public_6cff5f0 : nop
        push offset public_6d66fcc @0x6cff5f0*/
  FIXUP public_6cff5f0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66fcc
        call ebx
        test al, al
        mov ecx, esi
        je public_6cff61a
        push 0
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x2C]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x38]
        jmp public_6cff6a7
/*FIXUP public_6cff61a : nop
        push offset public_6d66fbc @0x6cff61a*/
  FIXUP public_6cff61a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66fbc
        call ebx
        test al, al
        mov ecx, esi
        je public_6cff641
        push 0
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x30]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x3C]
        jmp public_6cff6a7
/*FIXUP public_6cff641 : nop
        push offset public_6d66fac @0x6cff641*/
  FIXUP public_6cff641 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66fac
        call ebx
        test al, al
        mov ecx, esi
        je public_6cff668
        push 0
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x34]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x40]
        jmp public_6cff6a7
/*FIXUP public_6cff668 : nop
        push offset public_6d66fa0 @0x6cff668*/
  FIXUP public_6cff668 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66fa0
        call ebx
        test al, al
        mov ecx, esi
        je public_6cff68f
        push 0
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x44]
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6d64578]
        fstp dword ptr ds : [edi+0x48]
        jmp public_6cff6a7
/*FIXUP public_6cff68f : nop
        push offset public_6d66f94 @0x6cff68f*/
  FIXUP public_6cff68f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d66f94
        call ebx
        test al, al
        je public_6cff6a7
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6d6458c]
        mov byte ptr ds : [edi+0x4C], al
        public_6cff6a7 : nop
        mov ecx, esi
        call dword ptr ds : [public_6d6455c]
        test al, al
        jne public_6cff5c0
        pop ebx
        public_6cff6b8 : nop
        pop edi
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cff5a0)
    }
}

#undef public_6cff5c0
#undef public_6cff5f0
#undef public_6cff61a
#undef public_6cff641
#undef public_6cff668
#undef public_6cff68f
#undef public_6cff6a7
#undef public_6cff6b8
