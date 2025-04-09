#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);
CLANG_FORWARD_PROC_SYMBOL(public_420d40);
CLANG_FORWARD_PROC_SYMBOL(public_444e20);
CLANG_FORWARD_PROC_SYMBOL(public_445d70);
CLANG_FORWARD_PROC_SYMBOL(public_491f90);
CLANG_FORWARD_PROC_SYMBOL(public_492250);
CLANG_FORWARD_PROC_SYMBOL(public_59ec80);
CLANG_FORWARD_PROC_SYMBOL(public_59ef20);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc83e);

#define public_492015 _public_492015
#define public_492017 _public_492017
#define public_4920b0 _public_4920b0
#define public_49217b _public_49217b
#define public_49218f _public_49218f
#define public_49219b _public_49219b
#define public_4921b6 _public_4921b6
#define public_49220a _public_49220a
#define public_492221 _public_492221

PROC_DECLARE(0x491f90, internal_491f90, public_491f90);
extern "C" NAKED register_t __cdecl internal_491f90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bc83e @0x491f92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc83e
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x214
        push ebx
        push ebp
        push esi
        push edi
        push 0x84
        mov dword ptr ss : [esp+0x18], ecx
        call public_5b7e84
        mov ebp, eax
        add esp, 4
        mov dword ptr ss : [esp+0x10], ebp
        xor ebx, ebx
        cmp ebp, ebx
        mov dword ptr ss : [esp+0x22C], ebx
        je public_492015
        lea esi, ss:[ebp+8]
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], esi
        call public_420d40
        lea ecx, ds:[esi+0x14]
        mov byte ptr ss : [esp+0x22C], 1
        call public_492250
        mov dword ptr ds : [esi], offset public_5d2efc
        mov dword ptr ds : [esi+0x10], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0x5C], ebx
        mov dword ptr ss : [ebp+0x60], ebx
        mov dword ptr ss : [ebp+0x78], ebx
        mov byte ptr ss : [ebp+0x80], bl
        mov byte ptr ss : [ebp+0x81], bl
        jmp public_492017
        public_492015 : nop
        xor ebp, ebp
        public_492017 : nop
        mov ecx, dword ptr ss : [esp+0x23C]
        mov edx, dword ptr ss : [esp+0x240]
        lea eax, ss:[ebp+0x30]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x244]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ss : [esp+0x248]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ss : [esp+0x238]
        mov ecx, dword ptr ss : [esp+0x234]
        mov dword ptr ss : [ebp+4], eax
        mov eax, dword ptr ss : [esp+0x250]
        mov dword ptr ss : [ebp+0x3C], edx
        mov edx, dword ptr ss : [esp+0x258]
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ss : [esp+0x254]
        mov dword ptr ss : [ebp+0x4C], eax
        mov eax, dword ptr ss : [esp+0x25C]
        mov dword ptr ss : [ebp+0x44], edx
        mov edx, dword ptr ss : [esp+0x248]
        mov dword ptr ss : [ebp+0x50], ecx
        mov cl, byte ptr ss : [esp+0x260]
        mov dword ptr ss : [ebp+0x70], eax
        mov dword ptr ss : [esp+0x22C], 0xFFFFFFFF
        mov byte ptr ss : [ebp+0x48], 1
        mov dword ptr ss : [ebp+0x64], ebx
        mov dword ptr ss : [ebp+0x54], ebx
        mov dword ptr ss : [ebp+0x58], ebx
        mov dword ptr ss : [ebp+0x40], edx
        mov byte ptr ss : [ebp+0x74], cl
        xor eax, eax
        nop 
        lea esp, ss:[esp]
        public_4920b0 : nop
        mov cl, byte ptr ds : [eax+public_5d3d8c]
        mov byte ptr ss : [esp+eax+0x1C], cl
        inc eax
        cmp cl, bl
        jne public_4920b0
        mov edi, dword ptr ss : [esp+0x24C]
        xor eax, eax
        mov ecx, 0xFFFFFFFF
        repne scasb
        not ecx
        sub edi, ecx
        mov eax, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov dword ptr ss : [esp+0x10], eax
        xor eax, eax
        lea edx, ss:[esp+0x1C]
        mov edi, edx
        mov edx, dword ptr ss : [esp+0x10]
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ds : [public_5c6dd8]
        and ecx, 3
        rep movsb
        or ecx, 0xFFFFFFFF
        lea edi, ss:[esp+0x1C]
        repne scasb
        mov eax, dword ptr ds : [public_5d3d84]
        mov cl, byte ptr ds : [public_5d3d88]
        dec edi
        mov dword ptr ds : [edi], eax
        mov byte ptr ds : [edi+4], cl
        mov eax, dword ptr ds : [edx]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea edx, ss:[esp+0x128]
        push edx
        call dword ptr ds : [public_5c6068]
        lea eax, ss:[esp+0x12C]
        push ebx
        push eax
        call dword ptr ds : [public_5c70d0]
        add esp, 0x14
        cmp eax, 0xFFFFFFFF
        je public_4921b6
        push 1
/*FIXUP push offset public_5d3d40 @0x49214a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d3d40
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[ebp+8]
        call public_59ec80
        mov edx, dword ptr ss : [esp+0x14]
        mov esi, dword ptr ds : [edx+0x400]
        mov edi, dword ptr ds : [esi+4]
        push 0xC
        call public_5b7e84
        add esp, 4
        cmp edi, ebx
        mov dword ptr ds : [eax], esi
        jne public_49217b
        mov edi, eax
        public_49217b : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        cmp eax, ebx
        je public_49218f
        mov dword ptr ds : [eax], ebp
        public_49218f : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc dword ptr ds : [eax+0x404]
        mov eax, ebp
        public_49219b : nop
        mov ecx, dword ptr ss : [esp+0x224]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x220
        ret 0x30
        public_4921b6 : nop
        mov dword ptr ss : [esp+0x18], ebp
        mov dword ptr ss : [esp+0x22C], 2
        mov esi, dword ptr ss : [ebp+0x78]
        cmp esi, ebx
        je public_49220a
        mov dword ptr ss : [esp+0x10], esi
        mov ecx, esi
        mov byte ptr ss : [esp+0x22C], 5
        call public_4144f0
        lea ecx, ds:[esi+0xC]
        mov byte ptr ss : [esp+0x22C], 4
        call public_445d70
        mov ecx, esi
        mov byte ptr ss : [esp+0x22C], 3
        call public_444e20
        push esi
        call public_5b7e1d
        add esp, 4
        mov dword ptr ss : [ebp+0x78], ebx
        public_49220a : nop
        mov eax, dword ptr ss : [ebp+0x5C]
        cmp eax, ebx
        je public_492221
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ss : [ebp+0x5C], ebx
        mov dword ptr ss : [ebp+0x60], ebx
        public_492221 : nop
        lea ecx, ss:[ebp+8]
        mov dword ptr ss : [esp+0x22C], 0xFFFFFFFF
        call public_59ef20
        push ebp
        call public_5b7e1d
        add esp, 4
        xor eax, eax
        jmp public_49219b
        UNREACHABLE_TRAP(0x491f90)
    }
}

#undef public_492015
#undef public_492017
#undef public_4920b0
#undef public_49217b
#undef public_49218f
#undef public_49219b
#undef public_4921b6
#undef public_49220a
#undef public_492221
