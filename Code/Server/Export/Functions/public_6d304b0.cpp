#include "Server-PCH.h"


#define public_6d304e0 _public_6d304e0
#define public_6d304e2 _public_6d304e2
#define public_6d304ec _public_6d304ec
#define public_6d304fc _public_6d304fc

PROC_DECLARE(0x6d304b0, internal_6d304b0, public_6d304b0);
extern "C" NAKED register_t __cdecl internal_6d304b0()
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
        call dword ptr ds : [eax+0x24]
        test al, al
        je public_6d304fc
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        je public_6d304ec
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edi
        call dword ptr ds : [edx+4]
        movzx eax, al
        test al, al
        public_6d304e0 : nop
        je public_6d304fc
        public_6d304e2 : nop
        pop edi
        mov eax, 1
        pop esi
        ret 8
        public_6d304ec : nop
        mov al, byte ptr ds : [edi+0x1C]
        test al, al
        je public_6d304e2
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, dword ptr ss : [esp+0x10]
        jmp public_6d304e0
        public_6d304fc : nop
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6d304b0)
    }
}

#undef public_6d304e0
#undef public_6d304e2
#undef public_6d304ec
#undef public_6d304fc
