#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ae400);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63942a2);

#define public_62ae447 _public_62ae447
#define public_62ae451 _public_62ae451
#define public_62ae477 _public_62ae477
#define public_62ae488 _public_62ae488
#define public_62ae494 _public_62ae494

PROC_DECLARE(0x62ae400, internal_62ae400, public_62ae400);
extern "C" NAKED register_t __cdecl internal_62ae400()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63942a2 @0x62ae408*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63942a2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_63fc424]
        mov dword ptr fs : [0], esp
        push esi
        push edi
        inc eax
        xor edi, edi
        inc eax
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [public_63fc424], eax
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, edi
        mov byte ptr ss : [esp+0x10], 1
        je public_62ae447
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_62ae451
        public_62ae447 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_62ae451 : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [public_63fc348], eax
        mov eax, dword ptr ds : [public_63fc424]
        dec eax
        mov dword ptr ds : [public_63fc34c], edi
        mov dword ptr ds : [public_63fc424], eax
        jne public_62ae494
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, edi
        je public_62ae488
        public_62ae477 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_62ae477
        public_62ae488 : nop
        mov dword ptr ds : [public_63fc420], edi
        mov dword ptr ds : [public_63fc42c], edi
        public_62ae494 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62ae400)
    }
}

#undef public_62ae447
#undef public_62ae451
#undef public_62ae477
#undef public_62ae488
#undef public_62ae494
