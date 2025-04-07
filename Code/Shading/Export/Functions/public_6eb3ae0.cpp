#include "Shading-PCH.h"


#define public_6eb3af3 _public_6eb3af3
#define public_6eb3b1a _public_6eb3b1a
#define public_6eb3b21 _public_6eb3b21
#define public_6eb3b2e _public_6eb3b2e

PROC_DECLARE(0x6eb3ae0, internal_6eb3ae0, public_6eb3ae0);
extern "C" NAKED register_t __cdecl internal_6eb3ae0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x1C]
        xor ebp, ebp
        test eax, eax
        jbe public_6eb3b2e
        push ebx
        push edi
        xor edi, edi
        public_6eb3af3 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+edi+4]
        mov edx, dword ptr ds : [esi+8]
        add eax, edi
        cmp ecx, 0xFFFFFFFF
        je public_6eb3b1a
        mov bl, byte ptr ds : [eax+0x28]
        test bl, bl
        jne public_6eb3b21
        mov ebx, dword ptr ds : [edx]
        add eax, 8
        push eax
        push 0xFFFFFFFF
        push ecx
        push edx
        call dword ptr ds : [ebx+0x70]
        jmp public_6eb3b21
        public_6eb3b1a : nop
        mov dword ptr ds : [eax+8], 0
        public_6eb3b21 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        inc ebp
        add edi, 0x2C
        cmp ebp, eax
        jb public_6eb3af3
        pop edi
        pop ebx
        public_6eb3b2e : nop
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6eb3ae0)
    }
}

#undef public_6eb3af3
#undef public_6eb3b1a
#undef public_6eb3b21
#undef public_6eb3b2e
