#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);

#define public_6eb2c53 _public_6eb2c53
#define public_6eb2c7a _public_6eb2c7a
#define public_6eb2c81 _public_6eb2c81
#define public_6eb2c8e _public_6eb2c8e
#define public_6eb2ca5 _public_6eb2ca5

PROC_DECLARE(0x6eb2c40, internal_6eb2c40, public_6eb2c40);
extern "C" NAKED register_t __cdecl internal_6eb2c40()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x1C]
        xor ebp, ebp
        test eax, eax
        jbe public_6eb2c8e
        push ebx
        push edi
        xor edi, edi
        public_6eb2c53 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+edi+4]
        mov edx, dword ptr ds : [esi+8]
        add eax, edi
        cmp ecx, 0xFFFFFFFF
        je public_6eb2c7a
        mov bl, byte ptr ds : [eax+0x28]
        test bl, bl
        jne public_6eb2c81
        mov ebx, dword ptr ds : [edx]
        add eax, 8
        push eax
        push 0xFFFFFFFF
        push ecx
        push edx
        call dword ptr ds : [ebx+0x70]
        jmp public_6eb2c81
        public_6eb2c7a : nop
        mov dword ptr ds : [eax+8], 0
        public_6eb2c81 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        inc ebp
        add edi, 0x2C
        cmp ebp, eax
        jb public_6eb2c53
        pop edi
        pop ebx
        public_6eb2c8e : nop
        call public_6ecf670
        mov eax, dword ptr ds : [eax+4]
        add eax, 0xC
        je public_6eb2ca5
        cmp dword ptr ds : [eax], 1
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x74], al
        public_6eb2ca5 : nop
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6eb2c40)
    }
}

#undef public_6eb2c53
#undef public_6eb2c7a
#undef public_6eb2c81
#undef public_6eb2c8e
#undef public_6eb2ca5
