#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dd0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4220c0);
CLANG_FORWARD_PROC_SYMBOL(public_4227d0);
CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_4e4f70);
CLANG_FORWARD_PROC_SYMBOL(public_4e50d0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4e5129 _public_4e5129
#define public_4e5140 _public_4e5140
#define public_4e518d _public_4e518d
#define public_4e5336 _public_4e5336
#define public_4e53be _public_4e53be
#define public_4e53ca _public_4e53ca
#define public_4e540e _public_4e540e
#define public_4e5444 _public_4e5444

PROC_DECLARE(0x4e50d0, internal_4e50d0, public_4e50d0);
extern "C" NAKED register_t __cdecl internal_4e50d0()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        push ebp
        mov ebp, ecx
        mov al, byte ptr ss : [ebp+0x594]
        xor ebx, ebx
        cmp al, bl
        push esi
        push edi
        je public_4e5444
        cmp dword ptr ss : [ebp+0x58C], ebx
        je public_4e5444
        cmp byte ptr ss : [ebp+0x5B4], bl
        je public_4e5129
        lea eax, ss:[ebp+0x598]
        push eax
        mov byte ptr ss : [ebp+0x5B4], bl
        call public_4e4f70
        lea ecx, ss:[ebp+0x5A4]
        push ecx
        mov ecx, ebp
        call public_4e4f70
        mov dword ptr ss : [ebp+0x5B0], ebx
        mov dword ptr ss : [ebp+0x630], ebx
        public_4e5129 : nop
        call public_42d680
        fadd dword ptr ss : [ebp+0x5B0]
        fstp dword ptr ss : [ebp+0x5B0]
        lea ebx, ds:[ebx]
        public_4e5140 : nop
        fld dword ptr ss : [ebp+0x5B0]
        fcomp dword ptr ds : [public_5d3e08]
        fld dword ptr ss : [ebp+0x5B0]
        fnstsw ax
        test ah, 5
        jnp public_4e518d
        fsub dword ptr ds : [public_5d3e08]
        lea eax, ss:[ebp+0x5A4]
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        lea edx, ss:[ebp+0x598]
        fstp dword ptr ss : [ebp+0x5B0]
        mov dword ptr ds : [edx], esi
        mov esi, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+4], esi
        mov dword ptr ds : [edx+8], ecx
        push eax
        mov ecx, ebp
        call public_4e4f70
        jmp public_4e5140
        public_4e518d : nop
        fmul dword ptr ds : [public_5d8d44]
        sub esp, 0xC
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [ebp+0x5AC]
        fsub dword ptr ss : [ebp+0x5A0]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [ebp+0x5A8]
        fsub dword ptr ss : [ebp+0x59C]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x5A4]
        fsub dword ptr ss : [ebp+0x598]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x34]
        sub esp, 8
        fmul dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [ebp+0x598]
        fld dword ptr ss : [esp+0x40]
        fmul dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [ebp+0x59C]
        fstp dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [public_5d1910]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x34]
        fadd dword ptr ds : [public_5d1910]
        fstp qword ptr ss : [esp]
        call dword ptr ds : [public_5c71c4]
        push 0xDE1
        fstp dword ptr ss : [esp+0x38]
        call public_421ed0
        push 0xB71
        call public_421ed0
        lea esi, ss:[ebp+0x3B8]
        push esi
        call public_4227d0
        push 0xBE2
        call public_421dd0
        push 6
        push 5
        call public_4220c0
        lea edx, ss:[esp+0x30]
        push edx
        mov byte ptr ss : [esp+0x34], 0xFF
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], 0x80
        call public_421ba0
        push 2
        call public_421670
        mov eax, dword ptr ds : [esi+0xB8]
        mov edx, dword ptr ds : [esi+0xB0]
        mov ecx, dword ptr ds : [esi+0xB4]
        mov edi, dword ptr ds : [esi+0xAC]
        add esp, 0x28
        sub eax, edx
        inc eax
        mov dword ptr ss : [esp+0x20], eax
        fild dword ptr ss : [esp+0x20]
        sub ecx, edi
        inc ecx
        mov dword ptr ss : [esp+0x20], ecx
        fstp dword ptr ss : [esp+0x1C]
        push ebx
        fild dword ptr ss : [esp+0x24]
        push ebx
        push ecx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x34]
        mov edx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        push ebx
        push edx
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ss : [esp+0x38]
        add esp, 0xC
        push ebx
        push ecx
        fstp dword ptr ss : [esp]
        push ebx
        call public_421cc0
        fld dword ptr ss : [esp+0x38]
        mov eax, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        push ebx
        push ecx
        fstp dword ptr ss : [esp]
        push eax
        call public_421cc0
        mov esi, dword ptr ss : [ebp+0x630]
        mov eax, 0x80
        lea ecx, ds:[esi+1]
        cdq 
        idiv ecx
        add esp, 0xC
        dec esi
        cmp esi, ebx
        mov dword ptr ss : [esp+0x18], 0x43000000
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x24]
        jl public_4e53ca
        lea edx, ds:[esi+esi*2]
        lea edi, ss:[ebp+edx*4+0x5BC]
        public_4e5336 : nop
        fld dword ptr ss : [esp+0x18]
        mov byte ptr ss : [esp+0x14], 0xFF
        fsub dword ptr ss : [esp+0x24]
        mov byte ptr ss : [esp+0x15], bl
        mov byte ptr ss : [esp+0x16], bl
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x18]
        call public_5b7ec0
        mov byte ptr ss : [esp+0x17], al
        lea eax, ss:[esp+0x14]
        push eax
        call public_421ba0
        xor ebx, ebx
        add esp, 4
        cmp esi, ebx
        jl public_4e53be
        cmp esi, 0xA
        jge public_4e53be
        fld dword ptr ds : [edi-4]
        push ebx
        push ebx
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [edi-4]
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 0xC
        push ebx
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        call public_421cc0
        fld dword ptr ds : [edi]
        add esp, 0xC
        push ebx
        push ecx
        fstp dword ptr ss : [esp]
        push ebx
        call public_421cc0
        fld dword ptr ds : [edi]
        mov edx, dword ptr ss : [esp+0x2C]
        add esp, 0xC
        push ebx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        call public_421cc0
        add esp, 0xC
        public_4e53be : nop
        dec esi
        sub edi, 0xC
        cmp esi, ebx
        jge public_4e5336
        public_4e53ca : nop
        call public_421690
        mov eax, dword ptr ss : [ebp+0x630]
        cmp eax, 0xA
        jge public_4e540e
        mov edx, dword ptr ss : [esp+0x28]
        lea eax, ds:[eax+eax*2+0x16E]
        lea ecx, ss:[ebp+eax*4]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+4], eax
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ss : [ebp+0x630]
        pop edi
        inc eax
        pop esi
        mov dword ptr ss : [ebp+0x630], eax
        pop ebp
        pop ebx
        add esp, 0x30
        ret 
        public_4e540e : nop
        mov eax, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x30]
        lea edi, ss:[ebp+0x5B8]
        lea esi, ss:[ebp+0x5C4]
        add ebp, 0x624
        mov ecx, 0x1B
        rep movsd
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [ebp], eax
        pop edi
        mov dword ptr ss : [ebp+4], ecx
        pop esi
        mov dword ptr ss : [ebp+8], edx
        pop ebp
        pop ebx
        add esp, 0x30
        ret 
        public_4e5444 : nop
        pop edi
        pop esi
        mov byte ptr ss : [ebp+0x5B4], 1
        pop ebp
        pop ebx
        add esp, 0x30
        ret 
        UNREACHABLE_TRAP(0x4e50d0)
    }
}

#undef public_4e5129
#undef public_4e5140
#undef public_4e518d
#undef public_4e5336
#undef public_4e53be
#undef public_4e53ca
#undef public_4e540e
#undef public_4e5444
