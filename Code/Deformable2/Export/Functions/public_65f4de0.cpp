#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4de0);
CLANG_FORWARD_PROC_SYMBOL(public_65fbf40);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f4df1 _public_65f4df1
#define public_65f4dfa _public_65f4dfa
#define public_65f4dfd _public_65f4dfd
#define public_65f4e4e _public_65f4e4e
#define public_65f4e57 _public_65f4e57
#define public_65f4e68 _public_65f4e68
#define public_65f4e77 _public_65f4e77
#define public_65f4e7d _public_65f4e7d
#define public_65f4e8c _public_65f4e8c
#define public_65f4ebd _public_65f4ebd
#define public_65f4ec3 _public_65f4ec3
#define public_65f4ed3 _public_65f4ed3
#define public_65f4edf _public_65f4edf
#define public_65f4ef7 _public_65f4ef7

PROC_DECLARE(0x65f4de0, internal_65f4de0, public_65f4de0);
extern "C" NAKED register_t __cdecl internal_65f4de0()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        je public_65f4edf
        push ebx
        push edi
        public_65f4df1 : nop
        test esi, esi
        jne public_65f4dfa
        mov ebx, dword ptr ss : [ebp+0xC]
        jmp public_65f4dfd
        public_65f4dfa : nop
        mov ebx, dword ptr ds : [esi+0x10]
        public_65f4dfd : nop
        cmp byte ptr ds : [esi], 0
        je public_65f4e8c
        mov eax, dword ptr ds : [esi+4]
        test byte ptr ds : [eax+0x34], 1
        je public_65f4ed3
        mov eax, dword ptr ds : [eax+0x18]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [public_660313c]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x3C]
        test al, al
        jne public_65f4ed3
        cmp byte ptr ds : [esi], 0
        mov eax, dword ptr ds : [public_6603138]
        je public_65f4e57
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_65f4e4e
        mov ecx, edi
        call public_65fbf40
        push edi
        call public_6600bb0
        add esp, 4
        public_65f4e4e : nop
        mov dword ptr ds : [esi+4], 0
        jmp public_65f4e68
        public_65f4e57 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_65f4e68 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_65f4e77
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [ebp+0xC], eax
        jmp public_65f4e7d
        public_65f4e77 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x10], ecx
        public_65f4e7d : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_65f4ebd
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0x10], edx
        jmp public_65f4ec3
        public_65f4e8c : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_6603138]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x44]
        test eax, eax
        je public_65f4ed3
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [public_6603138]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_65f4e77
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [ebp+0xC], edx
        jmp public_65f4e7d
        public_65f4ebd : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_65f4ec3 : nop
        mov edx, dword ptr ss : [ebp+0x14]
        dec edx
        push esi
        mov dword ptr ss : [ebp+0x14], edx
        call public_6600bb0
        add esp, 4
        public_65f4ed3 : nop
        test ebx, ebx
        mov esi, ebx
        jne public_65f4df1
        pop edi
        pop ebx
        public_65f4edf : nop
        mov eax, dword ptr ss : [ebp+0x14]
        test eax, eax
        jne public_65f4ef7
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+0x34]
        fsub dword ptr ss : [ebp+0x20]
        fstp dword ptr ss : [ebp+0x24]
        public_65f4ef7 : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65f4de0)
    }
}

#undef public_65f4df1
#undef public_65f4dfa
#undef public_65f4dfd
#undef public_65f4e4e
#undef public_65f4e57
#undef public_65f4e68
#undef public_65f4e77
#undef public_65f4e7d
#undef public_65f4e8c
#undef public_65f4ebd
#undef public_65f4ec3
#undef public_65f4ed3
#undef public_65f4edf
#undef public_65f4ef7
