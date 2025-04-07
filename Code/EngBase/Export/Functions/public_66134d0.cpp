#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_66134d0);

#define public_66134e9 _public_66134e9
#define public_66134f3 _public_66134f3
#define public_66134f7 _public_66134f7
#define public_66134fc _public_66134fc
#define public_661351f _public_661351f

PROC_DECLARE(0x66134d0, internal_66134d0, public_66134d0);
extern "C" NAKED register_t __cdecl internal_66134d0()
{
    __asm
    {
        push ecx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+4]
        push esi
        cmp eax, ecx
        mov esi, edx
        je public_66134fc
        push edi
        mov edi, dword ptr ds : [ebx]
        public_66134e9 : nop
        cmp dword ptr ds : [eax+0xC], edi
        jae public_66134f3
        mov eax, dword ptr ds : [eax+8]
        jmp public_66134f7
        public_66134f3 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_66134f7 : nop
        cmp eax, ecx
        jne public_66134e9
        pop edi
        public_66134fc : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_661351f
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [esi+0xC]
        cmp eax, ecx
        jb public_661351f
        lea eax, ss:[esp+0x14]
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        public_661351f : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        pop esi
        pop ebx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ecx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x66134d0)
    }
}

#undef public_66134e9
#undef public_66134f3
#undef public_66134f7
#undef public_66134fc
#undef public_661351f
