#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ea1490);
CLANG_FORWARD_PROC_SYMBOL(public_6eac620);
CLANG_FORWARD_PROC_SYMBOL(public_6ead640);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5770);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ee0e10);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6eec2b0);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6eed270);
CLANG_FORWARD_PROC_SYMBOL(public_6f34ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6f66220);
CLANG_FORWARD_PROC_SYMBOL(public_6f73930);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab496);

#define public_6ee0f4d _public_6ee0f4d
#define public_6ee0fd3 _public_6ee0fd3
#define public_6ee105a _public_6ee105a
#define public_6ee10de _public_6ee10de
#define public_6ee10ed _public_6ee10ed
#define public_6ee1170 _public_6ee1170
#define public_6ee1175 _public_6ee1175
#define public_6ee1192 _public_6ee1192
#define public_6ee1195 _public_6ee1195

PROC_DECLARE(0x6ee0e10, internal_6ee0e10, public_6ee0e10);
extern "C" NAKED register_t __cdecl internal_6ee0e10()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab496 @0x6ee0e12*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab496
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x17C
        mov eax, dword ptr ss : [esp+0x190]
        mov dl, byte ptr ss : [esp+3]
        push ebx
        mov ebx, ecx
        mov ecx, dword ptr ss : [esp+0x198]
        push ebp
        push esi
        mov dword ptr ds : [ebx+4], eax
        mov eax, dword ptr ss : [esp+0x198]
        lea ebp, ds:[ebx+0x14]
        push edi
        xor edi, edi
        mov dword ptr ds : [ebx+8], ecx
        mov dword ptr ds : [ebx+0xC], edi
        mov dword ptr ds : [ebx+0x10], edi
        lea esi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], dl
        mov dword ptr ss : [ebp+4], edi
        mov dword ptr ss : [ebp+8], edi
        mov dword ptr ss : [ebp+0xC], edi
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ds : [ebx+0x24], eax
        mov dword ptr ds : [ebx+0x28], edi
        mov dword ptr ds : [ebx+0x2C], edi
        lea ecx, ss:[esp+0x1A0]
        push esi
        push ecx
        mov dword ptr ss : [esp+0x19C], edi
        mov dword ptr ds : [ebx], offset public_6fb71c8
        call dword ptr ds : [public_6fb3444]
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x1A4]
        add esp, 8
        push edx
        call public_6f73930
        push esi
        mov dword ptr ss : [esp+0x18], eax
        call public_6fa6e50
        add esp, 4
        cmp eax, edi
        je public_6ee1192
        push 0x400
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6ee1192
        mov ecx, dword ptr ss : [esp+0x14]
        call public_6f34ca0
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x4C]
        mov esi, eax
        cmp esi, edi
        mov dword ptr ss : [esp+0x20], esi
        jne public_6ee105a
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x28], 0x4A39
        call public_6eb6b30
        cmp eax, 1
        jae public_6ee0f4d
        push 4
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+4]
        add esp, 4
        mov esi, eax
        mov eax, dword ptr ss : [ebp+8]
        push esi
        push eax
        push ecx
        mov ecx, ebp
        call public_6eed270
        mov edx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+4]
        push edx
        push eax
        mov ecx, ebp
        call public_6ea1490
        mov eax, dword ptr ss : [ebp+4]
        push eax
        call public_6fa8fe0
        lea ecx, ds:[esi+4]
        mov dword ptr ss : [ebp+0xC], ecx
        add esp, 4
        mov ecx, ebp
        call public_6fa3db0
        lea edx, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], esi
        public_6ee0f4d : nop
        lea ecx, ss:[esp+0x28]
        call public_6eac620
        mov eax, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax+0x154]
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        mov byte ptr ss : [esp+0x19C], 1
        call public_6f66220
        add esp, 8
        lea ecx, ss:[esp+0x28]
        call public_6fa3db0
        cmp eax, 1
        lea ecx, ss:[esp+0x28]
        seta byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x194], 0
        call public_6eec8d0
/*FIXUP push offset public_6fb6920 @0x6ee0f98*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6920
        lea ecx, ss:[esp+0xC4]
        mov dword ptr ss : [esp+0xC4], edi
        mov byte ptr ss : [esp+0xC8], 0
        call public_6ead640
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov dword ptr ss : [esp+0x38], edi
        mov byte ptr ss : [esp+0x3C], 0
        mov eax, offset public_6fb6844
        jne public_6ee0fd3
        mov eax, offset public_6fb6840
/*FIXUP public_6ee0fd3 : nop
        push offset public_6fb572c @0x6ee0fd3*/
  FIXUP public_6ee0fd3 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push eax
        lea edx, ss:[esp+0xCC]
        push edx
        lea eax, ss:[esp+0x44]
/*FIXUP push offset public_6fb6838 @0x6ee0fe5*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6838
        push eax
        call public_6eec2b0
        mov ecx, 0x11
        lea esi, ss:[esp+0x4C]
        lea edi, ss:[esp+0x118]
        rep movsd
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
/*FIXUP push offset public_6fb6064 @0x6ee1006*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea edx, ss:[esp+0x124]
        push edx
        lea eax, ss:[esp+0x168]
        push eax
        call public_6eeaf10
        mov esi, eax
        mov ecx, 0x11
        lea edi, ss:[esp+0xA0]
        rep movsd
        lea ecx, ss:[esp+0xA4]
        push ecx
        call dword ptr ds : [public_6fb3684]
        add esp, 0x28
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [ebp+8]
        push edx
        push eax
        mov ecx, ebp
        call public_6eb5770
        jmp public_6ee1195
        public_6ee105a : nop
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6ee1195
        mov ecx, ebp
        mov dword ptr ds : [ebx+0x28], 0x4A3B
        call public_6eb6b30
        cmp eax, 3
        jae public_6ee10de
        push 0xC
        call public_6fa912a
        mov ecx, dword ptr ss : [ebp+8]
        mov edx, dword ptr ss : [ebp+4]
        add esp, 4
        push eax
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x20], eax
        call public_6eed270
        mov eax, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+4]
        push eax
        push ecx
        mov ecx, ebp
        call public_6ea1490
        mov edx, dword ptr ss : [ebp+4]
        push edx
        call public_6fa8fe0
        mov eax, dword ptr ss : [esp+0x18]
        add eax, 0xC
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], eax
        call public_6fa3db0
        mov ecx, dword ptr ss : [esp+0x14]
        lea edx, ds:[ecx+eax*4]
        mov dword ptr ss : [ebp+8], edx
        mov dword ptr ss : [ebp+4], ecx
        public_6ee10de : nop
        cmp esi, 1
        mov eax, offset public_6fb68dc
        je public_6ee10ed
        mov eax, offset public_6fb68c8
        public_6ee10ed : nop
        push eax
        call dword ptr ds : [public_6fb3684]
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x1C]
        push eax
        push ecx
        mov ecx, ebp
        call public_6eb5770
/*FIXUP push offset public_6fb572c @0x6ee110b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb572c
        push esi
        lea edx, ss:[esp+0x40]
/*FIXUP push offset public_6fb63a4 @0x6ee1115*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb63a4
        push edx
        mov dword ptr ss : [esp+0x48], edi
        mov byte ptr ss : [esp+0x4C], 0
        call public_6eec2b0
        mov ecx, 0x11
        lea esi, ss:[esp+0x48]
        lea edi, ss:[esp+0x8C]
        lea eax, ss:[esp+0x90]
        rep movsd
        mov esi, dword ptr ds : [public_6fb3684]
        push eax
        call esi
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x14]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6eb5770
        cmp dword ptr ss : [esp+0x20], 1
        jne public_6ee1170
/*FIXUP push offset public_6fb68b0 @0x6ee1169*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb68b0
        jmp public_6ee1175
/*FIXUP public_6ee1170 : nop
        push offset public_6fb6898 @0x6ee1170*/
  FIXUP public_6ee1170 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6898
        public_6ee1175 : nop
        call esi
        mov ecx, dword ptr ss : [ebp+8]
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        lea eax, ss:[esp+0x18]
        push eax
        push 1
        push ecx
        mov ecx, ebp
        call public_6f937c0
        jmp public_6ee1195
        public_6ee1192 : nop
        mov dword ptr ds : [ebx+0x24], edi
        public_6ee1195 : nop
        mov ecx, dword ptr ss : [esp+0x18C]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x188
        ret 0xC
        UNREACHABLE_TRAP(0x6ee0e10)
    }
}

#undef public_6ee0f4d
#undef public_6ee0fd3
#undef public_6ee105a
#undef public_6ee10de
#undef public_6ee10ed
#undef public_6ee1170
#undef public_6ee1175
#undef public_6ee1192
#undef public_6ee1195
