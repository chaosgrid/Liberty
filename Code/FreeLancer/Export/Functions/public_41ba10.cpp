#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41ba10);

#define public_41ba30 _public_41ba30
#define public_41ba3b _public_41ba3b
#define public_41ba3e _public_41ba3e
#define public_41ba42 _public_41ba42
#define public_41ba50 _public_41ba50
#define public_41ba5a _public_41ba5a
#define public_41ba5e _public_41ba5e
#define public_41ba62 _public_41ba62

PROC_DECLARE(0x41ba10, internal_41ba10, public_41ba10);
extern "C" NAKED register_t __cdecl internal_41ba10()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ds : [edx+4]
        mov eax, esi
        cmp eax, ecx
        push edi
        mov ebx, edx
        je public_41ba42
        mov edi, dword ptr ss : [ebp]
        lea esp, ss:[esp]
        public_41ba30 : nop
        cmp edi, dword ptr ds : [eax+0xC]
        jae public_41ba3b
        mov ebx, eax
        mov eax, dword ptr ds : [eax]
        jmp public_41ba3e
        public_41ba3b : nop
        mov eax, dword ptr ds : [eax+8]
        public_41ba3e : nop
        cmp eax, ecx
        jne public_41ba30
        public_41ba42 : nop
        mov eax, esi
        cmp eax, ecx
        je public_41ba62
        mov esi, dword ptr ss : [ebp]
        nop 
        lea esp, ss:[esp]
        public_41ba50 : nop
        cmp dword ptr ds : [eax+0xC], esi
        jae public_41ba5a
        mov eax, dword ptr ds : [eax+8]
        jmp public_41ba5e
        public_41ba5a : nop
        mov edx, eax
        mov eax, dword ptr ds : [eax]
        public_41ba5e : nop
        cmp eax, ecx
        jne public_41ba50
        public_41ba62 : nop
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [eax], edx
        pop ebx
        ret 8
        UNREACHABLE_TRAP(0x41ba10)
    }
}

#undef public_41ba30
#undef public_41ba3b
#undef public_41ba3e
#undef public_41ba42
#undef public_41ba50
#undef public_41ba5a
#undef public_41ba5e
#undef public_41ba62
