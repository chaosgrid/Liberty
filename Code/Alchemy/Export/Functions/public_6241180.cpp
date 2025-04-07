#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6241180);

#define public_62411d0 _public_62411d0
#define public_6241221 _public_6241221

PROC_DECLARE(0x6241180, internal_6241180, public_6241180);
extern "C" NAKED register_t __cdecl internal_6241180()
{
    __asm
    {
        sub esp, 0x100
        push esi
        mov esi, ecx
        mov al, byte ptr ds : [esi+8]
        test al, al
        je public_62411d0
        lea eax, ss:[esp+4]
/*FIXUP push offset public_6257588 @0x6241194*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6257588
        push eax
        call dword ptr ds : [public_624b064]
        mov edx, dword ptr ds : [public_624b004]
        lea ecx, ss:[esp+0xC]
        push ecx
        push 0xC2
        mov eax, 0x100001
/*FIXUP push offset public_62573f0 @0x62411b5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_62573f0
/*FIXUP push offset public_625506c @0x62411ba*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_625506c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x1C
        or eax, 0xFFFFFFFF
        pop esi
        add esp, 0x100
        ret 
        public_62411d0 : nop
        mov eax, dword ptr ds : [public_6257bc4]
        mov edx, dword ptr ds : [public_6257bd4]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x28]
        test eax, eax
        jl public_6241221
        mov eax, dword ptr ds : [public_6257bc8]
        mov edx, dword ptr ds : [esi+0x20]
        push 0
        push 0
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0xFFFFFFFF
        push eax
        call dword ptr ds : [ecx+0x24]
        test eax, eax
        jl public_6241221
        xor edx, edx
        mov eax, dword ptr ds : [public_6257bcc]
        mov dx, word ptr ds : [esi+6]
        push edx
        mov edx, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax]
        push edx
        xor edx, edx
        mov dx, word ptr ds : [esi+4]
        push edx
        mov edx, dword ptr ds : [esi]
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        public_6241221 : nop
        xor eax, eax
        pop esi
        add esp, 0x100
        ret 
        UNREACHABLE_TRAP(0x6241180)
    }
}

#undef public_62411d0
#undef public_6241221
