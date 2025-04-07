#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6274b40);
CLANG_FORWARD_PROC_SYMBOL(public_62752b0);
CLANG_FORWARD_PROC_SYMBOL(public_6275490);
CLANG_FORWARD_PROC_SYMBOL(public_627a710);
CLANG_FORWARD_PROC_SYMBOL(public_630d3f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310040);
CLANG_FORWARD_PROC_SYMBOL(public_6310170);
CLANG_FORWARD_PROC_SYMBOL(public_6310410);
CLANG_FORWARD_PROC_SYMBOL(public_6310560);
CLANG_FORWARD_PROC_SYMBOL(public_63108f0);
CLANG_FORWARD_PROC_SYMBOL(public_6310a30);
CLANG_FORWARD_PROC_SYMBOL(public_6310b70);
CLANG_FORWARD_PROC_SYMBOL(public_6334400);

#define public_62754b0 _public_62754b0
#define public_62754d4 _public_62754d4
#define public_627550e _public_627550e
#define public_6275557 _public_6275557
#define public_627559f _public_627559f
#define public_62755da _public_62755da
#define public_6275615 _public_6275615
#define public_627564f _public_627564f
#define public_62756b8 _public_62756b8
#define public_62756f3 _public_62756f3
#define public_627572d _public_627572d
#define public_6275768 _public_6275768
#define public_6275790 _public_6275790
#define public_62757b1 _public_62757b1
#define public_62757e9 _public_62757e9
#define public_6275820 _public_6275820
#define public_6275838 _public_6275838
#define public_627583f _public_627583f
#define public_6275850 _public_6275850

PROC_DECLARE(0x6275490, internal_6275490, public_6275490);
extern "C" NAKED register_t __cdecl internal_6275490()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push edi
        mov edi, ecx
        mov ecx, esi
        call public_6310170
        test al, al
        je public_6275850
        push ebx
        push ebp
        xor ebx, ebx
        nop 
        lea esp, ss:[esp]
/*FIXUP public_62754b0 : nop
        push offset public_639a7f4 @0x62754b0*/
  FIXUP public_62754b0 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a7f4
        mov ecx, esi
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62754d4
        call public_6310b70
        push eax
        mov ecx, edi
        call public_6274b40
        jmp public_627583f
/*FIXUP public_62754d4 : nop
        push offset public_639a7ec @0x62754d4*/
  FIXUP public_62754d4 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a7ec
        call public_6310410
        test al, al
        mov ecx, esi
        je public_627550e
        mov ebp, 0x100002
        call public_6310040
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x3D7
/*FIXUP push offset public_639a188 @0x62754f9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a790 @0x62754fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a790
        push ebp
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_627583f
/*FIXUP public_627550e : nop
        push offset public_639a780 @0x627550e*/
  FIXUP public_627550e : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a780
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6275557
        call public_6310b70
        mov ecx, dword ptr ds : [edi+0xB4]
        push eax
        lea edx, ds:[edi+ecx*4+0x14]
        push edx
        call public_6334400
        mov eax, dword ptr ds : [edi+0xB4]
        mov byte ptr ds : [eax+edi+0x94], 1
        mov eax, dword ptr ds : [edi+0xB4]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+0xB4], eax
        jmp public_627583f
/*FIXUP public_6275557 : nop
        push offset public_639a76c @0x6275557*/
  FIXUP public_6275557 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a76c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_627559f
        call public_6310b70
        mov ecx, dword ptr ds : [edi+0xB4]
        push eax
        lea edx, ds:[edi+ecx*4+0x14]
        push edx
        call public_6334400
        mov eax, dword ptr ds : [edi+0xB4]
        mov byte ptr ds : [eax+edi+0x94], bl
        mov eax, dword ptr ds : [edi+0xB4]
        add esp, 8
        inc eax
        mov dword ptr ds : [edi+0xB4], eax
        jmp public_627583f
/*FIXUP public_627559f : nop
        push offset public_639a758 @0x627559f*/
  FIXUP public_627559f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a758
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62755da
        mov ebp, 0x100002
        call public_6310040
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x3F5
/*FIXUP push offset public_639a188 @0x62755c5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a710 @0x62755ca*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a710
        push ebp
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_627583f
/*FIXUP public_62755da : nop
        push offset public_639a6f0 @0x62755da*/
  FIXUP public_62755da : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a6f0
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6275615
        mov ebp, 0x100002
        call public_6310040
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x3F9
/*FIXUP push offset public_639a188 @0x6275600*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a6a0 @0x6275605*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a6a0
        push ebp
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_627583f
/*FIXUP public_6275615 : nop
        push offset public_639a688 @0x6275615*/
  FIXUP public_6275615 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a688
        call public_6310410
        test al, al
        mov ecx, esi
        je public_627564f
        mov ebp, 0x100002
        call public_6310040
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x3FD
/*FIXUP push offset public_639a188 @0x627563a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a648 @0x627563f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a648
        push ebp
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_627583f
/*FIXUP public_627564f : nop
        push offset public_639a634 @0x627564f*/
  FIXUP public_627564f : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a634
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62756b8
        call public_6310b70
        push eax
        lea ecx, ds:[edi+0xB8]
        push ecx
        call public_6334400
        add esp, 8
        push 1
        mov ecx, esi
        mov dword ptr ds : [edi+0xBC], ebx
        call public_6310560
        test al, al
        jne public_627583f
        push 1
        mov ecx, esi
        call public_6310a30
        mov ecx, esi
        mov ebp, eax
        call public_6310040
        push eax
        push ebp
        call public_627a710
        push ebp
        call public_630d3f0
        add esp, 0xC
        mov dword ptr ds : [edi+0xBC], eax
        jmp public_627583f
/*FIXUP public_62756b8 : nop
        push offset public_639a618 @0x62756b8*/
  FIXUP public_62756b8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a618
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62756f3
        mov ebp, 0x100002
        call public_6310040
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x410
/*FIXUP push offset public_639a188 @0x62756de*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a5c0 @0x62756e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a5c0
        push ebp
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_627583f
/*FIXUP public_62756f3 : nop
        push offset public_639a5a8 @0x62756f3*/
  FIXUP public_62756f3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a5a8
        call public_6310410
        test al, al
        mov ecx, esi
        je public_627572d
        mov ebp, 0x100002
        call public_6310040
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x414
/*FIXUP push offset public_639a188 @0x6275718*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a550 @0x627571d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a550
        push ebp
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_627583f
/*FIXUP public_627572d : nop
        push offset public_639a534 @0x627572d*/
  FIXUP public_627572d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a534
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6275768
        mov ebp, 0x100002
        call public_6310040
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x418
/*FIXUP push offset public_639a188 @0x6275753*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a4d8 @0x6275758*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a4d8
        push ebp
        call dword ptr ds : [ecx]
        add esp, 0x14
        jmp public_627583f
/*FIXUP public_6275768 : nop
        push offset public_639a4c8 @0x6275768*/
  FIXUP public_6275768 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a4c8
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6275790
        push ebx
        mov byte ptr ds : [edi+0xC0], 1
        call public_63108f0
        fstp dword ptr ds : [edi+0xC4]
        jmp public_627583f
/*FIXUP public_6275790 : nop
        push offset public_639a4ac @0x6275790*/
  FIXUP public_6275790 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a4ac
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62757b1
        push ebx
        call public_63108f0
        fstp dword ptr ds : [edi+0xC8]
        jmp public_627583f
/*FIXUP public_62757b1 : nop
        push offset public_639a49c @0x62757b1*/
  FIXUP public_62757b1 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a49c
        call public_6310410
        test al, al
        mov ecx, esi
        je public_62757e9
        mov ebp, 0x100001
        call public_6310040
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x427
/*FIXUP push offset public_639a188 @0x62757d7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a464 @0x62757dc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a464
        push ebp
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_627583f
/*FIXUP public_62757e9 : nop
        push offset public_639a458 @0x62757e9*/
  FIXUP public_62757e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a458
        call public_6310410
        test al, al
        mov ecx, esi
        je public_6275820
        mov ebp, 0x100002
        call public_6310040
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x42B
/*FIXUP push offset public_639a188 @0x627580e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a188
/*FIXUP push offset public_639a424 @0x6275813*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a424
        push ebp
        call dword ptr ds : [eax]
        add esp, 0x14
        jmp public_627583f
/*FIXUP public_6275820 : nop
        push offset public_639a41c @0x6275820*/
  FIXUP public_6275820 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_639a41c
        call public_6310410
        test al, al
        je public_6275838
        push esi
        mov ecx, edi
        call public_62752b0
        jmp public_627583f
        public_6275838 : nop
        mov ecx, esi
        call public_6310040
        public_627583f : nop
        mov ecx, esi
        call public_6310170
        test al, al
        jne public_62754b0
        pop ebp
        pop ebx
        public_6275850 : nop
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6275490)
    }
}

#undef public_62754b0
#undef public_62754d4
#undef public_627550e
#undef public_6275557
#undef public_627559f
#undef public_62755da
#undef public_6275615
#undef public_627564f
#undef public_62756b8
#undef public_62756f3
#undef public_627572d
#undef public_6275768
#undef public_6275790
#undef public_62757b1
#undef public_62757e9
#undef public_6275820
#undef public_6275838
#undef public_627583f
#undef public_6275850
