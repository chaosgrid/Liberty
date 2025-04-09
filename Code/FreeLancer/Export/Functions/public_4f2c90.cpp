#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4eee10);
CLANG_FORWARD_PROC_SYMBOL(public_4f2c90);
CLANG_FORWARD_PROC_SYMBOL(public_4f30a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f3480);
CLANG_FORWARD_PROC_SYMBOL(public_4f3770);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f2cc0 _public_4f2cc0
#define public_4f2ce7 _public_4f2ce7
#define public_4f2d13 _public_4f2d13
#define public_4f2d17 _public_4f2d17
#define public_4f2d37 _public_4f2d37

PROC_DECLARE(0x4f2c90, internal_4f2c90, public_4f2c90);
extern "C" NAKED register_t __cdecl internal_4f2c90()
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
        je public_4f2d13
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_4f2d13
        cmp ebx, eax
        jne public_4f2d13
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4f2ce7
        lea esp, ss:[esp]
        public_4f2cc0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_4f3480
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_4eee10
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4f2cc0
        public_4f2ce7 : nop
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
        public_4f2d13 : nop
        cmp ecx, ebx
        je public_4f2d37
        public_4f2d17 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_4f3770
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_4f30a0
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_4f2d17
        public_4f2d37 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x4f2c90)
    }
}

#undef public_4f2cc0
#undef public_4f2ce7
#undef public_4f2d13
#undef public_4f2d17
#undef public_4f2d37
