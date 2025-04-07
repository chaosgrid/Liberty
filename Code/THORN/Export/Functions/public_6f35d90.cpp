#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f35d90);
CLANG_FORWARD_PROC_SYMBOL(public_6f36730);
CLANG_FORWARD_PROC_SYMBOL(public_6f36b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f37330);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e26);

#define public_6f35dc0 _public_6f35dc0
#define public_6f35ddf _public_6f35ddf
#define public_6f35e0b _public_6f35e0b
#define public_6f35e10 _public_6f35e10
#define public_6f35e30 _public_6f35e30

PROC_DECLARE(0x6f35d90, internal_6f35d90, public_6f35d90);
extern "C" NAKED register_t __cdecl internal_6f35d90()
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
        je public_6f35e0b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f35e0b
        cmp ebx, eax
        jne public_6f35e0b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f35ddf
        lea esp, ss:[esp]
        public_6f35dc0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f36b00
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6f57e26
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f35dc0
        public_6f35ddf : nop
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
        public_6f35e0b : nop
        cmp ecx, ebx
        je public_6f35e30
        nop 
        public_6f35e10 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f37330
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f36730
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f35e10
        public_6f35e30 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f35d90)
    }
}

#undef public_6f35dc0
#undef public_6f35ddf
#undef public_6f35e0b
#undef public_6f35e10
#undef public_6f35e30
