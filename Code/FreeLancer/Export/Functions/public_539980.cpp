#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4022d0);
CLANG_FORWARD_PROC_SYMBOL(public_402580);
CLANG_FORWARD_PROC_SYMBOL(public_4fd040);
CLANG_FORWARD_PROC_SYMBOL(public_533880);
CLANG_FORWARD_PROC_SYMBOL(public_533930);
CLANG_FORWARD_PROC_SYMBOL(public_539980);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b3510);

#define public_5399bd _public_5399bd
#define public_5399c9 _public_5399c9
#define public_5399d7 _public_5399d7
#define public_5399f4 _public_5399f4
#define public_539a2d _public_539a2d
#define public_539a2f _public_539a2f
#define public_539a45 _public_539a45
#define public_539a5f _public_539a5f
#define public_539aac _public_539aac
#define public_539aae _public_539aae
#define public_539acd _public_539acd
#define public_539acf _public_539acf
#define public_539aef _public_539aef
#define public_539b2a _public_539b2a

PROC_DECLARE(0x539980, internal_539980, public_539980);
extern "C" NAKED register_t __cdecl internal_539980()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        push edi
        call dword ptr ds : [eax+0x180]
        mov edi, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x18]
        push eax
        push edi
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x17C]
        mov ecx, dword ptr ds : [eax]
        cmp cx, 3
        mov dword ptr ss : [esp+0x18], ecx
        jb public_5399bd
        mov ax, word ptr ss : [esp+0x1A]
        cmp ax, 2
        jl public_5399c9
        public_5399bd : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [eax], ecx
        pop esi
        pop ecx
        ret 0x14
        public_5399c9 : nop
        cmp ax, 1
        jge public_5399d7
        lea ecx, ds:[esi+0x28]
        call public_4fd040
        public_5399d7 : nop
        mov edx, dword ptr ds : [esi]
        push ebx
        push ebp
        push edi
        mov ecx, esi
        call dword ptr ds : [edx+0x184]
        call public_54baf0
        cmp esi, eax
        je public_5399f4
        mov ebp, 8
        jmp public_539a2f
        public_5399f4 : nop
        lea eax, ss:[esp+0x10]
        push eax
        call public_4022d0
        fld dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_5debf8]
        add esp, 4
        fnstsw ax
        test ah, 0x41
        jp public_539a2d
        mov edx, dword ptr ds : [esi]
        push 0
        push 1
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        push eax
        call public_402580
        add esp, 0xC
        mov ebp, 0x80
        jmp public_539a2f
        public_539a2d : nop
        xor ebp, ebp
        public_539a2f : nop
        cmp word ptr ss : [esp+0x20], 4
        jne public_539a45
        cmp word ptr ss : [esp+0x22], 0
        jg public_539a45
        or ebp, 0x100
        public_539a45 : nop
        mov eax, dword ptr ss : [esp+0x24]
        test eax, eax
        mov dword ptr ss : [esp+0x10], 0
        je public_539a5f
        mov dword ptr ss : [esp+0x10], eax
        or ebp, 0x120
        public_539a5f : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x1C]
        push 0
        mov ebx, eax
        call public_5b3510
        fcomp dword ptr ds : [public_5c7474]
        add esp, 4
        fnstsw ax
        test ah, 0x41
        jne public_539aef
        cmp word ptr ss : [esp+0x22], 1
        jge public_539aef
        mov eax, dword ptr ss : [esp+0x28]
        test eax, eax
        jne public_539aef
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        mov edi, dword ptr ds : [public_5c6590]
        je public_539aac
        call edi
        test eax, eax
        je public_539aac
        mov ecx, dword ptr ds : [esi+0x10]
        call edi
        mov eax, dword ptr ds : [eax+4]
        jmp public_539aae
        public_539aac : nop
        xor eax, eax
        public_539aae : nop
        mov ecx, dword ptr ds : [eax+0x10]
        cmp byte ptr ds : [ecx], 0
        je public_539aef
        mov ecx, dword ptr ds : [esi+0x10]
        test ecx, ecx
        je public_539acd
        call edi
        test eax, eax
        je public_539acd
        mov ecx, dword ptr ds : [esi+0x10]
        call edi
        mov eax, dword ptr ds : [eax+4]
        jmp public_539acf
        public_539acd : nop
        xor eax, eax
        public_539acf : nop
        mov esi, dword ptr ds : [eax+0x10]
        lea edx, ss:[esp+0x28]
        push edx
        push 4
        call public_533930
        add esp, 8
        test al, al
        je public_539aef
        push esi
        push ebx
        call public_533880
        add esp, 8
        public_539aef : nop
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [public_5c6df0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        mov edx, dword ptr ss : [esp+0x14]
        push edx
        mov edx, dword ptr ss : [esp+0x24]
        push ebp
        push 0x3F800000
        push ebx
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov esi, eax
        cmp esi, 3
        pop ebp
        pop ebx
        jl public_539b2a
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 1
        push eax
        call dword ptr ds : [ecx+0x28]
        public_539b2a : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov word ptr ds : [eax], si
        mov word ptr ds : [eax+2], 0xFFFF
        pop esi
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x539980)
    }
}

#undef public_5399bd
#undef public_5399c9
#undef public_5399d7
#undef public_5399f4
#undef public_539a2d
#undef public_539a2f
#undef public_539a45
#undef public_539a5f
#undef public_539aac
#undef public_539aae
#undef public_539acd
#undef public_539acf
#undef public_539aef
#undef public_539b2a
