#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a270);

#define public_6c21a13 _public_6c21a13
#define public_6c21a1c _public_6c21a1c
#define public_6c21a3f _public_6c21a3f
#define public_6c21a61 _public_6c21a61
#define public_6c21a66 _public_6c21a66
#define public_6c21a6f _public_6c21a6f
#define public_6c21a85 _public_6c21a85

PROC_DECLARE(0x6c21a00, internal_6c21a00, public_6c21a00);
extern "C" NAKED register_t __cdecl internal_6c21a00()
{
    __asm
    {
        push ebx
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        or ebx, 0xFFFFFFFF
        cmp edi, 0xFFFFFFFF
        je public_6c21a13
        test edi, edi
        jne public_6c21a1c
        public_6c21a13 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        public_6c21a1c : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+4]
        mov al, byte ptr ds : [esi+0x28]
        inc ecx
        test al, al
        mov dword ptr ds : [esi+4], ecx
        je public_6c21a3f
        mov eax, dword ptr ds : [esi+0x24]
        mov ecx, dword ptr ds : [eax+0xC]
        cmp ecx, dword ptr ss : [esp+0x14]
        jne public_6c21a3f
        inc dword ptr ds : [esi+8]
        jmp public_6c21a61
        public_6c21a3f : nop
        lea edx, ss:[esp+0x14]
        push edx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ds:[esi+0xC]
        call public_6c2a270
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+0x10]
        je public_6c21a66
        mov dword ptr ds : [esi+0x24], eax
        mov byte ptr ds : [esi+0x28], 1
        public_6c21a61 : nop
        cmp eax, dword ptr ds : [esi+0x10]
        jne public_6c21a6f
        public_6c21a66 : nop
        pop edi
        pop esi
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        public_6c21a6f : nop
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx+0x10]
        cmp edx, dword ptr ds : [ecx+0xC]
        jne public_6c21a85
        mov dword ptr ds : [ecx+0xC], edi
        mov eax, dword ptr ds : [eax+0x10]
        mov dword ptr ds : [eax+0x10], edi
        xor ebx, ebx
        public_6c21a85 : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6c21a00)
    }
}

#undef public_6c21a13
#undef public_6c21a1c
#undef public_6c21a3f
#undef public_6c21a61
#undef public_6c21a66
#undef public_6c21a6f
#undef public_6c21a85
