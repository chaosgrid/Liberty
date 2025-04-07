#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aed0);

#define public_6f489d2 _public_6f489d2
#define public_6f489da _public_6f489da
#define public_6f48a07 _public_6f48a07
#define public_6f48a10 _public_6f48a10
#define public_6f48a27 _public_6f48a27

PROC_DECLARE(0x6f489a0, internal_6f489a0, public_6f489a0);
extern "C" NAKED register_t __cdecl internal_6f489a0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov esi, ecx
        lea edi, ds:[esi+0x14]
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call public_6f4aed0
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f489d2
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jl public_6f489d2
        lea ecx, ss:[esp+0x14]
        jmp public_6f489da
        public_6f489d2 : nop
        mov dword ptr ss : [esp+0xC], eax
        lea ecx, ss:[esp+0xC]
        public_6f489da : nop
        mov edi, dword ptr ds : [ecx]
        cmp edi, eax
        je public_6f48a10
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        cmp eax, 0xD
        jne public_6f48a10
        mov edi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+0xCC]
        test eax, eax
        je public_6f48a07
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[edi+0xD0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_6f48a07 : nop
        mov eax, dword ptr ds : [edi+0xD0]
        mov dword ptr ds : [esi+0x5C], eax
        public_6f48a10 : nop
        mov cl, byte ptr ds : [esi+0x30]
        mov al, 1
        test al, cl
        je public_6f48a27
        pop edi
        mov dword ptr ds : [esi+0x1C], 0xFFFFFFFF
        pop esi
        pop ebx
        pop ecx
        ret 8
        public_6f48a27 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        add ecx, dword ptr ds : [esi+0x2C]
        pop edi
        mov dword ptr ds : [esi+0x1C], ecx
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f489a0)
    }
}

#undef public_6f489d2
#undef public_6f489da
#undef public_6f48a07
#undef public_6f48a10
#undef public_6f48a27
