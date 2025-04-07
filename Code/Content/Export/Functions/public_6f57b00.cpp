#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_JUMP_SYMBOL(public_6faf798);

#define public_6f57b43 _public_6f57b43
#define public_6f57b79 _public_6f57b79
#define public_6f57b9c _public_6f57b9c
#define public_6f57bb5 _public_6f57bb5
#define public_6f57bd4 _public_6f57bd4
#define public_6f57be7 _public_6f57be7

PROC_DECLARE(0x6f57b00, internal_6f57b00, public_6f57b00);
extern "C" NAKED register_t __cdecl internal_6f57b00()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6faf798 @0x6f57b02*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faf798
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push esi
        xor ebx, ebx
        push edi
        mov esi, ecx
        mov dword ptr ss : [esp+0xC], ebx
        mov eax, dword ptr ds : [esi+0x15C]
        mov edi, dword ptr ds : [esi+0x164]
        cmp edi, eax
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6f57b79
        mov ecx, dword ptr ds : [edi+8]
        test ecx, ecx
        je public_6f57b43
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_6f57b43 : nop
        push edi
        lea ecx, ss:[esp+0x14]
        push ecx
        lea ecx, ds:[esi+0x158]
        call public_6ecfe80
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [esi+0x15C]
        mov dword ptr ds : [esi+0x164], eax
        je public_6f57bd4
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6f57bd4
        mov edx, dword ptr ds : [ecx]
        mov ebx, ecx
        mov dword ptr ss : [esp+0xC], ebx
        call dword ptr ds : [edx]
        jmp public_6f57b9c
        public_6f57b79 : nop
        mov ecx, dword ptr ds : [esi+0x160]
        test ecx, ecx
        je public_6f57bd4
        mov eax, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x164], eax
        mov ecx, dword ptr ds : [eax+8]
        test ecx, ecx
        je public_6f57bd4
        mov eax, dword ptr ds : [ecx]
        mov ebx, ecx
        mov dword ptr ss : [esp+0xC], ebx
        call dword ptr ds : [eax]
        public_6f57b9c : nop
        mov ecx, dword ptr ds : [esi+0x16C]
        test ecx, ecx
        je public_6f57bb5
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        mov dword ptr ds : [esi+0x16C], 0
        public_6f57bb5 : nop
        mov dword ptr ds : [esi+0x16C], ebx
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax]
        mov edx, dword ptr ds : [ebx]
        push esi
        mov ecx, ebx
        call dword ptr ds : [edx+0xC]
        test al, al
        jne public_6f57bd4
        mov ecx, esi
        call public_6f57b00
        public_6f57bd4 : nop
        test ebx, ebx
        mov dword ptr ss : [esp+0x1C], 0xFFFFFFFF
        je public_6f57be7
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+4]
        public_6f57be7 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x6f57b00)
    }
}

#undef public_6f57b43
#undef public_6f57b79
#undef public_6f57b9c
#undef public_6f57bb5
#undef public_6f57bd4
#undef public_6f57be7
