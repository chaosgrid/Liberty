#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eecae0);
CLANG_FORWARD_PROC_SYMBOL(public_6eecec0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eecef0 _public_6eecef0
#define public_6eecf17 _public_6eecf17
#define public_6eecf43 _public_6eecf43
#define public_6eecf47 _public_6eecf47
#define public_6eecf67 _public_6eecf67

PROC_DECLARE(0x6eecec0, internal_6eecec0, public_6eecec0);
extern "C" NAKED register_t __cdecl internal_6eecec0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        je public_6eecf43
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6eecf43
        cmp ebx, eax
        jne public_6eecf43
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6eecf17
        lea esp, ss:[esp]
        public_6eecef0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6eed4f0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6eec9b0
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6eecef0
        public_6eecf17 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        public_6eecf43 : nop
        cmp ecx, ebx
        je public_6eecf67
        public_6eecf47 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f46640
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6eecae0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6eecf47
        public_6eecf67 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eecec0)
    }
}

#undef public_6eecef0
#undef public_6eecf17
#undef public_6eecf43
#undef public_6eecf47
#undef public_6eecf67
