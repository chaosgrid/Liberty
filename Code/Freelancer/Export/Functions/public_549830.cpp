#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_549830);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5c129f);

#define public_5498a2 _public_5498a2
#define public_5498be _public_5498be
#define public_5498d2 _public_5498d2
#define public_5498e9 _public_5498e9
#define public_549900 _public_549900
#define public_549917 _public_549917
#define public_549930 _public_549930
#define public_549938 _public_549938
#define public_549950 _public_549950
#define public_5499a2 _public_5499a2
#define public_5499b8 _public_5499b8
#define public_5499e3 _public_5499e3
#define public_5499f5 _public_5499f5
#define public_549a65 _public_549a65
#define public_549a76 _public_549a76
#define public_549a8b _public_549a8b
#define public_549ab0 _public_549ab0
#define public_549ad5 _public_549ad5
#define public_549ade _public_549ade
#define public_549b32 _public_549b32
#define public_549b3d _public_549b3d
#define public_549b4c _public_549b4c
#define public_549b62 _public_549b62
#define public_549b98 _public_549b98
#define public_549ba1 _public_549ba1

PROC_DECLARE(0x549830, internal_549830, public_549830);
extern "C" NAKED register_t __cdecl internal_549830()
{
    __asm
    {
        push 0xFFFFFFFF
        mov eax, dword ptr fs : [0]
/*FIXUP push public_5c129f @0x549838*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c129f
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x156C
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
/*FIXUP push offset public_5e076c @0x549855*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e076c
        mov dword ptr ss : [esp+0x14], edi
        call dword ptr ds : [public_5c61a4]
        add esp, 4
        lea ecx, ss:[esp+0x14]
        mov esi, eax
        call dword ptr ds : [public_5c605c]
        xor ebp, ebp
        push ebp
        push esi
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x158C], ebp
        call dword ptr ds : [public_5c6058]
        test al, al
        je public_5499f5
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6054]
        test al, al
        je public_5499f5
        public_5498a2 : nop
        mov esi, dword ptr ds : [public_5c6050]
/*FIXUP push offset public_5e0760 @0x5498a8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0760
        lea ecx, ss:[esp+0x18]
        call esi
        test al, al
        je public_5498be
        mov ebx, offset public_67dbf8
        jmp public_549938
/*FIXUP public_5498be : nop
        push offset public_5e0750 @0x5498be*/
  FIXUP public_5498be : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0750
        lea ecx, ss:[esp+0x18]
        call esi
        test al, al
        je public_5498d2
        lea ebx, ds:[edi+0xC]
        jmp public_549930
/*FIXUP public_5498d2 : nop
        push offset public_5e073c @0x5498d2*/
  FIXUP public_5498d2 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e073c
        lea ecx, ss:[esp+0x18]
        call esi
        test al, al
        je public_5498e9
        lea ebx, ds:[edi+0x1B0]
        jmp public_549930
/*FIXUP public_5498e9 : nop
        push offset public_5dbd88 @0x5498e9*/
  FIXUP public_5498e9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbd88
        lea ecx, ss:[esp+0x18]
        call esi
        test al, al
        je public_549900
        lea ebx, ds:[edi+0x3C8]
        jmp public_549930
/*FIXUP public_549900 : nop
        push offset public_5dbec0 @0x549900*/
  FIXUP public_549900 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbec0
        lea ecx, ss:[esp+0x18]
        call esi
        test al, al
        je public_549917
        lea ebx, ds:[edi+0x500]
        jmp public_549930
/*FIXUP public_549917 : nop
        push offset public_5e0730 @0x549917*/
  FIXUP public_549917 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0730
        lea ecx, ss:[esp+0x18]
        call esi
        test al, al
        je public_5499b8
        lea ebx, ds:[edi+0x60C]
        public_549930 : nop
        cmp ebx, ebp
        je public_5499e3
        public_549938 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c669c]
        test al, al
        je public_5499e3
        lea ebx, ds:[ebx]
        public_549950 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c60b8]
        lea ecx, ss:[esp+0x14]
        mov esi, eax
        call dword ptr ds : [public_5c6698]
        mov edi, eax
        mov eax, dword ptr ds : [ebx]
        push edi
        push esi
        mov ecx, ebx
        call dword ptr ds : [eax+0x4C]
        test al, al
        jne public_5499a2
        push edi
        push esi
        lea ecx, ss:[esp+0x1C]
        mov ebp, 0x100002
        call dword ptr ds : [public_5c6468]
        mov ecx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x18A
/*FIXUP push offset public_5e0704 @0x549992*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0704
/*FIXUP push offset public_5e06cc @0x549997*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e06cc
        push ebp
        call dword ptr ds : [ecx]
        add esp, 0x1C
        public_5499a2 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c669c]
        test al, al
        jne public_549950
        mov edi, dword ptr ss : [esp+0x10]
        xor ebp, ebp
        jmp public_5499e3
        public_5499b8 : nop
        lea ecx, ss:[esp+0x14]
        mov esi, 0x100002
        call dword ptr ds : [public_5c6468]
        mov edx, dword ptr ds : [public_5c6d18]
        push eax
        push 0x17E
/*FIXUP push offset public_5e0704 @0x5499d3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e0704
/*FIXUP push offset public_5e069c @0x5499d8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5e069c
        push esi
        call dword ptr ds : [edx]
        add esp, 0x14
        public_5499e3 : nop
        lea ecx, ss:[esp+0x14]
        call dword ptr ds : [public_5c6054]
        test al, al
        jne public_5498a2
        public_5499f5 : nop
        lea eax, ss:[esp+0x143C]
        mov dword ptr ss : [esp+0x1584], 1
        mov dword ptr ss : [esp+0x10], eax
        mov ecx, dword ptr ds : [public_5c7080]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebp
        lea ecx, ss:[esp+0x1444]
        mov byte ptr ss : [esp+0x158C], 2
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        mov ebx, dword ptr ds : [public_5c6efc]
        mov esi, dword ptr ds : [public_5c6ef8]
        je public_549a8b
        cmp dword ptr ss : [esp+0x1450], ebp
        je public_549a76
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebp
        je public_549a65
        push eax
        call ebx
        mov dword ptr ss : [esp+0x1454], ebp
        mov dword ptr ss : [esp+0x1458], ebp
        public_549a65 : nop
        mov eax, dword ptr ss : [esp+0x1450]
        push eax
        call esi
        mov dword ptr ss : [esp+0x1450], ebp
        public_549a76 : nop
        mov ecx, dword ptr ss : [esp+0x144C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x144C], 0xFFFFFFFF
        public_549a8b : nop
        mov eax, dword ptr ss : [esp+0x1454]
        cmp eax, ebp
        mov edi, dword ptr ds : [public_5c71d8]
        je public_549ab0
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x1454], ebp
        mov dword ptr ss : [esp+0x1458], ebp
        public_549ab0 : nop
        mov eax, dword ptr ss : [esp+0x1440]
        cmp eax, ebp
        mov dword ptr ss : [esp+0x145C], ebp
        je public_549ade
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_549ad5
        cmp cl, 0xFF
        je public_549ad5
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_549ade
        public_549ad5 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_549ade : nop
        mov dword ptr ss : [esp+0x1440], ebp
        mov dword ptr ss : [esp+0x1444], ebp
        mov dword ptr ss : [esp+0x1448], ebp
        mov edx, dword ptr ds : [public_5c7080]
        mov eax, dword ptr ds : [edx]
        push eax
        push ebp
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x158C], 3
        call dword ptr ds : [public_5c707c]
        cmp dword ptr ss : [esp+0x24], 0xFFFFFFFF
        je public_549b4c
        cmp dword ptr ss : [esp+0x28], ebp
        je public_549b3d
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebp
        je public_549b32
        push eax
        call ebx
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        public_549b32 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x28], ebp
        public_549b3d : nop
        mov edx, dword ptr ss : [esp+0x24]
        push edx
        call esi
        mov dword ptr ss : [esp+0x24], 0xFFFFFFFF
        public_549b4c : nop
        mov eax, dword ptr ss : [esp+0x2C]
        cmp eax, ebp
        je public_549b62
        push eax
        call edi
        add esp, 4
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        public_549b62 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        mov dword ptr ss : [esp+0x2C], ebp
        cmp eax, ebp
        pop ebp
        pop ebx
        je public_549ba1
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_549b98
        cmp cl, 0xFF
        je public_549b98
        dec cl
        mov byte ptr ds : [eax], cl
        mov ecx, dword ptr ss : [esp+0x156C]
        mov dword ptr fs : [0], ecx
        add esp, 0x1578
        ret 
        public_549b98 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_549ba1 : nop
        mov ecx, dword ptr ss : [esp+0x156C]
        mov dword ptr fs : [0], ecx
        add esp, 0x1578
        ret 
        UNREACHABLE_TRAP(0x549830)
    }
}

#undef public_5498a2
#undef public_5498be
#undef public_5498d2
#undef public_5498e9
#undef public_549900
#undef public_549917
#undef public_549930
#undef public_549938
#undef public_549950
#undef public_5499a2
#undef public_5499b8
#undef public_5499e3
#undef public_5499f5
#undef public_549a65
#undef public_549a76
#undef public_549a8b
#undef public_549ab0
#undef public_549ad5
#undef public_549ade
#undef public_549b32
#undef public_549b3d
#undef public_549b4c
#undef public_549b62
#undef public_549b98
#undef public_549ba1
