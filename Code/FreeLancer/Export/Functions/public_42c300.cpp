#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42c300);

#define public_42c320 _public_42c320
#define public_42c32a _public_42c32a
#define public_42c32e _public_42c32e
#define public_42c333 _public_42c333
#define public_42c355 _public_42c355

PROC_DECLARE(0x42c300, internal_42c300, public_42c300);
extern "C" NAKED register_t __cdecl internal_42c300()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov eax, dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [ecx+8]
        cmp eax, ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push esi
        mov esi, edx
        je public_42c333
        push edi
        mov edi, dword ptr ds : [ebx+4]
        lea ebx, ds:[ebx]
        public_42c320 : nop
        cmp dword ptr ds : [eax+0x10], edi
        jae public_42c32a
        mov eax, dword ptr ds : [eax+8]
        jmp public_42c32e
        public_42c32a : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_42c32e : nop
        cmp eax, ecx
        jne public_42c320
        pop edi
        public_42c333 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_42c355
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, dword ptr ds : [esi+0x10]
        jb public_42c355
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_42c355 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x42c300)
    }
}

#undef public_42c320
#undef public_42c32a
#undef public_42c32e
#undef public_42c333
#undef public_42c355
