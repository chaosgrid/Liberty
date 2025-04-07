#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41e7a);
CLANG_FORWARD_PROC_SYMBOL(public_6d485b0);

#define public_6d485c8 _public_6d485c8
#define public_6d485db _public_6d485db
#define public_6d485ee _public_6d485ee
#define public_6d48601 _public_6d48601
#define public_6d48611 _public_6d48611

PROC_DECLARE(0x6d485b0, internal_6d485b0, public_6d485b0);
extern "C" NAKED register_t __cdecl internal_6d485b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [ecx]
        mov dl, 0x29
        cmp al, dl
        jb public_6d48601
        cmp al, 0x7A
        ja public_6d48601
        cmp al, 0x5A
        jbe public_6d485c8
        cmp al, 0x61
        jb public_6d48601
        public_6d485c8 : nop
        mov al, byte ptr ds : [ecx+1]
        cmp al, dl
        jb public_6d48601
        cmp al, 0x7A
        ja public_6d48601
        cmp al, 0x5A
        jbe public_6d485db
        cmp al, 0x61
        jb public_6d48601
        public_6d485db : nop
        mov al, byte ptr ds : [ecx+2]
        cmp al, dl
        jb public_6d48601
        cmp al, 0x7A
        ja public_6d48601
        cmp al, 0x5A
        jbe public_6d485ee
        cmp al, 0x61
        jb public_6d48601
        public_6d485ee : nop
        mov al, byte ptr ds : [ecx+3]
        cmp al, dl
        jb public_6d48601
        cmp al, 0x7A
        ja public_6d48601
        cmp al, 0x5A
        jbe public_6d48611
        cmp al, 0x61
        jae public_6d48611
/*FIXUP public_6d48601 : nop
        push offset public_6d615f8 @0x6d48601*/
  FIXUP public_6d48601 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d615f8
        push dword ptr ss : [esp+8]
        call public_6d41e7a
        pop ecx
        pop ecx
        public_6d48611 : nop
        ret 
        UNREACHABLE_TRAP(0x6d485b0)
    }
}

#undef public_6d485c8
#undef public_6d485db
#undef public_6d485ee
#undef public_6d48601
#undef public_6d48611
