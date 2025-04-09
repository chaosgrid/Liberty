#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46ea80);
CLANG_FORWARD_PROC_SYMBOL(public_571bd0);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_579970);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57b470);
CLANG_FORWARD_PROC_SYMBOL(public_57db50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c35ae);

#define public_571c28 _public_571c28
#define public_571d12 _public_571d12
#define public_571d6f _public_571d6f
#define public_571e78 _public_571e78
#define public_571ee4 _public_571ee4
#define public_571ef6 _public_571ef6
#define public_571f2d _public_571f2d

PROC_DECLARE(0x571bd0, internal_571bd0, public_571bd0);
extern "C" NAKED register_t __cdecl internal_571bd0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5c35ae @0x571bd8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c35ae
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0xD0]
        push edi
        call public_57b370
        mov al, byte ptr ss : [esp+0x38]
        test al, al
        je public_571c28
        mov ecx, dword ptr ds : [esi+0xD0]
        lea eax, ss:[esp+0x10]
        push eax
        lea edx, ss:[esp+0x3C]
        push edx
        call public_579970
        mov eax, dword ptr ss : [esp+0x38]
        mov ecx, dword ptr ds : [esi+0xD0]
        push 0
        push eax
        call public_5798b0
        public_571c28 : nop
        mov edi, dword ptr ds : [public_5c62b8]
        push 0x4433
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0xD0]
        push eax
        mov dword ptr ss : [esp+0x30], 0
        call public_57b470
        mov ebp, dword ptr ds : [public_5c62b4]
        or ebx, 0xFFFFFFFF
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x2C], ebx
        call ebp
        mov edx, dword ptr ds : [public_5c62cc]
        lea ecx, ds:[esi+0x188]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x10], edx
        mov ecx, dword ptr ds : [esi+0xD0]
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x30], 1
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [public_5c62c8]
        mov ecx, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ds : [esi+0xD0]
        lea edx, ss:[esp+0x38]
        push edx
        mov dword ptr ss : [esp+0x30], 2
        call public_57b470
        push 0x76EC
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x30], ebx
        call edi
        mov ecx, dword ptr ds : [esi+0xD0]
        push eax
        mov dword ptr ss : [esp+0x30], 3
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x2C], ebx
        call ebp
        lea eax, ss:[esp+0x38]
        push eax
        lea ecx, ss:[esp+0x1C]
        call public_46ba60
        mov ebx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [ebx+0x58]
        test eax, eax
        mov ecx, dword ptr ds : [ebx+0x5C]
        mov dword ptr ss : [esp+0x2C], 4
        jne public_571d12
        mov eax, dword ptr ds : [public_5c700c]
        public_571d12 : nop
        push 0
        lea edx, ss:[esp+0x1C]
        push edx
        push ecx
        push eax
        call public_57db50
        mov ecx, dword ptr ds : [esi+0xD0]
        add esp, 0x10
        lea eax, ss:[esp+0x18]
        push eax
        call public_57b3e0
        mov ecx, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ds : [esi+0xD0]
        lea edx, ss:[esp+0x34]
        push edx
        mov byte ptr ss : [esp+0x30], 5
        call public_57b470
        mov al, byte ptr ds : [ebx+0x95]
        test al, al
        mov byte ptr ss : [esp+0x2C], 4
        je public_571d6f
        mov al, byte ptr ds : [ebx+0x94]
        test al, al
        je public_571ee4
        public_571d6f : nop
        push 0x4433
        lea ecx, ss:[esp+0x14]
        call edi
        mov ecx, dword ptr ds : [esi+0xD0]
        push eax
        mov byte ptr ss : [esp+0x30], 6
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x2C], 4
        call ebp
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x194]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0xD0]
        lea edx, ss:[esp+0x10]
        push edx
        mov byte ptr ss : [esp+0x30], 7
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x2C], 4
        call dword ptr ds : [public_5c62c8]
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x34], eax
        mov ecx, dword ptr ds : [esi+0xD0]
        lea edx, ss:[esp+0x34]
        push edx
        mov byte ptr ss : [esp+0x30], 8
        call public_57b470
        push 0x76EC
        lea ecx, ss:[esp+0x14]
        mov byte ptr ss : [esp+0x30], 4
        call edi
        mov ecx, dword ptr ds : [esi+0xD0]
        push eax
        mov byte ptr ss : [esp+0x30], 9
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x2C], 4
        call ebp
        mov al, byte ptr ds : [ebx+0x95]
        test al, al
        jne public_571e78
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x1DC]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0xD0]
        lea edx, ss:[esp+0x10]
        push edx
        mov byte ptr ss : [esp+0x30], 0xA
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x2C], 4
        call dword ptr ds : [public_5c62c8]
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x34], eax
        mov ecx, dword ptr ds : [esi+0xD0]
        lea edx, ss:[esp+0x34]
        push edx
        mov byte ptr ss : [esp+0x30], 0xB
        call public_57b470
        public_571e78 : nop
        mov al, byte ptr ds : [ebx+0x94]
        test al, al
        je public_571ee4
        mov ecx, dword ptr ds : [public_5c62cc]
        lea eax, ds:[esi+0x1D0]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x10], ecx
        mov ecx, dword ptr ds : [esi+0xD0]
        lea edx, ss:[esp+0x10]
        push edx
        mov byte ptr ss : [esp+0x30], 0xC
        call public_57b470
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x2C], 4
        call dword ptr ds : [public_5c62c8]
        mov eax, dword ptr ds : [public_5c62d8]
        mov dword ptr ss : [esp+0x34], eax
        mov esi, dword ptr ds : [esi+0xD0]
        lea ecx, ss:[esp+0x34]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x30], 0xD
        call public_57b470
        mov edx, dword ptr ds : [public_5c6300]
        mov dword ptr ss : [esp+0x34], edx
        public_571ee4 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        je public_571f2d
        public_571ef6 : nop
        mov esi, edi
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [esi+4]
        push 0
        lea ecx, ds:[esi+8]
        mov dword ptr ds : [edx+4], eax
        call public_46ea80
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x20], ecx
        jne public_571ef6
        mov ebx, dword ptr ss : [esp+0x1C]
        public_571f2d : nop
        push ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x571bd0)
    }
}

#undef public_571c28
#undef public_571d12
#undef public_571d6f
#undef public_571e78
#undef public_571ee4
#undef public_571ef6
#undef public_571f2d
