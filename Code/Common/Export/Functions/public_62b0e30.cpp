#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284290);
CLANG_FORWARD_PROC_SYMBOL(public_62855c0);
CLANG_FORWARD_PROC_SYMBOL(public_6285620);
CLANG_FORWARD_PROC_SYMBOL(public_62858c0);
CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_62961e0);
CLANG_FORWARD_PROC_SYMBOL(public_62963e0);
CLANG_FORWARD_PROC_SYMBOL(public_6296620);
CLANG_FORWARD_PROC_SYMBOL(public_629b720);
CLANG_FORWARD_PROC_SYMBOL(public_629ff50);
CLANG_FORWARD_PROC_SYMBOL(public_62aa520);
CLANG_FORWARD_PROC_SYMBOL(public_62b24d0);
CLANG_FORWARD_PROC_SYMBOL(public_62b5d00);
CLANG_FORWARD_PROC_SYMBOL(public_62b7990);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);

#define public_62b0e63 _public_62b0e63
#define public_62b0ed4 _public_62b0ed4
#define public_62b0ed9 _public_62b0ed9
#define public_62b0ee1 _public_62b0ee1
#define public_62b0ef8 _public_62b0ef8
#define public_62b0f7d _public_62b0f7d
#define public_62b0fcb _public_62b0fcb
#define public_62b0ffb _public_62b0ffb
#define public_62b1086 _public_62b1086
#define public_62b10a9 _public_62b10a9
#define public_62b10ab _public_62b10ab
#define public_62b10d1 _public_62b10d1
#define public_62b10d7 _public_62b10d7
#define public_62b1101 _public_62b1101
#define public_62b1103 _public_62b1103
#define public_62b1131 _public_62b1131
#define public_62b1133 _public_62b1133
#define public_62b115a _public_62b115a
#define public_62b1168 _public_62b1168
#define public_62b1176 _public_62b1176

PROC_DECLARE(0x62b0e30, internal_62b0e30, public_62b0e30);
extern "C" NAKED register_t __cdecl internal_62b0e30()
{
    __asm
    {
        mov eax, 0x2034
        call public_6391dc0
        mov eax, dword ptr ds : [public_639e534]
        push ebx
        mov ebx, dword ptr ss : [esp+0x203C]
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x204C]
        test edi, eax
        mov esi, ecx
        jne public_62b0e63
        push ebx
        lea ecx, ds:[esi+0x2B0]
        call public_629ff50
        public_62b0e63 : nop
        push edi
        push ebx
        mov ecx, esi
        call public_62b5d00
        push edi
        push ebx
        mov ecx, esi
        call public_62aa520
        test dword ptr ds : [public_639e528], edi
        jne public_62b0f7d
        push esi
        call public_6285620
        mov eax, dword ptr ds : [esi+0x88]
        mov ecx, dword ptr ds : [eax+0x104]
        add esp, 4
        mov dword ptr ss : [esp+0x10], ecx
        push 0x20000
        lea ecx, ds:[esi+0xE4]
        call public_629b720
        push eax
        call public_6296620
        mov edi, eax
        add esp, 4
        test edi, edi
        je public_62b0ee1
        mov edx, dword ptr ds : [edi]
        mov ecx, edi
        call dword ptr ds : [edx+4]
        test al, al
        je public_62b0ee1
        mov al, byte ptr ds : [edi+0x54]
        test al, al
        mov ecx, edi
        je public_62b0ed4
        call public_62963e0
        jmp public_62b0ed9
        public_62b0ed4 : nop
        call public_62961e0
        public_62b0ed9 : nop
        fadd dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        public_62b0ee1 : nop
        mov ecx, dword ptr ds : [esi+0xA4]
        test ecx, ecx
        je public_62b0ef8
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x58]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        public_62b0ef8 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x6C]
        fdivr dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x88]
        add eax, 0x108
        sub esp, 0xC
        lea ecx, ss:[esp+0x3C]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [esi+0x2C0]
        fld st(0)
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+8]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        fstp dword ptr ss : [esp]
        call public_628b030
        lea eax, ss:[esp+0x24]
        push esi
        push eax
        call public_6284290
        fld dword ptr ss : [esp+0x38]
        fdiv dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push edx
        push esi
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x48]
        fdiv dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x4C]
        fdiv dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x30]
        call public_62855c0
        add esp, 0x14
        public_62b0f7d : nop
        mov eax, dword ptr ds : [esi+0x2AC]
        cmp eax, 3
        jne public_62b0fcb
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+0x22C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+0x22C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 1
        jne public_62b0ffb
        mov dword ptr ds : [esi+0x2AC], 2
        jmp public_62b0ffb
        public_62b0fcb : nop
        cmp eax, 1
        jne public_62b0ffb
        mov eax, dword ptr ds : [public_6399038]
        mov edx, dword ptr ds : [esi+0x22C]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x40]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62b0ffb
        mov dword ptr ds : [esi+0x2AC], 0
        public_62b0ffb : nop
        mov eax, dword ptr ds : [esi+0xAC]
        xor ebp, ebp
        cmp eax, ebp
        mov dword ptr ds : [esi+0x218], ebp
        je public_62b10d7
        push esi
        call public_62858c0
        add esp, 4
        test al, al
        je public_62b10d7
        mov ecx, dword ptr ds : [esi+0xAC]
        mov eax, dword ptr ds : [ecx]
        push 0xFDFF
        call dword ptr ds : [eax+0xC]
        cmp eax, ebp
        je public_62b10d7
        lea ecx, ds:[esi+0x2C]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        lea ecx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x48], ebp
        mov dword ptr ss : [esp+0x44], 0x800
        mov dword ptr ss : [esp+0x28], 0x465AC000
        call dword ptr ds : [edx+0x1C]
        test eax, eax
        jbe public_62b10d7
        mov eax, dword ptr ss : [esp+0x40]
        cmp ebp, eax
        jae public_62b10d7
        lea ebx, ss:[esp+0x44]
        public_62b1086 : nop
        mov ecx, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x150]
        test eax, eax
        je public_62b10a9
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_62b10a9
        mov edi, eax
        jmp public_62b10ab
        public_62b10a9 : nop
        xor edi, edi
        public_62b10ab : nop
        lea eax, ds:[esi+0x2C]
        push eax
        mov ecx, edi
        call public_62b7990
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_62b10d1
        mov eax, dword ptr ss : [esp+0x40]
        inc ebp
        add ebx, 4
        cmp ebp, eax
        jb public_62b1086
        jmp public_62b10d7
        public_62b10d1 : nop
        mov dword ptr ds : [esi+0x218], edi
        public_62b10d7 : nop
        mov eax, dword ptr ds : [esi+0x220]
        test eax, eax
        lea edi, ds:[esi+0x220]
        je public_62b1176
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b1176
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62b1101
        lea ecx, ds:[eax-8]
        jmp public_62b1103
        public_62b1101 : nop
        xor ecx, ecx
        public_62b1103 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x34]
        test al, al
        jne public_62b1176
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62b1168
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b1168
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62b115a
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62b115a
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_62b1131
        lea ecx, ds:[eax-8]
        jmp public_62b1133
        public_62b1131 : nop
        xor ecx, ecx
        public_62b1133 : nop
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        test eax, eax
        je public_62b115a
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x503
        cmp ecx, 0x503
        jne public_62b115a
        push 0
        push esi
        mov ecx, eax
        call public_62b24d0
        public_62b115a : nop
        cmp dword ptr ds : [edi], 0
        je public_62b1168
        push 0
        mov ecx, edi
        call public_6341610
        public_62b1168 : nop
        mov dx, word ptr ds : [public_63a4aa4]
        mov word ptr ds : [esi+0x228], dx
        public_62b1176 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x2034
        ret 8
        UNREACHABLE_TRAP(0x62b0e30)
    }
}

#undef public_62b0e63
#undef public_62b0ed4
#undef public_62b0ed9
#undef public_62b0ee1
#undef public_62b0ef8
#undef public_62b0f7d
#undef public_62b0fcb
#undef public_62b0ffb
#undef public_62b1086
#undef public_62b10a9
#undef public_62b10ab
#undef public_62b10d1
#undef public_62b10d7
#undef public_62b1101
#undef public_62b1103
#undef public_62b1131
#undef public_62b1133
#undef public_62b115a
#undef public_62b1168
#undef public_62b1176
