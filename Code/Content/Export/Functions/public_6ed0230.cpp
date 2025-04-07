#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0230);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6ed0246 _public_6ed0246
#define public_6ed025b _public_6ed025b
#define public_6ed0272 _public_6ed0272
#define public_6ed0285 _public_6ed0285

PROC_DECLARE(0x6ed0230, internal_6ed0230, public_6ed0230);
extern "C" NAKED register_t __cdecl internal_6ed0230()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        cmp ebx, eax
        push ebp
        mov ebp, ecx
        je public_6ed0285
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_6ed0246 : nop
        mov esi, dword ptr ds : [edi+4]
        push 0xC
        call public_6fa912a
        add esp, 4
        test esi, esi
        mov dword ptr ds : [eax], edi
        jne public_6ed025b
        mov esi, eax
        public_6ed025b : nop
        mov dword ptr ds : [eax+4], esi
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        test eax, eax
        je public_6ed0272
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax], edx
        public_6ed0272 : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [esp+0x1C]
        inc ecx
        mov dword ptr ss : [ebp+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6ed0246
        pop edi
        pop esi
        public_6ed0285 : nop
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ed0230)
    }
}

#undef public_6ed0246
#undef public_6ed025b
#undef public_6ed0272
#undef public_6ed0285
