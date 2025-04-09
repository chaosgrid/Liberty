#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4177b0);
CLANG_FORWARD_PROC_SYMBOL(public_4bd770);

#define public_4bd7e0 _public_4bd7e0
#define public_4bd80d _public_4bd80d
#define public_4bd814 _public_4bd814
#define public_4bd82c _public_4bd82c

PROC_DECLARE(0x4bd770, internal_4bd770, public_4bd770);
extern "C" NAKED register_t __cdecl internal_4bd770()
{
    __asm
    {
        push ebx
        xor ebx, ebx
        push esi
        mov esi, ecx
/*FIXUP push offset public_5d4dbc @0x4bd776*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4dbc
        mov dword ptr ds : [esi+0x70], 0xA
        mov dword ptr ds : [esi+0x15C], ebx
        mov dword ptr ds : [esi+0x160], ebx
        mov byte ptr ds : [esi+0x158], bl
        mov byte ptr ds : [esi+0x159], bl
        mov byte ptr ds : [esi+0x164], bl
        mov dword ptr ds : [esi+0x168], 0x3E800000
        mov dword ptr ds : [esi+0xEC], 0x40800000
        mov dword ptr ds : [esi+0xF0], 0xC2280000
        call public_4177b0
        mov ecx, dword ptr ds : [esi+0x98]
        add esp, 4
        cmp ecx, eax
        je public_4bd814
        push edi
        mov dword ptr ds : [esi+0x98], eax
        xor edi, edi
        lea esp, ss:[esp]
        public_4bd7e0 : nop
        mov ecx, dword ptr ds : [esi+0x8C]
        cmp ecx, ebx
        je public_4bd80d
        mov eax, dword ptr ds : [esi+0x90]
        sub eax, ecx
        sar eax, 3
        cmp edi, eax
        jae public_4bd80d
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+edi*8]
        mov eax, dword ptr ds : [esi+0x98]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+8]
        inc edi
        jmp public_4bd7e0
        public_4bd80d : nop
        mov dword ptr ds : [esi+0xA4], ebx
        pop edi
        public_4bd814 : nop
        mov cl, byte ptr ds : [esi+0xAC]
        mov al, 1
        cmp cl, al
        je public_4bd82c
        mov byte ptr ds : [esi+0xAC], al
        mov dword ptr ds : [esi+0xA4], ebx
        public_4bd82c : nop
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4bd770)
    }
}

#undef public_4bd7e0
#undef public_4bd80d
#undef public_4bd814
#undef public_4bd82c
