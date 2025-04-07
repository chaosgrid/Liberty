#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a4f0);
CLANG_FORWARD_PROC_SYMBOL(public_622abc0);

#define public_622abf4 _public_622abf4
#define public_622abfc _public_622abfc
#define public_622ac10 _public_622ac10

PROC_DECLARE(0x622abc0, internal_622abc0, public_622abc0);
extern "C" NAKED register_t __cdecl internal_622abc0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0xC]
        lea eax, ss:[esp+0x14]
        mov ecx, esi
        push eax
        mov dword ptr ss : [esp+0x18], edi
        call public_622a4f0
        mov esi, dword ptr ds : [esi+4]
        cmp eax, esi
        mov dword ptr ss : [esp+0x14], eax
        je public_622abf4
        cmp edi, dword ptr ds : [eax+0xC]
        jb public_622abf4
        lea eax, ss:[esp+0x14]
        jmp public_622abfc
        public_622abf4 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_622abfc : nop
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [ebx+0x10]
        pop edi
        pop esi
        cmp eax, ecx
        pop ebx
        jne public_622ac10
        mov eax, 0xFFFFFFF8
        ret 0xC
        public_622ac10 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        push eax
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [eax]
        call dword ptr ds : [edx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x622abc0)
    }
}

#undef public_622abf4
#undef public_622abfc
#undef public_622ac10
