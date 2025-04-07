#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f4d30);
CLANG_FORWARD_PROC_SYMBOL(public_65fbf40);
CLANG_FORWARD_PROC_SYMBOL(public_6600bb0);

#define public_65f4d46 _public_65f4d46
#define public_65f4d4f _public_65f4d4f
#define public_65f4d60 _public_65f4d60
#define public_65f4d81 _public_65f4d81
#define public_65f4d8a _public_65f4d8a
#define public_65f4d9b _public_65f4d9b
#define public_65f4daa _public_65f4daa
#define public_65f4db0 _public_65f4db0
#define public_65f4dbf _public_65f4dbf
#define public_65f4dc5 _public_65f4dc5
#define public_65f4dd5 _public_65f4dd5

PROC_DECLARE(0x65f4d30, internal_65f4d30, public_65f4d30);
extern "C" NAKED register_t __cdecl internal_65f4d30()
{
    __asm
    {
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0xC]
        push esi
        mov esi, ecx
        test esi, esi
        push edi
        je public_65f4dd5
        mov edx, dword ptr ss : [esp+0x10]
        public_65f4d46 : nop
        test esi, esi
        mov eax, ecx
        je public_65f4d4f
        mov eax, dword ptr ds : [esi+0x10]
        public_65f4d4f : nop
        cmp edx, dword ptr ds : [esi+4]
        je public_65f4d60
        test eax, eax
        mov esi, eax
        jne public_65f4d46
        pop edi
        pop esi
        pop ebx
        ret 4
        public_65f4d60 : nop
        cmp byte ptr ds : [esi], 0
        mov eax, dword ptr ds : [public_6603138]
        je public_65f4d8a
        mov edi, dword ptr ds : [esi+4]
        test edi, edi
        je public_65f4d81
        mov ecx, edi
        call public_65fbf40
        push edi
        call public_6600bb0
        add esp, 4
        public_65f4d81 : nop
        mov dword ptr ds : [esi+4], 0
        jmp public_65f4d9b
        public_65f4d8a : nop
        mov edx, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov dword ptr ds : [esi+4], 0xFFFFFFFF
        public_65f4d9b : nop
        mov eax, dword ptr ds : [esi+0xC]
        test eax, eax
        jne public_65f4daa
        mov eax, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [ebx+0xC], eax
        jmp public_65f4db0
        public_65f4daa : nop
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [eax+0x10], ecx
        public_65f4db0 : nop
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        jne public_65f4dbf
        mov edx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [ebx+0x10], edx
        jmp public_65f4dc5
        public_65f4dbf : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov dword ptr ds : [eax+0xC], ecx
        public_65f4dc5 : nop
        mov edx, dword ptr ds : [ebx+0x14]
        dec edx
        push esi
        mov dword ptr ds : [ebx+0x14], edx
        call public_6600bb0
        add esp, 4
        public_65f4dd5 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x65f4d30)
    }
}

#undef public_65f4d46
#undef public_65f4d4f
#undef public_65f4d60
#undef public_65f4d81
#undef public_65f4d8a
#undef public_65f4d9b
#undef public_65f4daa
#undef public_65f4db0
#undef public_65f4dbf
#undef public_65f4dc5
#undef public_65f4dd5
