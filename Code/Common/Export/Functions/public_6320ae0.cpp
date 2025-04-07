#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6320ae0);
CLANG_FORWARD_PROC_SYMBOL(public_63236a0);
CLANG_FORWARD_PROC_SYMBOL(public_63238a0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6320b17 _public_6320b17
#define public_6320b23 _public_6320b23
#define public_6320b39 _public_6320b39
#define public_6320b3b _public_6320b3b
#define public_6320b41 _public_6320b41
#define public_6320b56 _public_6320b56
#define public_6320b70 _public_6320b70
#define public_6320b77 _public_6320b77
#define public_6320b8f _public_6320b8f
#define public_6320b91 _public_6320b91
#define public_6320b96 _public_6320b96
#define public_6320bb3 _public_6320bb3
#define public_6320bb9 _public_6320bb9

PROC_DECLARE(0x6320ae0, internal_6320ae0, public_6320ae0);
extern "C" NAKED register_t __cdecl internal_6320ae0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push ebx
        mov ecx, offset public_64018c4
        mov esi, 0xFFFFFFFE
        call public_63236a0
        test eax, eax
        mov ecx, dword ptr ds : [public_64018c8]
        mov dword ptr ds : [public_64018d8], ecx
        je public_6320bb9
        mov eax, dword ptr ds : [ecx]
        xor ebp, ebp
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        je public_6320b56
        public_6320b17 : nop
        lea esi, ds:[eax+0x98]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6320b41
        public_6320b23 : nop
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [ebx]
        jne public_6320b39
        mov edx, dword ptr ds : [eax]
        push eax
        mov dword ptr ds : [esi], edx
        call public_6391d5a
        add esp, 4
        jmp public_6320b3b
        public_6320b39 : nop
        mov esi, eax
        public_6320b3b : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        jne public_6320b23
        public_6320b41 : nop
        lea ecx, ss:[esp+0x10]
        call public_63238a0
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [public_64018c8]
        jne public_6320b17
        public_6320b56 : nop
        mov eax, dword ptr ds : [public_64018b8]
        cmp eax, dword ptr ds : [public_64018bc]
        je public_6320bb3
        push edi
        lea edi, ds:[eax+0x8C]
        lea ebx, ds:[ebx]
        public_6320b70 : nop
        cmp dword ptr ds : [edi], 0
        mov esi, edi
        je public_6320b96
        public_6320b77 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+4]
        cmp ecx, dword ptr ds : [ebx]
        jne public_6320b8f
        mov edx, dword ptr ds : [eax]
        push eax
        mov dword ptr ds : [esi], edx
        call public_6391d5a
        add esp, 4
        jmp public_6320b91
        public_6320b8f : nop
        mov esi, eax
        public_6320b91 : nop
        cmp dword ptr ds : [esi], 0
        jne public_6320b77
        public_6320b96 : nop
        mov ecx, dword ptr ds : [public_64018bc]
        add edi, 0x90
        lea eax, ds:[edi-0x8C]
        cmp eax, ecx
        jne public_6320b70
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        public_6320bb3 : nop
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        public_6320bb9 : nop
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6320ae0)
    }
}

#undef public_6320b17
#undef public_6320b23
#undef public_6320b39
#undef public_6320b3b
#undef public_6320b41
#undef public_6320b56
#undef public_6320b70
#undef public_6320b77
#undef public_6320b8f
#undef public_6320b91
#undef public_6320b96
#undef public_6320bb3
#undef public_6320bb9
