#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f423a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f57f16);

#define public_6f47409 _public_6f47409
#define public_6f47471 _public_6f47471
#define public_6f4748b _public_6f4748b
#define public_6f474a4 _public_6f474a4
#define public_6f474bb _public_6f474bb
#define public_6f474d6 _public_6f474d6
#define public_6f474f1 _public_6f474f1
#define public_6f47525 _public_6f47525
#define public_6f47559 _public_6f47559
#define public_6f47574 _public_6f47574
#define public_6f4758e _public_6f4758e
#define public_6f4759e _public_6f4759e
#define public_6f475b7 _public_6f475b7

PROC_DECLARE(0x6f473a0, internal_6f473a0, public_6f473a0);
extern "C" NAKED register_t __cdecl internal_6f473a0()
{
    __asm
    {
        sub esp, 0x4C
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0x54]
        test eax, eax
        push esi
        push edi
        je public_6f4759e
        mov ebx, dword ptr ss : [esp+0x64]
        lea esi, ss:[ebp+0x58]
        mov ecx, 8
        lea edi, ss:[esp+0x1C]
        lea eax, ss:[ebp+0x18]
        rep movsd
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        je public_6f47409
        push eax
        lea eax, ss:[esp+0x68]
        push eax
        mov ecx, ebx
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x64]
        cmp eax, dword ptr ds : [ebx+4]
        je public_6f47409
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 6
        jne public_6f47409
        mov eax, dword ptr ss : [esp+0x64]
        mov esi, dword ptr ds : [eax+0x10]
        add esi, 0xF0
        mov ecx, 8
        lea edi, ss:[esp+0x1C]
        rep movsd
        public_6f47409 : nop
        lea ecx, ss:[ebp+0x14]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebx
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [ebx+4]
        je public_6f4759e
        mov eax, dword ptr ss : [esp+0x60]
        mov edx, dword ptr ss : [ebp]
        push 0x3F800000
        push eax
        mov ecx, ebp
        call dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [ecx+0x10]
        mov ebx, dword ptr ss : [ebp+0x54]
        lea esi, ds:[eax+0xF0]
        mov dword ptr ss : [esp+0x64], eax
        mov eax, ebx
        and eax, 1
        mov ecx, 8
        lea edi, ss:[esp+0x3C]
        rep movsd
        je public_6f47471
        fld dword ptr ss : [ebp+0x78]
        fld dword ptr ss : [esp+0x1C]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fstp st(0)
        public_6f47471 : nop
        mov ecx, ebx
        and ecx, 2
        je public_6f4748b
        fld dword ptr ss : [ebp+0x7C]
        fld dword ptr ss : [esp+0x20]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fstp st(0)
        public_6f4748b : nop
        xor esi, esi
        cmp eax, esi
        je public_6f474a4
        fld dword ptr ss : [ebp+0x78]
        fld dword ptr ss : [esp+0x1C]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fstp st(0)
        public_6f474a4 : nop
        cmp ecx, esi
        je public_6f474bb
        fld dword ptr ss : [ebp+0x7C]
        fld dword ptr ss : [esp+0x20]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fstp st(0)
        public_6f474bb : nop
        test bl, 4
        je public_6f474d6
        fld dword ptr ss : [ebp+0x80]
        fld dword ptr ss : [esp+0x24]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fstp st(0)
        public_6f474d6 : nop
        test bl, 8
        je public_6f474f1
        fld dword ptr ss : [ebp+0x84]
        fld dword ptr ss : [esp+0x28]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        public_6f474f1 : nop
        test bl, 0x10
        je public_6f47525
        mov eax, dword ptr ss : [ebp+0x88]
        mov edx, dword ptr ss : [esp+0x2C]
        sub edx, eax
        mov dword ptr ss : [esp+0x14], edx
        mov dword ptr ss : [esp+0x18], esi
        fild qword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], esi
        fmul st, st(1)
        fiadd dword ptr ss : [esp+0x14]
        call public_6f57f16
        mov dword ptr ss : [esp+0x4C], eax
        public_6f47525 : nop
        test bl, 0x20
        je public_6f47559
        mov eax, dword ptr ss : [ebp+0x8C]
        mov ecx, dword ptr ss : [esp+0x30]
        sub ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], esi
        fild qword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], esi
        fmul st, st(1)
        fiadd dword ptr ss : [esp+0x14]
        call public_6f57f16
        mov dword ptr ss : [esp+0x50], eax
        public_6f47559 : nop
        test bl, 0x40
        je public_6f47574
        fld dword ptr ss : [ebp+0x90]
        fld dword ptr ss : [esp+0x34]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x54]
        fstp st(0)
        public_6f47574 : nop
        test bl, bl
        jns public_6f4758e
        fld dword ptr ss : [ebp+0x94]
        fld dword ptr ss : [esp+0x38]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x58]
        fstp st(0)
        public_6f4758e : nop
        mov ecx, dword ptr ss : [esp+0x64]
        fstp st(0)
        lea edx, ss:[esp+0x3C]
        push edx
        call public_6f423a0
        public_6f4759e : nop
        mov ebp, dword ptr ss : [ebp+0x1C]
        cmp dword ptr ss : [esp+0x60], ebp
        jb public_6f475b7
        test ebp, ebp
        jl public_6f475b7
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x4C
        ret 8
        public_6f475b7 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x4C
        ret 8
        UNREACHABLE_TRAP(0x6f473a0)
    }
}

#undef public_6f47409
#undef public_6f47471
#undef public_6f4748b
#undef public_6f474a4
#undef public_6f474bb
#undef public_6f474d6
#undef public_6f474f1
#undef public_6f47525
#undef public_6f47559
#undef public_6f47574
#undef public_6f4758e
#undef public_6f4759e
#undef public_6f475b7
