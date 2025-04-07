#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ae160);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6394242);

#define public_62ae1a7 _public_62ae1a7
#define public_62ae1b1 _public_62ae1b1
#define public_62ae1d7 _public_62ae1d7
#define public_62ae1e8 _public_62ae1e8
#define public_62ae1f4 _public_62ae1f4

PROC_DECLARE(0x62ae160, internal_62ae160, public_62ae160);
extern "C" NAKED register_t __cdecl internal_62ae160()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6394242 @0x62ae168*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394242
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
        je public_62ae1a7
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_62ae1b1
        public_62ae1a7 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_62ae1b1 : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [public_63fc36c], eax
        mov eax, dword ptr ds : [public_63fc424]
        dec eax
        mov dword ptr ds : [public_63fc370], edi
        mov dword ptr ds : [public_63fc424], eax
        jne public_62ae1f4
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, edi
        je public_62ae1e8
        public_62ae1d7 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_62ae1d7
        public_62ae1e8 : nop
        mov dword ptr ds : [public_63fc420], edi
        mov dword ptr ds : [public_63fc42c], edi
        public_62ae1f4 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62ae160)
    }
}

#undef public_62ae1a7
#undef public_62ae1b1
#undef public_62ae1d7
#undef public_62ae1e8
#undef public_62ae1f4
