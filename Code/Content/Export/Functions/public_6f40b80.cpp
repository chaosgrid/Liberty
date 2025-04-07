#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f40b80);
CLANG_FORWARD_PROC_SYMBOL(public_6f45400);
CLANG_FORWARD_PROC_SYMBOL(public_6f457d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f467d0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f40bb0 _public_6f40bb0
#define public_6f40bcf _public_6f40bcf
#define public_6f40bfb _public_6f40bfb
#define public_6f40c00 _public_6f40c00
#define public_6f40c20 _public_6f40c20

PROC_DECLARE(0x6f40b80, internal_6f40b80, public_6f40b80);
extern "C" NAKED register_t __cdecl internal_6f40b80()
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
        je public_6f40bfb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f40bfb
        cmp ebx, eax
        jne public_6f40bfb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f40bcf
        lea esp, ss:[esp]
        public_6f40bb0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f457d0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f40bb0
        public_6f40bcf : nop
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
        public_6f40bfb : nop
        cmp ecx, ebx
        je public_6f40c20
        nop 
        public_6f40c00 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f467d0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f45400
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f40c00
        public_6f40c20 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f40b80)
    }
}

#undef public_6f40bb0
#undef public_6f40bcf
#undef public_6f40bfb
#undef public_6f40c00
#undef public_6f40c20
