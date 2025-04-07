#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41540);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aa40);
CLANG_FORWARD_PROC_SYMBOL(public_6f4aed0);

#define public_6f46284 _public_6f46284
#define public_6f462a5 _public_6f462a5
#define public_6f462ce _public_6f462ce
#define public_6f462d6 _public_6f462d6
#define public_6f4632b _public_6f4632b
#define public_6f46342 _public_6f46342
#define public_6f46359 _public_6f46359
#define public_6f46370 _public_6f46370
#define public_6f4637c _public_6f4637c
#define public_6f46392 _public_6f46392

PROC_DECLARE(0x6f461c0, internal_6f461c0, public_6f461c0);
extern "C" NAKED register_t __cdecl internal_6f461c0()
{
    __asm
    {
        sub esp, 0x20
        push ebp
        mov ebp, dword ptr ss : [esp+0x28]
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x54]
        test eax, eax
        je public_6f4637c
        lea eax, ds:[edi+0x58]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+0xC]
        lea eax, ds:[edi+0x18]
        mov dword ptr ss : [esp+0x14], ecx
        cmp dword ptr ds : [eax], 0xFFFFFFFF
        push ebx
        mov ebx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x1C], edx
        je public_6f462a5
        push eax
        lea eax, ss:[esp+0x38]
        push eax
        mov ecx, ebx
        call public_6f4aa40
        mov eax, dword ptr ss : [esp+0x34]
        cmp eax, dword ptr ds : [ebx+4]
        je public_6f462a5
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+4]
        cmp eax, 3
        jne public_6f462a5
        mov eax, dword ptr ss : [esp+0x34]
        mov esi, dword ptr ds : [eax+0x10]
        mov eax, dword ptr ds : [esi+0xE4]
        test eax, eax
        je public_6f46284
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xEC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x20]
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xF0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xF4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [eax]
        lea edx, ds:[esi+0xF8]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        public_6f46284 : nop
        add esi, 0xEC
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov eax, dword ptr ds : [esi+0xC]
        mov dword ptr ss : [esp+0x14], ecx
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], eax
        public_6f462a5 : nop
        lea esi, ds:[edi+0x14]
        push esi
        lea ecx, ss:[esp+0x38]
        push ecx
        mov ecx, ebx
        call public_6f4aed0
        mov eax, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ss : [esp+0x34]
        cmp ecx, eax
        pop ebx
        je public_6f462ce
        mov edx, dword ptr ds : [esi]
        cmp edx, dword ptr ds : [ecx+0xC]
        jl public_6f462ce
        lea ecx, ss:[esp+0x30]
        jmp public_6f462d6
        public_6f462ce : nop
        mov dword ptr ss : [esp+0x34], eax
        lea ecx, ss:[esp+0x34]
        public_6f462d6 : nop
        mov esi, dword ptr ds : [ecx]
        cmp esi, eax
        je public_6f4637c
        mov eax, dword ptr ds : [edi]
        push 0x3F800000
        push ebp
        mov ecx, edi
        call dword ptr ds : [eax+0x18]
        mov ecx, dword ptr ds : [esi+0x10]
        lea edx, ds:[ecx+0xEC]
        mov eax, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x1C], eax
        mov eax, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [edx+8]
        mov edx, dword ptr ds : [edx+0xC]
        mov dword ptr ss : [esp+0x24], eax
        mov eax, dword ptr ds : [edi+0x54]
        test al, 1
        mov dword ptr ss : [esp+0x28], edx
        je public_6f4632b
        fld dword ptr ds : [edi+0x68]
        fld dword ptr ss : [esp+0xC]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        public_6f4632b : nop
        test al, 8
        je public_6f46342
        fld dword ptr ds : [edi+0x74]
        fld dword ptr ss : [esp+0x18]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        public_6f46342 : nop
        test al, 2
        je public_6f46359
        fld dword ptr ds : [edi+0x6C]
        fld dword ptr ss : [esp+0x10]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x20]
        fstp st(0)
        public_6f46359 : nop
        test al, 4
        je public_6f46370
        fld dword ptr ds : [edi+0x70]
        fld dword ptr ss : [esp+0x14]
        fsub st, st(1)
        fmul st, st(2)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x24]
        fstp st(0)
        public_6f46370 : nop
        lea eax, ss:[esp+0x1C]
        fstp st(0)
        push eax
        call public_6f41540
        public_6f4637c : nop
        mov edi, dword ptr ds : [edi+0x1C]
        cmp ebp, edi
        jb public_6f46392
        test edi, edi
        jl public_6f46392
        pop edi
        pop esi
        xor eax, eax
        pop ebp
        add esp, 0x20
        ret 8
        public_6f46392 : nop
        pop edi
        pop esi
        mov eax, 1
        pop ebp
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x6f461c0)
    }
}

#undef public_6f46284
#undef public_6f462a5
#undef public_6f462ce
#undef public_6f462d6
#undef public_6f4632b
#undef public_6f46342
#undef public_6f46359
#undef public_6f46370
#undef public_6f4637c
#undef public_6f46392
