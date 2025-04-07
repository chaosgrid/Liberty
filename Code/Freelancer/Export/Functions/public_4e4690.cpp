#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_45a490);
CLANG_FORWARD_PROC_SYMBOL(public_45a4e0);
CLANG_FORWARD_PROC_SYMBOL(public_4754a0);
CLANG_FORWARD_PROC_SYMBOL(public_4e45b0);
CLANG_FORWARD_PROC_SYMBOL(public_4e4dd0);
CLANG_FORWARD_PROC_SYMBOL(public_4e54c0);
CLANG_FORWARD_PROC_SYMBOL(public_4e5810);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_59da10);

#define public_4e46ca _public_4e46ca
#define public_4e4703 _public_4e4703
#define public_4e4705 _public_4e4705
#define public_4e470d _public_4e470d
#define public_4e4757 _public_4e4757
#define public_4e4759 _public_4e4759
#define public_4e4765 _public_4e4765
#define public_4e4767 _public_4e4767
#define public_4e47a4 _public_4e47a4
#define public_4e47f5 _public_4e47f5
#define public_4e4813 _public_4e4813
#define public_4e483b _public_4e483b
#define public_4e483d _public_4e483d
#define public_4e4880 _public_4e4880
#define public_4e488f _public_4e488f
#define public_4e4891 _public_4e4891
#define public_4e48f0 _public_4e48f0
#define public_4e4901 _public_4e4901
#define public_4e490c _public_4e490c
#define public_4e494c _public_4e494c
#define public_4e494e _public_4e494e
#define public_4e4964 _public_4e4964
#define public_4e4973 _public_4e4973
#define public_4e4986 _public_4e4986
#define public_4e49b7 _public_4e49b7

PROC_DECLARE(0x4e4690, internal_4e4690, public_4e4690);
extern "C" NAKED register_t __cdecl internal_4e4690()
{
    __asm
    {
        sub esp, 8
        mov eax, dword ptr ds : [public_5c6368]
        push esi
        mov esi, ecx
        mov cx, word ptr ds : [eax]
/*FIXUP push offset public_5d021c @0x4e469e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d021c
        mov word ptr ds : [esi+0x534], cx
        call public_59da10
        add esp, 4
        test eax, eax
        mov dword ptr ss : [esp+8], eax
        je public_4e46ca
        mov edx, dword ptr ds : [eax]
        push 0
        push 0
        push 0xEF02
        mov ecx, eax
        call dword ptr ds : [edx+0x5C]
        public_4e46ca : nop
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e4973
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e4973
/*FIXUP push offset public_5cedac @0x4e46e3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cedac
        call public_59da10
        add esp, 4
        test eax, eax
        je public_4e470d
        mov edx, dword ptr ds : [esi+0x398]
        test edx, edx
        je public_4e4703
        add edx, 0xFFFFFFF8
        jmp public_4e4705
        public_4e4703 : nop
        xor edx, edx
        public_4e4705 : nop
        push edx
        mov ecx, eax
        call public_4754a0
        public_4e470d : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_4e47a4
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e47a4
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e47a4
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e47a4
        mov eax, dword ptr ds : [esi+0x500]
        test eax, eax
        je public_4e47a4
        mov eax, dword ptr ds : [esi+0x504]
        test eax, eax
        je public_4e47a4
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e4757
        lea ecx, ds:[eax-8]
        jmp public_4e4759
        public_4e4757 : nop
        xor ecx, ecx
        public_4e4759 : nop
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_4e4765
        add eax, 0xFFFFFFF8
        jmp public_4e4767
        public_4e4765 : nop
        xor eax, eax
        public_4e4767 : nop
        push ecx
        push eax
        lea eax, ss:[esp+0xC]
        push eax
        call public_45a4e0
        mov ecx, dword ptr ds : [esi+0x500]
        mov edx, dword ptr ds : [ecx]
        add esp, 0xC
        push 1
        lea eax, ss:[esp+8]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x504]
        mov edx, dword ptr ds : [ecx]
        push 1
        lea eax, ss:[esp+8]
        push eax
        push 0x33
        call dword ptr ds : [edx+0xA8]
        public_4e47a4 : nop
        mov ecx, dword ptr ds : [esi+0x500]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebp
        push edi
        push 0x14
        push 1
        push 0x50
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x504]
        mov eax, dword ptr ds : [ecx]
        push 0x14
        push 1
        push 0x50
        call dword ptr ds : [eax+0xA8]
        lea ecx, ds:[esi+0x560]
        push ecx
        mov ecx, esi
        call public_4e4dd0
        mov dword ptr ds : [esi+0x578], eax
        mov ebx, dword ptr ds : [esi+0x584]
        mov ebp, dword ptr ds : [esi+0x580]
        mov edi, ebx
        cmp edi, ebx
        je public_4e4813
        public_4e47f5 : nop
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push 0
        push edi
        mov ecx, ebp
        call dword ptr ds : [public_5c6f9c]
        add edi, 0x10
        add ebp, 0x10
        cmp edi, ebx
        jne public_4e47f5
        public_4e4813 : nop
        mov edx, dword ptr ds : [esi+0x584]
        lea ecx, ds:[esi+0x57C]
        push edx
        push ebp
        call public_4e5810
        mov dword ptr ds : [esi+0x584], ebp
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e483b
        lea ecx, ds:[eax-8]
        jmp public_4e483d
        public_4e483b : nop
        xor ecx, ecx
        public_4e483d : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx]
        call dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [ecx]
        push eax
        push edx
        call dword ptr ds : [edi+0x64]
        mov edi, eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov edx, dword ptr ds : [public_5c6d5c]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
/*FIXUP push offset _public_4e45b0 @0x4e4874*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4e45b0
        push eax
        call dword ptr ds : [ecx+0x14]
        or ebx, 0xFFFFFFFF
        public_4e4880 : nop
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e488f
        lea ecx, ds:[eax-8]
        jmp public_4e4891
        public_4e488f : nop
        xor ecx, ecx
        public_4e4891 : nop
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [eax]
        push ebx
        push 0
        call dword ptr ds : [edx+0x1C]
        push eax
        mov eax, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [eax]
        push ecx
        call dword ptr ds : [edi+0xD8]
        mov ebx, eax
        cmp ebx, 0xFFFFFFFF
        je public_4e48f0
        mov edx, dword ptr ds : [public_5c6d90]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push ebx
        push eax
        call dword ptr ds : [ecx+0x64]
        mov edx, dword ptr ds : [public_5c6d90]
        mov edi, eax
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push edi
        push eax
        call dword ptr ds : [ecx+0x3C]
        mov edx, dword ptr ds : [public_5c6d5c]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push edi
/*FIXUP push offset _public_4e45b0 @0x4e48e5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_4e45b0
        push eax
        call dword ptr ds : [ecx+0x14]
        jmp public_4e4880
        public_4e48f0 : nop
        mov ecx, dword ptr ds : [esi+0x580]
        test ecx, ecx
        pop edi
        pop ebp
        pop ebx
        jne public_4e4901
        xor eax, eax
        jmp public_4e490c
        public_4e4901 : nop
        mov eax, dword ptr ds : [esi+0x584]
        sub eax, ecx
        sar eax, 4
        public_4e490c : nop
        mov dword ptr ds : [esi+0x58C], eax
        mov dword ptr ds : [esi+0x590], 0
        mov byte ptr ds : [esi+0x660], 0
        call public_54baf0
        mov ecx, dword ptr ds : [esi+0x398]
        test ecx, ecx
        je public_4e4964
        add ecx, 0xFFFFFFF8
        test ecx, ecx
        je public_4e4964
        test eax, eax
        je public_4e4964
        mov ecx, dword ptr ds : [esi+0x398]
        test ecx, ecx
        je public_4e494c
        add ecx, 0xFFFFFFF8
        jmp public_4e494e
        public_4e494c : nop
        xor ecx, ecx
        public_4e494e : nop
        push ecx
        push eax
        call public_45a490
        add esp, 8
        cmp eax, 0xFFFFFFFF
        jne public_4e4964
        mov byte ptr ds : [esi+0x660], 1
        public_4e4964 : nop
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_4e4973
        mov ecx, esi
        call public_4e54c0
        public_4e4973 : nop
        mov al, byte ptr ds : [public_674b00]
        test al, al
        pop esi
        jne public_4e4986
        mov eax, dword ptr ds : [public_6724b4]
        test eax, eax
        je public_4e49b7
        public_4e4986 : nop
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x158]
        mov ecx, dword ptr ds : [public_67ecd0]
        mov eax, dword ptr ds : [public_673344]
        mov edx, dword ptr ds : [ecx]
        push 0
        push eax
        call dword ptr ds : [edx+0x140]
        mov byte ptr ds : [public_674b00], 0
        public_4e49b7 : nop
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x4e4690)
    }
}

#undef public_4e46ca
#undef public_4e4703
#undef public_4e4705
#undef public_4e470d
#undef public_4e4757
#undef public_4e4759
#undef public_4e4765
#undef public_4e4767
#undef public_4e47a4
#undef public_4e47f5
#undef public_4e4813
#undef public_4e483b
#undef public_4e483d
#undef public_4e4880
#undef public_4e488f
#undef public_4e4891
#undef public_4e48f0
#undef public_4e4901
#undef public_4e490c
#undef public_4e494c
#undef public_4e494e
#undef public_4e4964
#undef public_4e4973
#undef public_4e4986
#undef public_4e49b7
