#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15710);
CLANG_FORWARD_PROC_SYMBOL(public_6f15940);
CLANG_FORWARD_PROC_SYMBOL(public_6f49b00);

#define public_6f1599d _public_6f1599d
#define public_6f159b3 _public_6f159b3

PROC_DECLARE(0x6f15940, internal_6f15940, public_6f15940);
extern "C" NAKED register_t __cdecl internal_6f15940()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0xC]
        push edi
        xor ebp, ebp
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f159b3
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [eax+0x10]
        test ecx, ecx
        je public_6f159b3
        mov ebx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[ebx+4]
/*FIXUP push offset public_6fb4708 @0x6f15969*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4708
        push ecx
        call dword ptr ds : [public_6fb3294]
        add esp, 8
        test eax, eax
        jne public_6f1599d
        push edi
        call public_6f49b00
        add esp, 4
        test eax, eax
        je public_6f159b3
        mov edx, dword ptr ds : [esi+8]
        mov eax, dword ptr ds : [edx+0x10]
        test eax, eax
        je public_6f159b3
        mov eax, dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6f1599d : nop
        push ebx
        mov ecx, esi
        call public_6f15710
        test eax, eax
        je public_6f159b3
        mov eax, dword ptr ds : [eax+4]
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 4
        public_6f159b3 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f15940)
    }
}

#undef public_6f1599d
#undef public_6f159b3
