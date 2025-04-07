#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb7280);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f487c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f49c30);
CLANG_FORWARD_PROC_SYMBOL(public_6f50c50);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ff90);
CLANG_FORWARD_PROC_SYMBOL(public_6f73990);
CLANG_FORWARD_PROC_SYMBOL(public_6f73a40);
CLANG_FORWARD_PROC_SYMBOL(public_6f75f30);

#define public_6f6ffb5 _public_6f6ffb5
#define public_6f6ffbc _public_6f6ffbc
#define public_6f6ffc3 _public_6f6ffc3
#define public_6f6ffca _public_6f6ffca
#define public_6f6ffd1 _public_6f6ffd1
#define public_6f6ffde _public_6f6ffde
#define public_6f70026 _public_6f70026
#define public_6f7002a _public_6f7002a
#define public_6f70050 _public_6f70050
#define public_6f700e1 _public_6f700e1
#define public_6f70105 _public_6f70105
#define public_6f701f3 _public_6f701f3
#define public_6f70268 _public_6f70268
#define public_6f70280 _public_6f70280
#define public_6f702af _public_6f702af
#define public_6f70370 _public_6f70370
#define public_6f703a8 _public_6f703a8
#define public_6f703ba _public_6f703ba
#define public_6f70419 _public_6f70419
#define public_6f7046a _public_6f7046a

PROC_DECLARE(0x6f6ff90, internal_6f6ff90, public_6f6ff90);
extern "C" NAKED register_t __cdecl internal_6f6ff90()
{
    __asm
    {
        sub esp, 0x60
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x70]
        push edi
        mov ecx, 9
        lea edi, ss:[esp+0x4C]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x60]
        xor ebx, ebx
        xor al, al
        cmp ecx, 2
        jne public_6f6ffb5
        mov al, 1
        public_6f6ffb5 : nop
        cmp ecx, 3
        jne public_6f6ffbc
        mov al, 1
        public_6f6ffbc : nop
        cmp ecx, 4
        jne public_6f6ffc3
        mov al, 1
        public_6f6ffc3 : nop
        cmp ecx, 5
        jne public_6f6ffca
        mov al, 1
        public_6f6ffca : nop
        cmp ecx, 6
        jne public_6f6ffd1
        mov al, 1
        public_6f6ffd1 : nop
        cmp ecx, 7
        je public_6f6ffde
        cmp al, bl
        je public_6f7046a
        public_6f6ffde : nop
        lea eax, ss:[esp+0x54]
        push eax
        call public_6f49bc0
        add esp, 4
        test eax, eax
        je public_6f7046a
        mov ecx, dword ptr ss : [esp+0x54]
        cmp ecx, dword ptr ss : [esp+0x4C]
        je public_6f7046a
        lea edx, ss:[esp+0x24]
        push edx
        lea eax, ss:[esp+0x50]
        push eax
        mov dword ptr ss : [esp+0x2C], ebx
        call dword ptr ds : [public_6fb3598]
        add esp, 8
        test eax, eax
        jne public_6f70026
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x4C], eax
        jmp public_6f7002a
        public_6f70026 : nop
        mov eax, dword ptr ss : [esp+0x4C]
        public_6f7002a : nop
        cmp eax, ebx
        mov dword ptr ss : [esp+0x18], ebx
        je public_6f70050
        lea ecx, ss:[esp+0x18]
        push ecx
        push eax
        call dword ptr ds : [public_6fb33a0]
        mov eax, dword ptr ss : [esp+0x20]
        add esp, 8
        test eax, 0x7FB110
        je public_6f7046a
        public_6f70050 : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov ebp, dword ptr ds : [public_6fb364c]
        lea edx, ss:[esp+0x10]
        push edx
        or edi, 0xFFFFFFFF
        push eax
        mov dword ptr ss : [esp+0x18], edi
        call ebp
        mov esi, dword ptr ds : [public_6fb366c]
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x38], edi
        call esi
        mov ecx, dword ptr ss : [esp+0x5C]
        lea eax, ss:[esp+0x24]
        push eax
        push ecx
        mov dword ptr ss : [esp+0x2C], edi
        call ebp
        lea edx, ss:[esp+0x34]
        push edx
        lea eax, ss:[esp+0x30]
        push eax
        mov dword ptr ss : [esp+0x3C], edi
        call esi
        mov eax, dword ptr ss : [esp+0x38]
        add esp, 0x20
        cmp eax, 0x2000
        jne public_6f700e1
        fld dword ptr ss : [esp+0x6C]
        fcomp dword ptr ds : [public_6fb444c]
        fnstsw ax
        test ah, 0x41
        jp public_6f700e1
        cmp dword ptr ss : [esp+0x58], 0x800
        jne public_6f700e1
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ss : [esp+0x10]
        push 1
        push ecx
        push 0xBDCCCCCD
        push edx
        call public_6f50c50
        add esp, 0x10
        public_6f700e1 : nop
        cmp dword ptr ss : [esp+0x10], edi
        je public_6f7046a
        cmp dword ptr ss : [esp+0x14], edi
        je public_6f7046a
        cmp dword ptr ss : [esp+0x28], edi
        jne public_6f70105
        cmp dword ptr ss : [esp+0x1C], edi
        je public_6f7046a
        public_6f70105 : nop
        mov esi, dword ptr ds : [public_6fb365c]
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x18]
        push edx
        mov dword ptr ss : [esp+0x38], 0
        call esi
        lea eax, ss:[esp+0x2C]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x28]
        push edx
        mov dword ptr ss : [esp+0x38], 0
        call esi
        fld dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [public_6fbbd7c]
        add esp, 0x18
        fnstsw ax
        test ah, 0x41
        jnp public_6f7046a
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6fbbd7c]
        fnstsw ax
        test ah, 0x41
        jnp public_6f7046a
        fld dword ptr ss : [esp+0x20]
        fcomp dword ptr ds : [public_6fbbd84]
        fnstsw ax
        test ah, 1
        je public_6f7046a
        lea eax, ss:[esp+0x34]
        push eax
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        call dword ptr ds : [public_6fb3594]
        lea ecx, ss:[esp+0x54]
        push ecx
        call public_6f75f30
        mov edx, dword ptr ss : [esp+0x5C]
        add esp, 8
        mov edi, eax
        push edx
        mov ecx, edi
        call public_6f73a40
        mov ebp, eax
        cmp ebp, ebx
        je public_6f7046a
        call dword ptr ds : [public_6fb36a0]
        test al, al
        je public_6f701f3
        call public_6f49c30
        mov esi, eax
        cmp esi, ebx
        je public_6f701f3
        mov ecx, esi
        call public_6f487c0
        test eax, eax
        je public_6f701f3
        mov ecx, dword ptr ds : [esi+0x10]
        cmp ecx, ebx
        je public_6f701f3
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+8]
        test al, al
        jne public_6f7046a
        public_6f701f3 : nop
        mov edx, dword ptr ss : [esp+0x4C]
        lea ecx, ss:[esp+0x74]
        push ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x7C], ebx
        call public_6eb7280
        test al, al
        je public_6f7046a
        mov eax, dword ptr ss : [esp+0x60]
        cmp eax, 5
        je public_6f70419
        cmp eax, 6
        je public_6f70419
        mov eax, dword ptr ss : [esp+0x74]
        fld dword ptr ds : [eax+0xC]
        fsubr qword ptr ss : [esp+0x34]
        fld qword ptr ss : [esp+0x34]
        fstp dword ptr ds : [eax+0xC]
        mov ecx, dword ptr ss : [esp+0x74]
        mov eax, dword ptr ss : [esp+0x4C]
        cmp dword ptr ds : [ecx], eax
        je public_6f70268
        mov dword ptr ds : [ecx], eax
        fstp st(0)
        fld qword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x74]
        fstp dword ptr ds : [eax+8]
        mov ecx, dword ptr ss : [esp+0x74]
        fld qword ptr ss : [esp+0x34]
        fstp dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x74]
        fld dword ptr ds : [public_6fb444c]
        public_6f70268 : nop
        fcomp qword ptr ds : [public_6fb70c0]
        fnstsw ax
        test ah, 0x41
        jne public_6f70280
        fld qword ptr ss : [esp+0x34]
        fstp dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ss : [esp+0x74]
        public_6f70280 : nop
        fld dword ptr ds : [ecx+0x10]
        fsubr qword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_6fb5810]
        fnstsw ax
        test ah, 0x41
        jne public_6f702af
        fld qword ptr ss : [esp+0x34]
        fstp dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ss : [esp+0x74]
        fld dword ptr ds : [public_6fbbd94]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x74]
        public_6f702af : nop
        fld dword ptr ss : [esp+0x68]
        fmul dword ptr ds : [public_6fbbd98]
        fadd dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+4]
        mov ecx, dword ptr ss : [esp+0x74]
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [public_6fbbda0]
        fnstsw ax
        test ah, 1
        jne public_6f703ba
        cmp byte ptr ds : [ecx+0x15], bl
        jne public_6f703ba
        mov byte ptr ds : [ecx+0x15], 1
        mov edx, dword ptr ss : [esp+0x54]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [edi+0x48]
        mov dword ptr ss : [esp+0x40], edx
        lea edx, ss:[esp+0x3C]
        push edx
        mov dword ptr ss : [esp+0x48], eax
        lea eax, ss:[esp+0x34]
        push 0x1005
        push eax
        mov dword ptr ss : [esp+0x48], 1
        mov dword ptr ss : [esp+0x54], ecx
        mov dword ptr ss : [esp+0x3C], ebx
        call public_6f24070
        mov ecx, dword ptr ds : [public_6fbbd78]
        mov ebp, dword ptr ds : [public_6fb33f4]
        push ecx
        lea edx, ss:[esp+0x20]
        push edx
        lea eax, ss:[esp+0x28]
        push eax
        call ebp
        mov ecx, dword ptr ss : [esp+0x64]
        add esp, 0x18
        push ecx
        mov ecx, edi
        call public_6f73990
        cmp eax, ebx
        je public_6f7046a
        mov ebx, dword ptr ds : [eax+0x154]
        cmp ebx, 0xFFFFFFFF
        je public_6f7046a
        mov eax, dword ptr ds : [edi+0xE0]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        je public_6f7046a
        lea ebx, ds:[ebx]
        public_6f70370 : nop
        mov eax, dword ptr ds : [esi+8]
        cmp dword ptr ds : [eax+0x154], ebx
        jne public_6f703a8
        mov eax, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        mov dword ptr ss : [esp+0x38], 0xFFFFFFFF
        call dword ptr ds : [public_6fb364c]
        mov ecx, dword ptr ds : [public_6fbbd78]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        lea eax, ss:[esp+0x40]
        push eax
        call ebp
        add esp, 0x14
        public_6f703a8 : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ds : [edi+0xE0]
        jne public_6f70370
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x60
        ret 
        public_6f703ba : nop
        fld dword ptr ds : [ecx+4]
        fcomp dword ptr ds : [public_6fbbd9c]
        fnstsw ax
        test ah, 0x41
        jne public_6f7046a
        cmp byte ptr ds : [ecx+0x14], bl
        jne public_6f7046a
        mov byte ptr ds : [ecx+0x14], 1
        mov ecx, dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [edi+0x48]
        mov dword ptr ss : [esp+0x40], ecx
        lea ecx, ss:[esp+0x3C]
        push ecx
        mov dword ptr ss : [esp+0x48], edx
        lea edx, ss:[esp+0x34]
        push 0x1005
        push edx
        mov dword ptr ss : [esp+0x48], ebx
        mov dword ptr ss : [esp+0x54], eax
        mov dword ptr ss : [esp+0x3C], ebx
        call public_6f24070
        add esp, 0xC
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x60
        ret 
        public_6f70419 : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [edi+0x48]
        mov dword ptr ss : [esp+0x40], eax
        lea eax, ss:[esp+0x3C]
        push eax
        mov dword ptr ss : [esp+0x48], ecx
        lea ecx, ss:[esp+0x34]
        push 0x1005
        push ecx
        mov dword ptr ss : [esp+0x48], 1
        mov dword ptr ss : [esp+0x54], edx
        mov dword ptr ss : [esp+0x3C], ebx
        call public_6f24070
        mov edx, dword ptr ds : [public_6fbbd78]
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        call dword ptr ds : [public_6fb33f4]
        add esp, 0x18
        public_6f7046a : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x60
        ret 
        UNREACHABLE_TRAP(0x6f6ff90)
    }
}

#undef public_6f6ffb5
#undef public_6f6ffbc
#undef public_6f6ffc3
#undef public_6f6ffca
#undef public_6f6ffd1
#undef public_6f6ffde
#undef public_6f70026
#undef public_6f7002a
#undef public_6f70050
#undef public_6f700e1
#undef public_6f70105
#undef public_6f701f3
#undef public_6f70268
#undef public_6f70280
#undef public_6f702af
#undef public_6f70370
#undef public_6f703a8
#undef public_6f703ba
#undef public_6f70419
#undef public_6f7046a
