#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d01143);
CLANG_FORWARD_PROC_SYMBOL(public_6d16d20);
CLANG_FORWARD_PROC_SYMBOL(public_6d1c810);
CLANG_FORWARD_PROC_SYMBOL(public_6d1d490);
CLANG_FORWARD_PROC_SYMBOL(public_6d2b990);
CLANG_FORWARD_PROC_SYMBOL(public_6d2c31c);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);

#define public_6d013de _public_6d013de
#define public_6d0140a _public_6d0140a
#define public_6d01427 _public_6d01427
#define public_6d0145e _public_6d0145e
#define public_6d0148c _public_6d0148c
#define public_6d014b4 _public_6d014b4

PROC_DECLARE(0x6d01143, internal_6d01143, public_6d01143);
extern "C" NAKED register_t __cdecl internal_6d01143()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x8C
        mov dword ptr ss : [ebp-0x8C], ecx
        mov eax, dword ptr ss : [ebp-0x8C]
        add eax, 4
        mov dword ptr ss : [ebp-0x10], eax
        mov ecx, dword ptr ss : [ebp-0x10]
        mov dword ptr ds : [ecx], offset public_6d5e460
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 8
        mov dword ptr ss : [ebp-0x14], edx
        mov eax, dword ptr ss : [ebp-0x14]
        mov dword ptr ds : [eax], offset public_6d5e450
        mov ecx, dword ptr ss : [ebp-0x8C]
        add ecx, 0xC
        mov dword ptr ss : [ebp-0x18], ecx
        mov edx, dword ptr ss : [ebp-0x18]
        mov dword ptr ds : [edx], offset public_6d5e420
        mov eax, dword ptr ss : [ebp-0x8C]
        add eax, 0x10
        mov dword ptr ss : [ebp-0x1C], eax
        mov ecx, dword ptr ss : [ebp-0x1C]
        mov dword ptr ds : [ecx], offset public_6d5e3ec
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 0x20
        mov dword ptr ss : [ebp-0x20], edx
        mov eax, dword ptr ss : [ebp-0x20]
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ss : [ebp-0x8C]
        add ecx, 0x134
        mov dword ptr ss : [ebp-0x24], ecx
        mov edx, dword ptr ss : [ebp-0x24]
        mov dword ptr ds : [edx], 0
        mov eax, dword ptr ss : [ebp-0x8C]
        add eax, 0x138
        mov dword ptr ss : [ebp-0x28], eax
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [ecx+0xC], 0xFFFFFFFF
        mov edx, dword ptr ss : [ebp-0x28]
        mov dword ptr ds : [edx+0x10], 0
        mov eax, dword ptr ss : [ebp-0x8C]
        add eax, 0x14C
        mov dword ptr ss : [ebp-0x2C], eax
        mov ecx, 0x200
        or ecx, 8
        mov edx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [edx+0xC], 0
        mov eax, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [eax+0x10], 0
        mov ecx, dword ptr ss : [ebp-0x2C]
        mov dword ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 0x16C
        mov dword ptr ss : [ebp-0x30], edx
        mov al, byte ptr ss : [ebp-1]
        mov ecx, dword ptr ss : [ebp-0x30]
        mov byte ptr ds : [ecx], al
        mov dl, byte ptr ss : [ebp-2]
        mov eax, dword ptr ss : [ebp-0x30]
        mov byte ptr ds : [eax+1], dl
        mov ecx, dword ptr ss : [ebp-0x30]
        mov byte ptr ds : [ecx+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x30]
        call public_6d1d490
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 0x188
        mov dword ptr ss : [ebp-0x34], edx
        mov al, byte ptr ss : [ebp-3]
        mov ecx, dword ptr ss : [ebp-0x34]
        mov byte ptr ds : [ecx], al
        mov edx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x34]
        mov dword ptr ds : [ecx+0xC], 0
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 0x198
        mov dword ptr ss : [ebp-0x38], edx
        mov al, byte ptr ss : [ebp-4]
        mov ecx, dword ptr ss : [ebp-0x38]
        mov byte ptr ds : [ecx], al
        mov edx, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x38]
        mov dword ptr ds : [ecx+0xC], 0
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 0x230
        mov dword ptr ss : [ebp-0x3C], edx
        push 0
        call public_6d5cc30
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x3C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 0x234
        mov dword ptr ss : [ebp-0x40], edx
        push 0
        call public_6d5cc30
        add esp, 4
        mov ecx, dword ptr ss : [ebp-0x40]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 0x278
        mov dword ptr ss : [ebp-0x44], edx
        mov al, byte ptr ss : [ebp-5]
        mov ecx, dword ptr ss : [ebp-0x44]
        mov byte ptr ds : [ecx], al
        mov dl, byte ptr ss : [ebp-6]
        mov eax, dword ptr ss : [ebp-0x44]
        mov byte ptr ds : [eax+1], dl
        mov ecx, dword ptr ss : [ebp-0x44]
        mov byte ptr ds : [ecx+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x44]
        call public_6d1c810
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 0x28C
        mov dword ptr ss : [ebp-0x48], edx
        mov al, byte ptr ss : [ebp-7]
        mov ecx, dword ptr ss : [ebp-0x48]
        mov byte ptr ds : [ecx], al
        mov dl, byte ptr ss : [ebp-8]
        mov eax, dword ptr ss : [ebp-0x48]
        mov byte ptr ds : [eax+1], dl
        mov ecx, dword ptr ss : [ebp-0x48]
        mov byte ptr ds : [ecx+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x48]
        call public_6d1c810
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 0x2A0
        mov dword ptr ss : [ebp-0x4C], edx
        mov al, byte ptr ss : [ebp-9]
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov byte ptr ds : [ecx], al
        mov dl, byte ptr ss : [ebp-0xA]
        mov eax, dword ptr ss : [ebp-0x4C]
        mov byte ptr ds : [eax+1], dl
        mov ecx, dword ptr ss : [ebp-0x4C]
        mov byte ptr ds : [ecx+0xC], 0
        mov ecx, dword ptr ss : [ebp-0x4C]
        call public_6d1c810
        mov dword ptr ss : [ebp-0x5C], 8
        mov dword ptr ss : [ebp-0x58], 0x14
        mov edx, dword ptr ss : [ebp-0x8C]
        add edx, 0x2B4
        mov dword ptr ss : [ebp-0x54], edx
        public_6d013de : nop
        mov eax, dword ptr ss : [ebp-0x5C]
        sub eax, 1
        mov dword ptr ss : [ebp-0x5C], eax
        cmp dword ptr ss : [ebp-0x5C], 0
        jl public_6d0140a
        lea ecx, ss:[ebp-0x4D]
        push ecx
        push 0
        lea edx, ss:[ebp-0x4E]
        push edx
        mov ecx, dword ptr ss : [ebp-0x54]
        call public_6d16d20
        mov eax, dword ptr ss : [ebp-0x54]
        add eax, dword ptr ss : [ebp-0x58]
        mov dword ptr ss : [ebp-0x54], eax
        jmp public_6d013de
        public_6d0140a : nop
        mov dword ptr ss : [ebp-0x68], 0xE
        mov dword ptr ss : [ebp-0x64], 0xC
        mov ecx, dword ptr ss : [ebp-0x8C]
        add ecx, 0x354
        mov dword ptr ss : [ebp-0x60], ecx
        public_6d01427 : nop
        mov edx, dword ptr ss : [ebp-0x68]
        sub edx, 1
        mov dword ptr ss : [ebp-0x68], edx
        cmp dword ptr ss : [ebp-0x68], 0
        jl public_6d0145e
        mov eax, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [ecx+4], 0
        mov edx, dword ptr ss : [ebp-0x60]
        mov dword ptr ds : [edx+8], 0
        mov eax, dword ptr ss : [ebp-0x60]
        add eax, dword ptr ss : [ebp-0x64]
        mov dword ptr ss : [ebp-0x60], eax
        jmp public_6d01427
        public_6d0145e : nop
        mov ecx, dword ptr ss : [ebp-0x8C]
        add ecx, 0x44C
        call public_6d2b990
        mov dword ptr ss : [ebp-0x74], 8
        mov dword ptr ss : [ebp-0x70], 0x44
        mov ecx, dword ptr ss : [ebp-0x8C]
        add ecx, 0x1FD4
        mov dword ptr ss : [ebp-0x6C], ecx
        public_6d0148c : nop
        mov edx, dword ptr ss : [ebp-0x74]
        sub edx, 1
        mov dword ptr ss : [ebp-0x74], edx
        cmp dword ptr ss : [ebp-0x74], 0
        jl public_6d014b4
        mov eax, dword ptr ss : [ebp-0x6C]
        mov byte ptr ds : [eax+0x41], 0
        mov ecx, dword ptr ss : [ebp-0x6C]
        mov byte ptr ds : [ecx+0x40], 0
        mov edx, dword ptr ss : [ebp-0x6C]
        add edx, dword ptr ss : [ebp-0x70]
        mov dword ptr ss : [ebp-0x6C], edx
        jmp public_6d0148c
        public_6d014b4 : nop
        mov ecx, dword ptr ss : [ebp-0x8C]
        add ecx, 0x21F4
        call public_6d2c31c
        mov eax, dword ptr ss : [ebp-0x8C]
        add eax, 0x21FC
        mov dword ptr ss : [ebp-0x78], eax
        mov ecx, dword ptr ss : [ebp-0x78]
        mov byte ptr ds : [ecx+0x41], 0
        mov edx, dword ptr ss : [ebp-0x78]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, dword ptr ss : [ebp-0x8C]
        add eax, 0x2240
        mov dword ptr ss : [ebp-0x7C], eax
        mov ecx, dword ptr ss : [ebp-0x7C]
        mov byte ptr ds : [ecx+0x41], 0
        mov edx, dword ptr ss : [ebp-0x7C]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, dword ptr ss : [ebp-0x8C]
        add eax, 0x2284
        mov dword ptr ss : [ebp-0x80], eax
        mov ecx, dword ptr ss : [ebp-0x80]
        mov byte ptr ds : [ecx+0x41], 0
        mov edx, dword ptr ss : [ebp-0x80]
        mov byte ptr ds : [edx+0x40], 0
        mov eax, dword ptr ss : [ebp-0x8C]
        add eax, 0x22E4
        mov dword ptr ss : [ebp-0x84], eax
        mov ecx, dword ptr ss : [ebp-0x84]
        mov dword ptr ds : [ecx], 0
        mov edx, dword ptr ss : [ebp-0x84]
        mov dword ptr ds : [edx+4], 0
        mov eax, dword ptr ss : [ebp-0x84]
        mov dword ptr ds : [eax+8], 0
        mov ecx, dword ptr ss : [ebp-0x8C]
        add ecx, 0x22F0
        mov dword ptr ss : [ebp-0x88], ecx
        mov edx, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [edx], 0
        mov eax, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [eax+4], 0
        mov ecx, dword ptr ss : [ebp-0x88]
        mov dword ptr ds : [ecx+8], 0
        mov edx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [edx], offset public_6d5e2b8
        mov eax, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [eax+4], offset public_6d5e294
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [ecx+8], offset public_6d5e284
        mov edx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [edx+0xC], offset public_6d5e254
        mov eax, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [eax+0x10], offset public_6d5e220
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [ecx+0x14], offset public_6d5e200
        mov edx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [edx+0x18], offset public_6d5e1e0
        mov eax, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [eax+0x1C], offset public_6d5e1d0
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [ecx+0x12C], 0
        mov edx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [edx+0x130], 0
        mov eax, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [eax+0x1A8], 0xFFFFFFFF
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [ecx+0x1AC], 1
        mov edx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [edx+0x260], 0
        mov eax, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [eax+0x184], 0
        mov ecx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [ecx+0x128], 0
        mov edx, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [edx+0x180], 0
        mov eax, dword ptr ss : [ebp-0x8C]
        mov dword ptr ds : [eax+0x168], 0
        mov eax, dword ptr ss : [ebp-0x8C]
        mov esp, ebp
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d01143)
    }
}

#undef public_6d013de
#undef public_6d0140a
#undef public_6d01427
#undef public_6d0145e
#undef public_6d0148c
#undef public_6d014b4
