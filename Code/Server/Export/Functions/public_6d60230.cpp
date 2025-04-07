#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d60230);
CLANG_FORWARD_PROC_SYMBOL(public_6d6038a);

#define public_6d60246 _public_6d60246
#define public_6d6026e _public_6d6026e
#define public_6d60272 _public_6d60272
#define public_6d60298 _public_6d60298
#define public_6d602af _public_6d602af
#define public_6d602c0 _public_6d602c0
#define public_6d602c5 _public_6d602c5
#define public_6d602d5 _public_6d602d5
#define public_6d602d8 _public_6d602d8

PROC_DECLARE(0x6d60230, internal_6d60230, public_6d60230);
extern "C" NAKED register_t __cdecl internal_6d60230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        jne public_6d60246
        cmp dword ptr ds : [public_6d904a0], eax
        jle public_6d6026e
        dec dword ptr ds : [public_6d904a0]
        public_6d60246 : nop
        mov ecx, dword ptr ds : [public_6d64c4c]
        cmp eax, 1
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ds : [public_6d90734], ecx
        jne public_6d60298
        push 0x80
        call dword ptr ds : [public_6d64c48]
        test eax, eax
        pop ecx
        mov dword ptr ds : [public_6d90740], eax
        jne public_6d60272
        public_6d6026e : nop
        xor eax, eax
        jmp public_6d602d8
        public_6d60272 : nop
        and dword ptr ds : [eax], 0
        mov eax, dword ptr ds : [public_6d90740]
/*FIXUP push offset public_6d88358 @0x6d6027a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88358
/*FIXUP push offset public_6d88000 @0x6d6027f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d88000
        mov dword ptr ds : [public_6d9073c], eax
        call public_6d6038a
        inc dword ptr ds : [public_6d904a0]
        pop ecx
        pop ecx
        jmp public_6d602d5
        public_6d60298 : nop
        test eax, eax
        jne public_6d602d5
        mov eax, dword ptr ds : [public_6d90740]
        test eax, eax
        je public_6d602d5
        mov ecx, dword ptr ds : [public_6d9073c]
        push esi
        lea esi, ds:[ecx-4]
        public_6d602af : nop
        cmp esi, eax
        jb public_6d602c5
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_6d602c0
        call ecx
        mov eax, dword ptr ds : [public_6d90740]
        public_6d602c0 : nop
        sub esi, 4
        jmp public_6d602af
        public_6d602c5 : nop
        push eax
        call dword ptr ds : [public_6d64c94]
        and dword ptr ds : [public_6d90740], 0
        pop ecx
        pop esi
        public_6d602d5 : nop
        push 1
        pop eax
        public_6d602d8 : nop
        ret 0xC
        UNREACHABLE_TRAP(0x6d60230)
    }
}

#undef public_6d60246
#undef public_6d6026e
#undef public_6d60272
#undef public_6d60298
#undef public_6d602af
#undef public_6d602c0
#undef public_6d602c5
#undef public_6d602d5
#undef public_6d602d8
