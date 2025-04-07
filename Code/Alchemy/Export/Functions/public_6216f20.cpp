#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6216f20);
CLANG_FORWARD_PROC_SYMBOL(public_6217ab0);
CLANG_FORWARD_PROC_SYMBOL(public_6217ad0);
CLANG_FORWARD_PROC_SYMBOL(public_6217ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6217bc0);
CLANG_FORWARD_PROC_SYMBOL(public_623e830);
CLANG_FORWARD_PROC_SYMBOL(public_6244f30);
CLANG_FORWARD_PROC_SYMBOL(public_6246188);
CLANG_FORWARD_JUMP_SYMBOL(public_6248316);

#define public_6216f92 _public_6216f92
#define public_6216f97 _public_6216f97
#define public_6216fc5 _public_6216fc5
#define public_6217026 _public_6217026
#define public_6217042 _public_6217042
#define public_6217093 _public_6217093
#define public_62170d7 _public_62170d7
#define public_6217159 _public_6217159
#define public_621715b _public_621715b
#define public_6217189 _public_6217189
#define public_6217200 _public_6217200
#define public_6217342 _public_6217342
#define public_621735e _public_621735e
#define public_62173c8 _public_62173c8
#define public_6217416 _public_6217416
#define public_621746e _public_621746e
#define public_62174e8 _public_62174e8
#define public_62174ea _public_62174ea
#define public_6217559 _public_6217559
#define public_621755b _public_621755b
#define public_62175bc _public_62175bc
#define public_62175be _public_62175be
#define public_621760e _public_621760e
#define public_6217624 _public_6217624

PROC_DECLARE(0x6216f20, internal_6216f20, public_6216f20);
extern "C" NAKED register_t __cdecl internal_6216f20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6248316 @0x6216f22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6248316
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xD8
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        lea eax, ss:[esp+0x54]
        push edi
        lea esi, ss:[ebp+0xD8]
        push eax
        mov ecx, esi
        call public_6217ba0
        lea ecx, ss:[esp+0x70]
        mov dword ptr ss : [esp+0xF0], 0
        push ecx
        mov ecx, esi
        call public_6217bc0
        mov eax, dword ptr ss : [ebp+0xD0]
        mov byte ptr ss : [esp+0xF0], 1
        cmp eax, 1
        je public_6216f92
        mov edx, dword ptr ss : [ebp+0xF0]
        mov byte ptr ss : [esp+0x13], 1
        mov eax, dword ptr ds : [edx+0x60]
        and eax, 8
        cmp al, 8
        jne public_6216f97
        public_6216f92 : nop
        mov byte ptr ss : [esp+0x13], 0
        public_6216f97 : nop
        mov eax, dword ptr ds : [public_6257908]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x40]
        push 0
        lea ecx, ss:[esp+0x8C]
        mov esi, eax
        call public_6217ad0
        mov eax, dword ptr ds : [public_6257a28]
        test eax, eax
        jne public_6216fc5
        call public_623e830
        mov dword ptr ds : [public_6257a28], eax
        public_6216fc5 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[ebp+0x4C]
        push ecx
        lea ecx, ss:[esp+0x8C]
        push esi
        push ecx
        push eax
        call dword ptr ds : [edx+0x1C]
        lea edx, ss:[esp+0x88]
        lea ecx, ss:[esp+0xB8]
        push edx
        call public_6217ab0
        lea esi, ss:[ebp+0xBC]
        mov ecx, 5
        lea edi, ss:[esp+0x38]
        rep movsd
        mov ecx, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [ecx+0x60]
        mov edx, eax
        and edx, 0x1000
        cmp edx, 0x1000
        jne public_6217026
        fld dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x3C], edx
        public_6217026 : nop
        and eax, 0x2000
        cmp eax, 0x2000
        jne public_6217042
        fld dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x40], eax
        public_6217042 : nop
        mov edx, dword ptr ds : [ecx+0x60]
        and edx, 1
        cmp dl, 1
        jne public_6217093
        mov eax, dword ptr ds : [public_6255cc4]
        mov edx, dword ptr ds : [public_6255cc8]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_6255ccc]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [public_6255cd0]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [public_6255cd0]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [public_6255cd4]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_6255cd8]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [public_6255cdc]
        jmp public_62170d7
        public_6217093 : nop
        mov eax, dword ptr ds : [public_6255cdc]
        mov edx, dword ptr ds : [public_6255ce0]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [public_6255ce4]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [public_6255ce8]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [public_6255ce8]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [public_6255cec]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_6255cf0]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [public_6255cf4]
        public_62170d7 : nop
        fld dword ptr ss : [esp+0x44]
        fsub dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x20], eax
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ss : [esp+0x14]
        jne public_6217159
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x30]
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x20]
        jmp public_621715b
        public_6217159 : nop
        fstp st(0)
        public_621715b : nop
        mov edx, dword ptr ss : [ebp+0x90]
        mov ecx, dword ptr ds : [ecx+0x5C]
        push edx
        mov edx, dword ptr ss : [ebp+0x8C]
        mov eax, dword ptr ds : [ecx]
        push edx
        push ecx
        or ebx, 0xFFFFFFFF
        call dword ptr ds : [eax+0x1C]
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x7C]
        cmp eax, ecx
        je public_6217624
        public_6217189 : nop
        fld dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x24]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        mov eax, dword ptr ds : [eax+0x70]
        fstp dword ptr ss : [esp+0x4C]
        mov edi, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        fstp dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [eax+0x78]
        push edi
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        fmul dword ptr ss : [esp+0x7C]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x50]
        fcomp dword ptr ds : [public_624c350]
        fnstsw ax
        test ah, 5
        jnp public_621760e
        mov eax, dword ptr ss : [esp+0x58]
        lea esi, ds:[eax+0xC]
        mov eax, dword ptr ds : [public_6257a28]
        test eax, eax
        jne public_6217200
        call public_623e830
        mov dword ptr ds : [public_6257a28], eax
        public_6217200 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xB8]
        push esi
        push edx
        lea edx, ss:[esp+0x6C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [ebp+0xF0]
        mov edx, dword ptr ss : [ebp+0x8C]
        push edi
        push edx
        mov eax, dword ptr ds : [eax+0x74]
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x20]
        fld dword ptr ss : [esp+0x50]
        fmul dword ptr ds : [public_624babc]
        mov esi, eax
        call public_6246188
        fld dword ptr ss : [esp+0x14]
        fadd st(0), st
        mov edx, dword ptr ss : [ebp+0x8C]
        push edi
        shl eax, 0x18
        or esi, eax
        mov eax, dword ptr ss : [ebp+0xF0]
        fst dword ptr ss : [esp+0x54]
        fmul dword ptr ds : [public_624cddc]
        mov eax, dword ptr ds : [eax+0x7C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        fstp dword ptr ss : [esp+0x60]
        call dword ptr ds : [ecx+0x1C]
        fstp dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x4C]
        lea eax, ss:[esp+0x5C]
        push eax
        push ecx
        call dword ptr ds : [public_62572a0]
        fld dword ptr ss : [esp+0x64]
        fmul dword ptr ss : [esp+0x5C]
        mov al, byte ptr ss : [esp+0x1B]
        add esp, 8
        test al, al
        fstp dword ptr ss : [esp+0x74]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x54]
        fstp dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x54]
        je public_621746e
        mov edx, dword ptr ss : [ebp+0xF0]
        push edi
        mov eax, dword ptr ds : [edx+0x80]
        mov edx, dword ptr ss : [ebp+0x8C]
        push edx
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ss : [ebp+0xD0]
        mov dword ptr ss : [esp+0x84], 0
        dec eax
        mov dword ptr ss : [esp+0x80], eax
        fimul dword ptr ss : [esp+0x80]
        call public_6246188
        cmp eax, ebx
        je public_621746e
        lea ecx, ss:[esp+0x38]
        mov ebx, eax
        push ecx
        push eax
        lea ecx, ss:[ebp+0xB4]
        call public_6244f30
        mov ecx, dword ptr ss : [ebp+0xF0]
        mov eax, dword ptr ds : [ecx+0x60]
        mov edx, eax
        and edx, 0x1000
        cmp edx, 0x1000
        jne public_6217342
        fld dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x3C], edx
        public_6217342 : nop
        and eax, 0x2000
        cmp eax, 0x2000
        jne public_621735e
        fld dword ptr ss : [esp+0x40]
        mov eax, dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x40], eax
        public_621735e : nop
        fld dword ptr ss : [esp+0x44]
        mov ecx, dword ptr ds : [ecx+0x60]
        fsub dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x48]
        fsub dword ptr ss : [esp+0x40]
        and ecx, 1
        cmp cl, 1
        jne public_62173c8
        mov edx, dword ptr ds : [public_6255cc4]
        mov eax, dword ptr ds : [public_6255cc8]
        mov ecx, dword ptr ds : [public_6255ccc]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [public_6255cd0]
        mov dword ptr ss : [esp+0x2C], eax
        mov eax, dword ptr ds : [public_6255cd0]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ds : [public_6255cd4]
        mov dword ptr ss : [esp+0x34], edx
        mov edx, dword ptr ds : [public_6255cd8]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [public_6255cdc]
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        mov dword ptr ss : [esp+0x24], eax
        jmp public_6217416
        public_62173c8 : nop
        mov ecx, dword ptr ds : [public_6255cdc]
        mov edx, dword ptr ds : [public_6255ce0]
        mov eax, dword ptr ds : [public_6255ce4]
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ds : [public_6255ce8]
        mov dword ptr ss : [esp+0x2C], edx
        mov edx, dword ptr ds : [public_6255ce8]
        mov dword ptr ss : [esp+0x30], eax
        mov eax, dword ptr ds : [public_6255cec]
        mov dword ptr ss : [esp+0x34], ecx
        mov ecx, dword ptr ds : [public_6255cf0]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [public_6255cf4]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ss : [esp+0x20], ecx
        mov dword ptr ss : [esp+0x24], edx
        public_6217416 : nop
        fld dword ptr ss : [esp+0x28]
        fmul st, st(2)
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(2)
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(2)
        fadd dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        fmul st, st(1)
        fadd dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        fstp st(0)
        public_621746e : nop
        mov ecx, dword ptr ds : [public_62579e0]
        mov eax, dword ptr ds : [public_62579f4]
        mov edx, ecx
        and edx, 0xFFFF
        cmp edx, eax
        jg public_62174e8
        fld dword ptr ss : [esp+0x64]
        fadd dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [public_62579ec]
        mov ecx, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x20]
        fsub dword ptr ss : [esp+0x54]
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], edx
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x68]
        fsub dword ptr ss : [esp+0x78]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x6C]
        fstp dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [public_62579ec]
        mov edi, dword ptr ds : [public_62579e0]
        mov eax, dword ptr ds : [public_62579f4]
        add ecx, 0x18
        inc word ptr ds : [public_62579e0]
        mov dword ptr ds : [public_62579ec], ecx
        mov ecx, dword ptr ds : [public_62579e0]
        jmp public_62174ea
        public_62174e8 : nop
        mov edi, eax
        public_62174ea : nop
        mov edx, ecx
        and edx, 0xFFFF
        cmp edx, eax
        jg public_6217559
        fld dword ptr ss : [esp+0x64]
        fsub dword ptr ss : [esp+0x74]
        mov eax, dword ptr ds : [public_62579ec]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x1C]
        fsub dword ptr ss : [esp+0x54]
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x10], ecx
        mov dword ptr ds : [eax+0x14], edx
        fstp dword ptr ds : [eax]
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ss : [esp+0x78]
        fsub dword ptr ss : [esp+0x4C]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x6C]
        fstp dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [public_62579ec]
        mov edx, dword ptr ds : [public_62579e0]
        mov eax, dword ptr ds : [public_62579f4]
        add ecx, 0x18
        inc word ptr ds : [public_62579e0]
        mov dword ptr ds : [public_62579ec], ecx
        mov ecx, dword ptr ds : [public_62579e0]
        jmp public_621755b
        public_6217559 : nop
        mov edx, eax
        public_621755b : nop
        fld dword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x50]
        and ecx, 0xFFFF
        cmp ecx, eax
        fadd dword ptr ss : [esp+0x68]
        jg public_62175bc
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x50]
        mov eax, dword ptr ds : [public_62579ec]
        mov ecx, dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x64]
        mov dword ptr ds : [eax+0x10], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+0xC], esi
        mov dword ptr ds : [eax+0x14], ecx
        fstp dword ptr ds : [eax]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x6C]
        fstp dword ptr ds : [eax+8]
        mov esi, dword ptr ds : [public_62579ec]
        mov eax, dword ptr ds : [public_62579e0]
        add esi, 0x18
        inc word ptr ds : [public_62579e0]
        mov dword ptr ds : [public_62579ec], esi
        jmp public_62175be
        public_62175bc : nop
        fstp st(0)
        public_62175be : nop
        mov esi, dword ptr ds : [public_62579f8]
        xor ecx, ecx
        mov cx, word ptr ds : [public_62579e2]
        add ecx, 2
        cmp ecx, esi
        jg public_621760e
        mov ecx, dword ptr ds : [public_62579f0]
        mov word ptr ds : [ecx], ax
        mov eax, dword ptr ds : [public_62579f0]
        mov word ptr ds : [eax+2], dx
        mov ecx, dword ptr ds : [public_62579f0]
        mov word ptr ds : [ecx+4], di
        mov edx, dword ptr ds : [public_62579f0]
        add word ptr ds : [public_62579e2], 3
        add edx, 6
        inc word ptr ds : [public_62579e8]
        mov dword ptr ds : [public_62579f0], edx
        public_621760e : nop
        mov edx, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x70]
        mov eax, dword ptr ds : [edx]
        cmp eax, ecx
        mov dword ptr ss : [esp+0x58], eax
        jne public_6217189
        public_6217624 : nop
        mov ecx, dword ptr ss : [esp+0xE8]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE4
        ret 
        UNREACHABLE_TRAP(0x6216f20)
    }
}

#undef public_6216f92
#undef public_6216f97
#undef public_6216fc5
#undef public_6217026
#undef public_6217042
#undef public_6217093
#undef public_62170d7
#undef public_6217159
#undef public_621715b
#undef public_6217189
#undef public_6217200
#undef public_6217342
#undef public_621735e
#undef public_62173c8
#undef public_6217416
#undef public_621746e
#undef public_62174e8
#undef public_62174ea
#undef public_6217559
#undef public_621755b
#undef public_62175bc
#undef public_62175be
#undef public_621760e
#undef public_6217624
