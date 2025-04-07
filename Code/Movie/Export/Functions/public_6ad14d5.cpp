#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad14d5);
CLANG_FORWARD_PROC_SYMBOL(public_6ad157a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad1583);
CLANG_FORWARD_PROC_SYMBOL(public_6ad158c);

#define public_6ad14f7 _public_6ad14f7
#define public_6ad1526 _public_6ad1526
#define public_6ad152e _public_6ad152e
#define public_6ad1539 _public_6ad1539
#define public_6ad153a _public_6ad153a
#define public_6ad154b _public_6ad154b
#define public_6ad1568 _public_6ad1568

PROC_DECLARE(0x6ad14d5, internal_6ad14d5, public_6ad14d5);
extern "C" NAKED register_t __cdecl internal_6ad14d5()
{
    __asm
    {
        push edi
        call public_6ad157a
        push 1
        pop edi
        cmp dword ptr ds : [public_6ae0ee8], edi
        jne public_6ad14f7
        push dword ptr ss : [esp+8]
        call dword ptr ds : [public_6ada06c]
        push eax
        call dword ptr ds : [public_6ada108]
        public_6ad14f7 : nop
        cmp dword ptr ss : [esp+0xC], 0
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [public_6ae0ee4], edi
        mov byte ptr ds : [public_6ae0ee0], bl
        jne public_6ad154b
        mov eax, dword ptr ds : [public_6ae2598]
        test eax, eax
        je public_6ad153a
        mov ecx, dword ptr ds : [public_6ae2594]
        push esi
        lea esi, ds:[ecx-4]
        cmp esi, eax
        jb public_6ad1539
        public_6ad1526 : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6ad152e
        call eax
        public_6ad152e : nop
        sub esi, 4
        cmp esi, dword ptr ds : [public_6ae2598]
        jae public_6ad1526
        public_6ad1539 : nop
        pop esi
/*FIXUP public_6ad153a : nop
        push offset public_6add034 @0x6ad153a*/
  FIXUP public_6ad153a : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6add034
/*FIXUP push offset public_6add02c @0x6ad153f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6add02c
        call public_6ad158c
        pop ecx
        pop ecx
/*FIXUP public_6ad154b : nop
        push offset public_6add040 @0x6ad154b*/
  FIXUP public_6ad154b : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6add040
/*FIXUP push offset public_6add038 @0x6ad1550*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6add038
        call public_6ad158c
        pop ecx
        pop ecx
        test ebx, ebx
        pop ebx
        je public_6ad1568
        call public_6ad1583
        pop edi
        ret 
        public_6ad1568 : nop
        push dword ptr ss : [esp+8]
        mov dword ptr ds : [public_6ae0ee8], edi
        call dword ptr ds : [public_6ada118]
        UNREACHABLE_TRAP(0x6ad14d5)
    }
}

#undef public_6ad14f7
#undef public_6ad1526
#undef public_6ad152e
#undef public_6ad1539
#undef public_6ad153a
#undef public_6ad154b
#undef public_6ad1568
