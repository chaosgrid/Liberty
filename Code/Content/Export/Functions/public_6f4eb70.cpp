#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4eb70);

#define public_6f4eb90 _public_6f4eb90
#define public_6f4ebd8 _public_6f4ebd8
#define public_6f4ebe4 _public_6f4ebe4
#define public_6f4ebef _public_6f4ebef
#define public_6f4ebf9 _public_6f4ebf9
#define public_6f4ec05 _public_6f4ec05
#define public_6f4ec0e _public_6f4ec0e
#define public_6f4ec12 _public_6f4ec12
#define public_6f4ec16 _public_6f4ec16
#define public_6f4ec20 _public_6f4ec20
#define public_6f4ec4b _public_6f4ec4b
#define public_6f4ec73 _public_6f4ec73
#define public_6f4ec81 _public_6f4ec81
#define public_6f4ec96 _public_6f4ec96

PROC_DECLARE(0x6f4eb70, internal_6f4eb70, public_6f4eb70);
extern "C" NAKED register_t __cdecl internal_6f4eb70()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        mov ebx, dword ptr ss : [esp+0x28]
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov eax, edi
        sub eax, ebx
        sar eax, 3
        cmp eax, 0x10
        jle public_6f4ec96
        push ebp
        push esi
        nop 
        public_6f4eb90 : nop
        mov edx, dword ptr ds : [ebx+4]
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [edi-4]
        mov dword ptr ss : [esp+0x14], edx
        cdq 
        sub eax, edx
        mov edx, eax
        sar edx, 1
        mov eax, dword ptr ds : [ebx+edx*8]
        cmp ecx, eax
        mov edx, dword ptr ds : [ebx+edx*8+4]
        mov dword ptr ss : [esp+0x24], edx
        mov edx, dword ptr ds : [edi-8]
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x18], edx
        mov dword ptr ss : [esp+0x1C], esi
        jge public_6f4ebef
        cmp eax, edx
        jge public_6f4ebd8
        lea eax, ss:[esp+0x20]
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_6f4ec0e
        public_6f4ebd8 : nop
        cmp ecx, edx
        lea eax, ss:[esp+0x18]
        jl public_6f4ebe4
        lea eax, ss:[esp+0x10]
        public_6f4ebe4 : nop
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+4]
        mov dword ptr ss : [esp+0x2C], eax
        jmp public_6f4ec0e
        public_6f4ebef : nop
        cmp ecx, edx
        jge public_6f4ebf9
        lea eax, ss:[esp+0x10]
        jmp public_6f4ec05
        public_6f4ebf9 : nop
        cmp eax, edx
        lea eax, ss:[esp+0x18]
        jl public_6f4ec05
        lea eax, ss:[esp+0x20]
        public_6f4ec05 : nop
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x2C], edx
        public_6f4ec0e : nop
        mov eax, edi
        mov esi, ebx
        public_6f4ec12 : nop
        cmp dword ptr ds : [esi], ecx
        jge public_6f4ec20
        public_6f4ec16 : nop
        mov edx, dword ptr ds : [esi+8]
        add esi, 8
        cmp edx, ecx
        jl public_6f4ec16
        public_6f4ec20 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        cmp ecx, edx
        jl public_6f4ec20
        cmp eax, esi
        jbe public_6f4ec4b
        mov ebp, dword ptr ds : [eax]
        mov edx, dword ptr ds : [esi]
        mov edi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi], ebp
        mov ebp, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [eax+4], edi
        mov edi, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [eax], edx
        add esi, 8
        jmp public_6f4ec12
        public_6f4ec4b : nop
        mov eax, edi
        mov ecx, esi
        sub eax, esi
        sub ecx, ebx
        and eax, 0xFFFFFFF8
        and ecx, 0xFFFFFFF8
        cmp eax, ecx
        push 0
        jg public_6f4ec73
        mov edx, dword ptr ss : [esp+0x40]
        push edx
        push edi
        push esi
        call public_6f4eb70
        mov edi, esi
        mov dword ptr ss : [esp+0x48], edi
        jmp public_6f4ec81
        public_6f4ec73 : nop
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        push esi
        push ebx
        call public_6f4eb70
        mov ebx, esi
        public_6f4ec81 : nop
        mov eax, edi
        sub eax, ebx
        sar eax, 3
        add esp, 0x10
        cmp eax, 0x10
        jg public_6f4eb90
        pop esi
        pop ebp
        public_6f4ec96 : nop
        pop edi
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6f4eb70)
    }
}

#undef public_6f4eb90
#undef public_6f4ebd8
#undef public_6f4ebe4
#undef public_6f4ebef
#undef public_6f4ebf9
#undef public_6f4ec05
#undef public_6f4ec0e
#undef public_6f4ec12
#undef public_6f4ec16
#undef public_6f4ec20
#undef public_6f4ec4b
#undef public_6f4ec73
#undef public_6f4ec81
#undef public_6f4ec96
