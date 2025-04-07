#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620c160);
CLANG_FORWARD_PROC_SYMBOL(public_62263c0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_JUMP_SYMBOL(public_6249021);

#define public_62263e5 _public_62263e5
#define public_62263e7 _public_62263e7
#define public_6226409 _public_6226409
#define public_622642e _public_622642e
#define public_6226446 _public_6226446
#define public_6226455 _public_6226455
#define public_622646a _public_622646a
#define public_62264ad _public_62264ad
#define public_62264bd _public_62264bd
#define public_62264dc _public_62264dc

PROC_DECLARE(0x62263c0, internal_62263c0, public_62263c0);
extern "C" NAKED register_t __cdecl internal_62263c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6249021 @0x62263c8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6249021
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 8
        push esi
        push edi
        xor edi, edi
        cmp ecx, edi
        je public_62263e5
        lea esi, ds:[ecx+4]
        jmp public_62263e7
        public_62263e5 : nop
        xor esi, esi
        public_62263e7 : nop
        mov dword ptr ss : [esp+8], esi
        mov eax, dword ptr ds : [esi+0x84]
        mov dword ptr ss : [esp+0x18], 1
        cmp eax, edi
        je public_6226409
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x84], edi
        public_6226409 : nop
        mov dword ptr ds : [esi+0x60], offset public_624bd84
        mov eax, dword ptr ds : [esi+0x6C]
        cmp eax, edi
        mov dword ptr ds : [esi+0x68], offset public_624bd80
        je public_622642e
        mov eax, dword ptr ds : [esi+0x70]
        cmp eax, edi
        je public_622642e
        push eax
        call public_62460e0
        add esp, 4
        public_622642e : nop
        mov eax, dword ptr ds : [esi+0x58]
        mov dword ptr ss : [esp+0x18], 3
        cmp eax, edi
        je public_6226446
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x58], edi
        public_6226446 : nop
        push ebx
        lea ebx, ds:[esi+0x4C]
        push ebp
        mov ebp, dword ptr ds : [ebx+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebp
        je public_622646a
        public_6226455 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_620c160
        cmp edi, ebp
        jne public_6226455
        public_622646a : nop
        mov eax, dword ptr ds : [ebx+4]
        push eax
        call public_62460e0
        xor edi, edi
        add esp, 4
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        mov ebx, offset public_624bd84
        mov ebp, offset public_624bd80
        mov dword ptr ds : [esi+0x28], ebx
        mov eax, dword ptr ds : [esi+0x34]
        cmp eax, edi
        mov dword ptr ss : [esp+0x20], 4
        mov dword ptr ds : [esi+0x30], ebp
        je public_62264ad
        mov eax, dword ptr ds : [esi+0x38]
        cmp eax, edi
        je public_62264ad
        push eax
        call public_62460e0
        add esp, 4
        public_62264ad : nop
        mov eax, dword ptr ds : [esi+0x24]
        cmp eax, edi
        je public_62264bd
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], edi
        public_62264bd : nop
        mov dword ptr ds : [esi+4], ebx
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+0xC], ebp
        cmp eax, edi
        pop ebp
        pop ebx
        je public_62264dc
        mov esi, dword ptr ds : [esi+0x14]
        cmp esi, edi
        je public_62264dc
        push esi
        call public_62460e0
        add esp, 4
        public_62264dc : nop
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x62263c0)
    }
}

#undef public_62263e5
#undef public_62263e7
#undef public_6226409
#undef public_622642e
#undef public_6226446
#undef public_6226455
#undef public_622646a
#undef public_62264ad
#undef public_62264bd
#undef public_62264dc
