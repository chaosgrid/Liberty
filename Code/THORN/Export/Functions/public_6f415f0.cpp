#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f415f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f41604 _public_6f41604
#define public_6f4160f _public_6f4160f
#define public_6f4162c _public_6f4162c
#define public_6f41642 _public_6f41642
#define public_6f4164f _public_6f4164f

PROC_DECLARE(0x6f415f0, internal_6f415f0, public_6f415f0);
extern "C" NAKED register_t __cdecl internal_6f415f0()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x88]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        je public_6f4160f
        public_6f41604 : nop
        cmp dword ptr ds : [eax+8], ebp
        je public_6f4164f
        mov eax, dword ptr ds : [eax]
        cmp eax, ecx
        jne public_6f41604
        public_6f4160f : nop
        push esi
        mov esi, dword ptr ds : [ebx+0x88]
        push edi
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_6f57e9c
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6f4162c
        mov edi, eax
        public_6f4162c : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        pop edi
        pop esi
        je public_6f41642
        mov dword ptr ds : [eax], ebp
        public_6f41642 : nop
        inc dword ptr ds : [ebx+0x8C]
        pop ebp
        mov al, 1
        pop ebx
        ret 4
        public_6f4164f : nop
        pop ebp
        xor al, al
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f415f0)
    }
}

#undef public_6f41604
#undef public_6f4160f
#undef public_6f4162c
#undef public_6f41642
#undef public_6f4164f
