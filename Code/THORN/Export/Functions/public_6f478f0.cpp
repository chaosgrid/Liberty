#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f22d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f23090);
CLANG_FORWARD_PROC_SYMBOL(public_6f37570);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b670);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b970);
CLANG_FORWARD_PROC_SYMBOL(public_6f3b9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f428b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f444c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57de0);

#define public_6f4790b _public_6f4790b
#define public_6f47914 _public_6f47914
#define public_6f479e8 _public_6f479e8
#define public_6f47a8e _public_6f47a8e
#define public_6f47acf _public_6f47acf
#define public_6f47b4e _public_6f47b4e
#define public_6f47bf1 _public_6f47bf1
#define public_6f47c20 _public_6f47c20

PROC_DECLARE(0x6f478f0, internal_6f478f0, public_6f478f0);
extern "C" NAKED register_t __cdecl internal_6f478f0()
{
    __asm
    {
        sub esp, 0x134
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x30]
        test al, 1
        push esi
        push edi
        je public_6f4790b
        mov dword ptr ds : [ebx+0x1C], 0xFFFFFFFF
        jmp public_6f47914
        public_6f4790b : nop
        mov ecx, dword ptr ds : [ebx+0x40]
        add ecx, dword ptr ds : [ebx+0x2C]
        mov dword ptr ds : [ebx+0x1C], ecx
        public_6f47914 : nop
        and eax, 0x40
        or al, 0x80
        test al, al
        je public_6f47c20
        mov edi, dword ptr ss : [esp+0x144]
        lea edx, ds:[ebx+0x14]
        push edx
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, edi
        call public_6f4aa40
        mov ecx, dword ptr ss : [esp+0x10]
        cmp ecx, dword ptr ds : [edi+4]
        je public_6f47c20
        lea edx, ds:[ebx+0x18]
        push edx
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call public_6f4aa40
        mov esi, dword ptr ss : [esp+0xC]
        cmp esi, dword ptr ds : [edi+4]
        je public_6f47c20
        lea ecx, ss:[esp+0x20]
        call public_6f37570
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x44], 0
        mov ecx, dword ptr ds : [esi+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x44], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x48], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x4C], eax
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov esi, eax
        mov eax, dword ptr ds : [ebx+0x6C]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x20]
        rep movsd
        je public_6f47acf
        mov eax, dword ptr ds : [ebx+0x60]
        test eax, eax
        je public_6f47acf
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 2
        je public_6f479e8
        cmp eax, 1
        jne public_6f47acf
        public_6f479e8 : nop
        mov eax, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [eax+0xCC]
        test eax, eax
        je public_6f47acf
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        mov edx, dword ptr ds : [ebx+0x6C]
        push edx
        mov edx, dword ptr ds : [ebx+0x60]
        push edx
        push eax
        call dword ptr ds : [ecx+0x24]
        mov esi, dword ptr ds : [ebx+4]
        test esi, esi
        je public_6f47acf
        lea eax, ds:[esi+0x24]
        push eax
        lea ecx, ss:[esp+0x54]
        push esi
        push ecx
        call public_6f3b9a0
        add esp, 0xC
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x54]
        call public_6f23090
        lea eax, ss:[esp+0xBC]
        push eax
        mov ecx, esi
        call public_6f3b670
        mov edx, dword ptr ss : [esp+0x18]
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        mov ecx, 9
        lea edi, ss:[esp+0x8C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0xB8], eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        mov dword ptr ss : [esp+0xB0], ecx
        mov dword ptr ss : [esp+0xB4], edx
        jne public_6f47a8e
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f47a8e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0x90]
        push edx
        lea edx, ss:[esp+0xE8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        lea eax, ss:[esp+0xE0]
        push eax
        lea ecx, ss:[esp+0x114]
        call public_6f444c0
        mov ecx, 0xC
        lea esi, ss:[esp+0x110]
        lea edi, ss:[esp+0x20]
        rep movsd
        public_6f47acf : nop
        lea ecx, ss:[esp+0x5C]
        call public_6f37570
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x88], 0
        mov dword ptr ss : [esp+0x84], 0
        mov dword ptr ss : [esp+0x80], 0
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x80], ecx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x84], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x88], eax
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov esi, eax
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        mov ecx, 9
        lea edi, ss:[esp+0x5C]
        rep movsd
        jne public_6f47b4e
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f47b4e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x44]
        push edx
        lea edx, ss:[esp+0x24]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0x1C]
        fchs 
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x5C]
        fld dword ptr ss : [esp+0x24]
        fchs 
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x20]
        fchs 
        fstp dword ptr ss : [esp]
        call public_6f22d50
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x28]
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        push ecx
        mov ecx, dword ptr ss : [esp+0x38]
        push edx
        mov edx, dword ptr ss : [esp+0x30]
        push eax
        mov eax, dword ptr ss : [esp+0x48]
        push ecx
        mov ecx, dword ptr ss : [esp+0x40]
        push edx
        mov edx, dword ptr ss : [esp+0x38]
        push eax
        push ecx
        push edx
        lea ecx, ss:[esp+0xE0]
        call public_6f428b0
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+0xC0]
        push ecx
        lea ecx, ss:[esp+0x118]
        call public_6f3b970
        mov eax, dword ptr ds : [public_6f61e20]
        test eax, eax
        jne public_6f47bf1
        call public_6f57de0
        mov dword ptr ds : [public_6f61e20], eax
        public_6f47bf1 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x5C]
        push ecx
        lea ecx, ss:[esp+0x114]
        push ecx
        lea ecx, ss:[esp+0xE8]
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        lea edi, ds:[ebx+0x80]
        mov ecx, 0xC
        lea esi, ss:[esp+0xE0]
        rep movsd
        public_6f47c20 : nop
        pop edi
        pop esi
        mov al, 1
        pop ebx
        add esp, 0x134
        ret 8
        UNREACHABLE_TRAP(0x6f478f0)
    }
}

#undef public_6f4790b
#undef public_6f47914
#undef public_6f479e8
#undef public_6f47a8e
#undef public_6f47acf
#undef public_6f47b4e
#undef public_6f47bf1
#undef public_6f47c20
