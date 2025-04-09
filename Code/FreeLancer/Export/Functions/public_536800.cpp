#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_422b80);
CLANG_FORWARD_PROC_SYMBOL(public_530620);
CLANG_FORWARD_PROC_SYMBOL(public_536800);
CLANG_FORWARD_PROC_SYMBOL(public_536b50);
CLANG_FORWARD_PROC_SYMBOL(public_536c20);
CLANG_FORWARD_PROC_SYMBOL(public_554e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c09bb);

#define public_536868 _public_536868
#define public_53694f _public_53694f
#define public_536951 _public_536951
#define public_536960 _public_536960
#define public_536991 _public_536991
#define public_536a40 _public_536a40
#define public_536aee _public_536aee
#define public_536b0c _public_536b0c
#define public_536b14 _public_536b14
#define public_536b28 _public_536b28

PROC_DECLARE(0x536800, internal_536800, public_536800);
extern "C" NAKED register_t __cdecl internal_536800()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c09bb @0x536802*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c09bb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC0
        push ebx
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+0xC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x1C]
        mov cl, byte ptr ss : [esp+0x1B]
        xor ebx, ebx
        mov byte ptr ss : [esp+0x1C], cl
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov ecx, dword ptr ds : [edi+8]
        lea edx, ss:[esp+0x1C]
        push edx
        mov edx, dword ptr ds : [ecx+0x2C]
        push edx
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0xE0], ebx
        call public_536c20
        mov esi, dword ptr ss : [esp+0x20]
        cmp esi, dword ptr ss : [esp+0x24]
        je public_536b28
        push ebp
        public_536868 : nop
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0xC4]
        push edx
        call dword ptr ds : [eax+0x64]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_536b0c
        mov eax, dword ptr ds : [edi+8]
        add eax, 0x50
        push eax
        call public_536b50
        mov ebp, eax
        add esp, 4
        cmp ebp, ebx
        je public_536b14
        mov ecx, dword ptr ds : [esi]
        cmp dword ptr ds : [ecx+0x54], ebx
        jne public_536991
        mov edx, dword ptr ds : [public_5c692c]
        mov dword ptr ss : [esp+0x30], 0x3F800000
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_5c6928]
        mov dword ptr ss : [esp+0x34], eax
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x38], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x3C], eax
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x40], edx
        lea edx, ss:[esp+0xAC]
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], 2
        mov byte ptr ss : [esp+0x4C], bl
        mov byte ptr ss : [esp+0x4D], 1
        mov byte ptr ss : [esp+0x56], bl
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x60], 0
        mov byte ptr ss : [esp+0x4E], bl
        mov eax, dword ptr ds : [ecx]
        push edx
        call dword ptr ds : [eax+0x64]
        fmul dword ptr ds : [public_5de598]
        fstp dword ptr ss : [esp+0x30]
        call public_554e90
        mov dword ptr ss : [esp+0x44], eax
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, ebx
        je public_53694f
        add eax, 0xC
        cmp eax, ebx
        je public_53694f
        mov eax, dword ptr ds : [eax+4]
        cmp eax, ebx
        je public_53694f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 1
        cmp cl, 1
        je public_536951
        public_53694f : nop
        xor eax, eax
        public_536951 : nop
        push eax
        call dword ptr ds : [public_5c69d0]
        add esp, 4
        lea edx, ss:[esp+0x4E]
        nop 
        public_536960 : nop
        mov cl, byte ptr ds : [eax]
        inc eax
        mov byte ptr ds : [edx], cl
        inc edx
        cmp cl, bl
        jne public_536960
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x7C]
        push eax
        call dword ptr ds : [edx+0x64]
        fmul qword ptr ds : [public_5de590]
        mov edx, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x30]
        push ecx
        push ecx
        fstp dword ptr ss : [esp]
        push edx
        call dword ptr ds : [public_5c69cc]
        add esp, 0xC
        public_536991 : nop
        mov eax, dword ptr ds : [esi]
        push ebp
        push eax
        call public_530620
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [ecx]
        add esp, 8
        lea eax, ss:[esp+0x64]
        push eax
        call dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [ecx]
        lea eax, ss:[esp+0x70]
        push eax
        call dword ptr ds : [edx+4]
        mov ecx, dword ptr ds : [esi]
        push ecx
        lea edx, ss:[esp+0xBC]
        push edx
        call dword ptr ds : [public_5c69c8]
        fld dword ptr ds : [eax+8]
        fsub dword ptr ss : [esp+0x74]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [eax+4]
        fsub dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp]
        push ecx
        fld dword ptr ds : [eax]
        lea ecx, ss:[esp+0x1C]
        fsub dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp]
        call public_422b80
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x18]
        faddp 
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fsqrt 
        fcomp qword ptr ds : [public_5dbc98]
        fnstsw ax
        test ah, 5
        jp public_536a40
        lea eax, ss:[esp+0xA0]
        push eax
        call dword ptr ds : [public_5c681c]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x18], edx
        mov eax, dword ptr ds : [eax+8]
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        public_536a40 : nop
        mov ecx, dword ptr ds : [edi+8]
        fld dword ptr ds : [ecx+0x30]
        mov ebp, dword ptr ds : [public_5c69c4]
        fld dword ptr ss : [esp+0x14]
        push ecx
        fmul dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x8C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        faddp 
        fsqrt 
        fdivr st, st(1)
        fld dword ptr ss : [esp+0x14]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fmul qword ptr ds : [public_5cbf58]
        fstp dword ptr ss : [esp]
        push edx
        call ebp
        fld dword ptr ss : [esp+0x18]
        fadd dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x78]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [public_5c6800]
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax+0x54]
        add esp, 0x10
        cmp ecx, ebx
        je public_536aee
        push 0x3F800000
        lea edx, ss:[esp+0x14]
        push edx
        push eax
        call dword ptr ds : [public_5c68a0]
        add esp, 0xC
        public_536aee : nop
        lea eax, ss:[esp+0x94]
        push 0x40000000
        push eax
        call ebp
        mov ecx, dword ptr ds : [esi]
        push eax
        push ecx
        call dword ptr ds : [public_5c67f8]
        add esp, 0x10
        jmp public_536b14
        public_536b0c : nop
        mov ecx, dword ptr ds : [esi]
        call dword ptr ds : [public_5c69c0]
        public_536b14 : nop
        mov eax, dword ptr ss : [esp+0x28]
        add esi, 4
        cmp esi, eax
        jne public_536868
        mov esi, dword ptr ss : [esp+0x24]
        pop ebp
        public_536b28 : nop
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0xD0]
        add esp, 4
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xCC
        ret 
        UNREACHABLE_TRAP(0x536800)
    }
}

#undef public_536868
#undef public_53694f
#undef public_536951
#undef public_536960
#undef public_536991
#undef public_536a40
#undef public_536aee
#undef public_536b0c
#undef public_536b14
#undef public_536b28
