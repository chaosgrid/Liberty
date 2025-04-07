#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41660);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f41673 _public_6f41673
#define public_6f4167e _public_6f4167e
#define public_6f41684 _public_6f41684

PROC_DECLARE(0x6f41660, internal_6f41660, public_6f41660);
extern "C" NAKED register_t __cdecl internal_6f41660()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x88]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        je public_6f4167e
        mov edx, dword ptr ss : [esp+8]
        public_6f41673 : nop
        cmp dword ptr ds : [eax+8], edx
        je public_6f41684
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f41673
        public_6f4167e : nop
        xor al, al
        pop esi
        ret 4
        public_6f41684 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [ecx+4], edx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+0x8C]
        add esp, 4
        dec eax
        mov dword ptr ds : [esi+0x8C], eax
        mov al, 1
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6f41660)
    }
}

#undef public_6f41673
#undef public_6f4167e
#undef public_6f41684
