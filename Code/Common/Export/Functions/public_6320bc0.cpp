#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630dda0);
CLANG_FORWARD_PROC_SYMBOL(public_6320290);
CLANG_FORWARD_PROC_SYMBOL(public_63227c0);
CLANG_FORWARD_PROC_SYMBOL(public_63237e0);

#define public_6320bec _public_6320bec
#define public_6320c09 _public_6320c09
#define public_6320c18 _public_6320c18
#define public_6320c2b _public_6320c2b
#define public_6320c53 _public_6320c53
#define public_6320c75 _public_6320c75
#define public_6320c9e _public_6320c9e

PROC_DECLARE(0x6320bc0, internal_6320bc0, public_6320bc0);
extern "C" NAKED register_t __cdecl internal_6320bc0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x10], ecx
        push edx
        mov ecx, offset public_64018c4
        mov edi, 0xFFFFFFFE
        call public_63227c0
        test al, al
        je public_6320bec
        mov eax, dword ptr ds : [public_64018d8]
        jmp public_6320c09
        public_6320bec : nop
        lea eax, ss:[esp+0x10]
        push eax
        lea ecx, ss:[esp+0xC]
        push ecx
        mov ecx, offset public_64018c4
        call public_63237e0
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [public_64018d8], eax
        public_6320c09 : nop
        cmp eax, dword ptr ds : [public_64018c8]
        je public_6320c18
        lea esi, ds:[eax+0x10]
        test esi, esi
        jne public_6320c2b
        public_6320c18 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push edx
        call public_6320290
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_6320c9e
        public_6320c2b : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+0x74]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], edx
        mov byte ptr ds : [ecx], 0
        mov eax, dword ptr ds : [esi+0x7C]
        cmp eax, dword ptr ds : [esi+0x80]
        je public_6320c75
        mov edx, dword ptr ss : [esp+0x20]
        push ebx
        public_6320c53 : nop
        movzx edi, byte ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [edx+edi*8], ebx
        movzx edi, byte ptr ds : [ecx]
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+edi*8+4], ebx
        inc byte ptr ds : [ecx]
        mov edi, dword ptr ds : [esi+0x80]
        add eax, 8
        cmp eax, edi
        jne public_6320c53
        pop ebx
        public_6320c75 : nop
        lea ecx, ds:[esi+0x10]
        push ecx
        mov ecx, dword ptr ss : [esp+0x28]
        call public_630dda0
        mov ecx, dword ptr ss : [esp+0x28]
        lea edx, ds:[esi+0x28]
        push edx
        call public_630dda0
        mov eax, dword ptr ss : [esp+0x2C]
        add esi, 0x44
        mov dword ptr ds : [eax], esi
        pop edi
        xor eax, eax
        pop esi
        pop ecx
        ret 
        public_6320c9e : nop
        mov eax, edi
        pop edi
        pop esi
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6320bc0)
    }
}

#undef public_6320bec
#undef public_6320c09
#undef public_6320c18
#undef public_6320c2b
#undef public_6320c53
#undef public_6320c75
#undef public_6320c9e
