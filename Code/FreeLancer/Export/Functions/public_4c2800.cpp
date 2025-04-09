#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46c800);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_4be6c0);
CLANG_FORWARD_PROC_SYMBOL(public_4bf850);
CLANG_FORWARD_PROC_SYMBOL(public_4c2800);
CLANG_FORWARD_PROC_SYMBOL(public_53e430);
CLANG_FORWARD_PROC_SYMBOL(public_53e4a0);
CLANG_FORWARD_PROC_SYMBOL(public_579bd0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57da40);
CLANG_FORWARD_PROC_SYMBOL(public_585890);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_JUMP_SYMBOL(public_5bd6a4);

#define public_4c285e _public_4c285e
#define public_4c28fd _public_4c28fd
#define public_4c2985 _public_4c2985
#define public_4c2a16 _public_4c2a16
#define public_4c2a2b _public_4c2a2b
#define public_4c2b50 _public_4c2b50
#define public_4c2b8f _public_4c2b8f
#define public_4c2bf6 _public_4c2bf6
#define public_4c2c11 _public_4c2c11
#define public_4c2c20 _public_4c2c20
#define public_4c2c30 _public_4c2c30
#define public_4c2c37 _public_4c2c37
#define public_4c2c4e _public_4c2c4e

PROC_DECLARE(0x4c2800, internal_4c2800, public_4c2800);
extern "C" NAKED register_t __cdecl internal_4c2800()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bd6a4 @0x4c2808*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bd6a4
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x30
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ds : [public_5c69a0]
        mov esi, ecx
        lea ecx, ss:[esp+0x14]
        call edi
        lea ecx, ss:[esp+0x10]
        call edi
        mov bl, byte ptr ss : [esp+0x54]
        test bl, bl
        mov ebp, dword ptr ss : [esp+0x50]
        je public_4c285e
        mov eax, dword ptr ss : [ebp+0x58]
        push 1
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call public_4be6c0
        add esp, 0x18
        public_4c285e : nop
        cmp ebp, dword ptr ds : [esi+0x338]
        jne public_4c2a2b
        push 0xFFFFFFFF
        mov ecx, ebp
        mov byte ptr ss : [ebp+0x5D], bl
        call public_4bf850
        mov ecx, dword ptr ds : [esi+0x368]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test bl, bl
        sete al
        push 0
        mov edi, eax
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x36C]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x370]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x374]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        test bl, bl
        je public_4c2a16
        mov ecx, dword ptr ds : [esi+0x370]
        push 1
        call public_53e4a0
        mov eax, dword ptr ss : [esp+0x14]
        xor edi, edi
        cmp eax, edi
        je public_4c28fd
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        push edi
        push ecx
        mov ecx, dword ptr ds : [esi+0x370]
        push eax
        call public_585890
        public_4c28fd : nop
        mov eax, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [esi+0x374]
        mov edx, dword ptr ds : [ecx]
        push edi
        push eax
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov cl, byte ptr ss : [esp+0x54]
        push edi
        mov byte ptr ss : [esp+0x2C], cl
        push edi
        lea ecx, ss:[esp+0x30]
        call public_42a7e0
        mov dword ptr ss : [esp+0x2C], eax
        mov dword ptr ss : [esp+0x30], edi
        push 0xD801
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x4C], edi
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x48], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x54], eax
        mov ecx, dword ptr ss : [esp+0x2C]
        lea eax, ss:[esp+0x54]
        push eax
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x54], 2
        call public_46c800
        mov ecx, dword ptr ss : [esp+0x54]
        cmp ecx, edi
        mov byte ptr ss : [esp+0x48], 1
        je public_4c2985
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x54], edi
        public_4c2985 : nop
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x48], 0
        call dword ptr ds : [public_5c62b4]
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x28]
        push ecx
        push edx
        call public_57da40
        mov ecx, dword ptr ds : [esi+0x378]
        add esp, 8
        call public_57b370
        mov ecx, dword ptr ds : [esi+0x378]
        lea eax, ss:[esp+0x28]
        push eax
        call public_57b3e0
        mov eax, dword ptr ds : [esi+0x378]
        or byte ptr ds : [eax+0x6C], 3
        mov ecx, dword ptr ds : [esi+0x378]
        push 1
        call public_579bd0
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x4C], 0xFFFFFFFF
        call public_53e430
        mov edx, dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ds : [eax]
        push edx
        push eax
        lea ecx, ss:[esp+0x58]
        push ecx
        lea ecx, ss:[esp+0x34]
        call public_46c860
        mov edx, dword ptr ss : [esp+0x2C]
        push edx
        call public_5b7e1d
        add esp, 4
        jmp public_4c2c37
        public_4c2a16 : nop
        mov eax, dword ptr ds : [esi+0x378]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov ecx, dword ptr ds : [esi+0x378]
        jmp public_4c2c30
        public_4c2a2b : nop
        cmp ebp, dword ptr ds : [esi+0x330]
        jne public_4c2c37
        push 0xFFFFFFFF
        mov ecx, ebp
        mov byte ptr ss : [ebp+0x5D], bl
        call public_4bf850
        mov ecx, dword ptr ds : [esi+0x37C]
        mov edx, dword ptr ds : [ecx]
        xor eax, eax
        test bl, bl
        sete al
        push 0
        mov edi, eax
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x380]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x384]
        mov edx, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x388]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edi
        push 1
        call dword ptr ds : [eax+0xA8]
        test bl, bl
        je public_4c2c20
        mov ecx, dword ptr ds : [esi+0x384]
        push 1
        call public_53e4a0
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x14]
        push 0
        push 0
        push ecx
        mov ecx, dword ptr ds : [esi+0x384]
        push edx
        call public_585890
        mov edx, dword ptr ss : [esp+0x54]
        mov ecx, dword ptr ds : [esi+0x388]
        mov eax, dword ptr ds : [ecx]
        push 0
        push edx
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov al, byte ptr ss : [esp+0x54]
        push 0xC
        mov byte ptr ss : [esp+0x38], al
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x38], eax
        mov dword ptr ss : [esp+0x3C], 0
        push 0xD801
        lea ecx, ss:[esp+0x24]
        mov dword ptr ss : [esp+0x4C], 3
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x48], 4
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0x54], eax
        mov edi, dword ptr ss : [esp+0x38]
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], edi
        add edi, 4
        push 0xC
        mov byte ptr ss : [esp+0x4C], 5
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x20]
        add esp, 4
        test ebp, ebp
        mov dword ptr ds : [eax], ecx
        jne public_4c2b50
        mov ebp, eax
        public_4c2b50 : nop
        mov dword ptr ds : [eax+4], ebp
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x54]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x44]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x3C], ecx
        mov ecx, dword ptr ss : [esp+0x54]
        test ecx, ecx
        mov byte ptr ss : [esp+0x48], 4
        je public_4c2b8f
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x54], 0
        public_4c2b8f : nop
        lea ecx, ss:[esp+0x20]
        mov byte ptr ss : [esp+0x48], 3
        call dword ptr ds : [public_5c62b4]
        mov edx, dword ptr ss : [esp+0x18]
        lea ecx, ss:[esp+0x34]
        push ecx
        push edx
        call public_57da40
        mov ecx, dword ptr ds : [esi+0x38C]
        add esp, 8
        call public_57b370
        mov ecx, dword ptr ds : [esi+0x38C]
        lea eax, ss:[esp+0x34]
        push eax
        call public_57b3e0
        mov eax, dword ptr ds : [esi+0x38C]
        or byte ptr ds : [eax+0x6C], 3
        mov ecx, dword ptr ds : [esi+0x38C]
        push 1
        call public_579bd0
        mov eax, dword ptr ss : [esp+0x38]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        mov dword ptr ss : [esp+0x48], 0xFFFFFFFF
        mov ebp, eax
        je public_4c2c11
        public_4c2bf6 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea ecx, ss:[esp+0x20]
        push ecx
        lea ecx, ss:[esp+0x3C]
        call public_46d680
        cmp edi, ebp
        jne public_4c2bf6
        mov eax, dword ptr ss : [esp+0x38]
        public_4c2c11 : nop
        push eax
        call public_5b7e1d
        mov ebp, dword ptr ss : [esp+0x54]
        add esp, 4
        jmp public_4c2c37
        public_4c2c20 : nop
        mov eax, dword ptr ds : [esi+0x38C]
        and byte ptr ds : [eax+0x6C], 0xFC
        mov ecx, dword ptr ds : [esi+0x38C]
        public_4c2c30 : nop
        push 0
        call public_579bd0
        public_4c2c37 : nop
        mov eax, dword ptr ds : [esi+0x424]
        test eax, eax
        je public_4c2c4e
        cmp dword ptr ds : [eax+4], ebp
        jne public_4c2c4e
        mov edx, dword ptr ds : [esi+0x428]
        mov byte ptr ds : [edx], bl
        public_4c2c4e : nop
        mov ecx, dword ptr ss : [esp+0x40]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x3C
        ret 8
        UNREACHABLE_TRAP(0x4c2800)
    }
}

#undef public_4c285e
#undef public_4c28fd
#undef public_4c2985
#undef public_4c2a16
#undef public_4c2a2b
#undef public_4c2b50
#undef public_4c2b8f
#undef public_4c2bf6
#undef public_4c2c11
#undef public_4c2c20
#undef public_4c2c30
#undef public_4c2c37
#undef public_4c2c4e
