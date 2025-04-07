#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62adec0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63941e2);

#define public_62adf07 _public_62adf07
#define public_62adf11 _public_62adf11
#define public_62adf37 _public_62adf37
#define public_62adf48 _public_62adf48
#define public_62adf54 _public_62adf54

PROC_DECLARE(0x62adec0, internal_62adec0, public_62adec0);
extern "C" NAKED register_t __cdecl internal_62adec0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63941e2 @0x62adec8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63941e2
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
        je public_62adf07
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_62adf11
        public_62adf07 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_62adf11 : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [public_63fc390], eax
        mov eax, dword ptr ds : [public_63fc424]
        dec eax
        mov dword ptr ds : [public_63fc394], edi
        mov dword ptr ds : [public_63fc424], eax
        jne public_62adf54
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, edi
        je public_62adf48
        public_62adf37 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_62adf37
        public_62adf48 : nop
        mov dword ptr ds : [public_63fc420], edi
        mov dword ptr ds : [public_63fc42c], edi
        public_62adf54 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62adec0)
    }
}

#undef public_62adf07
#undef public_62adf11
#undef public_62adf37
#undef public_62adf48
#undef public_62adf54
