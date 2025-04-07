#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_57f290);

#define public_57f2b0 _public_57f2b0
#define public_57f2bb _public_57f2bb
#define public_57f2bf _public_57f2bf
#define public_57f2c4 _public_57f2c4
#define public_57f2e7 _public_57f2e7

PROC_DECLARE(0x57f290, internal_57f290, public_57f290);
extern "C" NAKED register_t __cdecl internal_57f290()
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
        je public_57f2c4
        push edi
        mov di, word ptr ds : [ebx]
        lea ebx, ds:[ebx]
        public_57f2b0 : nop
        cmp word ptr ds : [eax+0xC], di
        jae public_57f2bb
        mov eax, dword ptr ds : [eax+8]
        jmp public_57f2bf
        public_57f2bb : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax]
        public_57f2bf : nop
        cmp eax, ecx
        jne public_57f2b0
        pop edi
        public_57f2c4 : nop
        cmp esi, edx
        mov dword ptr ss : [esp+0x14], esi
        je public_57f2e7
        mov ax, word ptr ds : [ebx]
        cmp ax, word ptr ds : [esi+0xC]
        jb public_57f2e7
        lea eax, ss:[esp+0x14]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_57f2e7 : nop
        lea eax, ss:[esp+8]
        mov dword ptr ss : [esp+8], edx
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x57f290)
    }
}

#undef public_57f2b0
#undef public_57f2bb
#undef public_57f2bf
#undef public_57f2c4
#undef public_57f2e7
