#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_410240);
CLANG_FORWARD_PROC_SYMBOL(public_4102c0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422440);
CLANG_FORWARD_PROC_SYMBOL(public_537f40);
CLANG_FORWARD_PROC_SYMBOL(public_5554d0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_555512 _public_555512
#define public_55553a _public_55553a
#define public_555553 _public_555553
#define public_55556b _public_55556b
#define public_55562c _public_55562c
#define public_555659 _public_555659

PROC_DECLARE(0x5554d0, internal_5554d0, public_5554d0);
extern "C" NAKED register_t __cdecl internal_5554d0()
{
    __asm
    {
        sub esp, 0x1C
        push 0xB60
        call public_421ed0
        push 0x18
        call public_5792b0
        add esp, 8
        test eax, eax
        jne public_555512
        call public_4101e0
        mov edx, 0xFF
        lea eax, ss:[esp+0x30]
        push eax
        mov byte ptr ss : [esp+0x34], dl
        mov byte ptr ss : [esp+0x35], dl
        mov byte ptr ss : [esp+0x36], dl
        call public_410240
        add esp, 4
        add esp, 0x1C
        ret 
        public_555512 : nop
        push 0x3B
        call public_5792b0
        movzx ecx, byte ptr ds : [public_6798f8]
        mov edx, 0xFF
        add ecx, eax
        add esp, 4
        cmp ecx, edx
        mov byte ptr ds : [public_67986c], dl
        jg public_55553a
        mov byte ptr ds : [public_67986c], cl
        public_55553a : nop
        movzx ecx, byte ptr ds : [public_6798f9]
        add ecx, eax
        cmp ecx, edx
        mov byte ptr ds : [public_67986d], dl
        jg public_555553
        mov byte ptr ds : [public_67986d], cl
        public_555553 : nop
        movzx ecx, byte ptr ds : [public_6798fa]
        add eax, ecx
        cmp eax, edx
        mov byte ptr ds : [public_67986e], dl
        jg public_55556b
        mov byte ptr ds : [public_67986e], al
        public_55556b : nop
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push edi
        mov edi, dword ptr ss : [esp+0x38]
        test edi, edi
        mov ebx, offset public_67986c
        je public_555659
        mov edx, dword ptr ds : [edi]
        push esi
        mov ecx, edi
        call dword ptr ds : [edx+0x48]
        mov esi, eax
        test esi, esi
        je public_55562c
        movzx eax, byte ptr ds : [public_67986c]
        movzx ecx, byte ptr ds : [esi]
        sub ecx, eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x30], eax
        fild dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x40]
        fiadd dword ptr ss : [esp+0x30]
        fadd qword ptr ds : [public_5c75e8]
        call public_5b7ec0
        mov byte ptr ds : [public_679868], al
        movzx eax, byte ptr ds : [public_67986d]
        movzx edx, byte ptr ds : [esi+1]
        sub edx, eax
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x30], eax
        fild dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x40]
        fiadd dword ptr ss : [esp+0x30]
        fadd qword ptr ds : [public_5c75e8]
        call public_5b7ec0
        mov byte ptr ds : [public_679869], al
        movzx eax, byte ptr ds : [public_67986e]
        movzx ecx, byte ptr ds : [esi+2]
        sub ecx, eax
        mov dword ptr ss : [esp+0x3C], ecx
        mov dword ptr ss : [esp+0x30], eax
        fild dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x40]
        fiadd dword ptr ss : [esp+0x30]
        fadd qword ptr ds : [public_5c75e8]
        call public_5b7ec0
        mov byte ptr ds : [public_67986a], al
        mov ebx, offset public_679868
        public_55562c : nop
        mov edx, dword ptr ds : [edi]
        push ebp
        mov ecx, edi
        call dword ptr ds : [edx+0x3C]
        mov eax, dword ptr ds : [edi]
        push ecx
        mov ecx, edi
        fstp dword ptr ss : [esp]
        call dword ptr ds : [eax+0x38]
        mov edx, dword ptr ds : [edi]
        push ecx
        lea eax, ss:[esp+0x18]
        fstp dword ptr ss : [esp]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x30]
        push eax
        call public_422440
        add esp, 0xC
        pop esi
        public_555659 : nop
        push ebx
        call public_410240
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x34]
        push ecx
        push edx
        push ebp
        lea eax, ss:[esp+0x28]
        push 4
        push eax
        call public_537f40
        mov ecx, dword ptr ss : [esp+0x4C]
        push ebp
        push ecx
        push eax
        lea edx, ss:[esp+0x3C]
        push edx
        call public_4102c0
        add esp, 0x28
        pop edi
        pop ebp
        pop ebx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x5554d0)
    }
}

#undef public_555512
#undef public_55553a
#undef public_555553
#undef public_55556b
#undef public_55562c
#undef public_555659
