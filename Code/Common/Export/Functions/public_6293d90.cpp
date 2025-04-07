#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6288970);
CLANG_FORWARD_PROC_SYMBOL(public_62940c0);
CLANG_FORWARD_PROC_SYMBOL(public_62ad540);
CLANG_FORWARD_PROC_SYMBOL(public_62aee50);
CLANG_FORWARD_PROC_SYMBOL(public_62af600);
CLANG_FORWARD_PROC_SYMBOL(public_62af640);
CLANG_FORWARD_PROC_SYMBOL(public_62f05d0);
CLANG_FORWARD_PROC_SYMBOL(public_6333e60);

#define public_6293f03 _public_6293f03
#define public_6293f33 _public_6293f33
#define public_6293f50 _public_6293f50
#define public_6293f90 _public_6293f90

PROC_DECLARE(0x6293d90, internal_6293d90, public_6293d90);
extern "C" NAKED register_t __cdecl internal_6293d90()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        mov ebp, dword ptr ds : [esi+4]
        push edi
        push 0x2001
        mov edi, ecx
        call public_62aee50
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x4C]
        mov edx, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [esi+0xC]
        push edx
        call public_62f05d0
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [public_6399040]
        mov edx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_6293f90
        mov ecx, dword ptr ds : [esi+0xC]
        mov ebx, dword ptr ds : [ecx+0x80]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x50], edx
        call dword ptr ds : [eax+0x60]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [eax]
        push ebx
        push edx
        push eax
        mov eax, dword ptr ds : [esi]
        push 0
        mov ecx, esi
        call dword ptr ds : [eax+0x64]
        push eax
        call public_62940c0
        add esp, 0x10
        test eax, eax
        je public_6293f50
        mov edx, dword ptr ds : [public_63fc0e8]
        mov eax, dword ptr ds : [public_63fc0ec]
        mov ecx, dword ptr ds : [public_63eb360]
        mov dword ptr ss : [esp+0x1C], edx
        push 0x18
        lea edx, ss:[esp+0x36]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [ebp+0xB0]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [public_63fc0f0]
        push edx
        mov ebx, 2
        push eax
        mov dword ptr ss : [esp+0x20], 0x3F800000
        mov dword ptr ss : [esp+0x30], ecx
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], ebx
        mov byte ptr ss : [esp+0x3C], 0
        mov byte ptr ss : [esp+0x3D], 1
        mov byte ptr ss : [esp+0x46], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0
        mov byte ptr ss : [esp+0x3E], 0
        call dword ptr ds : [public_639927c]
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [ebp+0x50]
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        mov byte ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x40], ebx
        mov dword ptr ss : [esp+0x3C], ecx
        mov byte ptr ss : [esp+0x45], 0
        call public_6288970
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+0x54]
        add esp, 0x14
        test ecx, ecx
        je public_6293f03
        push eax
        push ebp
        call public_6284ca0
        mov ecx, dword ptr ds : [edi+4]
        add esp, 8
        push 1
        call public_62ad540
        mov ecx, dword ptr ds : [edi+4]
        mov bl, 1
        call public_62af600
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x38
        ret 4
        public_6293f03 : nop
        mov esi, dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [esi+0xC]
        push eax
        lea ecx, ds:[esi+8]
        mov ebx, 0x100001
        call public_6333e60
        mov ecx, dword ptr ds : [public_6399028]
        push eax
        push 0x29D
/*FIXUP push offset public_639c81c @0x6293f23*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c81c
/*FIXUP push offset public_639c918 @0x6293f28*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c918
        push ebx
        call dword ptr ds : [ecx]
        add esp, 0x18
        public_6293f33 : nop
        mov ecx, dword ptr ds : [edi+4]
        call public_62af640
        mov dword ptr ds : [edi+4], 0
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x38
        ret 4
        mov edi, edi
        public_6293f50 : nop
        mov ebp, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [esi]
        mov ebx, dword ptr ss : [ebp+0xC]
        lea eax, ss:[esp+0x4C]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x60]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [ebp+0x80]
        push ecx
        push ebx
        push edx
        push 0x2A5
/*FIXUP push offset public_639c81c @0x6293f72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c81c
        mov eax, 0x100001
/*FIXUP push offset public_639c8c0 @0x6293f7c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c8c0
        push eax
        mov eax, dword ptr ds : [public_6399028]
        call dword ptr ds : [eax]
        add esp, 0x1C
        jmp public_6293f33
        mov edi, edi
        public_6293f90 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+0x88]
        lea ecx, ds:[eax+8]
        mov esi, 0x100001
        call public_6333e60
        mov edx, dword ptr ds : [public_6399028]
        push eax
        push 0x2AB
/*FIXUP push offset public_639c81c @0x6293fb2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c81c
/*FIXUP push offset public_639c970 @0x6293fb7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639c970
        push esi
        call dword ptr ds : [edx]
        add esp, 0x14
        jmp public_6293f33
        UNREACHABLE_TRAP(0x6293d90)
    }
}

#undef public_6293f03
#undef public_6293f33
#undef public_6293f50
#undef public_6293f90
