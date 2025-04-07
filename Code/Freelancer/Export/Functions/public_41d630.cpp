#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41d630);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_41d646 _public_41d646
#define public_41d65b _public_41d65b
#define public_41d672 _public_41d672
#define public_41d685 _public_41d685

PROC_DECLARE(0x41d630, internal_41d630, public_41d630);
extern "C" NAKED register_t __cdecl internal_41d630()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        push ebp
        mov ebp, ecx
        je public_41d685
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_41d646 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_41d65b
        mov esi, eax
        public_41d65b : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_41d672
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_41d672 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_41d646
        pop edi
        pop esi
        public_41d685 : nop
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x41d630)
    }
}

#undef public_41d646
#undef public_41d65b
#undef public_41d672
#undef public_41d685
