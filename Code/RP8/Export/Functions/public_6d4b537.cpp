#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d4ad74);
CLANG_FORWARD_PROC_SYMBOL(public_6d4ae5e);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b4dc);
CLANG_FORWARD_PROC_SYMBOL(public_6d4b537);

#define public_6d4b575 _public_6d4b575
#define public_6d4b5c4 _public_6d4b5c4
#define public_6d4b618 _public_6d4b618
#define public_6d4b61b _public_6d4b61b
#define public_6d4b640 _public_6d4b640
#define public_6d4b643 _public_6d4b643
#define public_6d4b66b _public_6d4b66b
#define public_6d4b698 _public_6d4b698
#define public_6d4b6ca _public_6d4b6ca
#define public_6d4b6cc _public_6d4b6cc
#define public_6d4b6f8 _public_6d4b6f8
#define public_6d4b72b _public_6d4b72b
#define public_6d4b72c _public_6d4b72c
#define public_6d4b730 _public_6d4b730

PROC_DECLARE(0x6d4b537, internal_6d4b537, public_6d4b537);
extern "C" NAKED register_t __cdecl internal_6d4b537()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x58
        push ebx
        mov ebx, dword ptr ss : [ebp+8]
        cmp dword ptr ds : [ebx+0xFC], 0
        mov eax, dword ptr ds : [ebx+0x194]
        mov ecx, dword ptr ds : [ebx+0x174]
        push edi
        mov dword ptr ss : [ebp-8], eax
        mov dword ptr ss : [ebp-0x18], ecx
        je public_6d4b575
        cmp dword ptr ds : [eax+0x34], 0
        jne public_6d4b575
        mov edi, ebx
        call public_6d4b4dc
        test al, al
        je public_6d4b72c
        mov eax, dword ptr ss : [ebp-8]
        public_6d4b575 : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        and dword ptr ss : [ebp-0xC], 0
        cmp dword ptr ds : [ebx+0x13C], 0
        mov dword ptr ss : [ebp-0x3C], ebx
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x58], edx
        mov ecx, dword ptr ds : [ecx+4]
        mov dword ptr ss : [ebp-0x54], ecx
        mov ecx, dword ptr ds : [ebx+0x178]
        mov dword ptr ss : [ebp-0x50], ecx
        mov ecx, dword ptr ds : [eax+0x10]
        mov edx, dword ptr ds : [eax+0x14]
        push esi
        mov dword ptr ss : [ebp+8], ecx
        lea ecx, ds:[eax+0x18]
        mov dword ptr ss : [ebp-0x38], ecx
        push 5
        lea esi, ds:[eax+0x20]
        pop ecx
        lea edi, ss:[ebp-0x30]
        rep movsd
        jle public_6d4b6f8
        lea ecx, ds:[ebx+0x140]
        mov dword ptr ss : [ebp-0x10], ecx
        public_6d4b5c4 : nop
        cmp edx, 8
        mov ecx, dword ptr ss : [ebp+0xC]
        mov esi, dword ptr ss : [ebp-0xC]
        mov ecx, dword ptr ds : [ecx+esi*4]
        mov dword ptr ss : [ebp-0x1C], ecx
        mov ecx, dword ptr ss : [ebp-0x10]
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [ebp-0x14], ecx
        mov ecx, dword ptr ds : [ebx+ecx*4+0x124]
        mov ecx, dword ptr ds : [ecx+0x14]
        mov edi, dword ptr ds : [eax+ecx*4+0x38]
        jge public_6d4b61b
        push 0
        push edx
        push dword ptr ss : [ebp+8]
        lea eax, ss:[ebp-0x58]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4b730
        mov edx, dword ptr ss : [ebp-0x40]
        cmp edx, 8
        mov eax, dword ptr ss : [ebp-0x4C]
        mov dword ptr ss : [ebp+8], eax
        jge public_6d4b618
        xor eax, eax
        inc eax
        jmp public_6d4b643
        public_6d4b618 : nop
        mov eax, dword ptr ss : [ebp-8]
        public_6d4b61b : nop
        mov esi, dword ptr ss : [ebp+8]
        lea ecx, ds:[edx-8]
        sar esi, cl
        and esi, 0xFF
        mov ecx, dword ptr ds : [edi+esi*4+0xD4]
        test ecx, ecx
        je public_6d4b640
        movzx esi, byte ptr ds : [esi+edi+0x4D4]
        sub edx, ecx
        jmp public_6d4b66b
        public_6d4b640 : nop
        push 9
        pop eax
        public_6d4b643 : nop
        push eax
        push edi
        push edx
        push dword ptr ss : [ebp+8]
        lea eax, ss:[ebp-0x58]
        push eax
        call public_6d4ae5e
        mov esi, eax
        add esp, 0x14
        test esi, esi
        jl public_6d4b730
        mov eax, dword ptr ss : [ebp-0x4C]
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-8]
        public_6d4b66b : nop
        test esi, esi
        je public_6d4b6cc
        cmp edx, esi
        jge public_6d4b698
        push esi
        push edx
        push dword ptr ss : [ebp+8]
        lea eax, ss:[ebp-0x58]
        push eax
        call public_6d4ad74
        add esp, 0x10
        test al, al
        je public_6d4b730
        mov eax, dword ptr ss : [ebp-0x4C]
        mov edx, dword ptr ss : [ebp-0x40]
        mov dword ptr ss : [ebp+8], eax
        mov eax, dword ptr ss : [ebp-8]
        public_6d4b698 : nop
        mov edi, dword ptr ss : [ebp+8]
        sub edx, esi
        mov ecx, esi
        mov dword ptr ss : [ebp-4], 1
        shl dword ptr ss : [ebp-4], cl
        dec dword ptr ss : [ebp-4]
        mov ecx, edx
        sar edi, cl
        mov ecx, dword ptr ss : [ebp-4]
        shl esi, 2
        and ecx, edi
        cmp ecx, dword ptr ds : [esi+public_6d61f68]
        jge public_6d4b6ca
        mov esi, dword ptr ds : [esi+public_6d61fa8]
        add esi, ecx
        jmp public_6d4b6cc
        public_6d4b6ca : nop
        mov esi, ecx
        public_6d4b6cc : nop
        mov ecx, dword ptr ss : [ebp-0x14]
        add dword ptr ss : [ebp-0x10], 4
        lea ecx, ss:[ebp+ecx*4-0x2C]
        add dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [ecx]
        mov ecx, dword ptr ss : [ebp-0x18]
        shl esi, cl
        mov ecx, dword ptr ss : [ebp-0x1C]
        inc dword ptr ss : [ebp-0xC]
        mov word ptr ds : [ecx], si
        mov ecx, dword ptr ss : [ebp-0xC]
        cmp ecx, dword ptr ds : [ebx+0x13C]
        jl public_6d4b5c4
        public_6d4b6f8 : nop
        mov ecx, dword ptr ds : [ebx+0x14]
        mov esi, dword ptr ss : [ebp-0x58]
        mov dword ptr ds : [ecx], esi
        mov ecx, dword ptr ds : [ebx+0x14]
        mov esi, dword ptr ss : [ebp-0x54]
        mov dword ptr ds : [ecx+4], esi
        mov ecx, dword ptr ss : [ebp-0x50]
        mov dword ptr ds : [ebx+0x178], ecx
        mov ecx, dword ptr ss : [ebp+8]
        dec dword ptr ds : [eax+0x34]
        mov dword ptr ds : [eax+0x10], ecx
        push 5
        lea edi, ds:[eax+0x20]
        pop ecx
        lea esi, ss:[ebp-0x30]
        mov dword ptr ds : [eax+0x14], edx
        rep movsd
        mov al, 1
        public_6d4b72b : nop
        pop esi
        public_6d4b72c : nop
        pop edi
        pop ebx
        leave 
        ret 
        public_6d4b730 : nop
        xor al, al
        jmp public_6d4b72b
        UNREACHABLE_TRAP(0x6d4b537)
    }
}

#undef public_6d4b575
#undef public_6d4b5c4
#undef public_6d4b618
#undef public_6d4b61b
#undef public_6d4b640
#undef public_6d4b643
#undef public_6d4b66b
#undef public_6d4b698
#undef public_6d4b6ca
#undef public_6d4b6cc
#undef public_6d4b6f8
#undef public_6d4b72b
#undef public_6d4b72c
#undef public_6d4b730
