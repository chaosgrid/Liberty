#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f56160);
CLANG_FORWARD_PROC_SYMBOL(public_6f566a0);

#define public_6f566c3 _public_6f566c3
#define public_6f566e0 _public_6f566e0
#define public_6f56721 _public_6f56721
#define public_6f56740 _public_6f56740
#define public_6f5674a _public_6f5674a
#define public_6f56754 _public_6f56754
#define public_6f56768 _public_6f56768
#define public_6f5677a _public_6f5677a

PROC_DECLARE(0x6f566a0, internal_6f566a0, public_6f566a0);
extern "C" NAKED register_t __cdecl internal_6f566a0()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6f5677a
        push ebx
        mov ebx, dword ptr ds : [public_6fb3018]
        push edi
        mov edi, dword ptr ds : [public_6fb301c]
/*FIXUP public_6f566c3 : nop
        push offset public_6fbb9fc @0x6f566c3*/
  FIXUP public_6f566c3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb9fc
        mov ecx, esi
        call edi
        test al, al
        mov ecx, esi
        je public_6f56754
        call ebx
        test al, al
        je public_6f56768
/*FIXUP public_6f566e0 : nop
        push offset public_6fbb9c8 @0x6f566e0*/
  FIXUP public_6f566e0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb9c8
        mov ecx, esi
        call dword ptr ds : [public_6fb3014]
        test al, al
        je public_6f5674a
        push 0
        mov ecx, esi
        call dword ptr ds : [public_6fb3044]
        fst dword ptr ds : [public_6fd0d84]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jne public_6f56721
        fld dword ptr ds : [public_6fd0d84]
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        test ah, 5
        jp public_6f56740
        public_6f56721 : nop
        fld dword ptr ds : [public_6fd0d84]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        je public_6f5674a
        mov dword ptr ds : [public_6fd0d84], 0
        jmp public_6f5674a
        public_6f56740 : nop
        mov dword ptr ds : [public_6fd0d84], 0x3F800000
        public_6f5674a : nop
        mov ecx, esi
        call ebx
        test al, al
        jne public_6f566e0
        jmp public_6f56768
/*FIXUP public_6f56754 : nop
        push offset public_6fbb9f0 @0x6f56754*/
  FIXUP public_6f56754 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbb9f0
        call edi
        test al, al
        je public_6f56768
        push esi
        call public_6f56160
        add esp, 4
        public_6f56768 : nop
        mov ecx, esi
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6f566c3
        pop edi
        pop ebx
        public_6f5677a : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f566a0)
    }
}

#undef public_6f566c3
#undef public_6f566e0
#undef public_6f56721
#undef public_6f56740
#undef public_6f5674a
#undef public_6f56754
#undef public_6f56768
#undef public_6f5677a
