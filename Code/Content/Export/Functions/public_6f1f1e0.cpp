#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed3950);
CLANG_FORWARD_PROC_SYMBOL(public_6ed3d30);
CLANG_FORWARD_PROC_SYMBOL(public_6efd030);
CLANG_FORWARD_PROC_SYMBOL(public_6f1f1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f466e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f1f210 _public_6f1f210
#define public_6f1f237 _public_6f1f237
#define public_6f1f263 _public_6f1f263
#define public_6f1f267 _public_6f1f267
#define public_6f1f287 _public_6f1f287

PROC_DECLARE(0x6f1f1e0, internal_6f1f1e0, public_6f1f1e0);
extern "C" NAKED register_t __cdecl internal_6f1f1e0()
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
        je public_6f1f263
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f1f263
        cmp ebx, eax
        jne public_6f1f263
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f1f237
        lea esp, ss:[esp]
        public_6f1f210 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6ed3d30
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6efd030
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f1f210
        public_6f1f237 : nop
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
        public_6f1f263 : nop
        cmp ecx, ebx
        je public_6f1f287
        public_6f1f267 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f466e0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6ed3950
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f1f267
        public_6f1f287 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f1f1e0)
    }
}

#undef public_6f1f210
#undef public_6f1f237
#undef public_6f1f263
#undef public_6f1f267
#undef public_6f1f287
