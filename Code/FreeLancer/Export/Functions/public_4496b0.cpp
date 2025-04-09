#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_412050);
CLANG_FORWARD_PROC_SYMBOL(public_41a0f0);
CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_41dde0);
CLANG_FORWARD_PROC_SYMBOL(public_4356d0);
CLANG_FORWARD_PROC_SYMBOL(public_43a2b0);
CLANG_FORWARD_PROC_SYMBOL(public_43a3d0);
CLANG_FORWARD_PROC_SYMBOL(public_43a510);
CLANG_FORWARD_PROC_SYMBOL(public_447bb0);
CLANG_FORWARD_PROC_SYMBOL(public_448a60);
CLANG_FORWARD_PROC_SYMBOL(public_4496b0);
CLANG_FORWARD_PROC_SYMBOL(public_4498b0);
CLANG_FORWARD_PROC_SYMBOL(public_44a030);
CLANG_FORWARD_PROC_SYMBOL(public_44a3a0);
CLANG_FORWARD_PROC_SYMBOL(public_44ced0);
CLANG_FORWARD_PROC_SYMBOL(public_555bf0);
CLANG_FORWARD_PROC_SYMBOL(public_556be0);
CLANG_FORWARD_PROC_SYMBOL(public_556cd0);
CLANG_FORWARD_PROC_SYMBOL(public_556ce0);
CLANG_FORWARD_PROC_SYMBOL(public_556e00);
CLANG_FORWARD_PROC_SYMBOL(public_556f10);
CLANG_FORWARD_PROC_SYMBOL(public_556fd0);
CLANG_FORWARD_PROC_SYMBOL(public_558bf0);
CLANG_FORWARD_PROC_SYMBOL(public_558dd0);
CLANG_FORWARD_PROC_SYMBOL(public_5592a0);
CLANG_FORWARD_PROC_SYMBOL(public_5760d0);

#define public_449711 _public_449711
#define public_449721 _public_449721
#define public_449732 _public_449732
#define public_44973d _public_44973d
#define public_44976c _public_44976c
#define public_449783 _public_449783
#define public_44978b _public_44978b

PROC_DECLARE(0x4496b0, internal_4496b0, public_4496b0);
extern "C" NAKED register_t __cdecl internal_4496b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x30
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x3C]
        push edi
        mov dword ptr ds : [esi+0x38], ecx
        push eax
        mov ecx, offset public_668708
        mov dword ptr ds : [esi+0x34], eax
        call public_43a2b0
        mov edx, dword ptr ds : [esi+0x38]
        push edx
        mov ecx, offset public_668708
        mov dword ptr ds : [esi+0x3C], eax
        call public_43a3d0
        or edi, 0xFFFFFFFF
        mov ecx, esi
        mov dword ptr ds : [esi+0x40], eax
        mov dword ptr ds : [esi+0x44], edi
        mov dword ptr ds : [esi+0x48], edi
        call public_44a030
        mov eax, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [esi+0x40]
        push eax
        call dword ptr ds : [public_5c6230]
        mov eax, dword ptr ds : [esi+0x48]
        cmp eax, edi
        je public_449711
        push eax
        lea ecx, ds:[esi+0x4C]
        call public_555bf0
        public_449711 : nop
        push ebx
        mov ecx, esi
        call public_4498b0
        xor edi, edi
        lea ebx, ds:[esi+0xE4]
        public_449721 : nop
        mov ecx, dword ptr ds : [esi+0x40]
        mov edx, dword ptr ds : [ecx+0x148]
        test edx, edx
        jne public_449732
        xor eax, eax
        jmp public_44973d
        public_449732 : nop
        mov eax, dword ptr ds : [ecx+0x14C]
        sub eax, edx
        sar eax, 2
        public_44973d : nop
        cmp edi, eax
        jge public_44976c
        mov ecx, dword ptr ds : [ecx+0x148]
        mov eax, dword ptr ds : [ecx+edi*4]
        xor edx, edx
        mov dl, byte ptr ds : [eax+0xA4]
        lea ecx, ds:[eax+0x30]
        push edx
        push ecx
        lea edx, ds:[eax+0x3C]
        push edx
        push eax
        call public_556fd0
        add esp, 0x10
        mov dword ptr ds : [ebx], eax
        inc edi
        add ebx, 4
        jmp public_449721
        public_44976c : nop
        mov eax, dword ptr ds : [esi+0x40]
        mov ecx, dword ptr ds : [eax+0x148]
        add eax, 0x144
        test ecx, ecx
        pop ebx
        jne public_449783
        xor eax, eax
        jmp public_44978b
        public_449783 : nop
        mov eax, dword ptr ds : [eax+8]
        sub eax, ecx
        sar eax, 2
        public_44978b : nop
        mov dword ptr ds : [esi+0x2E4], eax
        call public_556be0
        mov dword ptr ds : [esi+0x500], eax
        mov eax, dword ptr ds : [esi+0x40]
        add eax, 0x1CC
        push eax
        add eax, 0xC
        push eax
        lea ecx, ss:[esp+0x10]
        call public_447bb0
        mov ecx, dword ptr ds : [esi+0x500]
        lea eax, ss:[esp+8]
        push eax
        push ecx
        call public_556cd0
        mov edx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edx+0x1FC]
        mov ecx, dword ptr ds : [esi+0x500]
        push eax
        push ecx
        call public_556ce0
        mov edx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edx+0x200]
        mov ecx, dword ptr ds : [esi+0x500]
        push eax
        push ecx
        call public_556e00
        mov edx, dword ptr ds : [esi+0x40]
        mov eax, dword ptr ds : [edx+0x204]
        mov ecx, dword ptr ds : [esi+0x500]
        push eax
        push ecx
        call public_556f10
        mov edx, dword ptr ds : [esi+0x40]
        add esp, 0x20
        add edx, 0x174
        push edx
        lea ecx, ds:[esi+0x504]
        call public_4356d0
        mov ecx, esi
        call public_44a3a0
        mov eax, dword ptr ds : [esi+0x34]
        push eax
        mov ecx, offset public_668708
        call public_43a510
        push eax
        push esi
        lea ecx, ds:[esi+0x1020]
        call public_448a60
        mov ecx, esi
        call public_44ced0
        fld dword ptr ds : [public_61650c]
        fdivr qword ptr ds : [public_5c89b8]
        push ecx
        fstp dword ptr ss : [esp]
        push 0
        call public_412050
        push 0x40400000
        push 0
        call public_41a0f0
        push 1
        call public_41dda0
        add esp, 0x14
        push 0xF
        lea ecx, ds:[esi+0x30]
        call public_5760d0
        push 0
/*FIXUP push offset public_5cb128 @0x44987f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb128
        call public_41dde0
        add esp, 8
        call public_558bf0
        call public_558dd0
        call public_5592a0
        pop edi
        pop esi
        add esp, 0x30
        ret 8
        UNREACHABLE_TRAP(0x4496b0)
    }
}

#undef public_449711
#undef public_449721
#undef public_449732
#undef public_44973d
#undef public_44976c
#undef public_449783
#undef public_44978b
