#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401780);
CLANG_FORWARD_PROC_SYMBOL(public_535ad0);
CLANG_FORWARD_PROC_SYMBOL(public_535d90);
CLANG_FORWARD_PROC_SYMBOL(public_536020);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_535b00 _public_535b00
#define public_535b1f _public_535b1f
#define public_535b4b _public_535b4b
#define public_535b50 _public_535b50
#define public_535b70 _public_535b70

PROC_DECLARE(0x535ad0, internal_535ad0, public_535ad0);
extern "C" NAKED register_t __cdecl internal_535ad0()
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
        je public_535b4b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_535b4b
        cmp ebx, eax
        jne public_535b4b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_535b1f
        lea esp, ss:[esp]
        public_535b00 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_535d90
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_535b00
        public_535b1f : nop
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
        public_535b4b : nop
        cmp ecx, ebx
        je public_535b70
        nop 
        public_535b50 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_536020
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_401780
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_535b50
        public_535b70 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x535ad0)
    }
}

#undef public_535b00
#undef public_535b1f
#undef public_535b4b
#undef public_535b50
#undef public_535b70
