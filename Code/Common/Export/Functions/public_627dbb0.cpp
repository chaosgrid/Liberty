#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_627f300);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392d18);

#define public_627dbe0 _public_627dbe0
#define public_627dc08 _public_627dc08
#define public_627dc2c _public_627dc2c
#define public_627dc35 _public_627dc35
#define public_627dc50 _public_627dc50
#define public_627dc61 _public_627dc61
#define public_627dc6d _public_627dc6d

PROC_DECLARE(0x627dbb0, internal_627dbb0, public_627dbb0);
extern "C" NAKED register_t __cdecl internal_627dbb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392d18 @0x627dbb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392d18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        lea edi, ds:[ecx+8]
        mov dword ptr ss : [esp+0x10], edi
        mov ebx, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [ebx]
        xor ebp, ebp
        cmp esi, ebx
        mov dword ptr ss : [esp+0x1C], ebp
        je public_627dc08
        public_627dbe0 : nop
        mov eax, esi
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push 1
        mov dword ptr ds : [ecx+4], edx
        push eax
        mov ecx, edi
        call public_627f300
        mov ecx, dword ptr ds : [edi+8]
        dec ecx
        cmp esi, ebx
        mov dword ptr ds : [edi+8], ecx
        jne public_627dbe0
        public_627dc08 : nop
        cmp dword ptr ds : [public_63fc42c], 0x7FFFFFFF
        mov eax, dword ptr ds : [edi+4]
        jge public_627dc2c
        mov ecx, dword ptr ds : [public_63fc420]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_63fc420], eax
        inc dword ptr ds : [public_63fc42c]
        jmp public_627dc35
        public_627dc2c : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_627dc35 : nop
        mov dword ptr ds : [edi+4], ebp
        mov dword ptr ds : [edi+8], ebp
        dec dword ptr ds : [public_63fc424]
        jne public_627dc6d
        mov eax, dword ptr ds : [public_63fc420]
        cmp eax, ebp
        je public_627dc61
        lea esp, ss:[esp]
        public_627dc50 : nop
        mov esi, dword ptr ds : [eax]
        push eax
        call public_6391d5a
        add esp, 4
        cmp esi, ebp
        mov eax, esi
        jne public_627dc50
        public_627dc61 : nop
        mov dword ptr ds : [public_63fc420], ebp
        mov dword ptr ds : [public_63fc42c], ebp
        public_627dc6d : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x627dbb0)
    }
}

#undef public_627dbe0
#undef public_627dc08
#undef public_627dc2c
#undef public_627dc35
#undef public_627dc50
#undef public_627dc61
#undef public_627dc6d
