#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ebc0);
CLANG_FORWARD_PROC_SYMBOL(public_62460e0);
CLANG_FORWARD_PROC_SYMBOL(public_624612c);

#define public_623ebcd _public_623ebcd
#define public_623ebde _public_623ebde
#define public_623ebeb _public_623ebeb
#define public_623ebfc _public_623ebfc
#define public_623ec11 _public_623ec11
#define public_623ec23 _public_623ec23
#define public_623ec62 _public_623ec62
#define public_623ec75 _public_623ec75
#define public_623ec7b _public_623ec7b
#define public_623ec89 _public_623ec89

PROC_DECLARE(0x623ebc0, internal_623ebc0, public_623ebc0);
extern "C" NAKED register_t __cdecl internal_623ebc0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        xor ebx, ebx
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        je public_623ebde
        public_623ebcd : nop
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x14], ecx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi+0x14]
        cmp eax, ebx
        jne public_623ebcd
        public_623ebde : nop
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        je public_623ebfc
        public_623ebeb : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x1C], edx
        mov dword ptr ds : [eax], ebx
        mov dword ptr ds : [eax+4], ebx
        mov eax, dword ptr ds : [esi+0x1C]
        cmp eax, ebx
        jne public_623ebeb
        public_623ebfc : nop
        mov dword ptr ds : [esi+0x1C], ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov eax, dword ptr ds : [esi]
        cmp eax, ebx
        je public_623ec11
        push eax
        call public_62460e0
        add esp, 4
        public_623ec11 : nop
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ebx
        cmp eax, ebx
        je public_623ec23
        push eax
        call public_62460e0
        add esp, 4
        public_623ec23 : nop
        mov eax, dword ptr ss : [esp+0x10]
        push edi
        mov edi, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi+4], ebx
        mov ecx, edi
        mov dword ptr ds : [esi+8], eax
        imul ecx, eax
        push ecx
        mov dword ptr ds : [esi+0xC], edi
        mov dword ptr ds : [esi+0x10], edi
        call public_624612c
        lea edx, ds:[edi*8]
        mov dword ptr ds : [esi], eax
        push edx
        call public_624612c
        mov ecx, dword ptr ds : [esi+0xC]
        add esp, 8
        xor edx, edx
        cmp ecx, ebx
        mov dword ptr ds : [esi+4], eax
        pop edi
        jbe public_623ec89
        public_623ec62 : nop
        mov dword ptr ds : [eax], ebx
        mov ecx, dword ptr ds : [esi+0x20]
        cmp ecx, ebx
        je public_623ec75
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax+4], ecx
        jmp public_623ec7b
        public_623ec75 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [esi+0x1C], eax
        public_623ec7b : nop
        mov dword ptr ds : [esi+0x20], eax
        mov ecx, dword ptr ds : [esi+0xC]
        inc edx
        add eax, 8
        cmp edx, ecx
        jb public_623ec62
        public_623ec89 : nop
        pop esi
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x623ebc0)
    }
}

#undef public_623ebcd
#undef public_623ebde
#undef public_623ebeb
#undef public_623ebfc
#undef public_623ec11
#undef public_623ec23
#undef public_623ec62
#undef public_623ec75
#undef public_623ec7b
#undef public_623ec89
