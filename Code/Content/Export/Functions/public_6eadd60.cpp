#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eab080);
CLANG_FORWARD_PROC_SYMBOL(public_6eadd60);
CLANG_FORWARD_PROC_SYMBOL(public_6eafb60);
CLANG_FORWARD_PROC_SYMBOL(public_6eb00c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1550);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6eadd90 _public_6eadd90
#define public_6eaddb7 _public_6eaddb7
#define public_6eadde3 _public_6eadde3
#define public_6eadde7 _public_6eadde7
#define public_6eade07 _public_6eade07

PROC_DECLARE(0x6eadd60, internal_6eadd60, public_6eadd60);
extern "C" NAKED register_t __cdecl internal_6eadd60()
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
        je public_6eadde3
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6eadde3
        cmp ebx, eax
        jne public_6eadde3
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6eaddb7
        lea esp, ss:[esp]
        public_6eadd90 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6eb00c0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6eab080
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6eadd90
        public_6eaddb7 : nop
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
        public_6eadde3 : nop
        cmp ecx, ebx
        je public_6eade07
        public_6eadde7 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6eb1550
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6eafb60
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6eadde7
        public_6eade07 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6eadd60)
    }
}

#undef public_6eadd90
#undef public_6eaddb7
#undef public_6eadde3
#undef public_6eadde7
#undef public_6eade07
