#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a3560);
CLANG_FORWARD_PROC_SYMBOL(public_62a3650);
CLANG_FORWARD_PROC_SYMBOL(public_62a81f0);
CLANG_FORWARD_PROC_SYMBOL(public_632ca20);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6393d18);

#define public_62a3594 _public_62a3594
#define public_62a35c3 _public_62a35c3
#define public_62a35d5 _public_62a35d5
#define public_62a361c _public_62a361c

PROC_DECLARE(0x62a3560, internal_62a3560, public_62a3560);
extern "C" NAKED register_t __cdecl internal_62a3560()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6393d18 @0x62a3562*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6393d18
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov dword ptr ss : [esp+0x10], edi
        mov ebp, dword ptr ds : [edi+4]
        mov ebx, dword ptr ss : [ebp]
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x20], 0
        je public_62a35c3
        public_62a3594 : nop
        mov esi, ebx
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov ebx, dword ptr ds : [ebx]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_62a3650
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp ebx, ebp
        mov dword ptr ds : [edi+8], ecx
        jne public_62a3594
        public_62a35c3 : nop
        mov ebp, dword ptr ds : [edi+4]
        mov ebx, dword ptr ss : [ebp]
        cmp ebx, ebp
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        je public_62a361c
        public_62a35d5 : nop
        push 0
        lea ecx, ss:[esp+0x18]
        mov eax, ebx
        mov ebx, dword ptr ds : [ebx]
        push ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        call public_632ca20
        mov esi, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        push 0
        lea ecx, ds:[esi+8]
        call public_62a81f0
        push esi
        call public_6391d5a
        mov ecx, dword ptr ds : [edi+8]
        add esp, 4
        dec ecx
        cmp ebx, ebp
        mov dword ptr ds : [edi+8], ecx
        jne public_62a35d5
        public_62a361c : nop
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x1C]
        add esp, 4
        xor eax, eax
        mov dword ptr ds : [edi+4], eax
        mov dword ptr ds : [edi+8], eax
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62a3560)
    }
}

#undef public_62a3594
#undef public_62a35c3
#undef public_62a35d5
#undef public_62a361c
