#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_44f5c0);
CLANG_FORWARD_PROC_SYMBOL(public_44fd80);
CLANG_FORWARD_PROC_SYMBOL(public_456ee0);
CLANG_FORWARD_JUMP_SYMBOL(public_5ba0b8);

#define public_456f9b _public_456f9b
#define public_456fa9 _public_456fa9
#define public_456fc3 _public_456fc3

PROC_DECLARE(0x456ee0, internal_456ee0, public_456ee0);
extern "C" NAKED register_t __cdecl internal_456ee0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5ba0b8 @0x456ee2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5ba0b8
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+8], esi
        mov dword ptr ds : [esi], offset public_5ce264
        mov dword ptr ds : [esi+4], offset public_5ce234
        mov dword ptr ds : [esi+8], offset public_5ce218
        mov dword ptr ds : [esi+0xC], offset public_5ce1f8
        mov dword ptr ds : [esi+0x10], offset public_5ce1c0
        mov dword ptr ds : [esi+0x14], offset public_5ce198
        mov dword ptr ds : [esi+0x18], offset public_5ce174
        mov dword ptr ds : [esi+0x1C], offset public_5ce13c
        mov dword ptr ds : [esi+0x20], offset public_5ce124
        mov edi, dword ptr ds : [public_5c60c8]
        lea eax, ds:[esi+0x6C]
        push eax
        mov dword ptr ss : [esp+0x18], 0
        call edi
        lea ecx, ds:[esi+0x70]
        push ecx
        call edi
        mov al, byte ptr ds : [esi+0x77]
        add esp, 8
        test al, al
        jne public_456fa9
        mov al, byte ptr ds : [esi+0x76]
        test al, al
        jne public_456f9b
        mov edx, dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ds : [esi+0x5C]
        push edx
        call public_44f5c0
        mov ecx, dword ptr ds : [esi+0x80]
        test ecx, ecx
        je public_456f9b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x60]
        mov eax, dword ptr ds : [esi+0x80]
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x80], 0
        public_456f9b : nop
        mov al, byte ptr ds : [esi+0x77]
        test al, al
        jne public_456fa9
        mov al, byte ptr ds : [esi+0x76]
        test al, al
        je public_456fc3
        public_456fa9 : nop
        mov eax, dword ptr ds : [esi+0x80]
        test eax, eax
        je public_456fc3
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x80], 0
        public_456fc3 : nop
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 0xFFFFFFFF
        call public_44fd80
        mov ecx, dword ptr ss : [esp+0xC]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x456ee0)
    }
}

#undef public_456f9b
#undef public_456fa9
#undef public_456fc3
