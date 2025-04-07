#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62adde0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_63941c2);

#define public_62ade27 _public_62ade27
#define public_62ade31 _public_62ade31
#define public_62ade57 _public_62ade57
#define public_62ade68 _public_62ade68
#define public_62ade74 _public_62ade74

PROC_DECLARE(0x62adde0, internal_62adde0, public_62adde0);
extern "C" NAKED register_t __cdecl internal_62adde0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_63941c2 @0x62adde8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63941c2
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
        je public_62ade27
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_62ade31
        public_62ade27 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_62ade31 : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [public_63fc39c], eax
        mov eax, dword ptr ds : [public_63fc424]
        dec eax
        mov dword ptr ds : [public_63fc3a0], edi
        mov dword ptr ds : [public_63fc424], eax
        jne public_62ade74
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, edi
        je public_62ade68
        public_62ade57 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_62ade57
        public_62ade68 : nop
        mov dword ptr ds : [public_63fc420], edi
        mov dword ptr ds : [public_63fc42c], edi
        public_62ade74 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62adde0)
    }
}

#undef public_62ade27
#undef public_62ade31
#undef public_62ade57
#undef public_62ade68
#undef public_62ade74
