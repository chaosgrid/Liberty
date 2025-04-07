#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6262630);
CLANG_FORWARD_PROC_SYMBOL(public_626ff40);
CLANG_FORWARD_PROC_SYMBOL(public_6270620);
CLANG_FORWARD_PROC_SYMBOL(public_6270e50);
CLANG_FORWARD_PROC_SYMBOL(public_627f280);
CLANG_FORWARD_PROC_SYMBOL(public_62bed70);
CLANG_FORWARD_PROC_SYMBOL(public_6302df0);
CLANG_FORWARD_PROC_SYMBOL(public_630f660);
CLANG_FORWARD_PROC_SYMBOL(public_630f770);
CLANG_FORWARD_PROC_SYMBOL(public_630f9b0);
CLANG_FORWARD_PROC_SYMBOL(public_6310070);
CLANG_FORWARD_PROC_SYMBOL(public_63103c0);
CLANG_FORWARD_PROC_SYMBOL(public_63222f0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);
CLANG_FORWARD_PROC_SYMBOL(public_6391dc0);
CLANG_FORWARD_JUMP_SYMBOL(public_639286c);

#define public_6270ed5 _public_6270ed5
#define public_6270f14 _public_6270f14
#define public_6270f16 _public_6270f16
#define public_6270f87 _public_6270f87
#define public_6270ff9 _public_6270ff9
#define public_6271036 _public_6271036
#define public_627104b _public_627104b
#define public_6271060 _public_6271060
#define public_6271085 _public_6271085
#define public_62710cd _public_62710cd
#define public_62710d6 _public_62710d6
#define public_627114a _public_627114a
#define public_627115b _public_627115b
#define public_627116c _public_627116c
#define public_627118f _public_627118f

PROC_DECLARE(0x6270e50, internal_6270e50, public_6270e50);
extern "C" NAKED register_t __cdecl internal_6270e50()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_639286c @0x6270e58*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639286c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x16A8
        mov dword ptr fs : [0], esp
        call public_6391dc0
        mov eax, dword ptr ds : [public_639905c]
        mov edx, dword ptr ss : [esp+0x16B8]
        push ebx
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax]
        push ecx
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        call public_6302df0
        add esp, 0xC
        lea ecx, ss:[esp+0x14C]
        call public_630f660
        xor ebx, ebx
        push ebx
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x154]
        mov dword ptr ss : [esp+0x16C4], ebx
        call public_630f9b0
        test al, al
        je public_6271060
        lea ecx, ss:[esp+0x14C]
        call public_6310070
        test al, al
        je public_627104b
        push ebp
/*FIXUP public_6270ed5 : nop
        push offset public_6399ffc @0x6270ed5*/
  FIXUP public_6270ed5 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399ffc
        lea ecx, ss:[esp+0x154]
        call public_63103c0
        test al, al
        je public_6270ff9
        push 0xC0
        call public_6391d9c
        add esp, 4
        mov dword ptr ss : [esp+0x48], eax
        cmp eax, ebx
        mov byte ptr ss : [esp+0x16C0], 1
        je public_6270f14
        mov ecx, eax
        call public_626ff40
        jmp public_6270f16
        public_6270f14 : nop
        xor eax, eax
        public_6270f16 : nop
        push eax
        lea edx, ss:[esp+0x154]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x16C8], 0
        mov dword ptr ss : [esp+0x18], eax
        call public_6270620
        mov eax, dword ptr ds : [esi+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push eax
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call public_627f280
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+0x48]
        cmp edi, ebx
        mov ebp, dword ptr ds : [eax+0x50]
        lea ecx, ds:[eax+0x48]
        je public_6270f87
        cmp ebp, ebx
        je public_6270f87
        cmp edi, ebp
        je public_6270f87
        mov ebx, 0x100002
        call public_6333e60
        push eax
        mov eax, dword ptr ds : [public_6399028]
        push 0x1B0
/*FIXUP push offset public_6399ec0 @0x6270f75*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399ec0
/*FIXUP push offset public_6399fb8 @0x6270f7a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399fb8
        push ebx
        call dword ptr ds : [eax]
        add esp, 0x14
        xor ebx, ebx
        public_6270f87 : nop
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ds:[esi+0xC]
        mov dword ptr ss : [esp+0x38], edi
        mov dword ptr ss : [esp+0x3C], ebx
        call public_63222f0
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x40]
        call public_62bed70
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x38]
        lea ecx, ss:[esp+0x18]
        mov dword ptr ds : [eax+0x10], edx
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ds:[esi+0x20]
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebx
        call public_63222f0
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_62bed70
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x40]
        mov dword ptr ds : [eax+0x10], edx
        jmp public_6271036
/*FIXUP public_6270ff9 : nop
        push offset public_6399fac @0x6270ff9*/
  FIXUP public_6270ff9 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399fac
        lea ecx, ss:[esp+0x154]
        call public_63103c0
        test al, al
        je public_6271036
        mov ecx, dword ptr ss : [esp+0x16C8]
        mov edx, dword ptr ds : [public_6399028]
        push ecx
        push 0x1BA
/*FIXUP push offset public_6399ec0 @0x6271021*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399ec0
        mov eax, 0x100002
/*FIXUP push offset public_6399f6c @0x627102b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f6c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6271036 : nop
        lea ecx, ss:[esp+0x150]
        call public_6310070
        test al, al
        jne public_6270ed5
        pop ebp
        public_627104b : nop
        lea ecx, ss:[esp+0x14C]
        call public_630f770
        jmp public_6271085
        lea esp, ss:[esp]
        public_6271060 : nop
        mov edx, dword ptr ds : [public_6399028]
        lea ecx, ss:[esp+0x48]
        push ecx
        push 0x1C2
/*FIXUP push offset public_6399ec0 @0x6271070*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399ec0
        mov eax, 0x100001
/*FIXUP push offset public_6399f3c @0x627107a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6399f3c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6271085 : nop
        lea eax, ss:[esp+0x1574]
        mov dword ptr ss : [esp+0x16BC], 2
        mov dword ptr ss : [esp+0x10], eax
        lea ecx, ss:[esp+0x1574]
        mov byte ptr ss : [esp+0x16BC], 3
        call public_6262630
        mov eax, dword ptr ss : [esp+0x1578]
        cmp eax, ebx
        je public_62710d6
        mov cl, byte ptr ds : [eax-1]
        dec eax
        test cl, cl
        je public_62710cd
        cmp cl, 0xFF
        je public_62710cd
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_62710d6
        public_62710cd : nop
        push eax
        call public_6391d5a
        add esp, 4
        public_62710d6 : nop
        mov dword ptr ss : [esp+0x1578], ebx
        mov dword ptr ss : [esp+0x157C], ebx
        mov dword ptr ss : [esp+0x1580], ebx
        mov ecx, dword ptr ds : [public_63991c0]
        mov edx, dword ptr ds : [ecx]
        push edx
        push ebx
        lea ecx, ss:[esp+0x154]
        mov dword ptr ss : [esp+0x16C4], 4
        call dword ptr ds : [public_6399198]
        mov eax, dword ptr ss : [esp+0x15C]
        or edi, 0xFFFFFFFF
        cmp eax, edi
        je public_627116c
        cmp dword ptr ss : [esp+0x160], ebx
        mov esi, dword ptr ds : [public_639913c]
        je public_627115b
        mov eax, dword ptr ss : [esp+0x164]
        cmp eax, ebx
        je public_627114a
        push eax
        call dword ptr ds : [public_6399138]
        mov dword ptr ss : [esp+0x164], ebx
        mov dword ptr ss : [esp+0x168], ebx
        public_627114a : nop
        mov eax, dword ptr ss : [esp+0x160]
        push eax
        call esi
        mov dword ptr ss : [esp+0x160], ebx
        public_627115b : nop
        mov ecx, dword ptr ss : [esp+0x15C]
        push ecx
        call esi
        mov dword ptr ss : [esp+0x15C], edi
        public_627116c : nop
        mov eax, dword ptr ss : [esp+0x164]
        cmp eax, ebx
        je public_627118f
        push eax
        call dword ptr ds : [public_639932c]
        add esp, 4
        mov dword ptr ss : [esp+0x164], ebx
        mov dword ptr ss : [esp+0x168], ebx
        public_627118f : nop
        push 1
        lea ecx, ss:[esp+0x150]
        mov dword ptr ss : [esp+0x170], ebx
        mov dword ptr ss : [esp+0x16C0], edi
        call dword ptr ds : [public_63991b8]
        mov ecx, dword ptr ss : [esp+0x16B4]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x16B4
        ret 4
        UNREACHABLE_TRAP(0x6270e50)
    }
}

#undef public_6270ed5
#undef public_6270f14
#undef public_6270f16
#undef public_6270f87
#undef public_6270ff9
#undef public_6271036
#undef public_627104b
#undef public_6271060
#undef public_6271085
#undef public_62710cd
#undef public_62710d6
#undef public_627114a
#undef public_627115b
#undef public_627116c
#undef public_627118f
