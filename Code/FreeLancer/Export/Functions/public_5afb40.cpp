#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46dfb0);
CLANG_FORWARD_PROC_SYMBOL(public_595150);
CLANG_FORWARD_PROC_SYMBOL(public_5afb40);
CLANG_FORWARD_PROC_SYMBOL(public_5afde0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_5afb70 _public_5afb70
#define public_5afb8f _public_5afb8f
#define public_5afbbb _public_5afbbb
#define public_5afbc0 _public_5afbc0
#define public_5afbe0 _public_5afbe0

PROC_DECLARE(0x5afb40, internal_5afb40, public_5afb40);
extern "C" NAKED register_t __cdecl internal_5afb40()
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
        je public_5afbbb
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_5afbbb
        cmp ebx, eax
        jne public_5afbbb
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_5afb8f
        lea esp, ss:[esp]
        public_5afb70 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_5afde0
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_5afb70
        public_5afb8f : nop
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
        public_5afbbb : nop
        cmp ecx, ebx
        je public_5afbe0
        nop 
        public_5afbc0 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_595150
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_46dfb0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_5afbc0
        public_5afbe0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x5afb40)
    }
}

#undef public_5afb70
#undef public_5afb8f
#undef public_5afbbb
#undef public_5afbc0
#undef public_5afbe0
