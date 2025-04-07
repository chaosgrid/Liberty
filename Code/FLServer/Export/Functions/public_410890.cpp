#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_410890);
CLANG_FORWARD_PROC_SYMBOL(public_410fc0);
CLANG_FORWARD_PROC_SYMBOL(public_411390);
CLANG_FORWARD_PROC_SYMBOL(public_411b50);
CLANG_FORWARD_PROC_SYMBOL(public_418978);

#define public_4108c0 _public_4108c0
#define public_4108df _public_4108df
#define public_41090b _public_41090b
#define public_410910 _public_410910
#define public_410930 _public_410930

PROC_DECLARE(0x410890, internal_410890, public_410890);
extern "C" NAKED register_t __cdecl internal_410890()
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
        je public_41090b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_41090b
        cmp ebx, eax
        jne public_41090b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4108df
        lea esp, ss:[esp]
        public_4108c0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_411390
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_418978
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4108c0
        public_4108df : nop
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
        public_41090b : nop
        cmp ecx, ebx
        je public_410930
        nop 
        public_410910 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_411b50
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_410fc0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_410910
        public_410930 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x410890)
    }
}

#undef public_4108c0
#undef public_4108df
#undef public_41090b
#undef public_410910
#undef public_410930
