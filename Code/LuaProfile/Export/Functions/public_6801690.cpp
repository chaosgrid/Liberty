#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6801cf0);
CLANG_FORWARD_PROC_SYMBOL(public_6801d10);
CLANG_FORWARD_PROC_SYMBOL(public_6801f70);
CLANG_FORWARD_PROC_SYMBOL(public_6802010);
CLANG_FORWARD_PROC_SYMBOL(public_68020b0);
CLANG_FORWARD_PROC_SYMBOL(public_68020d0);
CLANG_FORWARD_PROC_SYMBOL(public_68020f0);
CLANG_FORWARD_PROC_SYMBOL(public_6802140);
CLANG_FORWARD_PROC_SYMBOL(public_6802210);
CLANG_FORWARD_PROC_SYMBOL(public_68022b0);
CLANG_FORWARD_PROC_SYMBOL(public_68026d0);

#define public_68016e6 _public_68016e6
#define public_6801706 _public_6801706
#define public_6801716 _public_6801716
#define public_6801736 _public_6801736
#define public_6801743 _public_6801743
#define public_680175c _public_680175c
#define public_680176a _public_680176a
#define public_680177f _public_680177f
#define public_680178f _public_680178f
#define public_68017a1 _public_68017a1
#define public_68017b1 _public_68017b1
#define public_6801825 _public_6801825
#define public_680184b _public_680184b
#define public_6801862 _public_6801862

PROC_DECLARE(0x6801690, internal_6801690, public_6801690);
extern "C" NAKED register_t __cdecl internal_6801690()
{
    __asm
    {
        push ebp
        mov ebp, esp
        and esp, 0xFFFFFFF8
        sub esp, 0x20
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ds : [eax+0xC]
        push esi
        push edi
        push ecx
        call public_68026d0
        mov edx, dword ptr ss : [ebp+0xC]
        push edx
        mov dword ptr ss : [esp+0x14], eax
        call public_6801f70
        mov edi, eax
        add esp, 8
        test edi, edi
        mov dword ptr ss : [esp+8], edi
        je public_6801862
        push edi
        call public_68020d0
        add esp, 4
        test eax, eax
        je public_6801862
        mov eax, dword ptr ss : [ebp+0x14]
        xor esi, esi
        test eax, eax
        jle public_68017b1
        mov edi, dword ptr ss : [ebp+0x18]
        public_68016e6 : nop
        mov ecx, dword ptr ds : [edi+esi*4]
        mov eax, dword ptr ds : [ecx]
        cmp eax, 9
        jne public_6801716
        cmp eax, 9
        jne public_6801706
        mov ecx, dword ptr ds : [ecx+8]
        push ecx
        call public_68022b0
        add esp, 4
        jmp public_68017a1
        public_6801706 : nop
        xor ecx, ecx
        push ecx
        call public_68022b0
        add esp, 4
        jmp public_68017a1
        public_6801716 : nop
        test ah, 0x40
        jne public_680175c
        test ah, 0x10
        je public_680175c
        mov edx, eax
        and edx, 0xFFF
        cmp edx, 4
        jne public_6801736
        fild qword ptr ds : [ecx+8]
        fstp qword ptr ss : [esp+0x10]
        jmp public_680178f
        public_6801736 : nop
        test ah, ah
        jns public_6801743
        fild dword ptr ds : [ecx+8]
        fstp qword ptr ss : [esp+0x10]
        jmp public_680178f
        public_6801743 : nop
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], 0
        fild qword ptr ss : [esp+0x18]
        fstp qword ptr ss : [esp+0x10]
        jmp public_680178f
        public_680175c : nop
        cmp eax, 5
        jne public_680176a
        fld dword ptr ds : [ecx+8]
        fstp qword ptr ss : [esp+0x10]
        jmp public_680178f
        public_680176a : nop
        cmp eax, 6
        jne public_680177f
        mov edx, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [ecx+0xC]
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x14], eax
        jmp public_680178f
        public_680177f : nop
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        public_680178f : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x10]
        push ecx
        push edx
        call public_6802210
        add esp, 8
        public_68017a1 : nop
        mov eax, dword ptr ss : [ebp+0x14]
        inc esi
        cmp esi, eax
        jl public_68016e6
        mov edi, dword ptr ss : [esp+8]
        public_68017b1 : nop
        push edi
        call public_6801d10
        mov esi, dword ptr ss : [ebp+0x10]
        add esp, 4
        test esi, esi
        je public_680184b
        push 1
        call public_6801cf0
        mov edi, eax
        push edi
        call public_6802010
        add esp, 8
        test eax, eax
        jne public_680184b
        push edi
        call public_68020b0
        add esp, 4
        test eax, eax
        push edi
        je public_6801825
        call public_6802140
        push eax
        call dword ptr ds : [public_680c094]
        mov edx, 9
        mov dword ptr ds : [esi], edx
        xor ecx, ecx
        mov dword ptr ds : [esi+4], ecx
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x14]
        add esp, 8
        push eax
        call public_68026d0
        add esp, 4
        xor eax, eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
        public_6801825 : nop
        call public_68020f0
        mov ecx, 6
        mov dword ptr ds : [esi], ecx
        add esp, 4
        fstp qword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], ecx
        mov dword ptr ds : [esi+0xC], edx
        public_680184b : nop
        mov eax, dword ptr ss : [esp+0xC]
        push eax
        call public_68026d0
        add esp, 4
        xor eax, eax
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
        public_6801862 : nop
        pop edi
        mov eax, 0xFFFFFFFE
        pop esi
        mov esp, ebp
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6801690)
    }
}

#undef public_68016e6
#undef public_6801706
#undef public_6801716
#undef public_6801736
#undef public_6801743
#undef public_680175c
#undef public_680176a
#undef public_680177f
#undef public_680178f
#undef public_68017a1
#undef public_68017b1
#undef public_6801825
#undef public_680184b
#undef public_6801862
