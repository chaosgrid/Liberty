#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_459950);
CLANG_FORWARD_PROC_SYMBOL(public_45eeb0);
CLANG_FORWARD_PROC_SYMBOL(public_46ba60);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_4a6630);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcc8a);

#define public_4a6668 _public_4a6668
#define public_4a679c _public_4a679c
#define public_4a67d1 _public_4a67d1
#define public_4a6804 _public_4a6804
#define public_4a6807 _public_4a6807
#define public_4a68f0 _public_4a68f0
#define public_4a6902 _public_4a6902
#define public_4a6937 _public_4a6937

PROC_DECLARE(0x4a6630, internal_4a6630, public_4a6630);
extern "C" NAKED register_t __cdecl internal_4a6630()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bcc8a @0x4a6638*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcc8a
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x44
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x5C]
        push esi
        mov ebx, 1
        cmp ebp, ebx
        push edi
        mov edi, dword ptr ss : [esp+0x68]
        mov esi, ecx
        je public_4a6668
        push edi
        call public_459950
        add esp, 4
        public_4a6668 : nop
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ds : [esi+0x334], ecx
        mov dword ptr ds : [esi+0x330], eax
        mov edx, dword ptr ds : [public_6119f8]
        push edx
/*FIXUP push offset public_66fc60 @0x4a6683*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        mov ecx, edi
        call public_41c970
        lea eax, ss:[esp+0x64]
        push eax
        lea ecx, ss:[esp+0x20]
        call public_46ba60
        push 0x9CA4
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x60], 0
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x5C], bl
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x68], eax
        mov ecx, dword ptr ss : [esp+0x20]
        lea eax, ss:[esp+0x68]
        push eax
        push ecx
        lea edx, ss:[esp+0x78]
        push edx
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x68], 2
        call public_46c800
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x5C], bl
        call public_45eeb0
        lea ecx, ss:[esp+0x10]
        mov byte ptr ss : [esp+0x5C], 0
        call dword ptr ds : [public_5c62b4]
        push 0
        lea eax, ss:[esp+0x20]
        push eax
/*FIXUP push offset public_66fc60 @0x4a6703*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
/*FIXUP push offset public_66fc60 @0x4a6712*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_66fc60
        call public_57e2c0
        mov edi, dword ptr ds : [esi+0x34C]
        add esp, 0x10
        push 0
        push 0
        mov ecx, edi
        call public_5798b0
        mov ecx, edi
        call public_57b370
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_57b3e0
        mov ecx, dword ptr ds : [esi+0x348]
        mov edx, dword ptr ds : [ecx]
        mov eax, 0x651
        mov dword ptr ss : [esp+0x4C], eax
        mov dword ptr ss : [esp+0x50], eax
        push 0
        mov dword ptr ss : [esp+0x44], 0x546
        mov dword ptr ss : [esp+0x48], 0x650
        mov dword ptr ss : [esp+0x4C], 0x547
        mov eax, dword ptr ss : [esp+ebp*4+0x44]
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        test ebp, ebp
        mov al, 0xFC
        mov edx, 3
        je public_4a67d1
        cmp ebp, edx
        je public_4a67d1
        cmp ebp, ebx
        je public_4a67d1
        cmp ebp, 2
        je public_4a679c
        cmp ebp, 4
        jne public_4a6807
        public_4a679c : nop
        mov ecx, dword ptr ds : [esi+0x33C]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x340]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x354]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x358]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x35C]
        or byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x360]
        jmp public_4a6804
        public_4a67d1 : nop
        mov ecx, dword ptr ds : [esi+0x35C]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x360]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x33C]
        or byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x340]
        or byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x354]
        or byte ptr ds : [ecx+0x6C], dl
        mov ecx, dword ptr ds : [esi+0x358]
        public_4a6804 : nop
        or byte ptr ds : [ecx+0x6C], dl
        public_4a6807 : nop
        mov cl, byte ptr ss : [esp+0x6C]
        test cl, cl
        je public_4a68f0
        mov ecx, dword ptr ds : [esi+0x354]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x358]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x344]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ds : [esi+0x33C]
        push 0
        lea eax, ss:[esp+0x2C]
        push eax
        mov byte ptr ds : [esi+0x338], bl
        mov edx, dword ptr ds : [ecx]
        push 7
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x33C]
        push 0
        lea eax, ss:[esp+0x14]
        push eax
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0xBE570A3D
        mov dword ptr ss : [esp+0x20], 0
        mov edx, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ds : [esi+0x340]
        mov edx, dword ptr ds : [ecx]
        push 0
        fstp dword ptr ss : [esp+0x70]
        lea eax, ss:[esp+0x38]
        fld dword ptr ss : [esp+0x18]
        push eax
        fsub dword ptr ss : [esp+0x34]
        push 7
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x7C]
        call dword ptr ds : [edx+0xA8]
        fld dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [esi+0x340]
        fadd dword ptr ss : [esp+0x6C]
        push 0
        fld dword ptr ss : [esp+0x3C]
        lea eax, ss:[esp+0x44]
        fadd dword ptr ss : [esp+0x6C]
        push eax
        fld dword ptr ss : [esp+0x78]
        push 6
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x50]
        fstp dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xA8]
        public_4a68f0 : nop
        mov ebx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ds : [ebx]
        cmp edi, ebx
        mov dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        je public_4a6937
        public_4a6902 : nop
        mov esi, edi
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edx
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [eax+4], ecx
        lea ecx, ds:[esi+8]
        call public_45eeb0
        push esi
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        dec ecx
        cmp edi, ebx
        mov dword ptr ss : [esp+0x24], ecx
        jne public_4a6902
        mov ebx, dword ptr ss : [esp+0x20]
        public_4a6937 : nop
        push ebx
        call public_5b7e1d
        mov ecx, dword ptr ss : [esp+0x58]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x50
        ret 0x14
        UNREACHABLE_TRAP(0x4a6630)
    }
}

#undef public_4a6668
#undef public_4a679c
#undef public_4a67d1
#undef public_4a6804
#undef public_4a6807
#undef public_4a68f0
#undef public_4a6902
#undef public_4a6937
