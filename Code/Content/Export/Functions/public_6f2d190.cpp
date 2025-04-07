#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f29680);
CLANG_FORWARD_PROC_SYMBOL(public_6f2d190);
CLANG_FORWARD_PROC_SYMBOL(public_6f2dbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2df90);
CLANG_FORWARD_PROC_SYMBOL(public_6f46640);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);

#define public_6f2d1c0 _public_6f2d1c0
#define public_6f2d1e7 _public_6f2d1e7
#define public_6f2d213 _public_6f2d213
#define public_6f2d217 _public_6f2d217
#define public_6f2d237 _public_6f2d237

PROC_DECLARE(0x6f2d190, internal_6f2d190, public_6f2d190);
extern "C" NAKED register_t __cdecl internal_6f2d190()
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
        je public_6f2d213
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_6f2d213
        cmp ebx, eax
        jne public_6f2d213
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_6f2d1e7
        lea esp, ss:[esp]
        public_6f2d1c0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6f2df90
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6f29680
        push ebx
        call public_6fa8fe0
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_6f2d1c0
        public_6f2d1e7 : nop
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
        public_6f2d213 : nop
        cmp ecx, ebx
        je public_6f2d237
        public_6f2d217 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6f46640
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6f2dbb0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_6f2d217
        public_6f2d237 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f2d190)
    }
}

#undef public_6f2d1c0
#undef public_6f2d1e7
#undef public_6f2d213
#undef public_6f2d217
#undef public_6f2d237
