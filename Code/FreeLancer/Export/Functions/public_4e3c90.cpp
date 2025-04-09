#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_406510);
CLANG_FORWARD_PROC_SYMBOL(public_40fa10);
CLANG_FORWARD_PROC_SYMBOL(public_4104c0);
CLANG_FORWARD_PROC_SYMBOL(public_421620);
CLANG_FORWARD_PROC_SYMBOL(public_421ba0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422390);
CLANG_FORWARD_PROC_SYMBOL(public_422910);
CLANG_FORWARD_PROC_SYMBOL(public_422950);
CLANG_FORWARD_PROC_SYMBOL(public_423180);
CLANG_FORWARD_PROC_SYMBOL(public_4e04f0);
CLANG_FORWARD_PROC_SYMBOL(public_4e50d0);
CLANG_FORWARD_PROC_SYMBOL(public_4e7070);
CLANG_FORWARD_PROC_SYMBOL(public_4e70e0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_4e3e4d _public_4e3e4d
#define public_4e3e51 _public_4e3e51
#define public_4e3e53 _public_4e3e53
#define public_4e3e71 _public_4e3e71
#define public_4e3e87 _public_4e3e87
#define public_4e3e89 _public_4e3e89
#define public_4e3ea1 _public_4e3ea1
#define public_4e3ea8 _public_4e3ea8
#define public_4e3f2c _public_4e3f2c
#define public_4e3f2e _public_4e3f2e
#define public_4e3f46 _public_4e3f46
#define public_4e3f75 _public_4e3f75

PROC_DECLARE(0x4e3c90, internal_4e3c90, public_4e3c90);
extern "C" NAKED register_t __cdecl internal_4e3c90()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        push edi
        je public_4e3f75
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e3f75
        mov eax, dword ptr ds : [esi+0x28]
        test eax, eax
        je public_4e3f75
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e3f75
        push 0xB
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4e3f75
        cmp dword ptr ds : [esi+0x648], 1
        jne public_4e3f75
        lea eax, ss:[esp+0x34]
        push eax
        push 0xBA2
        call public_422390
        add esp, 8
        push 0xBC4CCCCD
        push 0xC
        call public_5792b0
        add esp, 4
        test eax, eax
        setne cl
        push ecx
        mov ecx, esi
        call public_4e70e0
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e3e4d
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_4e3e4d
        add eax, 0xC
        test eax, eax
        je public_4e3e4d
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_4e3e4d
        mov edx, dword ptr ds : [edi+0x4C]
        and edx, 3
        cmp dl, 3
        jne public_4e3e4d
        test byte ptr ds : [edi+0xE0], 7
        mov ebx, edi
        mov dword ptr ss : [esp+0x18], ebx
        je public_4e3e71
        push 0xB71
        call public_421ed0
        add esp, 4
        lea ebx, ds:[esi+0x3B8]
        push 0x42340000
        mov ecx, ebx
        call public_40fa10
        push ebx
        call public_422910
        mov eax, dword ptr ds : [public_679bb4]
        mov dword ptr ss : [esp+0x10], eax
        movzx eax, al
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_5d8d40]
        call public_5b7ec0
        push eax
        call public_4104c0
        movzx ecx, byte ptr ss : [esp+0x15]
        mov dword ptr ss : [esp+0x1C], ecx
        mov byte ptr ss : [esp+0x18], al
        fild dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5d8d40]
        call public_5b7ec0
        push eax
        call public_4104c0
        movzx edx, byte ptr ss : [esp+0x1A]
        mov dword ptr ss : [esp+0x20], edx
        mov byte ptr ss : [esp+0x1D], al
        fild dword ptr ss : [esp+0x20]
        fmul dword ptr ds : [public_5d8d40]
        call public_5b7ec0
        push eax
        call public_4104c0
        mov byte ptr ss : [esp+0x22], al
        movzx eax, byte ptr ss : [esp+0x1F]
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5d8d40]
        call public_5b7ec0
        push eax
        call public_4104c0
        mov byte ptr ss : [esp+0x27], al
        mov ecx, dword ptr ss : [esp+0x24]
        lea edx, ss:[esp+0x20]
        push edx
        mov dword ptr ss : [esp+0x24], ecx
        call public_421ba0
        mov eax, dword ptr ds : [edi]
        add esp, 0x18
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call dword ptr ds : [eax+0x64]
        fstp dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e3e51
        lea ecx, ds:[eax-8]
        jmp public_4e3e53
        public_4e3e4d : nop
        xor ebx, ebx
        jmp public_4e3ea8
        public_4e3e51 : nop
        xor ecx, ecx
        public_4e3e53 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        push 0x10
        push 0x10
        push edx
        call dword ptr ds : [eax+0x10]
        push eax
        push ebx
        call public_423180
        mov ebx, dword ptr ss : [esp+0x2C]
        add esp, 0x14
        jmp public_4e3ea1
        public_4e3e71 : nop
        mov ecx, esi
        call public_4e7070
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e3e87
        lea ecx, ds:[eax-8]
        jmp public_4e3e89
        public_4e3e87 : nop
        xor ecx, ecx
        public_4e3e89 : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        push eax
        lea eax, ds:[esi+0x3B8]
        push eax
        lea ecx, ds:[esi+0x3A0]
        call public_406510
        public_4e3ea1 : nop
        mov ecx, esi
        call public_4e50d0
/*FIXUP public_4e3ea8 : nop
        push offset public_67dbf8 @0x4e3ea8*/
  FIXUP public_4e3ea8 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        call public_422950
        mov ecx, dword ptr ss : [esp+0x44]
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x3C]
        push 0x642
/*FIXUP push offset public_5d8d0c @0x4e3ec3*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d8d0c
        push ecx
        mov ecx, dword ptr ss : [esp+0x44]
        push edx
        push eax
        push ecx
        call public_421620
        mov ax, word ptr ds : [esi+0x534]
        mov edx, dword ptr ds : [public_5c6368]
        lea edi, ds:[esi+0x534]
        add esp, 0x1C
        cmp ax, word ptr ds : [edx]
        je public_4e3f75
        test ebx, ebx
        je public_4e3f75
        mov ecx, dword ptr ds : [ebx+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_4e3f75
        mov edx, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x1C]
        push ecx
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0xE0]
        test al, al
        jne public_4e3f46
        mov eax, dword ptr ds : [esi+0x398]
        test eax, eax
        je public_4e3f2c
        lea ecx, ds:[eax-8]
        jmp public_4e3f2e
        public_4e3f2c : nop
        xor ecx, ecx
        public_4e3f2e : nop
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x1C], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x20], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x24], eax
        public_4e3f46 : nop
        mov ecx, dword ptr ds : [esi+0x3B8]
        lea edx, ss:[esp+0x1C]
        push edx
        lea edx, ss:[esp+0x2C]
        lea eax, ds:[esi+0x3B8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x44]
        test al, al
        je public_4e3f75
        lea eax, ss:[esp+0x28]
        push eax
/*FIXUP push offset public_67dbf8 @0x4e3f69*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbf8
        mov ecx, edi
        call public_4e04f0
        public_4e3f75 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x4e3c90)
    }
}

#undef public_4e3e4d
#undef public_4e3e51
#undef public_4e3e53
#undef public_4e3e71
#undef public_4e3e87
#undef public_4e3e89
#undef public_4e3ea1
#undef public_4e3ea8
#undef public_4e3f2c
#undef public_4e3f2e
#undef public_4e3f46
#undef public_4e3f75
