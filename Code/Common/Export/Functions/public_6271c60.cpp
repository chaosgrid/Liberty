#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271c60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_6271c76 _public_6271c76
#define public_6271c8b _public_6271c8b
#define public_6271ca8 _public_6271ca8
#define public_6271cbb _public_6271cbb

PROC_DECLARE(0x6271c60, internal_6271c60, public_6271c60);
extern "C" NAKED register_t __cdecl internal_6271c60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        push ebp
        mov ebp, ecx
        je public_6271cbb
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_6271c76 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0x10
        call public_6391d9c
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_6271c8b
        mov esi, eax
        public_6271c8b : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6271ca8
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [eax+4], ecx
        public_6271ca8 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6271c76
        pop edi
        pop esi
        public_6271cbb : nop
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6271c60)
    }
}

#undef public_6271c76
#undef public_6271c8b
#undef public_6271ca8
#undef public_6271cbb
