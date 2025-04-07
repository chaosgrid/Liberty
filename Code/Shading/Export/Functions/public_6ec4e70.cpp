#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec44a0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec4e70);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5de0);
CLANG_FORWARD_PROC_SYMBOL(public_6ec5e20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);

#define public_6ec4ea0 _public_6ec4ea0
#define public_6ec4ebf _public_6ec4ebf
#define public_6ec4eeb _public_6ec4eeb
#define public_6ec4ef0 _public_6ec4ef0
#define public_6ec4f10 _public_6ec4f10

PROC_DECLARE(0x6ec4e70, internal_6ec4e70, public_6ec4e70);
extern "C" NAKED register_t __cdecl internal_6ec4e70()
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
        je public_6ec4eeb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6ec4eeb
        cmp ebx, eax
        jne public_6ec4eeb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6ec4ebf
        lea esp, ss:[esp]
        public_6ec4ea0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ec5de0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6ed0c50
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6ec4ea0
        public_6ec4ebf : nop
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
        public_6ec4eeb : nop
        cmp ecx, ebx
        je public_6ec4f10
        nop 
        public_6ec4ef0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6ec5e20
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ec44a0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6ec4ef0
        public_6ec4f10 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6ec4e70)
    }
}

#undef public_6ec4ea0
#undef public_6ec4ebf
#undef public_6ec4eeb
#undef public_6ec4ef0
#undef public_6ec4f10
