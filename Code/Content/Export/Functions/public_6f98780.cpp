#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead6a0);
CLANG_FORWARD_PROC_SYMBOL(public_6eae440);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f30);
CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f357d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f69d50);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6f98780);
CLANG_FORWARD_PROC_SYMBOL(public_6f9faa0);
CLANG_FORWARD_PROC_SYMBOL(public_6f9fb60);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8370);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fb17fd);

#define public_6f987ff _public_6f987ff
#define public_6f98816 _public_6f98816
#define public_6f98871 _public_6f98871
#define public_6f98883 _public_6f98883
#define public_6f98889 _public_6f98889
#define public_6f98892 _public_6f98892
#define public_6f98920 _public_6f98920
#define public_6f98948 _public_6f98948
#define public_6f9896e _public_6f9896e
#define public_6f9897c _public_6f9897c
#define public_6f98980 _public_6f98980
#define public_6f989b0 _public_6f989b0
#define public_6f98a51 _public_6f98a51
#define public_6f98a58 _public_6f98a58
#define public_6f98a95 _public_6f98a95
#define public_6f98ac0 _public_6f98ac0
#define public_6f98b10 _public_6f98b10
#define public_6f98b27 _public_6f98b27
#define public_6f98b29 _public_6f98b29
#define public_6f98b4c _public_6f98b4c
#define public_6f98b4e _public_6f98b4e
#define public_6f98b58 _public_6f98b58

PROC_DECLARE(0x6f98780, internal_6f98780, public_6f98780);
extern "C" NAKED register_t __cdecl internal_6f98780()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fb17fd @0x6f98782*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fb17fd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x100
        push ebx
        push esi
        lea eax, ss:[esp+0xB]
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_6ead6a0
        xor ebx, ebx
/*FIXUP push offset public_6fbcbe8 @0x6f987ad*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fbcbe8
        mov dword ptr ss : [esp+0x114], ebx
        call dword ptr ds : [public_6fb3000]
        add esp, 4
        lea ecx, ss:[esp+0x18]
        push ecx
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x1C], eax
        call public_6eb5f30
        mov ecx, dword ptr ss : [esp+0x50]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f987ff
        lea edx, ss:[esp+0x18]
        push edx
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_6eae440
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x4C]
        call public_6eb5f30
        jmp public_6f98816
        public_6f987ff : nop
        lea ecx, ss:[esp+0x13]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x60]
        mov byte ptr ss : [esp+0x1B], bl
        call public_6fa6e80
        public_6f98816 : nop
        mov al, byte ptr ss : [esp+0xB]
        push ebp
        push edi
        push ebx
        push ebx
        lea ecx, ss:[esp+0x2C]
        mov byte ptr ss : [esp+0x2C], al
        call public_6f93790
        mov dword ptr ss : [esp+0x28], eax
        mov dword ptr ss : [esp+0x2C], ebx
        mov eax, dword ptr ss : [esp+0x128]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x54]
        push edx
        push eax
        mov byte ptr ss : [esp+0x124], 1
        call public_6f357d0
        mov edx, dword ptr ss : [esp+0x34]
        xor eax, eax
        mov ecx, 6
        lea edi, ss:[esp+0x98]
        rep stosd
        stosw 
        mov eax, dword ptr ds : [edx]
        add esp, 0xC
        cmp eax, edx
        je public_6f98889
        public_6f98871 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [ecx+0x24]
        cmp ecx, ebx
        je public_6f98883
        mov byte ptr ss : [esp+ecx+0x8C], 1
        public_6f98883 : nop
        mov eax, dword ptr ds : [eax]
        cmp eax, edx
        jne public_6f98871
        public_6f98889 : nop
        mov eax, 1
        mov dword ptr ss : [esp+0x14], eax
        public_6f98892 : nop
        cmp byte ptr ss : [esp+eax+0x8C], bl
        mov dword ptr ss : [esp+eax*4+0xA8], 0xFFFFFFFF
        je public_6f98980
        mov cl, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x40], cl
        mov dword ptr ss : [esp+0x44], ebx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x4C], ebx
        lea edx, ss:[esp+0x40]
        push edx
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ss:[esp+0x80]
        mov byte ptr ss : [esp+0x120], 2
        call public_6f9fb60
        push eax
        lea ecx, ss:[esp+0x64]
        push ecx
        mov ecx, offset public_6fd3cd4
        mov byte ptr ss : [esp+0x120], 3
        call public_6f9faa0
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x7C]
        mov byte ptr ss : [esp+0x118], 2
        call public_6eec8d0
        lea ecx, ss:[esp+0x40]
        mov byte ptr ss : [esp+0x118], 1
        call public_6eec8d0
        mov edx, dword ptr ds : [esi+0x14]
        xor ecx, ecx
        lea ecx, ds:[ecx]
        public_6f98920 : nop
        cmp edx, ebx
        je public_6f9897c
        mov eax, dword ptr ds : [esi+0x18]
        sub eax, edx
        sar eax, 2
        cmp ecx, eax
        jae public_6f9897c
        fld dword ptr ds : [edx+ecx*4]
        lea edi, ds:[ecx+1]
        fcomp dword ptr ss : [esp+0x124]
        fnstsw ax
        test ah, 0x41
        je public_6f98948
        mov ecx, edi
        jmp public_6f98920
        public_6f98948 : nop
        cmp edi, 1
        je public_6f9897c
        fld dword ptr ss : [esp+0x124]
        fsub dword ptr ds : [edx+ecx*4-4]
        fld dword ptr ds : [edx+ecx*4]
        fsub dword ptr ss : [esp+0x124]
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jnp public_6f9896e
        dec ecx
        public_6f9896e : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc ecx
        mov dword ptr ss : [esp+eax*4+0xA8], ecx
        jmp public_6f98980
        public_6f9897c : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_6f98980 : nop
        inc eax
        cmp eax, 0x19
        mov dword ptr ss : [esp+0x14], eax
        jle public_6f98892
        mov dl, byte ptr ss : [esp+0x13]
        xor ecx, ecx
        mov byte ptr ss : [esp+0x30], dl
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x38], ecx
        mov dword ptr ss : [esp+0x3C], ebx
        mov eax, 1
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ds:[ecx]
        public_6f989b0 : nop
        mov edi, dword ptr ss : [esp+eax*4+0xA8]
        cmp edi, 1
        jl public_6f98a95
        mov ebp, eax
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x68], al
        mov dword ptr ss : [esp+0x6C], ebx
        mov dword ptr ss : [esp+0x70], ebx
        mov dword ptr ss : [esp+0x74], ebx
        lea ecx, ss:[esp+0x68]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        lea ecx, ss:[esp+0x94]
        mov byte ptr ss : [esp+0x120], 5
        call public_6f9fb60
        push eax
        lea eax, ss:[esp+0x64]
        push eax
        mov ecx, offset public_6fd3cd4
        mov byte ptr ss : [esp+0x120], 6
        call public_6f9faa0
        mov esi, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x90]
        mov byte ptr ss : [esp+0x118], 5
        call public_6eec8d0
        lea ecx, ss:[esp+0x68]
        mov byte ptr ss : [esp+0x118], 4
        call public_6eec8d0
        mov esi, dword ptr ds : [esi+0x14]
        fld dword ptr ds : [esi+edi*4-4]
        fstp dword ptr ss : [esp+0x40]
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f98a51
        fld dword ptr ds : [edi*4+public_6fbcc58]
        jmp public_6f98a58
        public_6f98a51 : nop
        fld dword ptr ds : [edi*4+public_6fbcc7c]
        public_6f98a58 : nop
        mov ecx, dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0x38]
        lea edx, ss:[esp+0x78]
        push edx
        push 1
        mov dword ptr ss : [esp+0x80], ecx
        push eax
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x88], ebp
        mov dword ptr ss : [esp+0x8C], edi
        call public_6f69d50
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x38]
        public_6f98a95 : nop
        inc eax
        cmp eax, 0x19
        mov dword ptr ss : [esp+0x14], eax
        jle public_6f989b0
        mov eax, dword ptr ss : [esp+0x34]
        fld dword ptr ds : [public_6fb444c]
        cmp eax, ecx
        pop edi
        mov esi, ecx
        pop ebp
        je public_6f98b4c
        lea esp, ss:[esp]
        public_6f98ac0 : nop
        fadd dword ptr ds : [eax+0xC]
        add eax, 0x10
        cmp eax, ecx
        jne public_6f98ac0
        fst dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f98b4e
        call dword ptr ds : [public_6fb3370]
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp ecx, esi
        mov dword ptr ss : [esp+0x14], eax
        fild dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [public_6fb4448]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fstp st(0)
        fld dword ptr ds : [public_6fb444c]
        je public_6f98b27
        lea esp, ss:[esp]
        public_6f98b10 : nop
        fadd dword ptr ds : [ecx+0xC]
        fld dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_6f98b29
        add ecx, 0x10
        cmp ecx, esi
        jne public_6f98b10
        public_6f98b27 : nop
        mov ecx, esi
        public_6f98b29 : nop
        mov eax, dword ptr ss : [esp+0x30]
        fstp st(0)
        cmp ecx, eax
        je public_6f98b4e
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x118]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f98b58
        public_6f98b4c : nop
        fstp st(0)
        public_6f98b4e : nop
        mov edx, dword ptr ss : [esp+0x118]
        mov dword ptr ds : [edx+8], ebx
        public_6f98b58 : nop
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x110], 1
        call public_6eec8d0
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x11C], bl
        call public_6fa8370
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        call public_6fa8fe0
        add esp, 4
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x110], 0xFFFFFFFF
        call public_6eec8d0
        mov ecx, dword ptr ss : [esp+0x108]
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10C
        ret 
        UNREACHABLE_TRAP(0x6f98780)
    }
}

#undef public_6f987ff
#undef public_6f98816
#undef public_6f98871
#undef public_6f98883
#undef public_6f98889
#undef public_6f98892
#undef public_6f98920
#undef public_6f98948
#undef public_6f9896e
#undef public_6f9897c
#undef public_6f98980
#undef public_6f989b0
#undef public_6f98a51
#undef public_6f98a58
#undef public_6f98a95
#undef public_6f98ac0
#undef public_6f98b10
#undef public_6f98b27
#undef public_6f98b29
#undef public_6f98b4c
#undef public_6f98b4e
#undef public_6f98b58
