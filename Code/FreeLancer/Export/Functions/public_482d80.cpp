#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_482d80);

#define public_482d96 _public_482d96
#define public_482dbb _public_482dbb
#define public_482de4 _public_482de4
#define public_482def _public_482def
#define public_482df5 _public_482df5

PROC_DECLARE(0x482d80, internal_482d80, public_482d80);
extern "C" NAKED register_t __cdecl internal_482d80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+4]
        push ebx
        push esi
        push edi
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_482def
        mov ebx, dword ptr ds : [public_5c603c]
        public_482d96 : nop
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call ebx
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_482de4
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x10]
        cmp eax, 0x11
        je public_482dbb
        cmp eax, 0x12
        je public_482dbb
        cmp eax, 0x13
        jne public_482de4
        public_482dbb : nop
        add esi, 0x98
        mov ecx, esi
        call dword ptr ds : [public_5c6040]
        test al, al
        jne public_482de4
        push esi
        call dword ptr ds : [public_5c639c]
        add esp, 4
        test eax, eax
        je public_482de4
        mov ecx, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [eax+8], ecx
        je public_482df5
        public_482de4 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [edx+4]
        jne public_482d96
        public_482def : nop
        pop edi
        pop esi
        xor al, al
        pop ebx
        ret 
        public_482df5 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x482d80)
    }
}

#undef public_482d96
#undef public_482dbb
#undef public_482de4
#undef public_482def
#undef public_482df5
