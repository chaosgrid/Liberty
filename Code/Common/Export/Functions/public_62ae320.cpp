#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ae320);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6394282);

#define public_62ae367 _public_62ae367
#define public_62ae371 _public_62ae371
#define public_62ae397 _public_62ae397
#define public_62ae3a8 _public_62ae3a8
#define public_62ae3b4 _public_62ae3b4

PROC_DECLARE(0x62ae320, internal_62ae320, public_62ae320);
extern "C" NAKED register_t __cdecl internal_62ae320()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6394282 @0x62ae328*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6394282
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
        je public_62ae367
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc420], ecx
        dec dword ptr ds : [public_63fc42c]
        jmp public_62ae371
        public_62ae367 : nop
        push 0xC
        call public_6391d9c
        add esp, 4
        public_62ae371 : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [public_63fc354], eax
        mov eax, dword ptr ds : [public_63fc424]
        dec eax
        mov dword ptr ds : [public_63fc358], edi
        mov dword ptr ds : [public_63fc424], eax
        jne public_62ae3b4
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, edi
        je public_62ae3a8
        public_62ae397 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_62ae397
        public_62ae3a8 : nop
        mov dword ptr ds : [public_63fc420], edi
        mov dword ptr ds : [public_63fc42c], edi
        public_62ae3b4 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62ae320)
    }
}

#undef public_62ae367
#undef public_62ae371
#undef public_62ae397
#undef public_62ae3a8
#undef public_62ae3b4
