#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6241070);

#define public_62410bf _public_62410bf
#define public_6241129 _public_6241129
#define public_624116c _public_624116c

PROC_DECLARE(0x6241070, internal_6241070, public_6241070);
extern "C" NAKED register_t __cdecl internal_6241070()
{
    __asm
    {
        sub esp, 0x100
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+8]
        test al, al
        jne public_62410bf
        lea eax, ss:[esp+4]
/*FIXUP push offset public_6257564 @0x6241084*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257564
        push eax
        call dword ptr ds : [public_624b064]
        mov edx, dword ptr ds : [public_624b004]
        lea ecx, ss:[esp+0xC]
        push ecx
        push 0x9E
        mov eax, 0x100001
/*FIXUP push offset public_62573f0 @0x62410a5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62573f0
/*FIXUP push offset public_625506c @0x62410aa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x1C
        xor eax, eax
        pop esi
        add esp, 0x100
        ret 
        public_62410bf : nop
        mov eax, dword ptr ds : [public_6257bc4]
        mov edx, dword ptr ds : [public_6257bd4]
        push edi
        push edx
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [public_6257bc8]
        push 0xFFFFFFFF
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+0x18]
        mov edi, dword ptr ds : [public_624b064]
        xor edx, edx
        mov dx, word ptr ds : [esi+4]
        cmp eax, edx
        jge public_6241129
        lea eax, ss:[esp+8]
/*FIXUP push offset public_6257520 @0x62410f6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257520
        push eax
        call edi
        mov edx, dword ptr ds : [public_624b004]
        lea ecx, ss:[esp+0x10]
        push ecx
        push 0xA9
        mov eax, 0x100001
/*FIXUP push offset public_62573f0 @0x6241113*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62573f0
/*FIXUP push offset public_625506c @0x6241118*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x1C
        mov word ptr ds : [esi+6], 0
        public_6241129 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        xor eax, eax
        mov ax, word ptr ds : [esi+6]
        cmp ecx, eax
        jge public_624116c
        lea ecx, ss:[esp+8]
/*FIXUP push offset public_62574d8 @0x624113a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62574d8
        push ecx
        call edi
        lea edx, ss:[esp+0x10]
        mov eax, 0x100001
        push edx
        push 0xB1
/*FIXUP push offset public_62573f0 @0x6241151*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62573f0
/*FIXUP push offset public_625506c @0x6241156*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        mov eax, dword ptr ds : [public_624b004]
        call dword ptr ds : [eax]
        add esp, 0x1C
        mov word ptr ds : [esi+6], 0
        public_624116c : nop
        xor eax, eax
        mov byte ptr ds : [esi+8], 0
        mov ax, word ptr ds : [esi+6]
        pop edi
        pop esi
        add esp, 0x100
        ret 
        UNREACHABLE_TRAP(0x6241070)
    }
}

#undef public_62410bf
#undef public_6241129
#undef public_624116c
