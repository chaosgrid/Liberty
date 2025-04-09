#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401130);
CLANG_FORWARD_PROC_SYMBOL(public_4016f0);

#define public_401703 _public_401703
#define public_40171d _public_40171d
#define public_401721 _public_401721
#define public_401726 _public_401726
#define public_40175a _public_40175a

PROC_DECLARE(0x4016f0, internal_4016f0, public_4016f0);
extern "C" NAKED register_t __cdecl internal_4016f0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+4]
        mov ebx, eax
        cmp esi, dword ptr ds : [edi+8]
        je public_401726
        public_401703 : nop
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        lea ecx, ds:[edi+1]
        call public_401130
        test al, al
        je public_40171d
        mov esi, dword ptr ds : [esi+8]
        jmp public_401721
        public_40171d : nop
        mov ebx, esi
        mov esi, dword ptr ds : [esi]
        public_401721 : nop
        cmp esi, dword ptr ds : [edi+8]
        jne public_401703
        public_401726 : nop
        cmp ebx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0xC], ebx
        je public_40175a
        mov ebx, dword ptr ds : [ebx+0xC]
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [edx]
        push ebx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        jl public_40175a
        lea eax, ss:[esp+0xC]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_40175a : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4016f0)
    }
}

#undef public_401703
#undef public_40171d
#undef public_401721
#undef public_401726
#undef public_40175a
