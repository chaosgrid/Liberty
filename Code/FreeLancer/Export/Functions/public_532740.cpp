#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_532740);
CLANG_FORWARD_PROC_SYMBOL(public_536170);
CLANG_FORWARD_JUMP_SYMBOL(public_5c06d8);

#define public_532787 _public_532787
#define public_5327a3 _public_5327a3
#define public_5327b3 _public_5327b3

PROC_DECLARE(0x532740, internal_532740, public_532740);
extern "C" NAKED register_t __cdecl internal_532740()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c06d8 @0x532742*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c06d8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr ss : [esp+4], esi
        mov dword ptr ds : [esi], offset public_5de17c
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0
        je public_532787
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x10], 0
        public_532787 : nop
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        mov dword ptr ss : [esp+0x10], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_5de13c
        je public_5327a3
        push esi
        call dword ptr ds : [public_5c6938]
        public_5327a3 : nop
        mov esi, dword ptr ds : [esi+0xC]
        test esi, esi
        je public_5327b3
        push esi
        call public_536170
        add esp, 4
        public_5327b3 : nop
        mov ecx, dword ptr ss : [esp+8]
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x532740)
    }
}

#undef public_532787
#undef public_5327a3
#undef public_5327b3
