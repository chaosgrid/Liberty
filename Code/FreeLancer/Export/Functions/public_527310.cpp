#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_433330);
CLANG_FORWARD_PROC_SYMBOL(public_522480);
CLANG_FORWARD_PROC_SYMBOL(public_526f30);
CLANG_FORWARD_PROC_SYMBOL(public_527310);
CLANG_FORWARD_PROC_SYMBOL(public_527460);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_527340 _public_527340
#define public_527367 _public_527367
#define public_527393 _public_527393
#define public_527397 _public_527397
#define public_5273b7 _public_5273b7

PROC_DECLARE(0x527310, internal_527310, public_527310);
extern "C" NAKED register_t __cdecl internal_527310()
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
        je public_527393
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_527393
        cmp ebx, eax
        jne public_527393
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_527367
        lea esp, ss:[esp]
        public_527340 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_527460
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_522480
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_527340
        public_527367 : nop
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
        public_527393 : nop
        cmp ecx, ebx
        je public_5273b7
        public_527397 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_433330
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_526f30
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_527397
        public_5273b7 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x527310)
    }
}

#undef public_527340
#undef public_527367
#undef public_527393
#undef public_527397
#undef public_5273b7
