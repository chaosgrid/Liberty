#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d420);

#define public_6f4d44f _public_6f4d44f
#define public_6f4d46d _public_6f4d46d
#define public_6f4d48b _public_6f4d48b
#define public_6f4d4a9 _public_6f4d4a9
#define public_6f4d4c7 _public_6f4d4c7
#define public_6f4d4e5 _public_6f4d4e5
#define public_6f4d503 _public_6f4d503
#define public_6f4d51b _public_6f4d51b

PROC_DECLARE(0x6f4d420, internal_6f4d420, public_6f4d420);
extern "C" NAKED register_t __cdecl internal_6f4d420()
{
    __asm
    {
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ds : [public_6fb3014]
        mov ebx, ecx
/*FIXUP push offset public_6fbb468 @0x6f4d42f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb468
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f4d44f
        push 0
        call dword ptr ds : [public_6fb3020]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x14], eax
        pop ebx
        ret 4
/*FIXUP public_6f4d44f : nop
        push offset public_6fbb45c @0x6f4d44f*/
  FIXUP public_6f4d44f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb45c
        call edi
        test al, al
        mov ecx, esi
        je public_6f4d46d
        push 0
        call dword ptr ds : [public_6fb3020]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x1C], eax
        pop ebx
        ret 4
/*FIXUP public_6f4d46d : nop
        push offset public_6fbb450 @0x6f4d46d*/
  FIXUP public_6f4d46d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb450
        call edi
        test al, al
        mov ecx, esi
        je public_6f4d48b
        push 0
        call dword ptr ds : [public_6fb3020]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x20], eax
        pop ebx
        ret 4
/*FIXUP public_6f4d48b : nop
        push offset public_6fb8af0 @0x6f4d48b*/
  FIXUP public_6f4d48b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8af0
        call edi
        test al, al
        mov ecx, esi
        je public_6f4d4a9
        push 0
        call dword ptr ds : [public_6fb3020]
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x3C], eax
        pop ebx
        ret 4
/*FIXUP public_6f4d4a9 : nop
        push offset public_6fbb444 @0x6f4d4a9*/
  FIXUP public_6f4d4a9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb444
        call edi
        test al, al
        mov ecx, esi
        je public_6f4d4c7
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x40]
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6f4d4c7 : nop
        push offset public_6fbb43c @0x6f4d4c7*/
  FIXUP public_6f4d4c7 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb43c
        call edi
        test al, al
        mov ecx, esi
        je public_6f4d4e5
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x44]
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6f4d4e5 : nop
        push offset public_6fbb430 @0x6f4d4e5*/
  FIXUP public_6f4d4e5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb430
        call edi
        test al, al
        mov ecx, esi
        je public_6f4d503
        push 0
        call dword ptr ds : [public_6fb3044]
        fstp dword ptr ds : [ebx+0x4C]
        pop edi
        pop esi
        pop ebx
        ret 4
/*FIXUP public_6f4d503 : nop
        push offset public_6fbb424 @0x6f4d503*/
  FIXUP public_6f4d503 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb424
        call edi
        test al, al
        je public_6f4d51b
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3020]
        mov dword ptr ds : [ebx+0x50], eax
        public_6f4d51b : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f4d420)
    }
}

#undef public_6f4d44f
#undef public_6f4d46d
#undef public_6f4d48b
#undef public_6f4d4a9
#undef public_6f4d4c7
#undef public_6f4d4e5
#undef public_6f4d503
#undef public_6f4d51b
