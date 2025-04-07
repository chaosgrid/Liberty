#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62adfa0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6394202);

#define public_62adfe7 _public_62adfe7
#define public_62adff1 _public_62adff1
#define public_62ae017 _public_62ae017
#define public_62ae028 _public_62ae028
#define public_62ae034 _public_62ae034

PROC_DECLARE(0x62adfa0, internal_62adfa0, public_62adfa0);
extern "C" NAKED register_t __cdecl internal_62adfa0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6394202 @0x62adfa8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394202
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
        je public_62adfe7
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_62adff1
        public_62adfe7 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_62adff1 : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [public_63fc384], eax
        mov eax, dword ptr ds : [public_63fc424]
        dec eax
        mov dword ptr ds : [public_63fc388], edi
        mov dword ptr ds : [public_63fc424], eax
        jne public_62ae034
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, edi
        je public_62ae028
        public_62ae017 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_62ae017
        public_62ae028 : nop
        mov dword ptr ds : [public_63fc420], edi
        mov dword ptr ds : [public_63fc42c], edi
        public_62ae034 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62adfa0)
    }
}

#undef public_62adfe7
#undef public_62adff1
#undef public_62ae017
#undef public_62ae028
#undef public_62ae034
