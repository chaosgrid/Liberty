#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4fe0e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf528);

#define public_4fe0f0 _public_4fe0f0
#define public_4fe120 _public_4fe120
#define public_4fe12c _public_4fe12c
#define public_4fe136 _public_4fe136
#define public_4fe142 _public_4fe142
#define public_4fe150 _public_4fe150

PROC_DECLARE(0x4fe0e0, internal_4fe0e0, public_4fe0e0);
extern "C" NAKED register_t __cdecl internal_4fe0e0()
{
    __asm
    {
        mov ecx, offset public_674f98
        jmp public_4fe0f0
        nop 
        nop 
        nop 
        nop 
        nop 
        nop 
        public_4fe0f0 : nop
        push 0xFFFFFFFF
/*FIXUP push public_5bf528 @0x4fe0f2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf528
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+8]
        xor ebx, ebx
        cmp edi, eax
        mov dword ptr ss : [esp+0x18], ebx
        je public_4fe136
        nop 
        public_4fe120 : nop
        mov ecx, dword ptr ds : [edi]
        cmp ecx, ebx
        je public_4fe12c
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_4fe12c : nop
        mov eax, dword ptr ds : [esi+8]
        add edi, 4
        cmp edi, eax
        jne public_4fe120
        public_4fe136 : nop
        mov edx, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, edx
        cmp eax, edx
        je public_4fe150
        public_4fe142 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        add eax, 4
        add ecx, 4
        cmp eax, edx
        jne public_4fe142
        public_4fe150 : nop
        mov dword ptr ds : [esi+8], ecx
        mov ecx, dword ptr ds : [esi+4]
        push ecx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebx
        mov dword ptr ds : [esi+0xC], ebx
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x4fe0e0)
    }
}

#undef public_4fe0f0
#undef public_4fe120
#undef public_4fe12c
#undef public_4fe136
#undef public_4fe142
#undef public_4fe150
