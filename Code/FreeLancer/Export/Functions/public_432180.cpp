#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_432180);
CLANG_FORWARD_PROC_SYMBOL(public_432740);
CLANG_FORWARD_PROC_SYMBOL(public_432c20);
CLANG_FORWARD_PROC_SYMBOL(public_455e90);
CLANG_FORWARD_PROC_SYMBOL(public_5948b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4321b0 _public_4321b0
#define public_4321d7 _public_4321d7
#define public_432203 _public_432203
#define public_432207 _public_432207
#define public_432227 _public_432227

PROC_DECLARE(0x432180, internal_432180, public_432180);
extern "C" NAKED register_t __cdecl internal_432180()
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
        je public_432203
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_432203
        cmp ebx, eax
        jne public_432203
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_4321d7
        lea esp, ss:[esp]
        public_4321b0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_432c20
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_455e90
        push ebx
        call public_5b7e1d
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_4321b0
        public_4321d7 : nop
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
        public_432203 : nop
        cmp ecx, ebx
        je public_432227
        public_432207 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_5948b0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_432740
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_432207
        public_432227 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x432180)
    }
}

#undef public_4321b0
#undef public_4321d7
#undef public_432203
#undef public_432207
#undef public_432227
