#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6802070);
CLANG_FORWARD_PROC_SYMBOL(public_68020f0);
CLANG_FORWARD_PROC_SYMBOL(public_68021e0);
CLANG_FORWARD_PROC_SYMBOL(public_6802210);
CLANG_FORWARD_PROC_SYMBOL(public_6805d80);
CLANG_FORWARD_PROC_SYMBOL(public_6805df0);
CLANG_FORWARD_PROC_SYMBOL(public_6805eb0);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

#define public_68096d2 _public_68096d2
#define public_68096eb _public_68096eb
#define public_68096fa _public_68096fa
#define public_680971c _public_680971c
#define public_6809739 _public_6809739
#define public_680974c _public_680974c
#define public_6809757 _public_6809757
#define public_680975c _public_680975c
#define public_6809766 _public_6809766

PROC_DECLARE(0x6809680, internal_6809680, public_6809680);
extern "C" NAKED register_t __cdecl internal_6809680()
{
    __asm
    {
        sub esp, 8
        push esi
        push 0x40240000
        push 0
        push 2
        call public_6805eb0
        add esp, 0xC
        call public_680bdaa
        mov esi, eax
        cmp esi, 0xA
        jne public_68096d2
        push 1
        call public_6801cf0
        mov esi, eax
        push esi
        call public_6802070
        add esp, 8
        test eax, eax
        je public_680975c
        push esi
        call public_68020f0
        push ecx
        fstp qword ptr ss : [esp]
        call public_6802210
        add esp, 8
        pop esi
        add esp, 8
        ret 
        public_68096d2 : nop
        push 0
        push 1
        call public_6805df0
        add esp, 8
        test esi, esi
        mov dword ptr ss : [esp+4], eax
        jl public_68096eb
        cmp esi, 0x24
        jle public_68096fa
/*FIXUP public_68096eb : nop
        push offset public_680e29c @0x68096eb*/
  FIXUP public_68096eb : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_680e29c
        push 2
        call public_6805d80
        add esp, 8
        public_68096fa : nop
        mov ecx, dword ptr ss : [esp+4]
        push esi
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call dword ptr ds : [public_680c084]
        mov esi, dword ptr ds : [public_680c05c]
        mov ecx, dword ptr ss : [esp+0x10]
        add esp, 0xC
        mov dword ptr ss : [esp+8], eax
        public_680971c : nop
        mov edx, dword ptr ds : [public_680c058]
        cmp dword ptr ds : [edx], 1
        jle public_6809739
        xor eax, eax
        mov al, byte ptr ds : [ecx]
        push 8
        push eax
        call esi
        mov ecx, dword ptr ss : [esp+0xC]
        add esp, 8
        jmp public_680974c
        public_6809739 : nop
        xor edx, edx
        mov dl, byte ptr ds : [ecx]
        xor eax, eax
        mov eax, dword ptr ds : [public_680c054]
        mov eax, dword ptr ds : [eax]
        mov al, byte ptr ds : [eax+edx*2]
        and eax, 8
        public_680974c : nop
        test eax, eax
        je public_6809757
        inc ecx
        mov dword ptr ss : [esp+4], ecx
        jmp public_680971c
        public_6809757 : nop
        cmp byte ptr ds : [ecx], 0
        je public_6809766
        public_680975c : nop
        call public_68021e0
        pop esi
        add esp, 8
        ret 
        public_6809766 : nop
        fild dword ptr ss : [esp+8]
        sub esp, 8
        fstp qword ptr ss : [esp]
        call public_6802210
        add esp, 8
        pop esi
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6809680)
    }
}

#undef public_68096d2
#undef public_68096eb
#undef public_68096fa
#undef public_680971c
#undef public_6809739
#undef public_680974c
#undef public_6809757
#undef public_680975c
#undef public_6809766
