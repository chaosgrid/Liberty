#include "ximage-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f82992);
CLANG_FORWARD_PROC_SYMBOL(public_6f82ada);

#define public_6f829a8 _public_6f829a8
#define public_6f829d0 _public_6f829d0
#define public_6f829d4 _public_6f829d4
#define public_6f829fa _public_6f829fa
#define public_6f82a11 _public_6f82a11
#define public_6f82a22 _public_6f82a22
#define public_6f82a27 _public_6f82a27
#define public_6f82a37 _public_6f82a37
#define public_6f82a3a _public_6f82a3a

PROC_DECLARE(0x6f82992, internal_6f82992, public_6f82992);
extern "C" NAKED register_t __cdecl internal_6f82992()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6f829a8
        cmp dword ptr ds : [public_6f84620], eax
        jle public_6f829d0
        dec dword ptr ds : [public_6f84620]
        public_6f829a8 : nop
        mov ecx, dword ptr ds : [public_6f8302c]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6f84624], ecx
        jne public_6f829fa
        push 0x80
        call dword ptr ds : [public_6f83018]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6f8462c], eax
        jne public_6f829d4
        public_6f829d0 : nop
        xor eax, eax
        jmp public_6f82a3a
        public_6f829d4 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6f8462c]
/*FIXUP push offset public_6f84004 @0x6f829dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84004
/*FIXUP push offset public_6f84000 @0x6f829e1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f84000
        mov dword ptr ds : [public_6f84628], eax
        call public_6f82ada
        inc dword ptr ds : [public_6f84620]
        pop ecx
        pop ecx
        jmp public_6f82a37
        public_6f829fa : nop
        test eax, eax
        jne public_6f82a37
        mov eax, dword ptr ds : [public_6f8462c]
        test eax, eax
        je public_6f82a37
        mov ecx, dword ptr ds : [public_6f84628]
        push esi
        lea esi, ds:[ecx-4]
        public_6f82a11 : nop
        cmp esi, eax
        jb public_6f82a27
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6f82a22
        call ecx
        mov eax, dword ptr ds : [public_6f8462c]
        public_6f82a22 : nop
        sub esi, 4
        jmp public_6f82a11
        public_6f82a27 : nop
        push eax
        call dword ptr ds : [public_6f83014]
        and dword ptr ds : [public_6f8462c], 0
        pop ecx
        pop esi
        public_6f82a37 : nop
        push 1
        pop eax
        public_6f82a3a : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6f82992)
    }
}

#undef public_6f829a8
#undef public_6f829d0
#undef public_6f829d4
#undef public_6f829fa
#undef public_6f82a11
#undef public_6f82a22
#undef public_6f82a27
#undef public_6f82a37
#undef public_6f82a3a
