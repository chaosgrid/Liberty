#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d3930);
CLANG_FORWARD_PROC_SYMBOL(public_65d3d00);
CLANG_FORWARD_PROC_SYMBOL(public_65d3f30);
CLANG_FORWARD_PROC_SYMBOL(public_65d4310);
CLANG_FORWARD_PROC_SYMBOL(public_65d5360);
CLANG_FORWARD_PROC_SYMBOL(public_65d6cb8);

#define public_65d538b _public_65d538b
#define public_65d53b2 _public_65d53b2
#define public_65d53de _public_65d53de
#define public_65d53e2 _public_65d53e2
#define public_65d5402 _public_65d5402

PROC_DECLARE(0x65d5360, internal_65d5360, public_65d5360);
extern "C" NAKED register_t __cdecl internal_65d5360()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        mov eax, dword ptr ds : [esi+0x10]
        test eax, eax
        je public_65d53de
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_65d53de
        cmp ebx, eax
        jne public_65d53de
        mov ebx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi+8]
        cmp ebx, eax
        mov edi, ebx
        je public_65d53b2
        public_65d538b : nop
        mov eax, dword ptr ds : [edi+8]
        mov ecx, esi
        push eax
        call public_65d4310
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_65d3930
        push ebx
        call public_65d6cb8
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_65d538b
        public_65d53b2 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        pop edi
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [eax+8], eax
        mov eax, dword ptr ds : [esi+4]
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [eax], ecx
        ret 0xC
        public_65d53de : nop
        cmp ecx, ebx
        je public_65d5402
        public_65d53e2 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_65d3d00
        lea edx, ss:[esp+0x18]
        push edi
        push edx
        mov ecx, esi
        call public_65d3f30
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_65d53e2
        public_65d5402 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr ds : [eax], ecx
        ret 0xC
        UNREACHABLE_TRAP(0x65d5360)
    }
}

#undef public_65d538b
#undef public_65d53b2
#undef public_65d53de
#undef public_65d53e2
#undef public_65d5402
