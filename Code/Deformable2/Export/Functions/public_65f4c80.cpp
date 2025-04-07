#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4c80);
CLANG_FORWARD_PROC_SYMBOL(public_65fbf40);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f4c91 _public_65f4c91
#define public_65f4c9a _public_65f4c9a
#define public_65f4c9d _public_65f4c9d
#define public_65f4cbe _public_65f4cbe
#define public_65f4cc7 _public_65f4cc7
#define public_65f4cd8 _public_65f4cd8
#define public_65f4ce7 _public_65f4ce7
#define public_65f4ced _public_65f4ced
#define public_65f4cfc _public_65f4cfc
#define public_65f4d02 _public_65f4d02
#define public_65f4d1e _public_65f4d1e

PROC_DECLARE(0x65f4c80, internal_65f4c80, public_65f4c80);
extern "C" NAKED register_t __cdecl internal_65f4c80()
{
    __asm
    {
        push ebp
        mov ebp, ecx
        push esi
        mov esi, dword ptr ss : [ebp+0xC]
        test esi, esi
        je public_65f4d1e
        push ebx
        push edi
        public_65f4c91 : nop
        test esi, esi
        jne public_65f4c9a
        mov ebx, dword ptr ss : [ebp+0xC]
        jmp public_65f4c9d
        public_65f4c9a : nop
        mov ebx, dword ptr ds : [esi+0x10]
        public_65f4c9d : nop
        cmp byte ptr ds : [esi], 0
        mov eax, dword ptr ds : [public_6603138]
        je public_65f4cc7
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_65f4cbe
        mov ecx, edi
        call public_65fbf40
        push edi
        call public_6600bb0
        add esp, 4
        public_65f4cbe : nop
        mov dword ptr ds : [esi+4], 0
        jmp public_65f4cd8
        public_65f4cc7 : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_65f4cd8 : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_65f4ce7
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ss : [ebp+0xC], eax
        jmp public_65f4ced
        public_65f4ce7 : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x10], ecx
        public_65f4ced : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_65f4cfc
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [ebp+0x10], edx
        jmp public_65f4d02
        public_65f4cfc : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_65f4d02 : nop
        mov edi, dword ptr ss : [ebp+0x14]
        dec edi
        push esi
        mov dword ptr ss : [ebp+0x14], edi
        call public_6600bb0
        add esp, 4
        test ebx, ebx
        mov esi, ebx
        jne public_65f4c91
        pop edi
        pop ebx
        public_65f4d1e : nop
        pop esi
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x65f4c80)
    }
}

#undef public_65f4c91
#undef public_65f4c9a
#undef public_65f4c9d
#undef public_65f4cbe
#undef public_65f4cc7
#undef public_65f4cd8
#undef public_65f4ce7
#undef public_65f4ced
#undef public_65f4cfc
#undef public_65f4d02
#undef public_65f4d1e
