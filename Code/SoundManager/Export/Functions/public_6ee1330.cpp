#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee1330);
CLANG_FORWARD_PROC_SYMBOL(public_6ee6410);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8dd0);

#define public_6ee134d _public_6ee134d
#define public_6ee1453 _public_6ee1453
#define public_6ee1463 _public_6ee1463
#define public_6ee146e _public_6ee146e
#define public_6ee1472 _public_6ee1472
#define public_6ee148e _public_6ee148e
#define public_6ee14a3 _public_6ee14a3
#define public_6ee14b7 _public_6ee14b7
#define public_6ee14c0 _public_6ee14c0
#define public_6ee14d1 _public_6ee14d1
#define public_6ee150f _public_6ee150f
#define public_6ee1515 _public_6ee1515

PROC_DECLARE(0x6ee1330, internal_6ee1330, public_6ee1330);
extern "C" NAKED register_t __cdecl internal_6ee1330()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x24]
        test eax, eax
        push edi
        je public_6ee134d
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x24], 0
        public_6ee134d : nop
        mov ebx, dword ptr ss : [esp+0x64]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x54]
        mov dword ptr ds : [esi+0x20], ebx
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi+4], edx
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ss : [esp+0x58]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x50]
        mov dword ptr ds : [esi+0x10], edx
        xor edx, edx
        mov dword ptr ds : [esi+0xC], ecx
        movzx ecx, word ptr ds : [esi+0xA]
        div ecx
        movzx edi, word ptr ds : [esi+8]
        xor edx, edx
        xor ebp, ebp
        mov word ptr ss : [esp+0x10], 1
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ds : [esi+0x14], eax
        imul eax, 0x3E8
        div edi
        mov dword ptr ds : [esi+0x1C], eax
        mov ax, word ptr ds : [esi+4]
        mov bp, ax
        mov word ptr ss : [esp+0x12], ax
        lea eax, ds:[ecx*8]
        cdq 
        idiv ebp
        mov word ptr ss : [esp+0x1E], ax
        movzx eax, ax
        imul eax, ebp
        mov dword ptr ss : [esp+0x64], eax
        fild dword ptr ss : [esp+0x64]
        fmul qword ptr ds : [public_6ee9218]
        call public_6ee8dd0
        mov ebp, dword ptr ss : [esp+0x50]
        xor ecx, ecx
        mov cx, ax
        mov word ptr ss : [esp+0x1C], ax
        xor eax, eax
        lea edx, ss:[esp+0x10]
        mov word ptr ss : [esp+0x20], 0
        imul ecx, edi
        test bl, 8
        mov dword ptr ss : [esp+0x18], ecx
        mov ecx, 9
        lea edi, ss:[esp+0x24]
        rep stosd
        mov eax, dword ptr ds : [public_6eea020]
        mov dword ptr ss : [esp+0x24], 0x24
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x28], eax
        je public_6ee1453
        test bl, 0x10
        je public_6ee1453
/*FIXUP push offset public_6eea0e0 @0x6ee1422*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea0e0
        push 0x1AC
/*FIXUP push offset public_6eea070 @0x6ee142c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea070
        mov eax, 0x100002
/*FIXUP push offset public_6eea054 @0x6ee1436*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6eea054
        push eax
        mov eax, dword ptr ds : [public_6ee9008]
        call dword ptr ds : [eax]
        mov eax, dword ptr ds : [esi+0x20]
        add esp, 0x14
        and eax, 0xFFFFFFEF
        mov dword ptr ds : [esi+0x20], eax
        mov eax, dword ptr ss : [esp+0x28]
        public_6ee1453 : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test cl, 8
        je public_6ee1463
        and eax, 0xFFFFFFBF
        or eax, 0x10
        jmp public_6ee146e
        public_6ee1463 : nop
        test cl, 0x10
        je public_6ee1472
        and eax, 0xFFFFFFEF
        or eax, 0x40
        public_6ee146e : nop
        mov dword ptr ss : [esp+0x28], eax
        public_6ee1472 : nop
        test cl, 2
        je public_6ee148e
        mov edx, dword ptr ds : [public_6eea028]
        or eax, 0x20
        test edx, edx
        mov dword ptr ss : [esp+0x28], eax
        je public_6ee148e
        or ecx, 0x20
        mov dword ptr ds : [esi+0x20], ecx
        public_6ee148e : nop
        mov ecx, dword ptr ds : [esi+0x20]
        test cl, 1
        je public_6ee14a3
        test al, 0x10
        je public_6ee14a3
        or eax, 0x20000
        mov dword ptr ss : [esp+0x28], eax
        public_6ee14a3 : nop
        test cl, 0x40
        je public_6ee14c0
        mov edx, dword ptr ds : [esi+0xC]
        test edx, edx
        jne public_6ee14b7
        mov edx, dword ptr ds : [esi+0x10]
        cmp edx, dword ptr ds : [esi+0x14]
        jae public_6ee14c0
        public_6ee14b7 : nop
        or eax, 0x10100
        mov dword ptr ss : [esp+0x28], eax
        public_6ee14c0 : nop
        test cl, 0x20
        je public_6ee14d1
        and eax, 0xFFFBFFFF
        or eax, 8
        mov dword ptr ss : [esp+0x28], eax
        public_6ee14d1 : nop
        mov eax, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ds : [eax]
        push 0
        lea edi, ds:[esi+0x24]
        push edi
        lea edx, ss:[esp+0x2C]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        test eax, eax
        jl public_6ee150f
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x5C]
        push eax
        push ebp
        push ecx
        call public_6ee6410
        add esp, 0xC
        test eax, eax
        jl public_6ee1515
        pop edi
        mov byte ptr ds : [esi+0x28], 1
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x38
        ret 0x1C
        public_6ee150f : nop
        mov dword ptr ds : [edi], 0
        public_6ee1515 : nop
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        add esp, 0x38
        ret 0x1C
        UNREACHABLE_TRAP(0x6ee1330)
    }
}

#undef public_6ee134d
#undef public_6ee1453
#undef public_6ee1463
#undef public_6ee146e
#undef public_6ee1472
#undef public_6ee148e
#undef public_6ee14a3
#undef public_6ee14b7
#undef public_6ee14c0
#undef public_6ee14d1
#undef public_6ee150f
#undef public_6ee1515
