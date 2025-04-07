#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aed0);

#define public_6f48d72 _public_6f48d72
#define public_6f48d7a _public_6f48d7a
#define public_6f48da7 _public_6f48da7
#define public_6f48db7 _public_6f48db7
#define public_6f48dce _public_6f48dce

PROC_DECLARE(0x6f48d40, internal_6f48d40, public_6f48d40);
extern "C" NAKED register_t __cdecl internal_6f48d40()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        mov ebx, ecx
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        lea esi, ds:[ebx+0x14]
        push esi
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, edi
        call public_6f4aed0
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x14]
        cmp ecx, eax
        je public_6f48d72
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jl public_6f48d72
        lea ecx, ss:[esp+0x14]
        jmp public_6f48d7a
        public_6f48d72 : nop
        mov dword ptr ss : [esp+0xC], eax
        lea ecx, ss:[esp+0xC]
        public_6f48d7a : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, eax
        je public_6f48db7
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        cmp eax, 9
        jne public_6f48db7
        mov esi, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+0x10C]
        test eax, eax
        je public_6f48da7
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x138]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        public_6f48da7 : nop
        add esi, 0x138
        lea edi, ds:[ebx+0x78]
        mov ecx, 8
        rep movsd
        public_6f48db7 : nop
        mov cl, byte ptr ds : [ebx+0x30]
        mov al, 1
        test al, cl
        je public_6f48dce
        pop edi
        pop esi
        mov dword ptr ds : [ebx+0x1C], 0xFFFFFFFF
        pop ebx
        pop ecx
        ret 8
        public_6f48dce : nop
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edx, dword ptr ds : [ebx+0x2C]
        pop edi
        add ecx, edx
        pop esi
        mov dword ptr ds : [ebx+0x1C], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f48d40)
    }
}

#undef public_6f48d72
#undef public_6f48d7a
#undef public_6f48da7
#undef public_6f48db7
#undef public_6f48dce
