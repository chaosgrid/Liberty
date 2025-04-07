#include "Deformable2-PCH.h"


#define public_65fe9b3 _public_65fe9b3
#define public_65fe9da _public_65fe9da
#define public_65fe9e1 _public_65fe9e1
#define public_65fe9ee _public_65fe9ee

PROC_DECLARE(0x65fe9a0, internal_65fe9a0, public_65fe9a0);
extern "C" NAKED register_t __cdecl internal_65fe9a0()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x1C]
        xor ebp, ebp
        test eax, eax
        jbe public_65fe9ee
        push ebx
        push edi
        xor edi, edi
        public_65fe9b3 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+edi+4]
        mov edx, dword ptr ds : [esi+8]
        add eax, edi
        cmp ecx, 0xFFFFFFFF
        je public_65fe9da
        mov bl, byte ptr ds : [eax+0x28]
        test bl, bl
        jne public_65fe9e1
        mov ebx, dword ptr ds : [edx]
        add eax, 8
        push eax
        push 0xFFFFFFFF
        push ecx
        push edx
        call dword ptr ds : [ebx+0x70]
        jmp public_65fe9e1
        public_65fe9da : nop
        mov dword ptr ds : [eax+8], 0
        public_65fe9e1 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        inc ebp
        add edi, 0x2C
        cmp ebp, eax
        jb public_65fe9b3
        pop edi
        pop ebx
        public_65fe9ee : nop
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x65fe9a0)
    }
}

#undef public_65fe9b3
#undef public_65fe9da
#undef public_65fe9e1
#undef public_65fe9ee
