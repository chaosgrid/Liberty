#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626ac10);
CLANG_FORWARD_PROC_SYMBOL(public_626b520);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_626ac40 _public_626ac40
#define public_626ac5f _public_626ac5f
#define public_626ac8b _public_626ac8b
#define public_626ac90 _public_626ac90
#define public_626acb0 _public_626acb0

PROC_DECLARE(0x626ac10, internal_626ac10, public_626ac10);
extern "C" NAKED register_t __cdecl internal_626ac10()
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
        je public_626ac8b
        mov eax, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [eax]
        jne public_626ac8b
        cmp ebx, eax
        jne public_626ac8b
        mov ebx, dword ptr ds : [eax+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_626ac5f
        lea esp, ss:[esp]
        public_626ac40 : nop
        mov eax, dword ptr ds : [edi+8]
        push eax
        mov ecx, esi
        call public_626b520
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_626ac40
        public_626ac5f : nop
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
        public_626ac8b : nop
        cmp ecx, ebx
        je public_626acb0
        nop 
        public_626ac90 : nop
        mov edi, ecx
        lea ecx, ss:[esp+0x14]
        call public_63429f0
        push edi
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_62be400
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, ebx
        jne public_626ac90
        public_626acb0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x626ac10)
    }
}

#undef public_626ac40
#undef public_626ac5f
#undef public_626ac8b
#undef public_626ac90
#undef public_626acb0
