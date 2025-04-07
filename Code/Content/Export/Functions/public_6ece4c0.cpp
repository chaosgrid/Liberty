#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);

#define public_6ece4f8 _public_6ece4f8
#define public_6ece532 _public_6ece532
#define public_6ece53d _public_6ece53d
#define public_6ece53f _public_6ece53f
#define public_6ece560 _public_6ece560
#define public_6ece56b _public_6ece56b
#define public_6ece57d _public_6ece57d

PROC_DECLARE(0x6ece4c0, internal_6ece4c0, public_6ece4c0);
extern "C" NAKED register_t __cdecl internal_6ece4c0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov ebx, ecx
        push 0
        mov ecx, ebp
        call dword ptr ds : [public_6fb3048]
        push eax
        lea eax, ds:[ebx+0x10]
        push eax
        call dword ptr ds : [public_6fb3628]
        add esp, 8
        mov edi, 1
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        jne public_6ece57d
        public_6ece4f8 : nop
        cmp edi, 0x32
        jge public_6ece57d
        push edi
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call dword ptr ds : [public_6fb3048]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        call dword ptr ds : [public_6fb361c]
        mov eax, dword ptr ds : [ebx+0x18]
        mov ecx, dword ptr ds : [ebx+0x1C]
        lea esi, ds:[ebx+0x14]
        add esp, 8
        cmp eax, ecx
        je public_6ece53d
        mov edx, dword ptr ss : [esp+0x14]
        public_6ece532 : nop
        cmp dword ptr ds : [eax], edx
        je public_6ece53f
        add eax, 4
        cmp eax, ecx
        jne public_6ece532
        public_6ece53d : nop
        mov eax, ecx
        public_6ece53f : nop
        cmp eax, ecx
        jne public_6ece56b
        lea edx, ss:[esp+0x14]
        push edx
        push 1
        push ecx
        mov ecx, esi
        call public_6f937c0
        mov eax, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        cmp eax, esi
        je public_6ece56b
        mov ecx, dword ptr ss : [esp+0x14]
        public_6ece560 : nop
        cmp dword ptr ds : [eax], ecx
        je public_6ece56b
        add eax, 4
        cmp eax, esi
        jne public_6ece560
        public_6ece56b : nop
        inc edi
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_6fb306c]
        test al, al
        je public_6ece4f8
        public_6ece57d : nop
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [ebx+0xD], 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6ece4c0)
    }
}

#undef public_6ece4f8
#undef public_6ece532
#undef public_6ece53d
#undef public_6ece53f
#undef public_6ece560
#undef public_6ece56b
#undef public_6ece57d
