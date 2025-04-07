#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f53ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f53af6 _public_6f53af6
#define public_6f53b0b _public_6f53b0b
#define public_6f53b28 _public_6f53b28
#define public_6f53b3b _public_6f53b3b

PROC_DECLARE(0x6f53ae0, internal_6f53ae0, public_6f53ae0);
extern "C" NAKED register_t __cdecl internal_6f53ae0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        push ebp
        mov ebp, ecx
        je public_6f53b3b
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_6f53af6 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0x10
        call public_6fa912a
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_6f53b0b
        mov esi, eax
        public_6f53b0b : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6f53b28
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_6f53b28 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6f53af6
        pop edi
        pop esi
        public_6f53b3b : nop
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f53ae0)
    }
}

#undef public_6f53af6
#undef public_6f53b0b
#undef public_6f53b28
#undef public_6f53b3b
