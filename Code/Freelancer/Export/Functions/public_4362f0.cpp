#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4362f0);
CLANG_FORWARD_PROC_SYMBOL(public_436420);
CLANG_FORWARD_PROC_SYMBOL(public_436800);
CLANG_FORWARD_PROC_SYMBOL(public_436a90);
CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_436320 _public_436320
#define public_436347 _public_436347
#define public_436373 _public_436373
#define public_436377 _public_436377
#define public_436397 _public_436397

PROC_DECLARE(0x4362f0, internal_4362f0, public_4362f0);
extern "C" NAKED register_t __cdecl internal_4362f0()
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
        je public_436373
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_436373
        cmp ebx, eax
        jne public_436373
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_436347
        lea esp, ss:[esp]
        public_436320 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_436800
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_455e90
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_436320
        public_436347 : nop
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
        public_436373 : nop
        cmp ecx, ebx
        je public_436397
        public_436377 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_436a90
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_436420
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_436377
        public_436397 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4362f0)
    }
}

#undef public_436320
#undef public_436347
#undef public_436373
#undef public_436377
#undef public_436397
