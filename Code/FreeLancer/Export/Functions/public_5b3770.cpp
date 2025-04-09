#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3640);
CLANG_FORWARD_PROC_SYMBOL(public_5b3770);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_5b37b5 _public_5b37b5
#define public_5b37c5 _public_5b37c5
#define public_5b37d3 _public_5b37d3
#define public_5b37d8 _public_5b37d8

PROC_DECLARE(0x5b3770, internal_5b3770, public_5b3770);
extern "C" NAKED register_t __cdecl internal_5b3770()
{
    __asm
    {
        mov cl, byte ptr ds : [public_67ed0c]
        push esi
        mov al, 1
        xor esi, esi
        test al, cl
        push edi
        jne public_5b37b5
        or cl, al
        mov al, byte ptr ss : [esp+0xC]
        push esi
        mov byte ptr ds : [public_67ed0c], cl
        push esi
        mov ecx, offset public_67ed00
        mov byte ptr ds : [public_67ed00], al
        call public_42a7e0
/*FIXUP push offset _public_5b3640 @0x5b379d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_5b3640
        mov dword ptr ds : [public_67ed04], eax
        mov dword ptr ds : [public_67ed08], esi
        call public_5b7e6c
        add esp, 4
        public_5b37b5 : nop
        mov ecx, dword ptr ds : [public_67ed04]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_5b37d3
        mov edx, dword ptr ss : [esp+0xC]
        public_5b37c5 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edx, dword ptr ds : [edi+8]
        je public_5b37d8
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_5b37c5
        public_5b37d3 : nop
        pop edi
        mov eax, esi
        pop esi
        ret 
        public_5b37d8 : nop
        mov eax, dword ptr ds : [eax+8]
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x5b3770)
    }
}

#undef public_5b37b5
#undef public_5b37c5
#undef public_5b37d3
#undef public_5b37d8
