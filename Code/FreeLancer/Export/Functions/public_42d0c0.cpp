#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d0c0);
CLANG_FORWARD_JUMP_SYMBOL(public_5b8d56);

#define public_42d10f _public_42d10f
#define public_42d120 _public_42d120
#define public_42d137 _public_42d137
#define public_42d149 _public_42d149
#define public_42d15b _public_42d15b
#define public_42d170 _public_42d170
#define public_42d189 _public_42d189
#define public_42d19a _public_42d19a
#define public_42d1b0 _public_42d1b0

PROC_DECLARE(0x42d0c0, internal_42d0c0, public_42d0c0);
extern "C" NAKED register_t __cdecl internal_42d0c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5b8d56 @0x42d0c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5b8d56
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov edi, dword ptr ds : [public_5c6ed4]
        mov ebp, dword ptr ds : [public_5c6f80]
        xor ebx, ebx
        mov dword ptr ds : [esi], ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        mov eax, dword ptr ds : [esi+0x38]
        sub eax, 5
        mov dword ptr ss : [esp+0x1C], 1
        je public_42d10f
        dec eax
        je public_42d137
        dec eax
        jne public_42d120
        public_42d10f : nop
        mov eax, dword ptr ds : [esi+0x3C]
        cmp eax, ebx
        je public_42d120
        push eax
        push ebx
        call ebp
        push eax
        call edi
        mov dword ptr ds : [esi+0x3C], ebx
        public_42d120 : nop
        mov dword ptr ds : [esi+0x3C], ebx
        mov eax, dword ptr ds : [esi+0x24]
        sub eax, 5
        mov byte ptr ss : [esp+0x1C], bl
        je public_42d15b
        dec eax
        je public_42d149
        dec eax
        je public_42d15b
        jmp public_42d170
        public_42d137 : nop
        mov eax, dword ptr ds : [esi+0x3C]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x3C], ebx
        je public_42d120
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_42d120
        public_42d149 : nop
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x28], ebx
        je public_42d170
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        jmp public_42d170
        public_42d15b : nop
        mov eax, dword ptr ds : [esi+0x28]
        cmp eax, ebx
        je public_42d170
        push eax
        push ebx
        call ebp
        push eax
        call edi
        mov dword ptr ds : [esi+0x28], ebx
        lea esp, ss:[esp]
        public_42d170 : nop
        mov dword ptr ds : [esi+0x28], ebx
        mov eax, dword ptr ds : [esi+0x10]
        sub eax, 5
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_42d189
        dec eax
        je public_42d1b0
        dec eax
        jne public_42d19a
        public_42d189 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_42d19a
        push eax
        push ebx
        call ebp
        push eax
        call edi
        mov dword ptr ds : [esi+0x14], ebx
        public_42d19a : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        mov dword ptr ds : [esi+0x14], ebx
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_42d1b0 : nop
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        mov dword ptr ds : [esi+0x14], ebx
        je public_42d19a
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        jmp public_42d19a
        UNREACHABLE_TRAP(0x42d0c0)
    }
}

#undef public_42d10f
#undef public_42d120
#undef public_42d137
#undef public_42d149
#undef public_42d15b
#undef public_42d170
#undef public_42d189
#undef public_42d19a
#undef public_42d1b0
