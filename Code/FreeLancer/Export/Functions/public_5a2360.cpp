#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4176c0);
CLANG_FORWARD_PROC_SYMBOL(public_417730);
CLANG_FORWARD_PROC_SYMBOL(public_417780);
CLANG_FORWARD_PROC_SYMBOL(public_421670);
CLANG_FORWARD_PROC_SYMBOL(public_421690);
CLANG_FORWARD_PROC_SYMBOL(public_421aa0);
CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_4225e0);
CLANG_FORWARD_PROC_SYMBOL(public_422a70);
CLANG_FORWARD_PROC_SYMBOL(public_422ab0);
CLANG_FORWARD_PROC_SYMBOL(public_561da0);
CLANG_FORWARD_PROC_SYMBOL(public_59e5c0);
CLANG_FORWARD_PROC_SYMBOL(public_5a2360);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_5a2406 _public_5a2406
#define public_5a2415 _public_5a2415
#define public_5a2439 _public_5a2439
#define public_5a2456 _public_5a2456
#define public_5a245c _public_5a245c
#define public_5a2460 _public_5a2460
#define public_5a24aa _public_5a24aa
#define public_5a24c1 _public_5a24c1
#define public_5a24f8 _public_5a24f8
#define public_5a25ed _public_5a25ed
#define public_5a2630 _public_5a2630
#define public_5a2672 _public_5a2672
#define public_5a2677 _public_5a2677

PROC_DECLARE(0x5a2360, internal_5a2360, public_5a2360);
extern "C" NAKED register_t __cdecl internal_5a2360()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        push ebp
        push esi
        push edi
        push 0xB71
        mov esi, ecx
        call public_421ed0
        push 0xDE1
        call public_421ed0
        lea eax, ds:[esi+0x60]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x4C], ecx
        lea ecx, ss:[esp+0x4C]
        push ecx
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x58], eax
        call public_417730
        mov ecx, dword ptr ds : [esi+0x898]
        mov ebp, eax
        mov eax, dword ptr ds : [esi+0x89C]
        mov dword ptr ss : [esp+0x3C], edx
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ss : [esp+0x58]
        push edx
        push eax
        push ecx
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x3C], ebp
        call public_4176c0
        mov dword ptr ss : [esp+0x34], eax
        fld dword ptr ss : [esp+0x34]
        add esp, 0x10
        fstp qword ptr ss : [esp]
        mov dword ptr ss : [esp+0x28], edx
        call dword ptr ds : [public_5c71c4]
        add esp, 8
        call public_5b7ec0
        mov edi, dword ptr ds : [esi+0x88C]
        mov ebx, dword ptr ds : [esi+0x8A8]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+0x8A4]
        add ebx, edi
        cmp ebx, eax
        jle public_5a2406
        mov ebx, eax
        public_5a2406 : nop
        cmp edi, ebx
        jge public_5a24f8
        lea ebp, ds:[esi+edi*4+0x48C]
        public_5a2415 : nop
        cmp dword ptr ds : [esi+0x8AC], edi
        mov byte ptr ss : [esp+0x13], 0
        mov byte ptr ss : [esp+0x12], 0
        mov byte ptr ss : [esp+0x11], 0
        mov byte ptr ss : [esp+0x10], 0
        jne public_5a2439
        mov edx, dword ptr ds : [public_679ba4]
        jmp public_5a245c
        public_5a2439 : nop
        cmp dword ptr ds : [esi+0x80], edi
        jne public_5a2456
        lea eax, ss:[esp+0x1C]
        push eax
        call public_561da0
        mov ecx, dword ptr ds : [eax]
        add esp, 4
        mov dword ptr ss : [esp+0x10], ecx
        jmp public_5a2460
        public_5a2456 : nop
        mov edx, dword ptr ds : [public_679bb4]
        public_5a245c : nop
        mov dword ptr ss : [esp+0x10], edx
        public_5a2460 : nop
        lea eax, ss:[esp+0x10]
        push eax
        call public_417780
        mov ecx, dword ptr ss : [ebp]
        add esp, 4
        test ecx, ecx
        je public_5a24c1
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        test eax, eax
        je public_5a24c1
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        push 0xFFFFFFFF
        push eax
        lea eax, ss:[esp+0x44]
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], 0
        jle public_5a24aa
        sub eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        public_5a24aa : nop
        mov ecx, dword ptr ss : [ebp]
        fild dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push ecx
        fstp dword ptr ss : [esp]
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        call dword ptr ds : [edx+0x24]
        public_5a24c1 : nop
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], 0
        fild qword ptr ss : [esp+0x34]
        inc edi
        fld dword ptr ss : [esp+0x28]
        add ebp, 4
        cmp edi, ebx
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        jl public_5a2415
        mov ebp, dword ptr ss : [esp+0x2C]
        public_5a24f8 : nop
        mov eax, dword ptr ss : [esp+0x30]
        push 0x1701
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], eax
        call public_401e90
        call public_422a70
        call public_4225e0
        mov ecx, dword ptr ss : [esp+0x50]
        mov edx, dword ptr ds : [esi+0x89C]
        mov eax, dword ptr ds : [esi+0x898]
        push ecx
        push edx
        push eax
        call public_4176c0
        mov ecx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x3C], eax
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x34]
        mov al, byte ptr ds : [esi+0x8A0]
        mov dword ptr ss : [esp+0x40], edx
        mov edx, dword ptr ss : [esp+0x38]
        fstp dword ptr ss : [esp+0x2C]
        mov ebp, dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x40]
        add esp, 0x10
        test al, al
        fadd dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ss : [esp+0x14]
        mov edi, ecx
        je public_5a25ed
        push 2
        call public_421670
/*FIXUP push offset public_67dd54 @0x5a257a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dd54
        call public_421aa0
        mov ebx, dword ptr ss : [esp+0x20]
        push 0
        push ebx
        push edi
        call public_421cc0
        push 0
        push ebx
        push ebp
        call public_421cc0
        push 0
        push ebx
        push edi
        call public_421cc0
        mov eax, dword ptr ss : [esp+0x40]
        push 0
        push eax
        push edi
        call public_421cc0
/*FIXUP push offset public_67dd50 @0x5a25b0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dd50
        call public_421aa0
        push 0
        push ebx
        push ebp
        call public_421cc0
        mov ebx, dword ptr ss : [esp+0x5C]
        add esp, 0x48
        push 0
        push ebx
        push ebp
        call public_421cc0
        push 0
        push ebx
        push edi
        call public_421cc0
        push 0
        push ebx
        push ebp
        call public_421cc0
        add esp, 0x24
        call public_421690
        public_5a25ed : nop
        mov al, byte ptr ds : [esi+0x8A1]
        test al, al
        je public_5a2677
        mov ecx, dword ptr ds : [esi+0x84]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x18]
/*FIXUP push offset public_67dd50 @0x5a2606*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dd50
        mov dword ptr ss : [esp+0x20], eax
        call public_421aa0
        push 2
        call public_421670
        mov eax, dword ptr ds : [esi+0x8A8]
        add esp, 8
        xor ebx, ebx
        test eax, eax
        jl public_5a2672
        mov dword ptr ss : [esp+0x10], ebx
        mov edi, edi
        public_5a2630 : nop
        fild dword ptr ss : [esp+0x10]
        push 0
        fadd dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push edi
        call public_421cc0
        mov ecx, dword ptr ss : [esp+0x20]
        push 0
        push ecx
        push ebp
        call public_421cc0
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [esi+0x8A8]
        add esp, 0x18
        inc ebx
        add ecx, edx
        cmp ebx, eax
        mov dword ptr ss : [esp+0x10], ecx
        jle public_5a2630
        public_5a2672 : nop
        call public_421690
        public_5a2677 : nop
        push 0x1701
        call public_401e90
        add esp, 4
        call public_422ab0
        mov ecx, esi
        call public_59e5c0
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x5a2360)
    }
}

#undef public_5a2406
#undef public_5a2415
#undef public_5a2439
#undef public_5a2456
#undef public_5a245c
#undef public_5a2460
#undef public_5a24aa
#undef public_5a24c1
#undef public_5a24f8
#undef public_5a25ed
#undef public_5a2630
#undef public_5a2672
#undef public_5a2677
