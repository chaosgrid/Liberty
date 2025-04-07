#include "Server-PCH.h"


#define public_6d20a80 _public_6d20a80
#define public_6d20a82 _public_6d20a82
#define public_6d20a8c _public_6d20a8c
#define public_6d20a9c _public_6d20a9c

PROC_DECLARE(0x6d20a50, internal_6d20a50, public_6d20a50);
extern "C" NAKED register_t __cdecl internal_6d20a50()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        lea ecx, ss:[esp+0x10]
        push ecx
        push edi
        mov ecx, esi
        call dword ptr ds : [eax+0x14]
        test al, al
        je public_6d20a9c
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d20a8c
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d20a80 : nop
        je public_6d20a9c
        public_6d20a82 : nop
        pop edi
        mov eax, 1
        pop esi
        ret 8
        public_6d20a8c : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d20a82
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, dword ptr ss : [esp+0x10]
        jmp public_6d20a80
        public_6d20a9c : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d20a50)
    }
}

#undef public_6d20a80
#undef public_6d20a82
#undef public_6d20a8c
#undef public_6d20a9c
