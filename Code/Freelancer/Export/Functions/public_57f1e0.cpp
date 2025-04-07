#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57f1e0);
CLANG_FORWARD_PROC_SYMBOL(public_57f370);
CLANG_FORWARD_PROC_SYMBOL(public_57f780);
CLANG_FORWARD_PROC_SYMBOL(public_57fb00);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_57f210 _public_57f210
#define public_57f22f _public_57f22f
#define public_57f25b _public_57f25b
#define public_57f260 _public_57f260
#define public_57f280 _public_57f280

PROC_DECLARE(0x57f1e0, internal_57f1e0, public_57f1e0);
extern "C" NAKED register_t __cdecl internal_57f1e0()
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
        je public_57f25b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_57f25b
        cmp ebx, eax
        jne public_57f25b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_57f22f
        lea esp, ss:[esp]
        public_57f210 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_57f780
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_57f210
        public_57f22f : nop
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
        public_57f25b : nop
        cmp ecx, ebx
        je public_57f280
        nop 
        public_57f260 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_57fb00
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_57f370
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_57f260
        public_57f280 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x57f1e0)
    }
}

#undef public_57f210
#undef public_57f22f
#undef public_57f25b
#undef public_57f260
#undef public_57f280
