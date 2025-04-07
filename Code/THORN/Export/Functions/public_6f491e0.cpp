#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4aed0);

#define public_6f49212 _public_6f49212
#define public_6f4921a _public_6f4921a
#define public_6f49254 _public_6f49254
#define public_6f49265 _public_6f49265
#define public_6f4927c _public_6f4927c

PROC_DECLARE(0x6f491e0, internal_6f491e0, public_6f491e0);
extern "C" NAKED register_t __cdecl internal_6f491e0()
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
        je public_6f49212
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jl public_6f49212
        lea ecx, ss:[esp+0x14]
        jmp public_6f4921a
        public_6f49212 : nop
        mov dword ptr ss : [esp+0xC], eax
        lea ecx, ss:[esp+0xC]
        public_6f4921a : nop
        mov edi, dword ptr ds : [ecx]
        cmp edi, eax
        je public_6f49265
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        cmp eax, 9
        jne public_6f49265
        mov edi, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+0x110]
        xor ecx, ecx
        cmp eax, ecx
        je public_6f49254
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0x74]
        push edx
        lea edx, ds:[esi+0x70]
        push edx
        lea edx, ds:[esi+0x6C]
        push edx
        lea edx, ds:[esi+0x68]
        push edx
        push eax
        call dword ptr ds : [ecx+0x10]
        jmp public_6f49265
        public_6f49254 : nop
        mov eax, 0x3F800000
        mov dword ptr ds : [esi+0x68], ecx
        mov dword ptr ds : [esi+0x6C], ecx
        mov dword ptr ds : [esi+0x70], eax
        mov dword ptr ds : [esi+0x74], eax
        public_6f49265 : nop
        mov cl, byte ptr ds : [esi+0x30]
        mov al, 1
        test al, cl
        je public_6f4927c
        pop edi
        mov dword ptr ds : [esi+0x1C], 0xFFFFFFFF
        pop esi
        pop ebx
        pop ecx
        ret 8
        public_6f4927c : nop
        mov ecx, dword ptr ds : [esi+0x40]
        add ecx, dword ptr ds : [esi+0x2C]
        pop edi
        mov dword ptr ds : [esi+0x1C], ecx
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f491e0)
    }
}

#undef public_6f49212
#undef public_6f4921a
#undef public_6f49254
#undef public_6f49265
#undef public_6f4927c
