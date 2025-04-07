#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c33a0);
CLANG_FORWARD_PROC_SYMBOL(public_65c6a66);

#define public_65c33b6 _public_65c33b6
#define public_65c33cb _public_65c33cb
#define public_65c33e2 _public_65c33e2
#define public_65c33f5 _public_65c33f5

PROC_DECLARE(0x65c33a0, internal_65c33a0, public_65c33a0);
extern "C" NAKED register_t __cdecl internal_65c33a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        push ebp
        mov ebp, ecx
        je public_65c33f5
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_65c33b6 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0xC
        call public_65c6a66
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_65c33cb
        mov esi, eax
        public_65c33cb : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_65c33e2
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_65c33e2 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_65c33b6
        pop edi
        pop esi
        public_65c33f5 : nop
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65c33a0)
    }
}

#undef public_65c33b6
#undef public_65c33cb
#undef public_65c33e2
#undef public_65c33f5
