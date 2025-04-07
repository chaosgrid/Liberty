#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6277dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6278230);
CLANG_FORWARD_PROC_SYMBOL(public_62782b0);
CLANG_FORWARD_PROC_SYMBOL(public_6279d90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_631c162 _public_631c162
#define public_631c185 _public_631c185
#define public_631c1ac _public_631c1ac
#define public_631c1c9 _public_631c1c9
#define public_631c1d0 _public_631c1d0
#define public_631c1f0 _public_631c1f0

PROC_DECLARE(0x631c150, internal_631c150, public_631c150);
extern "C" NAKED register_t __cdecl internal_631c150()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        lea ebp, ds:[ecx+4]
        mov dword ptr ss : [esp+0x14], 7
        public_631c162 : nop
        mov esi, dword ptr ss : [ebp]
        mov ecx, dword ptr ss : [ebp+0xC]
        test ecx, ecx
        mov eax, dword ptr ds : [esi]
        lea edi, ss:[ebp-4]
        mov dword ptr ss : [esp+0x10], eax
        je public_631c1c9
        mov ecx, eax
        cmp eax, ecx
        jne public_631c1c9
        mov ebx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ss : [ebp+4]
        mov esi, ebx
        je public_631c1ac
        public_631c185 : nop
        mov eax, dword ptr ds : [esi+8]
        push eax
        mov ecx, edi
        call public_6278230
        mov esi, dword ptr ds : [esi]
        lea ecx, ds:[ebx+0xC]
        call public_6279d90
        push ebx
        call public_6391d5a
        mov eax, dword ptr ss : [ebp+4]
        add esp, 4
        cmp esi, eax
        mov ebx, esi
        jne public_631c185
        public_631c1ac : nop
        mov ecx, dword ptr ds : [edi+4]
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov edi, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], edi
        jmp public_631c1f0
        public_631c1c9 : nop
        cmp eax, esi
        je public_631c1f0
        lea ecx, ds:[ecx]
        public_631c1d0 : nop
        lea ecx, ss:[esp+0x10]
        mov ebx, eax
        call public_62782b0
        push ebx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        call public_6277dd0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, esi
        jne public_631c1d0
        public_631c1f0 : nop
        mov eax, dword ptr ss : [esp+0x14]
        add ebp, 0x14
        dec eax
        mov dword ptr ss : [esp+0x14], eax
        jne public_631c162
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x631c150)
    }
}

#undef public_631c162
#undef public_631c185
#undef public_631c1ac
#undef public_631c1c9
#undef public_631c1d0
#undef public_631c1f0
