#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce7630);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_PROC_SYMBOL(public_6d60150);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60639);

#define public_6ce7670 _public_6ce7670
#define public_6ce7688 _public_6ce7688
#define public_6ce768a _public_6ce768a
#define public_6ce76d7 _public_6ce76d7
#define public_6ce7734 _public_6ce7734
#define public_6ce7736 _public_6ce7736
#define public_6ce778c _public_6ce778c
#define public_6ce779a _public_6ce779a
#define public_6ce77ba _public_6ce77ba
#define public_6ce77c4 _public_6ce77c4
#define public_6ce77eb _public_6ce77eb
#define public_6ce77f7 _public_6ce77f7
#define public_6ce7824 _public_6ce7824
#define public_6ce7831 _public_6ce7831
#define public_6ce7833 _public_6ce7833

PROC_DECLARE(0x6ce7630, internal_6ce7630, public_6ce7630);
extern "C" NAKED register_t __cdecl internal_6ce7630()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d60639 @0x6ce7632*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60639
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x34
        push ebx
        push ebp
        push esi
        push edi
        mov ebx, ecx
        push 0x100
        lea ecx, ss:[esp+0x1C]
        xor ebp, ebp
        mov dword ptr ss : [esp+0x18], 0x3F800000
        xor edi, edi
        call dword ptr ds : [public_6d64204]
        lea esp, ss:[esp]
        public_6ce7670 : nop
        mov eax, dword ptr ds : [ebx+0x10]
        cmp eax, ebp
        je public_6ce7688
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        je public_6ce768a
        public_6ce7688 : nop
        xor eax, eax
        public_6ce768a : nop
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ds:[eax+0xE4]
        call dword ptr ds : [public_6d64200]
        mov esi, eax
        cmp esi, ebp
        je public_6ce76d7
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x44]
        fst dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 5
        jp public_6ce7670
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x38]
        fcomp dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x41
        jne public_6ce7670
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, esi
        jmp public_6ce7670
        public_6ce76d7 : nop
        cmp edi, ebp
        je public_6ce7831
        mov cl, byte ptr ss : [esp+0x58]
        push 0x14
        mov byte ptr ss : [esp+0x2C], cl
        call public_6d60012
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], ebp
        mov byte ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x3C], ebp
        mov dword ptr ss : [esp+0x40], ebp
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x4C], ebp
        mov dword ptr ss : [esp+0x38], 0x13
        call dword ptr ds : [edx+0x20]
        mov dword ptr ss : [esp+0x3C], eax
        mov eax, dword ptr ds : [ebx+0x10]
        cmp eax, ebp
        je public_6ce7734
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 3
        cmp cl, 3
        je public_6ce7736
        public_6ce7734 : nop
        xor eax, eax
        public_6ce7736 : nop
        mov edx, dword ptr ds : [eax+0xB4]
        mov eax, dword ptr ds : [edi]
        mov ecx, edi
        mov dword ptr ss : [esp+0x40], edx
        call dword ptr ds : [eax+0x3C]
        fstp dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+0x38]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x58]
        fsub dword ptr ss : [esp+0x14]
        fdiv dword ptr ds : [esi+0x1C]
        fld st(0)
        call public_6d60150
        mov ebp, eax
        mov dword ptr ss : [esp+0x58], ebp
        fild dword ptr ss : [esp+0x58]
        fsubr st, st(1)
        fcomp dword ptr ds : [public_6d6551c]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_6ce778c
        inc ebp
        mov dword ptr ss : [esp+0x58], ebp
        public_6ce778c : nop
        mov eax, dword ptr ss : [esp+0x5C]
        cmp eax, ebp
        jge public_6ce779a
        mov ebp, eax
        mov dword ptr ss : [esp+0x58], ebp
        public_6ce779a : nop
        test ebp, ebp
        jle public_6ce77eb
        fild dword ptr ss : [esp+0x58]
        fmul dword ptr ds : [esi+0x1C]
        fadd dword ptr ss : [esp+0x14]
        fcom dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 5
        jp public_6ce77ba
        fstp dword ptr ss : [esp+0x58]
        jmp public_6ce77c4
        public_6ce77ba : nop
        mov eax, dword ptr ss : [esp+0x10]
        fstp st(0)
        mov dword ptr ss : [esp+0x58], eax
        public_6ce77c4 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        xor edx, edx
        mov dx, word ptr ds : [edi+8]
        push 0
        push ecx
        lea ecx, ss:[esp+0x30]
        push edx
        call dword ptr ds : [public_6d641ec]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x188]
        public_6ce77eb : nop
        mov eax, dword ptr ss : [esp+0x2C]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6ce7824
        public_6ce77f7 : nop
        mov eax, esi
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov esi, dword ptr ds : [esi]
        mov dword ptr ds : [edx], ecx
        mov edx, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [edx+4], ecx
        call public_6d5ffb0
        mov ecx, dword ptr ss : [esp+0x34]
        add esp, 4
        dec ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x30], ecx
        jne public_6ce77f7
        mov eax, dword ptr ss : [esp+0x2C]
        public_6ce7824 : nop
        push eax
        call public_6d5ffb0
        add esp, 4
        mov eax, ebp
        jmp public_6ce7833
        public_6ce7831 : nop
        xor eax, eax
        public_6ce7833 : nop
        mov ecx, dword ptr ss : [esp+0x44]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x40
        ret 0xC
        UNREACHABLE_TRAP(0x6ce7630)
    }
}

#undef public_6ce7670
#undef public_6ce7688
#undef public_6ce768a
#undef public_6ce76d7
#undef public_6ce7734
#undef public_6ce7736
#undef public_6ce778c
#undef public_6ce779a
#undef public_6ce77ba
#undef public_6ce77c4
#undef public_6ce77eb
#undef public_6ce77f7
#undef public_6ce7824
#undef public_6ce7831
#undef public_6ce7833
