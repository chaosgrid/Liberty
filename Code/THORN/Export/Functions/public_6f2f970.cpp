#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f30d20);
CLANG_FORWARD_PROC_SYMBOL(public_6f315b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f31d40);

#define public_6f2f990 _public_6f2f990
#define public_6f2f9b2 _public_6f2f9b2
#define public_6f2f9d0 _public_6f2f9d0
#define public_6f2fa0c _public_6f2fa0c
#define public_6f2fa14 _public_6f2fa14
#define public_6f2fa25 _public_6f2fa25
#define public_6f2fa33 _public_6f2fa33

PROC_DECLARE(0x6f2f970, internal_6f2f970, public_6f2f970);
extern "C" NAKED register_t __cdecl internal_6f2f970()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ds : [ebx+0x14]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov edx, dword ptr ds : [ebx+8]
        push ebp
        push esi
        mov dword ptr ss : [esp+0x10], eax
        mov ebp, dword ptr ds : [edx]
        push edi
        je public_6f2f9b2
        nop 
        lea esp, ss:[esp]
        public_6f2f990 : nop
        mov esi, dword ptr ds : [eax+0x10]
        lea edi, ss:[ebp+8]
        mov ecx, 5
        rep movsd
        lea ecx, ss:[esp+0x14]
        call public_6f315b0
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, dword ptr ds : [ebx+0x14]
        mov ebp, dword ptr ss : [ebp]
        jne public_6f2f990
        public_6f2f9b2 : nop
        lea ecx, ds:[ebx+4]
        call public_6f30d20
        mov eax, dword ptr ds : [ebx+8]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_6f2fa33
        nop 
        lea esp, ss:[esp]
        public_6f2f9d0 : nop
        fld dword ptr ds : [esi+0xC]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6f2fa25
        mov eax, dword ptr ss : [esp+0x10]
        lea ebp, ds:[esi+0x18]
        lea edi, ds:[ebx+0x10]
        push ebp
        mov ecx, edi
        mov dword ptr ds : [esi+0xC], eax
        call public_6f31d40
        mov edi, dword ptr ds : [edi+4]
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], eax
        je public_6f2fa0c
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [eax+0xC]
        jl public_6f2fa0c
        lea eax, ss:[esp+0x18]
        jmp public_6f2fa14
        public_6f2fa0c : nop
        mov dword ptr ss : [esp+0x1C], edi
        lea eax, ss:[esp+0x1C]
        public_6f2fa14 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ebx+0x14]
        je public_6f2fa25
        mov edx, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [edx+4], eax
        public_6f2fa25 : nop
        mov ecx, dword ptr ds : [esi+0xC]
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+8]
        mov dword ptr ss : [esp+0x10], ecx
        jne public_6f2f9d0
        public_6f2fa33 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6f2f970)
    }
}

#undef public_6f2f990
#undef public_6f2f9b2
#undef public_6f2f9d0
#undef public_6f2fa0c
#undef public_6f2fa14
#undef public_6f2fa25
#undef public_6f2fa33
