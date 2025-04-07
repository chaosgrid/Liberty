#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf7720);
CLANG_FORWARD_PROC_SYMBOL(public_6d06cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6d43650);

#define public_6ceba67 _public_6ceba67
#define public_6ceba6b _public_6ceba6b
#define public_6cebab8 _public_6cebab8
#define public_6cebae2 _public_6cebae2
#define public_6cebb7b _public_6cebb7b
#define public_6cebb83 _public_6cebb83
#define public_6cebb9b _public_6cebb9b
#define public_6cebba3 _public_6cebba3
#define public_6cebc1d _public_6cebc1d
#define public_6cebc55 _public_6cebc55
#define public_6cebcb5 _public_6cebcb5
#define public_6cebcf0 _public_6cebcf0
#define public_6cebcfc _public_6cebcfc
#define public_6cebd02 _public_6cebd02
#define public_6cebd1d _public_6cebd1d

PROC_DECLARE(0x6ceba40, internal_6ceba40, public_6ceba40);
extern "C" NAKED register_t __cdecl internal_6ceba40()
{
    __asm
    {
        sub esp, 0x54
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x10]
        xor ebp, ebp
        cmp eax, ebp
        push esi
        push edi
        je public_6ceba67
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        mov dword ptr ss : [esp+0x10], eax
        je public_6ceba6b
        public_6ceba67 : nop
        mov dword ptr ss : [esp+0x10], ebp
        public_6ceba6b : nop
        mov esi, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0x10]
        xor edx, edx
        mov dx, word ptr ds : [esi]
        lea ecx, ds:[eax+0x144]
        push edx
        call dword ptr ds : [public_6d64264]
        mov edi, eax
        cmp dword ptr ds : [esi+8], ebp
        je public_6cebae2
        mov eax, dword ptr ds : [ebx+0x10]
        cmp eax, ebp
        je public_6cebab8
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x103
        cmp ecx, 0x103
        jne public_6cebab8
        mov eax, dword ptr ds : [ebx+0x64]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x60]
        push eax
        push edx
        lea edx, ss:[esp+0x1C]
        push edx
        call public_6cf7720
        public_6cebab8 : nop
        cmp dword ptr ds : [esi+8], 4
        jne public_6cebae2
/*FIXUP push offset public_6d65680 @0x6cebabe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65680
        push 0xAF5
/*FIXUP push offset public_6d654b0 @0x6cebac8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d654b0
        mov eax, 0x100002
/*FIXUP push offset public_6d65494 @0x6cebad2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6d65494
        push eax
        mov eax, dword ptr ds : [public_6d64a44]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_6cebae2 : nop
        mov ecx, dword ptr ds : [ebx+0x28]
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        mov dword ptr ss : [esp+0x2C], ebp
        mov dword ptr ss : [esp+0x30], ebp
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        call public_6d06cd0
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [ecx+0x14]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], edx
        call dword ptr ds : [eax+0x20]
        mov ecx, edi
        mov dword ptr ss : [esp+0x1C], eax
        call dword ptr ds : [public_6d642e4]
        mov ecx, dword ptr ss : [esp+0x68]
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], edx
        call dword ptr ds : [public_6d64210]
        fsub dword ptr ds : [esi+4]
        mov ecx, edi
        fstp dword ptr ss : [esp+0x34]
        call dword ptr ds : [public_6d642ac]
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6cebb7b
        fld dword ptr ss : [esp+0x34]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x38]
        jmp public_6cebb83
        public_6cebb7b : nop
        mov dword ptr ss : [esp+0x38], 0
        public_6cebb83 : nop
        fcom dword ptr ds : [public_6d65188]
        fnstsw ax
        test ah, 0x44
        jnp public_6cebb9b
        fld dword ptr ds : [esi+4]
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        jmp public_6cebba3
        public_6cebb9b : nop
        mov dword ptr ss : [esp+0x3C], 0
        public_6cebba3 : nop
        lea eax, ss:[esp+0x1C]
        fstp st(0)
        push eax
        push 0xD
        call public_6d43650
        mov ecx, dword ptr ss : [esp+0x18]
        add esp, 8
        call dword ptr ds : [public_6d6422c]
        cmp eax, ebp
        je public_6cebc1d
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x40], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x48], ecx
        mov ecx, dword ptr ss : [esp+0x30]
        mov dword ptr ss : [esp+0x44], edx
        mov edx, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x54], ecx
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x50], edx
        mov edx, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x5C], ecx
        lea ecx, ss:[esp+0x40]
        mov dword ptr ss : [esp+0x58], edx
        mov edx, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x18], ecx
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        mov dword ptr ss : [esp+0x50], ebp
        mov dword ptr ss : [esp+0x18], ebp
        call dword ptr ds : [edx]
        public_6cebc1d : nop
        mov ecx, edi
        call dword ptr ds : [public_6d64210]
        fcomp dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x44
        jnp public_6cebd02
        mov ebp, dword ptr ds : [public_6d64214]
        mov ecx, edi
        call ebp
        mov edx, dword ptr ds : [eax+4]
        mov esi, dword ptr ds : [edx]
        mov ecx, edi
        call ebp
        mov eax, dword ptr ds : [eax+4]
        cmp esi, eax
        mov dword ptr ss : [esp+0x10], eax
        je public_6cebcfc
        public_6cebc55 : nop
        mov ecx, edi
        call dword ptr ds : [public_6d64210]
        mov ebp, dword ptr ss : [esp+0x6C]
        fcomp dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 0x41
        jne public_6cebcb5
        mov ecx, edi
        call dword ptr ds : [public_6d64210]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jne public_6cebcf0
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 1
        jne public_6cebcf0
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ebx]
        push 0xBF800000
        push ecx
        xor ecx, ecx
        mov cx, word ptr ds : [edx+4]
        lea edx, ds:[esi+8]
        push ecx
        mov ecx, dword ptr ss : [esp+0x74]
        push edx
        mov edx, dword ptr ds : [ecx+0x14]
        push edx
        mov ecx, ebx
        call dword ptr ds : [eax+0x1E4]
        jmp public_6cebcf0
        public_6cebcb5 : nop
        fld dword ptr ds : [esi+0x10]
        fcomp dword ptr ss : [ebp+4]
        fnstsw ax
        test ah, 5
        jp public_6cebcf0
        mov ecx, edi
        call dword ptr ds : [public_6d64210]
        fcomp dword ptr ds : [esi+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_6cebcf0
        mov ecx, dword ptr ds : [esi+0xC]
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [ebx]
        push ecx
        xor ecx, ecx
        mov cx, word ptr ds : [edx+4]
        lea edx, ds:[esi+8]
        push ecx
        push edx
        mov ecx, ebx
        call dword ptr ds : [eax+0x1E8]
        public_6cebcf0 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x10]
        jne public_6cebc55
        public_6cebcfc : nop
        mov esi, dword ptr ss : [esp+0x6C]
        xor ebp, ebp
        public_6cebd02 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x1EC]
        test al, al
        je public_6cebd1d
        mov ecx, dword ptr ss : [esp+0x68]
        cmp dword ptr ds : [ecx+0x10], 0x10
        jge public_6cebd1d
        mov dword ptr ds : [esi+8], ebp
        public_6cebd1d : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        mov ecx, edi
        call dword ptr ds : [public_6d642e0]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x54
        ret 8
        UNREACHABLE_TRAP(0x6ceba40)
    }
}

#undef public_6ceba67
#undef public_6ceba6b
#undef public_6cebab8
#undef public_6cebae2
#undef public_6cebb7b
#undef public_6cebb83
#undef public_6cebb9b
#undef public_6cebba3
#undef public_6cebc1d
#undef public_6cebc55
#undef public_6cebcb5
#undef public_6cebcf0
#undef public_6cebcfc
#undef public_6cebd02
#undef public_6cebd1d
