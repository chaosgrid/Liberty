#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4101e0);
CLANG_FORWARD_PROC_SYMBOL(public_421ed0);
CLANG_FORWARD_PROC_SYMBOL(public_422190);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_508fe1 _public_508fe1
#define public_508ff6 _public_508ff6
#define public_5090bd _public_5090bd
#define public_50912b _public_50912b
#define public_50918e _public_50918e

PROC_DECLARE(0x508f20, internal_508f20, public_508f20);
extern "C" NAKED register_t __cdecl internal_508f20()
{
    __asm
    {
        sub esp, 0x64
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x2C0]
        test al, al
        je public_50918e
        mov al, byte ptr ds : [ebx+0x2C]
        test al, al
        je public_50918e
        mov eax, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push eax
        call dword ptr ds : [ecx+0x20]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        call public_4101e0
        mov edx, dword ptr ds : [public_5c6de0]
        mov dword ptr ss : [esp+4], 0
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+4]
        push edx
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF4]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 0
        call public_422190
        push 0xB60
        call public_421ed0
        fld dword ptr ds : [ebx+0x28]
        fsub dword ptr ds : [public_5d043c]
        add esp, 8
        fmul dword ptr ds : [public_5c9804]
        fcom qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 5
        jp public_508fe1
        fstp st(0)
        fld dword ptr ds : [public_5c7474]
        jmp public_508ff6
        public_508fe1 : nop
        fcom qword ptr ds : [public_5c89b8]
        fnstsw ax
        test ah, 0x41
        jne public_508ff6
        fstp st(0)
        fld dword ptr ds : [public_5c75dc]
        public_508ff6 : nop
        mov eax, dword ptr ds : [ebx+0x30]
        mov edx, dword ptr ds : [eax+0x2C]
        fmul dword ptr ds : [eax+0x28]
        mov dword ptr ds : [eax+0x10], edx
        mov eax, dword ptr ds : [ebx+0x30]
        mov ecx, dword ptr ds : [eax+0x30]
        mov dword ptr ds : [eax+0x14], ecx
        mov eax, dword ptr ds : [ebx+0x30]
        mov edx, dword ptr ds : [eax+0x34]
        mov dword ptr ds : [eax+0x18], edx
        mov eax, dword ptr ds : [ebx+0x30]
        fstp dword ptr ds : [eax+0x20]
        mov ecx, dword ptr ds : [ebx+0x24]
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+8], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push esi
        push edi
        call dword ptr ds : [edx+0x30]
        mov eax, dword ptr ds : [ebx+0x30]
        fmul dword ptr ds : [eax+0x24]
        mov ecx, dword ptr ds : [ebx+0x24]
        fmul dword ptr ds : [public_5d1494]
        fst dword ptr ss : [esp+0x30]
        fst dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0xC]
        mov esi, eax
        mov eax, dword ptr ds : [public_675000]
        test eax, eax
        jne public_5090bd
        call public_5b73e0
        mov dword ptr ds : [public_675000], eax
        public_5090bd : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        push esi
        lea edx, ss:[esp+0x48]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [public_5c6d90]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [ebx+0x30]
        mov ecx, 0xC
        lea esi, ss:[esp+0x44]
        lea edi, ss:[esp+0x14]
        rep movsd
        mov edx, dword ptr ds : [edx+4]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x9C]
        mov eax, dword ptr ds : [ebx+0x30]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, 0xFFFFFFFF
        pop edi
        pop esi
        je public_50912b
        mov ecx, dword ptr ds : [public_5c6df0]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x108
        push 0x3F800000
        push eax
        mov eax, dword ptr ss : [esp+0x80]
        push eax
        push ecx
        call dword ptr ds : [edx+0x1C]
        public_50912b : nop
        mov ecx, dword ptr ds : [public_5c6dcc]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 1
        push 1
        push eax
        call dword ptr ds : [edx+0x20]
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x89
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ss : [esp+4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x8B
        push eax
        call dword ptr ds : [ecx+0xF0]
        push 1
        call public_422190
        add esp, 4
        public_50918e : nop
        pop ebx
        add esp, 0x64
        ret 4
        UNREACHABLE_TRAP(0x508f20)
    }
}

#undef public_508fe1
#undef public_508ff6
#undef public_5090bd
#undef public_50912b
#undef public_50918e
