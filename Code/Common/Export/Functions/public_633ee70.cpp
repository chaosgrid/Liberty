#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_633ee70);
CLANG_FORWARD_PROC_SYMBOL(public_6340460);
CLANG_FORWARD_PROC_SYMBOL(public_63408b0);
CLANG_FORWARD_PROC_SYMBOL(public_6340e10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633eea0 _public_633eea0
#define public_633eec7 _public_633eec7
#define public_633eef3 _public_633eef3
#define public_633eef7 _public_633eef7
#define public_633ef17 _public_633ef17

PROC_DECLARE(0x633ee70, internal_633ee70, public_633ee70);
extern "C" NAKED register_t __cdecl internal_633ee70()
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
        je public_633eef3
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_633eef3
        cmp ebx, eax
        jne public_633eef3
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_633eec7
        lea esp, ss:[esp]
        public_633eea0 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_63408b0
        mov edi, dword ptr ds : [edi]
        lea ecx, ds:[ebx+0xC]
        call public_633bcb0
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_633eea0
        public_633eec7 : nop
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
        public_633eef3 : nop
        cmp ecx, ebx
        je public_633ef17
        public_633eef7 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_6340e10
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_6340460
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_633eef7
        public_633ef17 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x633ee70)
    }
}

#undef public_633eea0
#undef public_633eec7
#undef public_633eef3
#undef public_633eef7
#undef public_633ef17
