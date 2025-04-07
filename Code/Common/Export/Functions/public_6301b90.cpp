#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62ba750);
CLANG_FORWARD_PROC_SYMBOL(public_62babd0);
CLANG_FORWARD_PROC_SYMBOL(public_62baeb0);
CLANG_FORWARD_PROC_SYMBOL(public_6301b90);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_6301bc0 _public_6301bc0
#define public_6301bdf _public_6301bdf
#define public_6301c0b _public_6301c0b
#define public_6301c10 _public_6301c10
#define public_6301c30 _public_6301c30

PROC_DECLARE(0x6301b90, internal_6301b90, public_6301b90);
extern "C" NAKED register_t __cdecl internal_6301b90()
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
        je public_6301c0b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6301c0b
        cmp ebx, eax
        jne public_6301c0b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6301bdf
        lea esp, ss:[esp]
        public_6301bc0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_62babd0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6301bc0
        public_6301bdf : nop
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
        public_6301c0b : nop
        cmp ecx, ebx
        je public_6301c30
        nop 
        public_6301c10 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_62baeb0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62ba750
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6301c10
        public_6301c30 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6301b90)
    }
}

#undef public_6301bc0
#undef public_6301bdf
#undef public_6301c0b
#undef public_6301c10
#undef public_6301c30
