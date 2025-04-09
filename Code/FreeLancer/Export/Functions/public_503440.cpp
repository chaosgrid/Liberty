#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4fcef0);
CLANG_FORWARD_PROC_SYMBOL(public_4fedd0);
CLANG_FORWARD_PROC_SYMBOL(public_4ff3b0);
CLANG_FORWARD_PROC_SYMBOL(public_502b00);
CLANG_FORWARD_PROC_SYMBOL(public_502ba0);
CLANG_FORWARD_PROC_SYMBOL(public_502e00);
CLANG_FORWARD_PROC_SYMBOL(public_503440);
CLANG_FORWARD_PROC_SYMBOL(public_537ad0);
CLANG_FORWARD_PROC_SYMBOL(public_548890);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec6);
CLANG_FORWARD_JUMP_SYMBOL(public_5bf8dd);

#define public_503511 _public_503511
#define public_503591 _public_503591
#define public_503593 _public_503593
#define public_5035a9 _public_5035a9
#define public_5035de _public_5035de
#define public_5035e4 _public_5035e4
#define public_503610 _public_503610
#define public_503635 _public_503635
#define public_50365f _public_50365f
#define public_503665 _public_503665
#define public_503708 _public_503708
#define public_50375b _public_50375b
#define public_5037b3 _public_5037b3
#define public_5037dd _public_5037dd
#define public_5037ed _public_5037ed
#define public_503818 _public_503818
#define public_50383d _public_50383d
#define public_50386e _public_50386e
#define public_50387e _public_50387e
#define public_50388d _public_50388d
#define public_503899 _public_503899

PROC_DECLARE(0x503440, internal_503440, public_503440);
extern "C" NAKED register_t __cdecl internal_503440()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bf8dd @0x503442*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bf8dd
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x98
        push ebx
        push ebp
        mov ebp, ecx
        push esi
        push edi
        lea ecx, ss:[ebp+0x18]
        mov dword ptr ss : [esp+0x2C], ebp
        call dword ptr ds : [public_5c6030]
        xor esi, esi
        mov dword ptr ss : [ebp+0x28], esi
        mov dword ptr ss : [ebp+0x2C], esi
        mov dword ptr ss : [ebp+0x30], esi
        mov dword ptr ss : [ebp+0x34], esi
        mov dword ptr ss : [esp+0xB0], esi
        mov dword ptr ss : [ebp+0x38], esi
        mov dword ptr ss : [ebp+0x3C], esi
        mov dword ptr ss : [ebp+0x40], esi
        mov dword ptr ss : [ebp+0x44], esi
        mov dword ptr ss : [ebp+0x48], esi
        mov dword ptr ss : [ebp+0x4C], esi
        mov dword ptr ss : [ebp+0x50], esi
        mov dword ptr ss : [ebp+0x54], esi
        mov dword ptr ss : [ebp+0x58], esi
        mov dword ptr ss : [ebp+0x5C], esi
        mov dword ptr ss : [ebp+0x60], esi
        mov dword ptr ss : [ebp+0x64], esi
        lea ebx, ss:[ebp+0xA8]
        mov ecx, ebx
        mov byte ptr ss : [esp+0xB0], 3
        call public_4215b0
        mov edi, dword ptr ss : [esp+0xBC]
        cmp edi, esi
        mov dword ptr ds : [ebx+0x2C], esi
        mov dword ptr ds : [ebx+0x28], esi
        mov dword ptr ds : [ebx+0x24], esi
        je public_503899
        cmp dword ptr ss : [esp+0xB8], esi
        je public_503899
        call public_502b00
        cmp eax, esi
        mov dword ptr ss : [ebp], eax
        jne public_503511
/*FIXUP push offset public_5dab80 @0x5034ed*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dab80
        push 0x1D5
/*FIXUP push offset public_5da80c @0x5034f7*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x503501*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        public_503511 : nop
        mov ecx, dword ptr ss : [esp+0xB8]
        mov eax, 0x40A00000
        mov dword ptr ss : [ebp+0x68], ecx
        mov ecx, edi
        mov dword ptr ss : [ebp+0x24], esi
        mov byte ptr ss : [ebp+0x6C], 0
        mov byte ptr ss : [ebp+0x6D], 0
        mov dword ptr ss : [ebp+0x70], esi
        mov byte ptr ss : [ebp+0xD8], 0
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+0xC], eax
        mov dword ptr ss : [ebp+0x10], esi
        mov dword ptr ss : [ebp+0x14], 0x3F000000
        mov dword ptr ss : [ebp+0x1C], esi
        mov dword ptr ss : [ebp+0x20], esi
        call public_548890
        mov edi, eax
        cmp edi, esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x18], esi
        jne public_5035a9
        push 0xE0
        call public_5b7e84
        add esp, 4
        mov dword ptr ss : [esp+0x14], eax
        cmp eax, esi
        mov byte ptr ss : [esp+0xB0], 4
        je public_503591
        mov edx, dword ptr ss : [esp+0xBC]
        push edx
        mov ecx, eax
        call public_502ba0
        jmp public_503593
        public_503591 : nop
        xor eax, eax
        public_503593 : nop
        cmp eax, esi
        mov byte ptr ss : [esp+0xB0], 3
        mov dword ptr ss : [esp+0x18], eax
        mov edi, eax
        je public_503635
        public_5035a9 : nop
        mov ecx, dword ptr ss : [esp+0xBC]
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x1C]
        push edx
        mov dword ptr ss : [esp+0x20], esi
        call dword ptr ds : [eax+0x88]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [edi]
        shr ecx, 0xB
        and cl, 1
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], eax
        je public_503610
        test cl, cl
        je public_5035de
        mov dword ptr ss : [ebp+4], esi
        jmp public_5035e4
        public_5035de : nop
        mov ecx, dword ptr ds : [eax+0x44]
        mov dword ptr ss : [ebp+4], ecx
        public_5035e4 : nop
        mov edx, dword ptr ds : [eax+0x48]
        mov dword ptr ss : [ebp+8], edx
        mov ecx, dword ptr ds : [eax+0x4C]
        mov dword ptr ss : [ebp+0xC], ecx
        mov edx, dword ptr ds : [eax+0x50]
        mov dword ptr ss : [ebp+0x10], edx
        mov ecx, dword ptr ds : [eax+0x54]
        mov dword ptr ss : [ebp+0x14], ecx
        mov edx, dword ptr ds : [eax+0x58]
        lea ecx, ds:[eax+0x60]
        add eax, 0x63
        mov dword ptr ss : [ebp+0x18], edx
        mov dword ptr ss : [ebp+0x1C], ecx
        mov dword ptr ss : [ebp+0x20], eax
        jmp public_503635
        public_503610 : nop
        mov edx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5dab58 @0x503616*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dab58
        push 0x181
/*FIXUP push offset public_5da80c @0x503620*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x50362a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        public_503635 : nop
        mov ecx, dword ptr ss : [esp+0xBC]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x150]
        cmp eax, esi
        je public_50365f
        mov ecx, dword ptr ds : [eax+0x4C]
        and ecx, 0x303
        cmp ecx, 0x303
        jne public_50365f
        mov dword ptr ss : [esp+0x10], eax
        jmp public_503665
        public_50365f : nop
        mov dword ptr ss : [esp+0x10], esi
        mov eax, esi
        public_503665 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+0x88]
        mov edx, 0x3F800000
        mov dword ptr ds : [ebx+0x20], edx
        mov dword ptr ds : [ebx+0x10], edx
        mov dword ptr ds : [ebx], edx
        mov dword ptr ds : [ebx+0x1C], esi
        mov dword ptr ds : [ebx+0x18], esi
        mov dword ptr ds : [ebx+0x14], esi
        mov dword ptr ds : [ebx+0xC], esi
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+4], esi
        lea edx, ss:[esp+0x60]
        push edx
        lea edx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ds : [ebx+0x2C], esi
        mov dword ptr ds : [ebx+0x28], esi
        mov dword ptr ds : [ebx+0x24], esi
        mov eax, dword ptr ds : [eax+0xA4]
        push edx
        push eax
        push ecx
        mov dword ptr ss : [esp+0x34], ecx
        call dword ptr ds : [public_5c65e8]
        add esp, 0x10
        test al, al
        je public_503708
        mov ecx, dword ptr ss : [esp+0x24]
        lea eax, ss:[esp+0x60]
        push eax
        push ecx
        call dword ptr ds : [public_5c65ec]
        mov edx, dword ptr ss : [esp+0x6C]
        mov eax, dword ptr ss : [esp+0x70]
        mov ecx, 9
        lea esi, ss:[esp+0x78]
        lea edi, ss:[esp+0x38]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x74]
        mov dword ptr ss : [esp+0x64], ecx
        mov ecx, 0xC
        lea esi, ss:[esp+0x38]
        mov edi, ebx
        mov dword ptr ss : [esp+0x5C], edx
        mov dword ptr ss : [esp+0x60], eax
        add esp, 8
        rep movsd
        xor esi, esi
        jmp public_50375b
        public_503708 : nop
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [edx+0xA4]
        mov edx, dword ptr ds : [public_5c6d18]
        push ecx
        push 0x196
/*FIXUP push offset public_5da80c @0x50371e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
        mov eax, 0x100001
/*FIXUP push offset public_5dab1c @0x503728*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dab1c
        push eax
        call dword ptr ds : [edx]
        mov eax, 0x3F800000
        mov dword ptr ds : [ebx+0x20], eax
        mov dword ptr ds : [ebx+0x10], eax
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [ebx+0x1C], esi
        mov dword ptr ds : [ebx+0x18], esi
        mov dword ptr ds : [ebx+0x14], esi
        mov dword ptr ds : [ebx+0xC], esi
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+4], esi
        add esp, 0x14
        mov dword ptr ds : [ebx+0x2C], esi
        mov dword ptr ds : [ebx+0x28], esi
        mov dword ptr ds : [ebx+0x24], esi
        public_50375b : nop
        mov edi, dword ptr ss : [esp+0x18]
        call public_54baf0
        cmp dword ptr ss : [ebp+0x68], eax
        jne public_5037ed
        mov ecx, dword ptr ss : [esp+0x20]
        xor eax, eax
        cmp ecx, esi
        je public_5037b3
        lea eax, ds:[ecx+0x5C]
        push eax
        mov dword ptr ss : [esp+0x18], eax
        call public_4fedd0
        add esp, 4
        cmp eax, esi
        jne public_5037b3
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push edx
        push 0x1A5
/*FIXUP push offset public_5da80c @0x503797*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5da80c
        mov eax, 0x100001
/*FIXUP push offset public_5daaec @0x5037a1*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5daaec
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        xor eax, eax
        public_5037b3 : nop
        cmp eax, esi
        mov dword ptr ss : [ebp+0x24], eax
        je public_5037dd
        mov ecx, dword ptr ss : [ebp+0x68]
        push ecx
        mov ecx, eax
        call public_4ff3b0
        mov edi, dword ptr ss : [ebp+0x24]
        add edi, 0x230
        mov ecx, 0xC
        mov esi, ebx
        rep movsd
        mov edi, dword ptr ss : [esp+0x18]
        xor esi, esi
        public_5037dd : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x1B4]
        mov dword ptr ss : [ebp+0xA4], eax
        public_5037ed : nop
        cmp edi, esi
        mov dword ptr ss : [esp+0x14], edi
        je public_503899
        cmp dword ptr ds : [edi+4], esi
        mov byte ptr ss : [esp+0xB0], 6
        je public_50383d
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0x40]
        xor ebx, ebx
        cmp ecx, esi
        jle public_50383d
        lea ecx, ds:[edi+0x40]
        mov dword ptr ss : [esp+0x10], ecx
        public_503818 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+4]
        push edx
        add ecx, 0x28
        call public_4fcef0
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [eax+0x40]
        inc ebx
        add edx, 0x24
        cmp ebx, ecx
        mov dword ptr ss : [esp+0x10], edx
        jl public_503818
/*FIXUP public_50383d : nop
        push offset _public_502e00 @0x50383d*/
  FIXUP public_50383d : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset _public_502e00
        push 5
        push 0x24
        lea ecx, ds:[edi+0x2C]
        push ecx
        mov byte ptr ss : [esp+0xC0], 5
        call public_5b7ec6
        mov ecx, dword ptr ds : [edi+0x24]
        cmp ecx, esi
        mov byte ptr ss : [esp+0xB0], 3
        je public_50386e
        call public_4f7a90
        mov dword ptr ds : [edi+0x24], esi
        public_50386e : nop
        mov eax, dword ptr ds : [edi+0x20]
        cmp eax, esi
        je public_50387e
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [edi+0x20], esi
        public_50387e : nop
        mov ecx, dword ptr ds : [edi+0x28]
        cmp ecx, esi
        je public_50388d
        call public_537ad0
        mov dword ptr ds : [edi+0x28], esi
        public_50388d : nop
        push edi
        mov dword ptr ds : [edi+0x1C], esi
        call public_5b7e1d
        add esp, 4
        public_503899 : nop
        mov ecx, dword ptr ss : [esp+0xA8]
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xA4
        ret 8
        UNREACHABLE_TRAP(0x503440)
    }
}

#undef public_503511
#undef public_503591
#undef public_503593
#undef public_5035a9
#undef public_5035de
#undef public_5035e4
#undef public_503610
#undef public_503635
#undef public_50365f
#undef public_503665
#undef public_503708
#undef public_50375b
#undef public_5037b3
#undef public_5037dd
#undef public_5037ed
#undef public_503818
#undef public_50383d
#undef public_50386e
#undef public_50387e
#undef public_50388d
#undef public_503899
