#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfe80);
CLANG_FORWARD_PROC_SYMBOL(public_6ed1670);
CLANG_FORWARD_PROC_SYMBOL(public_6f14e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f1df30);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e390);
CLANG_FORWARD_PROC_SYMBOL(public_6f1e5e0);
CLANG_FORWARD_PROC_SYMBOL(public_6f1fa00);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f66ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6f67090);
CLANG_FORWARD_PROC_SYMBOL(public_6f68e30);
CLANG_FORWARD_PROC_SYMBOL(public_6f7b0f0);
CLANG_FORWARD_PROC_SYMBOL(public_6f93460);
CLANG_FORWARD_PROC_SYMBOL(public_6f93790);
CLANG_FORWARD_PROC_SYMBOL(public_6fa7200);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6fad878);

#define public_6f14eb5 _public_6f14eb5
#define public_6f14ee0 _public_6f14ee0
#define public_6f14f06 _public_6f14f06
#define public_6f14f15 _public_6f14f15
#define public_6f14f36 _public_6f14f36
#define public_6f14f45 _public_6f14f45
#define public_6f15020 _public_6f15020
#define public_6f1507d _public_6f1507d
#define public_6f150bd _public_6f150bd
#define public_6f150c1 _public_6f150c1
#define public_6f150f0 _public_6f150f0
#define public_6f15116 _public_6f15116
#define public_6f15119 _public_6f15119
#define public_6f15155 _public_6f15155
#define public_6f15168 _public_6f15168
#define public_6f15193 _public_6f15193
#define public_6f15210 _public_6f15210
#define public_6f15245 _public_6f15245
#define public_6f15248 _public_6f15248
#define public_6f1525d _public_6f1525d
#define public_6f15261 _public_6f15261
#define public_6f1526d _public_6f1526d
#define public_6f15281 _public_6f15281
#define public_6f152f4 _public_6f152f4
#define public_6f1531e _public_6f1531e
#define public_6f15327 _public_6f15327

PROC_DECLARE(0x6f14e80, internal_6f14e80, public_6f14e80);
extern "C" NAKED register_t __cdecl internal_6f14e80()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fad878 @0x6f14e82*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fad878
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x80
        push ebx
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x9C]
        push ebp
        push esi
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        push edi
        mov dword ptr ss : [esp+0x1C], ebx
        je public_6f15327
        public_6f14eb5 : nop
        mov ebp, dword ptr ss : [esp+0xA0]
        mov edi, dword ptr ss : [ebp]
        lea eax, ss:[esp+0x18]
        push eax
        lea ecx, ds:[edi+0x17C]
        call public_6f1df30
        mov eax, dword ptr ds : [edi+0x180]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_6f14f06
        lea ecx, ds:[ecx]
        public_6f14ee0 : nop
        mov ecx, dword ptr ds : [ecx+8]
        cmp ecx, dword ptr ds : [esi+0x30]
        je public_6f14f15
        push 0
        lea edx, ss:[esp+0x28]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6f68e30
        mov eax, dword ptr ds : [edi+0x180]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        jne public_6f14ee0
        public_6f14f06 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [ebx+0x9C]
        jne public_6f14eb5
        jmp public_6f15327
        public_6f14f15 : nop
        fld dword ptr ds : [public_6fb8588]
        mov eax, dword ptr ss : [ebp]
        fstp dword ptr ds : [eax+0x1BC]
        mov eax, dword ptr ds : [esi+0x3C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov ecx, dword ptr ss : [ebp]
        mov ebx, dword ptr ds : [ecx+0x154]
        je public_6f14f45
        public_6f14f36 : nop
        cmp ebx, dword ptr ds : [edi+0xC]
        je public_6f1507d
        mov edi, dword ptr ds : [edi]
        cmp edi, eax
        jne public_6f14f36
        public_6f14f45 : nop
        mov ecx, dword ptr ds : [esi+0x34]
        push ecx
        lea edx, ds:[esi+0xC]
        push edx
        lea eax, ss:[esp+0x58]
/*FIXUP push offset public_6fb8acc @0x6f14f51*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb8acc
        push eax
        call dword ptr ds : [public_6fb3360]
        mov edi, dword ptr ds : [public_6fb3030]
        add esp, 0x10
        lea ecx, ss:[esp+0x38]
        call edi
        lea ecx, ss:[esp+0x40]
        call edi
        lea ecx, ss:[esp+0x13]
        push ecx
        lea ecx, ss:[esp+0x48]
        call public_6f93460
        mov edi, dword ptr ds : [public_6fb3000]
        lea edx, ss:[esp+0x50]
        push edx
        mov dword ptr ss : [esp+0x9C], 0
        call edi
        mov dword ptr ss : [esp+0x3C], eax
        lea eax, ss:[esp+0x54]
        push eax
        call edi
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ss : [esp+0x48], eax
        add esp, 8
        mov dword ptr ss : [esp+0x3C], ebx
        mov eax, dword ptr ds : [ecx+4]
        lea edx, ss:[esp+0x18]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x48]
        push edx
        push eax
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x50]
        call public_6f1e390
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [ecx+0x180]
        add ecx, 0x17C
        lea edx, ss:[esp+0x40]
        push edx
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6f1e390
        mov eax, dword ptr ds : [esi+0x3C]
        lea ecx, ds:[esi+0x38]
        lea edx, ss:[esp+0x38]
        push edx
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6f1e5e0
        mov eax, dword ptr ds : [esi+0x34]
        inc eax
        lea ecx, ss:[esp+0x44]
        mov dword ptr ds : [esi+0x34], eax
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        call public_6f15350
        public_6f15020 : nop
        mov edi, dword ptr ds : [esi+0x4C]
        inc edi
        mov dword ptr ds : [esi+0x4C], edi
        mov eax, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [eax+0x34]
        mov edx, edi
        cmp ecx, edx
        jne public_6f15327
        test dword ptr ds : [eax+0x8C], 0x3FFFFFFF
        je public_6f15281
        lea edx, ss:[esp+0x13]
        push edx
        lea ecx, ss:[esp+0x3C]
        call public_6f93460
        mov eax, dword ptr ds : [esi+0x3C]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x98], 1
        mov dword ptr ss : [esp+0x14], edi
        je public_6f15168
        mov eax, dword ptr ss : [esp+0x1C]
        lea ebx, ds:[eax+0xEC]
        jmp public_6f150c1
        public_6f1507d : nop
        mov edx, dword ptr ds : [ecx+0x180]
        lea eax, ds:[edi+0x10]
        add ecx, 0x17C
        push eax
        push edx
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6f1e390
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [edi+0x18]
        lea ecx, ds:[edi+0x14]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        lea eax, ss:[esp+0x2C]
        push eax
        call public_6f1e390
        jmp public_6f15020
        public_6f150bd : nop
        mov edi, dword ptr ss : [esp+0x14]
        public_6f150c1 : nop
        add edi, 0x10
        push edi
        mov ecx, ebx
        call public_6fa7200
        push edi
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], eax
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        je public_6f15155
        mov edx, dword ptr ss : [esp+0x1C]
        lea ebp, ds:[edx+0xA4]
        lea ebx, ds:[ebx]
        public_6f150f0 : nop
        lea eax, ds:[ecx+0x10]
        push eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, ebp
        call public_6f7b0f0
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx+0xA8]
        mov ecx, dword ptr ss : [esp+0x20]
        cmp ecx, eax
        jne public_6f15116
        xor eax, eax
        jmp public_6f15119
        public_6f15116 : nop
        mov eax, dword ptr ds : [ecx+0x10]
        public_6f15119 : nop
        lea edx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ss : [esp+0x3C]
        push edx
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x44]
        call public_6f1e390
        lea ecx, ss:[esp+0x18]
        call public_6f1fa00
        push edi
        mov ecx, ebx
        call public_6ed1670
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        jne public_6f150f0
        mov ebp, dword ptr ss : [esp+0xA0]
        public_6f15155 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [edx]
        cmp eax, dword ptr ds : [esi+0x3C]
        mov dword ptr ss : [esp+0x14], eax
        jne public_6f150bd
        public_6f15168 : nop
        mov eax, dword ptr ss : [esp+0x40]
        test eax, eax
        je public_6f15261
        mov eax, dword ptr ds : [esi+0x44]
        mov ecx, dword ptr ds : [eax+0x48]
        lea edi, ds:[eax+0x44]
        mov eax, dword ptr ds : [ecx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], eax
        je public_6f15245
        public_6f15193 : nop
        fld dword ptr ss : [esp+0x14]
        push 0
        fadd dword ptr ds : [eax+0x2C]
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x20]
        fstp dword ptr ss : [esp+0x1C]
        call public_6f68e30
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, ecx
        jne public_6f15193
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x44
        jnp public_6f15245
        call dword ptr ds : [public_6fb3370]
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        lea ecx, ss:[esp+0x28]
        push ecx
        fmul dword ptr ds : [public_6fb4448]
        mov ecx, edi
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x18], 0
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        call public_6f1df30
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x18], ecx
        je public_6f15245
        lea ecx, ds:[ecx]
        public_6f15210 : nop
        fld dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [ecx+0x2C]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jnp public_6f1525d
        push 0
        lea edx, ss:[esp+0x2C]
        push edx
        lea ecx, ss:[esp+0x20]
        call public_6f68e30
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, eax
        jne public_6f15210
        public_6f15245 : nop
        mov edi, dword ptr ds : [edi+4]
        public_6f15248 : nop
        mov eax, dword ptr ds : [edi+8]
        push 0
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        call public_6f66ec0
        add esp, 0xC
        jmp public_6f1526d
        public_6f1525d : nop
        mov edi, ecx
        jmp public_6f15248
        public_6f15261 : nop
        mov edx, dword ptr ss : [ebp]
        push edx
        call public_6f67090
        add esp, 4
        public_6f1526d : nop
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        call public_6f15350
        public_6f15281 : nop
        mov al, byte ptr ss : [esp+0x13]
        xor edi, edi
        push edi
        push edi
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x34], al
        call public_6f93790
        mov dword ptr ss : [esp+0x30], eax
        mov dword ptr ss : [esp+0x34], edi
        lea ecx, ds:[esi+0x30]
        push ecx
        push eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0xA4], 2
        call public_6f1e390
        mov eax, dword ptr ss : [esp+0x1C]
        lea edx, ss:[esp+0x2C]
        push edx
        add eax, 4
        push 0x100C
        push eax
        call public_6f24070
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ds : [esi+0x4C], edi
        mov ecx, dword ptr ds : [eax]
        add esp, 0xC
        cmp ecx, eax
        mov dword ptr ss : [esp+0x98], 0xFFFFFFFF
        mov esi, eax
        mov dword ptr ss : [esp+0x1C], ecx
        je public_6f1531e
        public_6f152f4 : nop
        push edi
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea ecx, ss:[esp+0x24]
        call public_6f68e30
        mov edx, dword ptr ds : [eax]
        push edx
        lea eax, ss:[esp+0x24]
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6ecfe80
        cmp dword ptr ss : [esp+0x1C], esi
        jne public_6f152f4
        mov eax, dword ptr ss : [esp+0x30]
        public_6f1531e : nop
        push eax
        call public_6fa8fe0
        add esp, 4
        public_6f15327 : nop
        mov ecx, dword ptr ss : [esp+0x90]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x8C
        ret 4
        UNREACHABLE_TRAP(0x6f14e80)
    }
}

#undef public_6f14eb5
#undef public_6f14ee0
#undef public_6f14f06
#undef public_6f14f15
#undef public_6f14f36
#undef public_6f14f45
#undef public_6f15020
#undef public_6f1507d
#undef public_6f150bd
#undef public_6f150c1
#undef public_6f150f0
#undef public_6f15116
#undef public_6f15119
#undef public_6f15155
#undef public_6f15168
#undef public_6f15193
#undef public_6f15210
#undef public_6f15245
#undef public_6f15248
#undef public_6f1525d
#undef public_6f15261
#undef public_6f1526d
#undef public_6f15281
#undef public_6f152f4
#undef public_6f1531e
#undef public_6f15327
