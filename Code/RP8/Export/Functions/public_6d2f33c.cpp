#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f33c);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f490);

#define public_6d2f352 _public_6d2f352
#define public_6d2f37a _public_6d2f37a
#define public_6d2f37e _public_6d2f37e
#define public_6d2f3a4 _public_6d2f3a4
#define public_6d2f3bb _public_6d2f3bb
#define public_6d2f3cc _public_6d2f3cc
#define public_6d2f3d1 _public_6d2f3d1
#define public_6d2f3e1 _public_6d2f3e1
#define public_6d2f3e4 _public_6d2f3e4

PROC_DECLARE(0x6d2f33c, internal_6d2f33c, public_6d2f33c);
extern "C" NAKED register_t __cdecl internal_6d2f33c()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6d2f352
        cmp dword ptr ds : [public_6d72910], eax
        jle public_6d2f37a
        dec dword ptr ds : [public_6d72910]
        public_6d2f352 : nop
        mov ecx, dword ptr ds : [public_6d5e0b8]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6d741c4], ecx
        jne public_6d2f3a4
        push 0x80
        call dword ptr ds : [public_6d5e114]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6d741d0], eax
        jne public_6d2f37e
        public_6d2f37a : nop
        xor eax, eax
        jmp public_6d2f3e4
        public_6d2f37e : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6d741d0]
/*FIXUP push offset public_6d64010 @0x6d2f386*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64010
/*FIXUP push offset public_6d64000 @0x6d2f38b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d64000
        mov dword ptr ds : [public_6d741cc], eax
        call public_6d2f490
        inc dword ptr ds : [public_6d72910]
        pop ecx
        pop ecx
        jmp public_6d2f3e1
        public_6d2f3a4 : nop
        test eax, eax
        jne public_6d2f3e1
        mov eax, dword ptr ds : [public_6d741d0]
        test eax, eax
        je public_6d2f3e1
        mov ecx, dword ptr ds : [public_6d741cc]
        push esi
        lea esi, ds:[ecx-4]
        public_6d2f3bb : nop
        cmp esi, eax
        jb public_6d2f3d1
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6d2f3cc
        call ecx
        mov eax, dword ptr ds : [public_6d741d0]
        public_6d2f3cc : nop
        sub esi, 4
        jmp public_6d2f3bb
        public_6d2f3d1 : nop
        push eax
        call dword ptr ds : [public_6d5e11c]
        and dword ptr ds : [public_6d741d0], 0
        pop ecx
        pop esi
        public_6d2f3e1 : nop
        push 1
        pop eax
        public_6d2f3e4 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6d2f33c)
    }
}

#undef public_6d2f352
#undef public_6d2f37a
#undef public_6d2f37e
#undef public_6d2f3a4
#undef public_6d2f3bb
#undef public_6d2f3cc
#undef public_6d2f3d1
#undef public_6d2f3e1
#undef public_6d2f3e4
