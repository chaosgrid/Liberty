#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f466e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f956c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f96770);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb1688);

#define public_6f95715 _public_6f95715
#define public_6f95730 _public_6f95730
#define public_6f9573b _public_6f9573b
#define public_6f9573d _public_6f9573d
#define public_6f95741 _public_6f95741
#define public_6f9578c _public_6f9578c
#define public_6f957c7 _public_6f957c7
#define public_6f957e1 _public_6f957e1
#define public_6f957ea _public_6f957ea
#define public_6f957ee _public_6f957ee
#define public_6f957f0 _public_6f957f0

PROC_DECLARE(0x6f956c0, internal_6f956c0, public_6f956c0);
extern "C" NAKED register_t __cdecl internal_6f956c0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb1688 @0x6f956c2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb1688
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x1C
        mov al, byte ptr ss : [esp+0x38]
        xor ecx, ecx
        push esi
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [public_6fd3c24]
        mov eax, dword ptr ds : [edx]
        cmp eax, edx
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+4], eax
        je public_6f957ee
        mov esi, dword ptr ss : [esp+0x30]
        push ebp
        mov ebp, dword ptr ss : [esp+0x38]
        push edi
        mov edi, dword ptr ss : [esp+0x40]
        public_6f95715 : nop
        lea edx, ds:[eax+0x10]
        mov al, byte ptr ds : [edx+0xC]
        test al, al
        jne public_6f95741
        mov eax, dword ptr ds : [edx+0x14]
        mov ecx, dword ptr ds : [edx+0x18]
        cmp eax, ecx
        je public_6f9573b
        lea esp, ss:[esp]
        public_6f95730 : nop
        cmp dword ptr ds : [eax], esi
        je public_6f9573d
        add eax, 4
        cmp eax, ecx
        jne public_6f95730
        public_6f9573b : nop
        mov eax, ecx
        public_6f9573d : nop
        cmp eax, ecx
        je public_6f9578c
        public_6f95741 : nop
        cmp dword ptr ds : [edx+4], ebp
        jne public_6f9578c
        fld dword ptr ds : [edx+0x30]
        fcomp dword ptr ss : [esp+0x44]
        fnstsw ax
        test ah, 0x41
        jp public_6f9578c
        fld dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [edx+0x34]
        fnstsw ax
        test ah, 0x41
        jp public_6f9578c
        mov ecx, dword ptr ds : [edx+0x38]
        or ecx, edi
        cmp ecx, edi
        jne public_6f9578c
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x10]
        push eax
        push 1
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ss : [esp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x20], edx
        call public_6f96770
        public_6f9578c : nop
        lea ecx, ss:[esp+0xC]
        call public_6f466e0
        mov eax, dword ptr ss : [esp+0xC]
        cmp eax, dword ptr ds : [public_6fd3c24]
        jne public_6f95715
        mov ecx, dword ptr ss : [esp+0x1C]
        test ecx, ecx
        pop edi
        pop ebp
        je public_6f957ee
        mov edx, dword ptr ss : [esp+0x18]
        mov eax, edx
        sub eax, ecx
        sar eax, 3
        test eax, eax
        je public_6f957ee
        mov esi, eax
        dec esi
        jne public_6f957c7
        xor eax, eax
        jmp public_6f957e1
        public_6f957c7 : nop
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [esp+0x14]
        inc esi
        imul eax, esi
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        public_6f957e1 : nop
        test eax, eax
        mov edx, ecx
        jbe public_6f957ea
        lea edx, ds:[ecx+eax*8]
        public_6f957ea : nop
        mov esi, dword ptr ds : [edx]
        jmp public_6f957f0
        public_6f957ee : nop
        xor esi, esi
        public_6f957f0 : nop
        push ecx
        call public_6fa8fe0
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        mov eax, esi
        pop esi
        mov dword ptr fs : [0], ecx
        add esp, 0x28
        ret 
        UNREACHABLE_TRAP(0x6f956c0)
    }
}

#undef public_6f95715
#undef public_6f95730
#undef public_6f9573b
#undef public_6f9573d
#undef public_6f95741
#undef public_6f9578c
#undef public_6f957c7
#undef public_6f957e1
#undef public_6f957ea
#undef public_6f957ee
#undef public_6f957f0
