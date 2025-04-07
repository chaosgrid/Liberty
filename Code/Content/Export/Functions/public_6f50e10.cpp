#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2e220);
CLANG_FORWARD_PROC_SYMBOL(public_6f50e10);

#define public_6f50e47 _public_6f50e47
#define public_6f50e4f _public_6f50e4f
#define public_6f50e66 _public_6f50e66
#define public_6f50e85 _public_6f50e85
#define public_6f50e8c _public_6f50e8c
#define public_6f50e91 _public_6f50e91

PROC_DECLARE(0x6f50e10, internal_6f50e10, public_6f50e10);
extern "C" NAKED register_t __cdecl internal_6f50e10()
{
    __asm
    {
        sub esp, 8
        push ebx
        push esi
        push edi
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, offset public_6fd0c90
        call public_6f2e220
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [public_6fd0c94]
        cmp eax, ecx
        je public_6f50e47
        mov edx, dword ptr ss : [esp+0x18]
        cmp edx, dword ptr ds : [eax+0xC]
        jb public_6f50e47
        lea eax, ss:[esp+0xC]
        jmp public_6f50e4f
        public_6f50e47 : nop
        mov dword ptr ss : [esp+0x10], ecx
        lea eax, ss:[esp+0x10]
        public_6f50e4f : nop
        mov edi, dword ptr ds : [eax]
        cmp edi, ecx
        je public_6f50e91
        mov ebx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ds : [edi+0x14]
        xor ecx, ecx
        test ebx, ebx
        jbe public_6f50e91
        mov esi, dword ptr ss : [esp+0x1C]
        public_6f50e66 : nop
        cmp edx, dword ptr ds : [edi+0x18]
        je public_6f50e85
        fld dword ptr ds : [edx+4]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 5
        jp public_6f50e85
        mov eax, dword ptr ds : [edx]
        mov dword ptr ds : [esi+ecx*4], eax
        add edx, 8
        jmp public_6f50e8c
        public_6f50e85 : nop
        mov dword ptr ds : [esi+ecx*4], 0xFFFFFFFF
        public_6f50e8c : nop
        inc ecx
        cmp ecx, ebx
        jb public_6f50e66
        public_6f50e91 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f50e10)
    }
}

#undef public_6f50e47
#undef public_6f50e4f
#undef public_6f50e66
#undef public_6f50e85
#undef public_6f50e8c
#undef public_6f50e91
