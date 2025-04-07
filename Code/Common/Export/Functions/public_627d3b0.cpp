#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_JUMP_SYMBOL(public_6392cd2);

#define public_627d3f7 _public_627d3f7
#define public_627d401 _public_627d401
#define public_627d427 _public_627d427
#define public_627d438 _public_627d438
#define public_627d444 _public_627d444

PROC_DECLARE(0x627d3b0, internal_627d3b0, public_627d3b0);
extern "C" NAKED register_t __cdecl internal_627d3b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6392cd2 @0x627d3b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392cd2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_63fc020]
        mov dword ptr fs : [0], esp
        push esi
        push edi
        inc eax
        xor edi, edi
        inc eax
        mov dword ptr ss : [esp+0x10], edi
        mov dword ptr ds : [public_63fc020], eax
        mov eax, dword ptr ds : [public_63fc01c]
        cmp eax, edi
        mov byte ptr ss : [esp+0x10], 1
        je public_627d3f7
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [public_63fc01c], ecx
        dec dword ptr ds : [public_63fc028]
        jmp public_627d401
        public_627d3f7 : nop
        push 0x1C
        call public_6391d9c
        add esp, 4
        public_627d401 : nop
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        mov dword ptr ds : [public_63fbff0], eax
        mov eax, dword ptr ds : [public_63fc020]
        dec eax
        mov dword ptr ds : [public_63fbff4], edi
        mov dword ptr ds : [public_63fc020], eax
        jne public_627d444
        mov eax, dword ptr ds : [public_63fc01c]
        cmp eax, edi
        je public_627d438
        public_627d427 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, edi
        mov eax, esi
        jne public_627d427
        public_627d438 : nop
        mov dword ptr ds : [public_63fc01c], edi
        mov dword ptr ds : [public_63fc028], edi
        public_627d444 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop edi
        mov dword ptr fs : [0], ecx
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x627d3b0)
    }
}

#undef public_627d3f7
#undef public_627d401
#undef public_627d427
#undef public_627d438
#undef public_627d444
