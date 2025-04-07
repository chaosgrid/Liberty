#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead0b0);
CLANG_FORWARD_PROC_SYMBOL(public_6ead8f0);
CLANG_FORWARD_PROC_SYMBOL(public_6eaf5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6eafac0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46730);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6ead920 _public_6ead920
#define public_6ead947 _public_6ead947
#define public_6ead973 _public_6ead973
#define public_6ead977 _public_6ead977
#define public_6ead997 _public_6ead997

PROC_DECLARE(0x6ead8f0, internal_6ead8f0, public_6ead8f0);
extern "C" NAKED register_t __cdecl internal_6ead8f0()
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
        je public_6ead973
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ead973
        cmp ebx, eax
        jne public_6ead973
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ead947
        lea esp, ss:[esp]
        public_6ead920 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6eafac0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6ead0b0
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ead920
        public_6ead947 : nop
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
        public_6ead973 : nop
        cmp ecx, ebx
        je public_6ead997
        public_6ead977 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f46730
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6eaf5e0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6ead977
        public_6ead997 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ead8f0)
    }
}

#undef public_6ead920
#undef public_6ead947
#undef public_6ead973
#undef public_6ead977
#undef public_6ead997
