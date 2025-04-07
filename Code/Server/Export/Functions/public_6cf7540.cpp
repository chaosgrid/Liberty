#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce3ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce42f0);
CLANG_FORWARD_PROC_SYMBOL(public_6ce5700);
CLANG_FORWARD_PROC_SYMBOL(public_6cf7540);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf7570 _public_6cf7570
#define public_6cf758f _public_6cf758f
#define public_6cf75bb _public_6cf75bb
#define public_6cf75c0 _public_6cf75c0
#define public_6cf75e0 _public_6cf75e0

PROC_DECLARE(0x6cf7540, internal_6cf7540, public_6cf7540);
extern "C" NAKED register_t __cdecl internal_6cf7540()
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
        je public_6cf75bb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6cf75bb
        cmp ebx, eax
        jne public_6cf75bb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6cf758f
        lea esp, ss:[esp]
        public_6cf7570 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ce42f0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6d5ffb0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6cf7570
        public_6cf758f : nop
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
        public_6cf75bb : nop
        cmp ecx, ebx
        je public_6cf75e0
        nop 
        public_6cf75c0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6ce5700
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ce3ea0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6cf75c0
        public_6cf75e0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6cf7540)
    }
}

#undef public_6cf7570
#undef public_6cf758f
#undef public_6cf75bb
#undef public_6cf75c0
#undef public_6cf75e0
