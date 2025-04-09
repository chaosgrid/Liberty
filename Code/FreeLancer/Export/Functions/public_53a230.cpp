#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_4fd570);
CLANG_FORWARD_PROC_SYMBOL(public_503070);
CLANG_FORWARD_PROC_SYMBOL(public_507ea0);
CLANG_FORWARD_PROC_SYMBOL(public_53a230);
CLANG_FORWARD_PROC_SYMBOL(public_53a490);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_53a255 _public_53a255
#define public_53a293 _public_53a293
#define public_53a2c0 _public_53a2c0
#define public_53a2ed _public_53a2ed
#define public_53a482 _public_53a482

PROC_DECLARE(0x53a230, internal_53a230, public_53a230);
extern "C" NAKED register_t __cdecl internal_53a230()
{
    __asm
    {
        sub esp, 0x90
        push ebx
        push ebp
        mov ebx, ecx
        call public_54baf0
        cmp ebx, eax
        jne public_53a255
        push 0x39
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_53a482
        public_53a255 : nop
        mov ebp, dword ptr ss : [esp+0x9C]
        test ebp, ebp
        je public_53a482
        mov eax, dword ptr ss : [ebp]
        push eax
        call public_4fd570
        add esp, 4
        test al, al
        je public_53a482
        mov eax, dword ptr ds : [public_6789d0]
        push esi
        mov esi, dword ptr ds : [ebx+0x10]
        add esi, 8
        test eax, eax
        push edi
        jne public_53a293
        call public_5b73e0
        mov dword ptr ds : [public_6789d0], eax
        public_53a293 : nop
        mov edx, dword ptr ss : [esp+0xA8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        lea edx, ss:[esp+0x6C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov esi, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [public_6789d0]
        add esi, 8
        test eax, eax
        jne public_53a2c0
        call public_5b73e0
        mov dword ptr ds : [public_6789d0], eax
        public_53a2c0 : nop
        mov edx, dword ptr ss : [esp+0xAC]
        mov ecx, dword ptr ds : [eax]
        push edx
        push esi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x34]
        mov edi, dword ptr ds : [ebx+0x10]
        mov eax, dword ptr ds : [public_6789d0]
        add edi, 8
        test eax, eax
        jne public_53a2ed
        call public_5b73e0
        mov dword ptr ds : [public_6789d0], eax
        public_53a2ed : nop
        mov esi, dword ptr ss : [esp+0xB0]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        call dword ptr ds : [ecx+0x34]
        fld dword ptr ds : [esi+8]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x28]
        fld dword ptr ds : [esi+4]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fchs 
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x30]
        fmul dword ptr ss : [esp+0x20]
        push ecx
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x14]
        faddp 
        mov dword ptr ss : [esp+0x14], eax
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x1C], edx
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fadd st(0), st
        fstp dword ptr ss : [esp]
        call public_507ea0
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x14]
        call public_53a490
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [ebx+0x10]
        mov dword ptr ss : [esp+0x58], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x5C], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x60], eax
        add esi, 8
        mov ecx, 9
        lea edi, ss:[esp+0x70]
        rep movsd
        lea ecx, ss:[esp+0x58]
        push ecx
        lea edx, ss:[esp+0x74]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0xA8], 0
        mov dword ptr ss : [esp+0xA4], 0
        mov dword ptr ss : [esp+0xA0], 0
        call dword ptr ds : [public_5c65a0]
        add esp, 0xC
        fld dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x64]
        fxch 
        fstp dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, 9
        fstp dword ptr ss : [esp+0x48]
        lea esi, ss:[esp+0x34]
        lea edi, ss:[esp+0x70]
        fchs 
        fld dword ptr ss : [esp+0x14]
        fchs 
        fld dword ptr ss : [esp+0x18]
        fchs 
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        fxch 
        fstp dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ss : [esp+0x6C]
        fstp dword ptr ss : [esp+0x44]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x94], eax
        mov eax, dword ptr ss : [esp+0xB4]
        mov dword ptr ss : [esp+0x98], ecx
        push eax
        lea ecx, ss:[esp+0x74]
        mov dword ptr ss : [esp+0xA0], edx
        mov edx, dword ptr ds : [ebx]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [edx+0x1C]
        push eax
        push ebx
        push ebp
        mov ecx, offset public_674c60
        call public_503070
        pop edi
        pop esi
        public_53a482 : nop
        pop ebp
        pop ebx
        add esp, 0x90
        ret 0x14
        UNREACHABLE_TRAP(0x53a230)
    }
}

#undef public_53a255
#undef public_53a293
#undef public_53a2c0
#undef public_53a2ed
#undef public_53a482
