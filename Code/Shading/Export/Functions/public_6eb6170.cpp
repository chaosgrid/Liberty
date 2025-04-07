#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecf670);

#define public_6eb6183 _public_6eb6183
#define public_6eb61aa _public_6eb61aa
#define public_6eb61b1 _public_6eb61b1
#define public_6eb61be _public_6eb61be
#define public_6eb61d5 _public_6eb61d5

PROC_DECLARE(0x6eb6170, internal_6eb6170, public_6eb6170);
extern "C" NAKED register_t __cdecl internal_6eb6170()
{
    __asm
    {
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [esi+0x1C]
        xor ebp, ebp
        test eax, eax
        jbe public_6eb61be
        push ebx
        push edi
        xor edi, edi
        public_6eb6183 : nop
        mov eax, dword ptr ds : [esi+0x18]
        mov ecx, dword ptr ds : [eax+edi+4]
        mov edx, dword ptr ds : [esi+8]
        add eax, edi
        cmp ecx, 0xFFFFFFFF
        je public_6eb61aa
        mov bl, byte ptr ds : [eax+0x28]
        test bl, bl
        jne public_6eb61b1
        mov ebx, dword ptr ds : [edx]
        add eax, 8
        push eax
        push 0xFFFFFFFF
        push ecx
        push edx
        call dword ptr ds : [ebx+0x70]
        jmp public_6eb61b1
        public_6eb61aa : nop
        mov dword ptr ds : [eax+8], 0
        public_6eb61b1 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        inc ebp
        add edi, 0x2C
        cmp ebp, eax
        jb public_6eb6183
        pop edi
        pop ebx
        public_6eb61be : nop
        call public_6ecf670
        mov eax, dword ptr ds : [eax+4]
        add eax, 0x14
        je public_6eb61d5
        cmp dword ptr ds : [eax], 1
        sbb al, al
        inc al
        mov byte ptr ds : [esi+0x68], al
        public_6eb61d5 : nop
        pop esi
        xor eax, eax
        pop ebp
        ret 8
        UNREACHABLE_TRAP(0x6eb6170)
    }
}

#undef public_6eb6183
#undef public_6eb61aa
#undef public_6eb61b1
#undef public_6eb61be
#undef public_6eb61d5
