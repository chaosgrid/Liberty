#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6316730);
CLANG_FORWARD_PROC_SYMBOL(public_6317c90);
CLANG_FORWARD_PROC_SYMBOL(public_6318070);
CLANG_FORWARD_PROC_SYMBOL(public_6318fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6342a40);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_63180a0 _public_63180a0
#define public_63180c7 _public_63180c7
#define public_63180f3 _public_63180f3
#define public_63180f7 _public_63180f7
#define public_6318117 _public_6318117

PROC_DECLARE(0x6318070, internal_6318070, public_6318070);
extern "C" NAKED register_t __cdecl internal_6318070()
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
        je public_63180f3
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_63180f3
        cmp ebx, eax
        jne public_63180f3
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_63180c7
        lea esp, ss:[esp]
        public_63180a0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_6318fb0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_6316730
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_63180a0
        public_63180c7 : nop
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
        public_63180f3 : nop
        cmp ecx, ebx
        je public_6318117
        public_63180f7 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6342a40
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6317c90
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_63180f7
        public_6318117 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6318070)
    }
}

#undef public_63180a0
#undef public_63180c7
#undef public_63180f3
#undef public_63180f7
#undef public_6318117
