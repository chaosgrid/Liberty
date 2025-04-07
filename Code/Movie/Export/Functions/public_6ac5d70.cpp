#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac3140);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3300);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3450);
CLANG_FORWARD_PROC_SYMBOL(public_6ac3490);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4f80);
CLANG_FORWARD_PROC_SYMBOL(public_6ac4fb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac5d70);
CLANG_FORWARD_PROC_SYMBOL(public_6ac6bb0);
CLANG_FORWARD_PROC_SYMBOL(public_6ac7210);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8010);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8190);

#define public_6ac5dc5 _public_6ac5dc5
#define public_6ac5dc7 _public_6ac5dc7
#define public_6ac5e13 _public_6ac5e13
#define public_6ac5e23 _public_6ac5e23
#define public_6ac5e4e _public_6ac5e4e
#define public_6ac5e7b _public_6ac5e7b
#define public_6ac5eea _public_6ac5eea
#define public_6ac5eec _public_6ac5eec
#define public_6ac5efb _public_6ac5efb
#define public_6ac5f27 _public_6ac5f27
#define public_6ac5f62 _public_6ac5f62
#define public_6ac5f64 _public_6ac5f64
#define public_6ac5f96 _public_6ac5f96
#define public_6ac5fc3 _public_6ac5fc3
#define public_6ac5fcb _public_6ac5fcb
#define public_6ac5fcd _public_6ac5fcd
#define public_6ac5fe4 _public_6ac5fe4
#define public_6ac6003 _public_6ac6003
#define public_6ac6005 _public_6ac6005
#define public_6ac601c _public_6ac601c
#define public_6ac6046 _public_6ac6046
#define public_6ac6048 _public_6ac6048
#define public_6ac606c _public_6ac606c
#define public_6ac60a4 _public_6ac60a4
#define public_6ac60a6 _public_6ac60a6
#define public_6ac60b9 _public_6ac60b9
#define public_6ac60da _public_6ac60da
#define public_6ac60dc _public_6ac60dc
#define public_6ac6101 _public_6ac6101
#define public_6ac6150 _public_6ac6150
#define public_6ac6152 _public_6ac6152
#define public_6ac616b _public_6ac616b
#define public_6ac616f _public_6ac616f
#define public_6ac6179 _public_6ac6179
#define public_6ac6187 _public_6ac6187

PROC_DECLARE(0x6ac5d70, internal_6ac5d70, public_6ac5d70);
extern "C" NAKED register_t __cdecl internal_6ac5d70()
{
    __asm
    {
        sub esp, 0x38
        mov eax, dword ptr ss : [esp+0x4C]
        push ebx
        push ebp
        push esi
        mov eax, dword ptr ds : [eax]
        push edi
        xor ebx, ebx
        push 0x1000
        mov esi, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x24], esi
        mov dword ptr ss : [esp+0x38], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x28], ebx
        call public_6ac4f80
        mov ebp, eax
        mov eax, dword ptr ds : [public_6ae097c]
        mov edi, 0x2B
        mov dword ptr ss : [esp+0x28], ebp
        cmp eax, edi
        jne public_6ac5e4e
        mov dword ptr ss : [esp+0x28], ebx
        mov ebp, ebx
        public_6ac5dc5 : nop
        xor edi, edi
        public_6ac5dc7 : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov dword ptr ss : [esp+0x4C], 0
        cmp eax, 1
        jb public_6ac616f
        mov ecx, dword ptr ss : [esp+0x20]
        mov edx, ecx
        lea esi, ds:[ecx*8]
        mov ecx, dword ptr ss : [esp+0x58]
        lea eax, ds:[edx*4]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ss : [esp+0x54]
        lea ebp, ds:[esi+ecx]
        mov dword ptr ss : [esp+0x40], esi
        mov dword ptr ss : [esp+0x44], ebp
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x3C], eax
        public_6ac5e13 : nop
        mov eax, dword ptr ss : [esp+0x50]
        test eax, eax
        je public_6ac5efb
        mov dword ptr ss : [esp+0x38], eax
        public_6ac5e23 : nop
        test edi, edi
        je public_6ac5eea
        mov ecx, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x5C]
        push ecx
        push edx
        push ebx
        push ebx
        call public_6ac7210
        test eax, eax
        je public_6ac5eea
        mov edi, 1
        jmp public_6ac5eec
        public_6ac5e4e : nop
        imul esi, dword ptr ss : [esp+0x54]
        lea ecx, ds:[esi*8]
        push ecx
        call public_6ac4f80
        mov ecx, dword ptr ds : [public_6ae097c]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x34], eax
        jne public_6ac5e7b
        mov dword ptr ss : [esp+0x34], 0
        jmp public_6ac5dc5
        public_6ac5e7b : nop
        mov edi, dword ptr ss : [esp+0x5C]
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ds:[eax+esi*4]
        mov esi, dword ptr ss : [esp+0x4C]
        lea edx, ss:[ebp+0x600]
        push edi
        push esi
        mov dword ptr ss : [esp+0x1C], ebp
        lea ebx, ss:[ebp+0x100]
        mov dword ptr ss : [esp+0x34], edx
        mov dword ptr ss : [esp+0x2C], eax
        call public_6ac8010
        test eax, eax
        je public_6ac5dc5
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x58]
        push ecx
        push 2
        push edx
        push esi
        call public_6ac3140
        test eax, eax
        je public_6ac5dc5
        mov eax, dword ptr ss : [esp+0x2C]
        push eax
        push edi
        push ebx
        push esi
        call public_6ac6bb0
        test eax, eax
        je public_6ac5dc5
        mov edi, 1
        jmp public_6ac5dc7
        public_6ac5eea : nop
        xor edi, edi
        public_6ac5eec : nop
        mov eax, dword ptr ss : [esp+0x38]
        dec eax
        mov dword ptr ss : [esp+0x38], eax
        jne public_6ac5e23
        public_6ac5efb : nop
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        lea eax, ds:[esi+ebx]
        push eax
        call public_6ac3450
        test eax, eax
        je public_6ac5f27
        test edi, edi
        je public_6ac5f62
        mov ecx, dword ptr ss : [esp+0x5C]
        push ecx
        push ebp
        call public_6ac8190
        test eax, eax
        je public_6ac5f62
        mov edi, 1
        jmp public_6ac5f64
        public_6ac5f27 : nop
        mov ecx, dword ptr ss : [esp+0x4C]
        inc ecx
        test edi, edi
        mov dword ptr ss : [esp+0x4C], ecx
        je public_6ac5f62
        mov edi, dword ptr ss : [esp+0x10]
        push edi
        push 2
        push ebp
        push ebx
        call public_6ac3140
        test eax, eax
        je public_6ac5f62
        mov edx, dword ptr ss : [esp+0x30]
        push edi
        push 1
        lea eax, ds:[esi+ebx]
        push edx
        push eax
        call public_6ac3140
        test eax, eax
        je public_6ac5f62
        mov edi, 1
        jmp public_6ac5f64
        public_6ac5f62 : nop
        xor edi, edi
        public_6ac5f64 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x30]
        add edx, eax
        mov eax, dword ptr ss : [esp+0x3C]
        add ebp, esi
        dec eax
        mov dword ptr ss : [esp+0x30], edx
        mov dword ptr ss : [esp+0x3C], eax
        jne public_6ac5e13
        mov esi, dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x54]
        cmp esi, eax
        jbe public_6ac5f96
        xor edi, edi
        jmp public_6ac616b
        public_6ac5f96 : nop
        test esi, esi
        jbe public_6ac616b
        test edi, edi
        je public_6ac5fc3
        mov ecx, dword ptr ss : [esp+0x10]
        mov ebx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x1C]
        push ecx
        push 1
        push ebx
        push ebp
        call public_6ac3140
        test eax, eax
        je public_6ac5fcb
        mov eax, 1
        jmp public_6ac5fcd
        public_6ac5fc3 : nop
        mov ebx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6ac5fcb : nop
        xor eax, eax
        public_6ac5fcd : nop
        cmp esi, 1
        je public_6ac601c
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x4C]
        mov edi, ebx
        sub ebx, ebp
        lea esi, ds:[edx+ebp]
        lea ebp, ds:[ecx-1]
        public_6ac5fe4 : nop
        test eax, eax
        je public_6ac6003
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[ebx+esi]
        push edx
        push eax
        push edi
        push esi
        call public_6ac3490
        test eax, eax
        je public_6ac6003
        mov eax, 1
        jmp public_6ac6005
        public_6ac6003 : nop
        xor eax, eax
        public_6ac6005 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        add edi, ecx
        add esi, ecx
        dec ebp
        jne public_6ac5fe4
        mov ebx, dword ptr ss : [esp+0x24]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov esi, dword ptr ss : [esp+0x4C]
        public_6ac601c : nop
        test eax, eax
        je public_6ac6046
        lea eax, ds:[esi-1]
        mov ecx, dword ptr ss : [esp+0x10]
        imul eax, dword ptr ss : [esp+0x20]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        lea ecx, ds:[ebx+eax*4]
        push edx
        push ecx
        call public_6ac3300
        test eax, eax
        je public_6ac6046
        mov ecx, 1
        jmp public_6ac6048
        public_6ac6046 : nop
        xor ecx, ecx
        public_6ac6048 : nop
        lea eax, ds:[esi-1]
        test eax, eax
        je public_6ac60b9
        mov edx, eax
        lea esi, ds:[eax*4-4]
        imul edx, dword ptr ss : [esp+0x20]
        imul esi, dword ptr ss : [esp+0x20]
        add esi, ebx
        lea edi, ss:[ebp+edx*4]
        sub ebx, ebp
        mov ebp, eax
        public_6ac606c : nop
        test ecx, ecx
        je public_6ac60a4
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        lea ecx, ds:[edi+ebx]
        push eax
        push ecx
        push esi
        push edx
        call public_6ac3490
        test eax, eax
        je public_6ac60a4
        mov eax, dword ptr ss : [esp+0x10]
        push eax
        mov eax, dword ptr ss : [esp+0x18]
        push eax
        push edi
        push eax
        call public_6ac3490
        test eax, eax
        je public_6ac60a4
        mov ecx, 1
        jmp public_6ac60a6
        public_6ac60a4 : nop
        xor ecx, ecx
        public_6ac60a6 : nop
        mov eax, dword ptr ss : [esp+0x18]
        sub esi, eax
        sub edi, eax
        dec ebp
        jne public_6ac606c
        mov ebx, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x4C]
        public_6ac60b9 : nop
        test ecx, ecx
        je public_6ac60da
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        push ecx
        push 1
        push ebx
        push edx
        call public_6ac3140
        test eax, eax
        je public_6ac60da
        mov edi, 1
        jmp public_6ac60dc
        public_6ac60da : nop
        xor edi, edi
        public_6ac60dc : nop
        test esi, esi
        je public_6ac616b
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x4C]
        mov ebp, dword ptr ss : [esp+0x44]
        lea esi, ds:[ecx+eax]
        mov eax, dword ptr ss : [esp+0x58]
        add esi, eax
        mov dword ptr ss : [esp+0x5C], edx
        public_6ac6101 : nop
        test edi, edi
        je public_6ac6150
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x14]
        push edi
        push eax
        push ebx
        push ebx
        call public_6ac3490
        test eax, eax
        je public_6ac6150
        push edi
        push esi
        push ebx
        push esi
        call public_6ac3490
        test eax, eax
        je public_6ac6150
        mov ecx, dword ptr ss : [esp+0x14]
        push edi
        push esi
        push ecx
        push esi
        call public_6ac3490
        test eax, eax
        je public_6ac6150
        mov edx, dword ptr ss : [esp+0x14]
        push edi
        push ebp
        push edx
        push ebp
        call public_6ac3490
        test eax, eax
        je public_6ac6150
        mov edi, 1
        jmp public_6ac6152
        public_6ac6150 : nop
        xor edi, edi
        public_6ac6152 : nop
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ss : [esp+0x18]
        add ebp, eax
        add esi, eax
        mov eax, dword ptr ss : [esp+0x5C]
        add ebx, ecx
        dec eax
        mov dword ptr ss : [esp+0x5C], eax
        jne public_6ac6101
        public_6ac616b : nop
        mov ebp, dword ptr ss : [esp+0x28]
        public_6ac616f : nop
        test ebp, ebp
        je public_6ac6179
        push ebp
        call public_6ac4fb0
        public_6ac6179 : nop
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        je public_6ac6187
        push eax
        call public_6ac4fb0
        public_6ac6187 : nop
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x38
        ret 0x14
        UNREACHABLE_TRAP(0x6ac5d70)
    }
}

#undef public_6ac5dc5
#undef public_6ac5dc7
#undef public_6ac5e13
#undef public_6ac5e23
#undef public_6ac5e4e
#undef public_6ac5e7b
#undef public_6ac5eea
#undef public_6ac5eec
#undef public_6ac5efb
#undef public_6ac5f27
#undef public_6ac5f62
#undef public_6ac5f64
#undef public_6ac5f96
#undef public_6ac5fc3
#undef public_6ac5fcb
#undef public_6ac5fcd
#undef public_6ac5fe4
#undef public_6ac6003
#undef public_6ac6005
#undef public_6ac601c
#undef public_6ac6046
#undef public_6ac6048
#undef public_6ac606c
#undef public_6ac60a4
#undef public_6ac60a6
#undef public_6ac60b9
#undef public_6ac60da
#undef public_6ac60dc
#undef public_6ac6101
#undef public_6ac6150
#undef public_6ac6152
#undef public_6ac616b
#undef public_6ac616f
#undef public_6ac6179
#undef public_6ac6187
