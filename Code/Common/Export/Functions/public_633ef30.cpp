#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_633bcb0);
CLANG_FORWARD_PROC_SYMBOL(public_633ef30);
CLANG_FORWARD_PROC_SYMBOL(public_6340460);
CLANG_FORWARD_PROC_SYMBOL(public_63408b0);
CLANG_FORWARD_PROC_SYMBOL(public_6340e10);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_633ef58 _public_633ef58
#define public_633ef7f _public_633ef7f
#define public_633efa1 _public_633efa1
#define public_633efa5 _public_633efa5
#define public_633efc5 _public_633efc5

PROC_DECLARE(0x633ef30, internal_633ef30, public_633ef30);
extern "C" NAKED register_t __cdecl internal_633ef30()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        push edi
        mov edi, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0xC], eax
        je public_633efa1
        mov ecx, eax
        cmp eax, ecx
        jne public_633efa1
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_633ef7f
        public_633ef58 : nop
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
        jne public_633ef58
        public_633ef7f : nop
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebx
        add esp, 8
        ret 
        public_633efa1 : nop
        cmp eax, edi
        je public_633efc5
        public_633efa5 : nop
        lea ecx, ss:[esp+0xC]
        mov ebx, eax
        call public_6340e10
        push ebx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        call public_6340460
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, edi
        jne public_633efa5
        public_633efc5 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x633ef30)
    }
}

#undef public_633ef58
#undef public_633ef7f
#undef public_633efa1
#undef public_633efa5
#undef public_633efc5
