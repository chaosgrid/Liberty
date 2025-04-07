#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62883c0);
CLANG_FORWARD_PROC_SYMBOL(public_62887a0);
CLANG_FORWARD_PROC_SYMBOL(public_62887d0);
CLANG_FORWARD_PROC_SYMBOL(public_6288800);
CLANG_FORWARD_PROC_SYMBOL(public_6288830);
CLANG_FORWARD_PROC_SYMBOL(public_6288860);
CLANG_FORWARD_PROC_SYMBOL(public_62888b0);
CLANG_FORWARD_PROC_SYMBOL(public_6288900);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6347e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6288410 _public_6288410
#define public_6288529 _public_6288529
#define public_62885c7 _public_62885c7
#define public_628864c _public_628864c
#define public_62886c5 _public_62886c5
#define public_62886f5 _public_62886f5
#define public_62886ff _public_62886ff
#define public_628876d _public_628876d
#define public_628878f _public_628878f

PROC_DECLARE(0x62883c0, internal_62883c0, public_62883c0);
extern "C" NAKED register_t __cdecl internal_62883c0()
{
    __asm
    {
        sub esp, 0x148
        push ebx
        push esi
        mov esi, dword ptr ss : [esp+0x154]
        cmp esi, 0xFFFFFFFF
        je public_628878f
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xA0]
        mov edx, dword ptr ds : [public_6399040]
        push 0xFFFFFFFF
        push 1
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_628878f
        push ebp
        push edi
        public_6288410 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x80]
        cmp eax, dword ptr ss : [esp+0x160]
        jne public_628876d
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0xC4]
        mov esi, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [public_6399040]
        mov ecx, 0xC
        lea edi, ss:[esp+0x40]
        rep movsd
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0xC4]
        mov ebp, eax
        mov ecx, 9
        lea esi, ss:[esp+0x40]
        lea edi, ss:[esp+0xEC]
        rep movsd
        mov eax, dword ptr ss : [ebp]
        sub eax, 0
        je public_62886c5
        dec eax
        je public_62885c7
        dec eax
        jne public_62886ff
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x20]
        push edx
        push 0
        push ebx
        push eax
        call dword ptr ds : [ecx+0xCC]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_639c13c]
        lea esi, ss:[ebp+0x40]
        mov ecx, esi
        fst dword ptr ss : [esp+0x14]
        fsin 
        fstp dword ptr ss : [esp+0x10]
        call public_6347e60
        fdivr dword ptr ss : [esp+0x10]
        lea ecx, ss:[esp+0x70]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fcos 
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        push esi
        push ecx
        fstp dword ptr ss : [esp+0x94]
        call public_6288830
        mov eax, dword ptr ss : [esp+0x80]
        mov edx, dword ptr ss : [esp+0x7C]
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr ss : [esp+0x9C], eax
        mov eax, dword ptr ds : [public_63fc0b8]
        add esp, 0xC
        test eax, eax
        mov dword ptr ss : [esp+0x8C], edx
        mov dword ptr ss : [esp+0x94], ecx
        jne public_6288529
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_6288529 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x88]
        push ecx
        lea ecx, ss:[esp+0x138]
        push ecx
        push eax
        call dword ptr ds : [edx+0x54]
        lea edx, ss:[ebp+0x1C]
        push edx
        lea eax, ss:[esp+0x138]
        push eax
        lea ecx, ss:[esp+0x118]
        push ecx
        call public_6288900
        add esp, 0xC
        lea edx, ss:[esp+0x110]
        push edx
        lea ecx, ss:[esp+0x44]
        call public_6288860
        lea eax, ss:[ebp+0x10]
        push eax
        lea ecx, ss:[esp+0x44]
        push ecx
        lea edx, ss:[esp+0xA0]
        push edx
        call public_62888b0
        add ebp, 4
        push ebp
        lea eax, ss:[esp+0xFC]
        push eax
        lea ecx, ss:[esp+0xB8]
        push ecx
        call public_62888b0
        lea edx, ss:[esp+0xB0]
        push edx
        lea eax, ss:[esp+0xC0]
        push eax
        lea ecx, ss:[esp+0xF4]
        push ecx
        call public_6288800
        add esp, 0x24
        lea edx, ss:[esp+0xD4]
        jmp public_62886f5
        public_62885c7 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1C]
        push edx
        push 0
        push ebx
        push eax
        call dword ptr ds : [ecx+0xCC]
        lea eax, ss:[ebp+0x1C]
        push eax
        lea ecx, ss:[esp+0x44]
        call public_6288860
        lea ecx, ss:[ebp+0x10]
        push ecx
        lea edx, ss:[esp+0x44]
        push edx
        lea eax, ss:[esp+0x84]
        push eax
        call public_62888b0
        fld dword ptr ss : [esp+0x28]
        add esp, 8
        lea ecx, ss:[ebp+0x40]
        fstp dword ptr ss : [esp]
        push ecx
        lea edx, ss:[esp+0xB8]
        push edx
        call public_6288830
        lea eax, ss:[esp+0xBC]
        push eax
        add ebp, 4
        lea ecx, ss:[esp+0xD8]
        push ebp
        push ecx
        call public_62887d0
        mov eax, dword ptr ds : [public_63fc0b8]
        add esp, 0x18
        test eax, eax
        jne public_628864c
        call public_6391cf0
        mov dword ptr ds : [public_63fc0b8], eax
        public_628864c : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0xC8]
        push ecx
        lea ecx, ss:[esp+0xF0]
        push ecx
        lea ecx, ss:[esp+0x30]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x84]
        sub esp, 0xC
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x8C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x88]
        fstp dword ptr ss : [esp]
        call public_628b030
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x64]
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x68]
        fld dword ptr ss : [esp+0x6C]
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x6C]
        jmp public_62886ff
        public_62886c5 : nop
        lea edx, ss:[ebp+0x1C]
        push edx
        lea ecx, ss:[esp+0x44]
        call public_6288860
        add ebp, 0x10
        push ebp
        lea eax, ss:[esp+0xF0]
        push eax
        lea ecx, ss:[esp+0xE8]
        push ecx
        call public_62888b0
        add esp, 0xC
        lea edx, ss:[esp+0xE0]
        public_62886f5 : nop
        lea ecx, ss:[esp+0x64]
        push edx
        call public_62887a0
        public_62886ff : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x40]
        push edx
        push ebx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xBC]
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0x88]
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xBC]
        push edx
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push 1
        push ebx
        push eax
        call dword ptr ds : [ecx+0x84]
        mov eax, dword ptr ss : [esp+0x160]
        push eax
        push ebx
        call public_62883c0
        mov esi, dword ptr ss : [esp+0x164]
        add esp, 8
        public_628876d : nop
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push ebx
        push 1
        push esi
        push eax
        call dword ptr ds : [edx+0xD8]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        jne public_6288410
        pop edi
        pop ebp
        public_628878f : nop
        pop esi
        pop ebx
        add esp, 0x148
        ret 
        UNREACHABLE_TRAP(0x62883c0)
    }
}

#undef public_6288410
#undef public_6288529
#undef public_62885c7
#undef public_628864c
#undef public_62886c5
#undef public_62886f5
#undef public_62886ff
#undef public_628876d
#undef public_628878f
