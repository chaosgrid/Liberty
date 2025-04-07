#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cfdca0);
CLANG_FORWARD_PROC_SYMBOL(public_6cfdf70);
CLANG_FORWARD_PROC_SYMBOL(public_6d0f600);
CLANG_FORWARD_PROC_SYMBOL(public_6d13070);
CLANG_FORWARD_PROC_SYMBOL(public_6d14dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);

#define public_6d14df6 _public_6d14df6
#define public_6d14e1b _public_6d14e1b
#define public_6d14e46 _public_6d14e46
#define public_6d14e56 _public_6d14e56
#define public_6d14e59 _public_6d14e59
#define public_6d14e5d _public_6d14e5d
#define public_6d14e83 _public_6d14e83
#define public_6d14eae _public_6d14eae
#define public_6d14eb7 _public_6d14eb7
#define public_6d14ee6 _public_6d14ee6
#define public_6d14ef0 _public_6d14ef0

PROC_DECLARE(0x6d14dc0, internal_6d14dc0, public_6d14dc0);
extern "C" NAKED register_t __cdecl internal_6d14dc0()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ds : [edi+4]
        mov ebx, ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ds:[ebx+8]
        mov dword ptr ss : [esp+0x30], eax
        xor esi, esi
        call public_6d15d10
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+0xC]
        je public_6d14df6
        mov esi, dword ptr ds : [eax+0x10]
        jmp public_6d14e1b
        public_6d14df6 : nop
        mov ecx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [public_6d64a44]
        push ecx
        push 0x659
/*FIXUP push offset public_6d6840c @0x6d14e06*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d6840c
        mov eax, 0x100001
/*FIXUP push offset public_6d68458 @0x6d14e10*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d68458
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_6d14e1b : nop
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push edi
        mov ecx, esi
        call public_6d13070
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov edx, dword ptr ds : [ebx+0x60]
        add ebx, 0x58
        mov edi, eax
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], esi
        mov esi, dword ptr ds : [ecx+4]
        cmp esi, edx
        mov ebp, ecx
        mov al, 1
        je public_6d14e5d
        public_6d14e46 : nop
        cmp edi, dword ptr ds : [esi+0xC]
        setb al
        test al, al
        mov ebp, esi
        je public_6d14e56
        mov esi, dword ptr ds : [esi]
        jmp public_6d14e59
        public_6d14e56 : nop
        mov esi, dword ptr ds : [esi+8]
        public_6d14e59 : nop
        cmp esi, edx
        jne public_6d14e46
        public_6d14e5d : nop
        mov dl, byte ptr ds : [ebx+0xC]
        test dl, dl
        je public_6d14e83
        lea ecx, ss:[esp+0x14]
        push ecx
        push ebp
        push esi
        lea edx, ss:[esp+0x34]
        push edx
        mov ecx, ebx
        call public_6cfdca0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6d14e83 : nop
        test al, al
        mov dword ptr ss : [esp+0x2C], ebp
        je public_6d14eb7
        cmp ebp, dword ptr ds : [ecx]
        jne public_6d14eae
        lea eax, ss:[esp+0x14]
        push eax
        push ebp
        push esi
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, ebx
        call public_6cfdca0
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        public_6d14eae : nop
        lea ecx, ss:[esp+0x2C]
        call public_6cfdf70
        public_6d14eb7 : nop
        mov edx, dword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, ecx
        lea ecx, ss:[esp+0x28]
        push ecx
        jae public_6d14ee6
        lea edx, ss:[esp+0x18]
        push edx
        push ebp
        push esi
        lea eax, ss:[esp+0x20]
        push eax
        mov ecx, ebx
        mov byte ptr ss : [esp+0x3C], 1
        call public_6cfdca0
        push eax
        jmp public_6d14ef0
        public_6d14ee6 : nop
        lea edx, ss:[esp+0x30]
        mov byte ptr ss : [esp+0x2C], 0
        push edx
        public_6d14ef0 : nop
        lea ecx, ss:[esp+0x24]
        call public_6d0f600
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 8
        UNREACHABLE_TRAP(0x6d14dc0)
    }
}

#undef public_6d14df6
#undef public_6d14e1b
#undef public_6d14e46
#undef public_6d14e56
#undef public_6d14e59
#undef public_6d14e5d
#undef public_6d14e83
#undef public_6d14eae
#undef public_6d14eb7
#undef public_6d14ee6
#undef public_6d14ef0
