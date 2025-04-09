#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_446d90);
CLANG_FORWARD_PROC_SYMBOL(public_4582c0);
CLANG_FORWARD_PROC_SYMBOL(public_5792b0);

#define public_4473e6 _public_4473e6
#define public_447439 _public_447439
#define public_447484 _public_447484
#define public_4474b0 _public_4474b0
#define public_4474f4 _public_4474f4

PROC_DECLARE(0x4473a0, internal_4473a0, public_4473a0);
extern "C" NAKED register_t __cdecl internal_4473a0()
{
    __asm
    {
        sub esp, 0x20
        push esi
        push edi
        push 0x1B
        mov esi, ecx
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4474f4
        push 0x1D
        call public_5792b0
        add esp, 4
        test eax, eax
        je public_4474f4
        mov eax, dword ptr ds : [esi+0x78]
        push ebp
        xor ebp, ebp
        cmp eax, ebp
        jle public_4474b0
        fld qword ptr ss : [esp+0x30]
        push ebx
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], ebp
        public_4473e6 : nop
        mov eax, dword ptr ds : [esi+0xA4]
        lea edi, ds:[ebp*8]
        mov ebx, dword ptr ds : [eax+edi+4]
        add eax, edi
        mov eax, dword ptr ds : [eax]
        cmp eax, 0xFFFFFFFF
        je public_447439
        test ebx, ebx
        je public_447439
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x18], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ebx]
        mov dword ptr ss : [esp+0x20], eax
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x8C]
        public_447439 : nop
        mov eax, dword ptr ds : [esi+0xA8]
        add eax, edi
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax]
        cmp eax, 0xFFFFFFFF
        je public_447484
        test edi, edi
        je public_447484
        mov ecx, dword ptr ds : [public_5c6d90]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push eax
        push ecx
        call dword ptr ds : [edx+0x90]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ecx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x28], edx
        mov eax, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x2C], eax
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        call dword ptr ds : [edx+0x8C]
        public_447484 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x10]
        push ecx
        mov ecx, dword ptr ds : [esi+0xA0]
        add ecx, edi
        call public_446d90
        mov eax, dword ptr ds : [esi+0x78]
        mov ecx, edi
        inc ebp
        add ecx, 0x44
        cmp ebp, eax
        mov dword ptr ss : [esp+0x10], ecx
        jl public_4473e6
        pop ebx
        public_4474b0 : nop
        fld qword ptr ss : [esp+0x30]
        mov edx, dword ptr ds : [public_5c6d40]
        mov eax, dword ptr ds : [edx]
        fstp dword ptr ss : [esp+0x10]
        mov edi, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi+0x70]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ds : [esi+0x70]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov al, byte ptr ds : [esi+0x14]
        test al, al
        pop ebp
        je public_4474f4
        push edi
        lea ecx, ds:[esi+0x74]
        call public_4582c0
        public_4474f4 : nop
        pop edi
        pop esi
        add esp, 0x20
        ret 8
        UNREACHABLE_TRAP(0x4473a0)
    }
}

#undef public_4473e6
#undef public_447439
#undef public_447484
#undef public_4474b0
#undef public_4474f4
