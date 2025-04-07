#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62d5760);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62d5791 _public_62d5791
#define public_62d579c _public_62d579c
#define public_62d579e _public_62d579e
#define public_62d57b7 _public_62d57b7
#define public_62d57b9 _public_62d57b9
#define public_62d57dd _public_62d57dd
#define public_62d57f3 _public_62d57f3

PROC_DECLARE(0x62d5760, internal_62d5760, public_62d5760);
extern "C" NAKED register_t __cdecl internal_62d5760()
{
    __asm
    {
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0xC]
        mov ebp, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_62d57dd
        push edi
        lea edi, ds:[esi+0x14]
        mov dword ptr ds : [esi+0x48], 1
        mov ecx, dword ptr ds : [edi]
        add eax, 8
        cmp eax, ecx
        je public_62d5791
        push eax
        mov ecx, edi
        call public_6341610
        public_62d5791 : nop
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62d579c
        lea ecx, ds:[eax-8]
        jmp public_62d579e
        public_62d579c : nop
        xor ecx, ecx
        public_62d579e : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0x64], eax
        mov edi, dword ptr ds : [edi]
        test edi, edi
        je public_62d57b7
        lea ecx, ds:[edi-8]
        jmp public_62d57b9
        public_62d57b7 : nop
        xor ecx, ecx
        public_62d57b9 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        add ebp, 0x200
        mov dword ptr ss : [ebp], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [ebp+4], edx
        mov eax, dword ptr ds : [eax+8]
        pop edi
        pop esi
        mov dword ptr ss : [ebp+8], eax
        pop ebp
        add esp, 0xC
        ret 4
        public_62d57dd : nop
        lea ecx, ds:[esi+0x14]
        mov dword ptr ds : [esi+0x48], 0
        cmp dword ptr ds : [ecx], 0
        je public_62d57f3
        push 0
        call public_6341610
        public_62d57f3 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [ecx+0xC]
        mov dword ptr ds : [edx+0x64], 0
        add ebp, 0x200
        mov dword ptr ss : [esp+8], 0
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [ebp], eax
        mov dword ptr ss : [esp+0xC], 0
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x10], 0
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [ebp+4], ecx
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62d5760)
    }
}

#undef public_62d5791
#undef public_62d579c
#undef public_62d579e
#undef public_62d57b7
#undef public_62d57b9
#undef public_62d57dd
#undef public_62d57f3
