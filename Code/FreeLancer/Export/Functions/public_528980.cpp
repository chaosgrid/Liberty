#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_40f080);
CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_4f79a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a80);
CLANG_FORWARD_PROC_SYMBOL(public_4f7a90);
CLANG_FORWARD_PROC_SYMBOL(public_4f7d20);
CLANG_FORWARD_PROC_SYMBOL(public_4f8060);
CLANG_FORWARD_PROC_SYMBOL(public_528980);
CLANG_FORWARD_PROC_SYMBOL(public_5299b0);
CLANG_FORWARD_JUMP_SYMBOL(public_5c0280);

#define public_5289b7 _public_5289b7
#define public_5289b9 _public_5289b9
#define public_5289da _public_5289da
#define public_5289dc _public_5289dc
#define public_5289ee _public_5289ee
#define public_528a15 _public_528a15
#define public_528a17 _public_528a17
#define public_528a41 _public_528a41
#define public_528a54 _public_528a54
#define public_528a60 _public_528a60
#define public_528a62 _public_528a62
#define public_528a7d _public_528a7d
#define public_528a7f _public_528a7f
#define public_528a8e _public_528a8e
#define public_528a91 _public_528a91
#define public_528aa7 _public_528aa7
#define public_528ae0 _public_528ae0
#define public_528b2d _public_528b2d
#define public_528b46 _public_528b46
#define public_528b78 _public_528b78
#define public_528b7a _public_528b7a
#define public_528bb4 _public_528bb4
#define public_528bbe _public_528bbe
#define public_528bc9 _public_528bc9
#define public_528bff _public_528bff
#define public_528c01 _public_528c01
#define public_528c1b _public_528c1b
#define public_528c41 _public_528c41
#define public_528c43 _public_528c43
#define public_528c5b _public_528c5b
#define public_528c7d _public_528c7d
#define public_528c87 _public_528c87
#define public_528c92 _public_528c92
#define public_528c94 _public_528c94
#define public_528ca3 _public_528ca3

PROC_DECLARE(0x528980, internal_528980, public_528980);
extern "C" NAKED register_t __cdecl internal_528980()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c0280 @0x528982*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c0280
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x50
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+4]
        push edi
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x1C], ebp
        mov dword ptr ss : [esp+0x10], edi
        je public_5289b7
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_5289b9
        public_5289b7 : nop
        xor eax, eax
        public_5289b9 : nop
        mov esi, dword ptr ds : [public_5c6040]
        lea ecx, ds:[eax+0x9C]
        call esi
        test al, al
        jne public_5289ee
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edi
        je public_5289da
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_5289dc
        public_5289da : nop
        xor eax, eax
        public_5289dc : nop
        add eax, 0x9C
        push eax
        call public_40f080
        add esp, 4
        mov dword ptr ss : [esp+0x10], eax
        public_5289ee : nop
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        call dword ptr ds : [eax+0x20]
        cmp eax, dword ptr ds : [public_673378]
        mov eax, dword ptr ss : [ebp+4]
        je public_528a54
        cmp eax, edi
        je public_528a15
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_528a17
        public_528a15 : nop
        xor eax, eax
        public_528a17 : nop
        lea ecx, ds:[eax+0xA0]
        call esi
        test al, al
        jne public_528a91
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edi
        je public_528a41
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        add eax, 0xA0
        push eax
        call public_40f080
        mov dword ptr ss : [esp+0x18], eax
        jmp public_528a8e
        public_528a41 : nop
        xor eax, eax
        mov eax, 0xA0
        push eax
        call public_40f080
        mov dword ptr ss : [esp+0x18], eax
        jmp public_528a8e
        public_528a54 : nop
        cmp eax, edi
        je public_528a60
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_528a62
        public_528a60 : nop
        xor eax, eax
        public_528a62 : nop
        lea ecx, ds:[eax+0xA4]
        call esi
        test al, al
        jne public_528a91
        mov eax, dword ptr ss : [ebp+4]
        cmp eax, edi
        je public_528a7d
        mov eax, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [eax+4]
        jmp public_528a7f
        public_528a7d : nop
        xor eax, eax
        public_528a7f : nop
        add eax, 0xA4
        push eax
        call public_40f080
        mov dword ptr ss : [esp+0x1C], eax
        public_528a8e : nop
        add esp, 4
        public_528a91 : nop
        cmp dword ptr ss : [esp+0x10], edi
        jne public_528aa7
        cmp dword ptr ss : [esp+0x14], edi
        jne public_528aa7
        cmp dword ptr ss : [esp+0x18], edi
        je public_528ca3
        public_528aa7 : nop
        lea ecx, ss:[esp+0x30]
        call public_4215b0
        mov eax, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x5C], 0
        mov dword ptr ss : [esp+0x58], 0
        mov dword ptr ss : [esp+0x54], 0
        mov ebx, dword ptr ds : [eax+0x38]
        mov eax, dword ptr ds : [eax+0x3C]
        cmp ebx, eax
        mov dword ptr ss : [esp+0x20], eax
        je public_528ca3
        lea ecx, ds:[ecx]
        public_528ae0 : nop
        lea ecx, ss:[esp+0x30]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [public_5c684c]
        test al, al
        je public_528c94
        mov dword ptr ss : [esp+0x28], edi
        mov dword ptr ss : [esp+0x2C], edi
        mov eax, dword ptr ss : [ebp+0x18]
        lea edx, ss:[esp+0x24]
        push edx
        lea ecx, ss:[ebp+0x10]
        push 1
        push eax
        mov dword ptr ss : [esp+0x74], edi
        call public_5299b0
        mov ecx, dword ptr ss : [esp+0x2C]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x68], 1
        je public_528b2d
        call public_4f7a90
        mov dword ptr ss : [esp+0x2C], edi
        public_528b2d : nop
        mov ecx, dword ptr ss : [esp+0x28]
        cmp ecx, edi
        mov dword ptr ss : [esp+0x68], 0xFFFFFFFF
        je public_528b46
        call public_4f7a90
        mov dword ptr ss : [esp+0x28], edi
        public_528b46 : nop
        mov edi, dword ptr ss : [ebp+0x18]
        mov ax, word ptr ds : [ebx]
        sub edi, 0xC
        mov word ptr ds : [edi], ax
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_528bc9
        push 0x84
        call public_4f79a0
        add esp, 4
        test eax, eax
        je public_528b78
        push 0
        mov ecx, eax
        call public_4f8060
        mov esi, eax
        jmp public_528b7a
        public_528b78 : nop
        xor esi, esi
        public_528b7a : nop
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x30]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_4f7d20
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [esi]
        push eax
        mov ecx, esi
        call dword ptr ds : [edx]
        test al, al
        je public_528bbe
        mov ecx, dword ptr ds : [edi+4]
        cmp ecx, esi
        je public_528bbe
        test ecx, ecx
        je public_528bb4
        call public_4f7a90
        mov dword ptr ds : [edi+4], 0
        public_528bb4 : nop
        mov ecx, esi
        mov dword ptr ds : [edi+4], esi
        call public_4f7a80
        public_528bbe : nop
        mov ecx, esi
        call public_4f7a90
        mov ebp, dword ptr ss : [esp+0x1C]
        public_528bc9 : nop
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        je public_528c1b
        push 0x90
        call public_4f79a0
        mov esi, eax
        add esp, 4
        test esi, esi
        je public_528bff
        push 0
        mov ecx, esi
        call public_4f8060
        mov dword ptr ds : [esi+0x84], 0x3F800000
        mov dword ptr ds : [esi], offset public_5dd144
        jmp public_528c01
        public_528bff : nop
        xor esi, esi
        public_528c01 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x30]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_4f7d20
        mov eax, dword ptr ss : [esp+0x14]
        jmp public_528c5b
        public_528c1b : nop
        mov eax, dword ptr ss : [esp+0x18]
        test eax, eax
        je public_528c92
        push 0x84
        call public_4f79a0
        add esp, 4
        test eax, eax
        je public_528c41
        push 0
        mov ecx, eax
        call public_4f8060
        mov esi, eax
        jmp public_528c43
        public_528c41 : nop
        xor esi, esi
        public_528c43 : nop
        mov edx, dword ptr ds : [ebx+8]
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ss:[esp+0x30]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_4f7d20
        mov eax, dword ptr ss : [esp+0x18]
        public_528c5b : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        push eax
        call dword ptr ds : [edx]
        test al, al
        je public_528c87
        mov ecx, dword ptr ds : [edi+8]
        cmp ecx, esi
        je public_528c87
        test ecx, ecx
        je public_528c7d
        call public_4f7a90
        mov dword ptr ds : [edi+8], 0
        public_528c7d : nop
        mov ecx, esi
        mov dword ptr ds : [edi+8], esi
        call public_4f7a80
        public_528c87 : nop
        mov ecx, esi
        call public_4f7a90
        mov ebp, dword ptr ss : [esp+0x1C]
        public_528c92 : nop
        xor edi, edi
        public_528c94 : nop
        mov eax, dword ptr ss : [esp+0x20]
        add ebx, 0x3C
        cmp ebx, eax
        jne public_528ae0
        public_528ca3 : nop
        mov ecx, dword ptr ss : [esp+0x60]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x5C
        ret 
        UNREACHABLE_TRAP(0x528980)
    }
}

#undef public_5289b7
#undef public_5289b9
#undef public_5289da
#undef public_5289dc
#undef public_5289ee
#undef public_528a15
#undef public_528a17
#undef public_528a41
#undef public_528a54
#undef public_528a60
#undef public_528a62
#undef public_528a7d
#undef public_528a7f
#undef public_528a8e
#undef public_528a91
#undef public_528aa7
#undef public_528ae0
#undef public_528b2d
#undef public_528b46
#undef public_528b78
#undef public_528b7a
#undef public_528bb4
#undef public_528bbe
#undef public_528bc9
#undef public_528bff
#undef public_528c01
#undef public_528c1b
#undef public_528c41
#undef public_528c43
#undef public_528c5b
#undef public_528c7d
#undef public_528c87
#undef public_528c92
#undef public_528c94
#undef public_528ca3
