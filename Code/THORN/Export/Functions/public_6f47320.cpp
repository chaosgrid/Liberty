#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f423d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4af00);

#define public_6f4734d _public_6f4734d
#define public_6f47355 _public_6f47355
#define public_6f47374 _public_6f47374
#define public_6f4738b _public_6f4738b

PROC_DECLARE(0x6f47320, internal_6f47320, public_6f47320);
extern "C" NAKED register_t __cdecl internal_6f47320()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, ecx
        push edi
        lea edi, ds:[esi+0x14]
        push edi
        mov ecx, ebx
        call public_6f4af00
        mov ecx, dword ptr ds : [ebx+4]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        je public_6f4734d
        mov edx, dword ptr ds : [edi]
        cmp edx, dword ptr ds : [eax+0xC]
        jl public_6f4734d
        lea eax, ss:[esp+0x14]
        jmp public_6f47355
        public_6f4734d : nop
        mov dword ptr ss : [esp+0xC], ecx
        lea eax, ss:[esp+0xC]
        public_6f47355 : nop
        mov edi, dword ptr ds : [eax]
        cmp edi, ecx
        je public_6f47374
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        cmp eax, 6
        jne public_6f47374
        lea ecx, ds:[esi+0x78]
        push ecx
        mov ecx, dword ptr ds : [edi+0x10]
        call public_6f423d0
        public_6f47374 : nop
        mov cl, byte ptr ds : [esi+0x30]
        mov al, 1
        test al, cl
        je public_6f4738b
        pop edi
        mov dword ptr ds : [esi+0x1C], 0xFFFFFFFF
        pop esi
        pop ebx
        pop ecx
        ret 8
        public_6f4738b : nop
        mov edx, dword ptr ds : [esi+0x40]
        add edx, dword ptr ds : [esi+0x2C]
        pop edi
        mov dword ptr ds : [esi+0x1C], edx
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f47320)
    }
}

#undef public_6f4734d
#undef public_6f47355
#undef public_6f47374
#undef public_6f4738b
