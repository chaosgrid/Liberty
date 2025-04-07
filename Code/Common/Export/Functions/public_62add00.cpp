#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62add00);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63941a2);

#define public_62add47 _public_62add47
#define public_62add51 _public_62add51
#define public_62add77 _public_62add77
#define public_62add88 _public_62add88
#define public_62add94 _public_62add94

PROC_DECLARE(0x62add00, internal_62add00, public_62add00);
extern "C" NAKED register_t __cdecl internal_62add00()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63941a2 @0x62add08*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63941a2
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
        je public_62add47
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_62add51
        public_62add47 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_62add51 : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [public_63fc3a8], eax
        mov eax, dword ptr ds : [public_63fc424]
        dec eax
        mov dword ptr ds : [public_63fc3ac], edi
        mov dword ptr ds : [public_63fc424], eax
        jne public_62add94
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, edi
        je public_62add88
        public_62add77 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_62add77
        public_62add88 : nop
        mov dword ptr ds : [public_63fc420], edi
        mov dword ptr ds : [public_63fc42c], edi
        public_62add94 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62add00)
    }
}

#undef public_62add47
#undef public_62add51
#undef public_62add77
#undef public_62add88
#undef public_62add94
