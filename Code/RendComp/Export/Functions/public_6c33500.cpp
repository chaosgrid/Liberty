#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2fdc0);

#define public_6c33560 _public_6c33560
#define public_6c33568 _public_6c33568
#define public_6c33595 _public_6c33595
#define public_6c33597 _public_6c33597
#define public_6c3359a _public_6c3359a

PROC_DECLARE(0x6c33500, internal_6c33500, public_6c33500);
extern "C" NAKED register_t __cdecl internal_6c33500()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ds : [public_6c37d4c]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x14]
        push esi
        push edi
        push ebp
        push eax
        or edi, 0xFFFFFFFF
        call dword ptr ds : [ecx+0x64]
        cmp eax, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x1C], eax
        je public_6c3359a
        mov ecx, dword ptr ds : [public_6c37d4c]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x3C]
        mov ebx, dword ptr ss : [esp+0x18]
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x1C]
        lea esi, ds:[ebx+4]
        push ecx
        mov ecx, esi
        call public_6c2fdc0
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, esi
        je public_6c33560
        mov edx, dword ptr ss : [esp+0x1C]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6c33560
        lea eax, ss:[esp+0x18]
        jmp public_6c33568
        public_6c33560 : nop
        mov dword ptr ss : [esp+0x10], esi
        lea eax, ss:[esp+0x10]
        public_6c33568 : nop
        mov esi, dword ptr ds : [eax]
        cmp esi, dword ptr ds : [ebx+8]
        je public_6c3359a
        mov ebx, dword ptr ss : [esp+0x20]
        cmp ebx, dword ptr ds : [esi+0x14]
        jge public_6c33595
        mov eax, dword ptr ds : [esi+0x10]
        mov ecx, dword ptr ds : [eax+ebx*8+4]
        mov edx, dword ptr ds : [ecx]
        lea eax, ds:[eax+ebx*8]
        mov eax, dword ptr ds : [eax]
        push eax
        push ebp
        push ecx
        call dword ptr ds : [edx+0x44]
        mov edi, eax
        test edi, edi
        je public_6c33597
        cmp ebx, dword ptr ds : [esi+0x14]
        public_6c33595 : nop
        jne public_6c3359a
        public_6c33597 : nop
        mov dword ptr ds : [esi+0x18], ebx
        public_6c3359a : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6c33500)
    }
}

#undef public_6c33560
#undef public_6c33568
#undef public_6c33595
#undef public_6c33597
#undef public_6c3359a
