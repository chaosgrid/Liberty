#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41c970);
CLANG_FORWARD_PROC_SYMBOL(public_42a7e0);
CLANG_FORWARD_PROC_SYMBOL(public_46c860);
CLANG_FORWARD_PROC_SYMBOL(public_46d680);
CLANG_FORWARD_PROC_SYMBOL(public_46ea00);
CLANG_FORWARD_PROC_SYMBOL(public_48cce0);
CLANG_FORWARD_PROC_SYMBOL(public_48d140);
CLANG_FORWARD_PROC_SYMBOL(public_5798b0);
CLANG_FORWARD_PROC_SYMBOL(public_57b370);
CLANG_FORWARD_PROC_SYMBOL(public_57b3e0);
CLANG_FORWARD_PROC_SYMBOL(public_57e2c0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_JUMP_SYMBOL(public_5bc4a2);

#define public_48ce15 _public_48ce15
#define public_48cea3 _public_48cea3
#define public_48cf72 _public_48cf72
#define public_48cf7d _public_48cf7d
#define public_48d075 _public_48d075
#define public_48d0e6 _public_48d0e6
#define public_48d101 _public_48d101
#define public_48d127 _public_48d127

PROC_DECLARE(0x48cce0, internal_48cce0, public_48cce0);
extern "C" NAKED register_t __cdecl internal_48cce0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_5bc4a2 @0x48cce8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bc4a2
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, 0x1044
        mov dword ptr fs : [0], esp
        call public_5b7e90
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x378]
        cmp eax, 0xFFFFFFFF
        push edi
        jne public_48cea3
        mov ecx, dword ptr ds : [esi+0x440]
        mov eax, dword ptr ds : [ecx]
        xor ebx, ebx
        push ebx
        push 0x72F
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x42C]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x430]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x434]
        mov edx, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x1E
        call dword ptr ds : [edx+0xA8]
        push 0x400
        lea eax, ss:[esp+0x854]
        push eax
        lea ecx, ds:[esi+0x37C]
        call public_41c970
        mov cl, byte ptr ss : [esp+0x13]
        push ebx
        mov byte ptr ss : [esp+0x24], cl
        push ebx
        lea ecx, ss:[esp+0x28]
        call public_42a7e0
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x28], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x48]
        mov dword ptr ss : [esp+0x105C], ebx
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1058], 1
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x28]
        mov byte ptr ss : [esp+0x1060], 2
        call public_42a7e0
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0xC]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x30]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x28], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x1058], 1
        je public_48ce15
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ebx
        public_48ce15 : nop
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x1058], bl
        call dword ptr ds : [public_5c62b4]
        push ebx
        lea ecx, ss:[esp+0x24]
        push ecx
        lea edx, ss:[esp+0x858]
        push edx
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        lea eax, ss:[esp+0x85C]
        push eax
        call public_57e2c0
        mov esi, dword ptr ds : [esi+0x438]
        add esp, 0x10
        mov ecx, esi
        call public_57b370
        lea ecx, ss:[esp+0x20]
        push ecx
        mov ecx, esi
        call public_57b3e0
        push ebx
        push ebx
        mov ecx, esi
        call public_5798b0
        mov eax, dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ds : [eax]
        push eax
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x1064], 0xFFFFFFFF
        call public_46c860
        mov eax, dword ptr ss : [esp+0x24]
        push eax
        call public_5b7e1d
        add esp, 4
        jmp public_48d127
        public_48cea3 : nop
        lea edi, ds:[eax+eax*2]
        mov eax, dword ptr ds : [esi+0x394]
        shl edi, 5
        push 0x400
        lea ecx, ss:[esp+0x54]
        add edi, eax
        push ecx
        lea ecx, ds:[edi+0x14]
        call public_41c970
        mov ecx, dword ptr ds : [esi+0x42C]
        mov edx, dword ptr ds : [ecx]
        xor ebx, ebx
        push ebx
        lea eax, ss:[esp+0x54]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        push 0x400
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ds:[edi+0x2C]
        call public_41c970
        mov ecx, dword ptr ds : [esi+0x430]
        mov edx, dword ptr ds : [ecx]
        push ebx
        lea eax, ss:[esp+0x54]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x30], ebx
        mov byte ptr ss : [esp+0x34], bl
        mov byte ptr ss : [esp+0x35], bl
        mov byte ptr ss : [esp+0x36], bl
        mov byte ptr ss : [esp+0x37], bl
        mov byte ptr ss : [esp+0x38], bl
        mov byte ptr ss : [esp+0x39], bl
        mov byte ptr ss : [esp+0x3A], bl
        mov byte ptr ss : [esp+0x3B], bl
        mov byte ptr ss : [esp+0x3C], bl
        mov byte ptr ss : [esp+0x3D], bl
        mov byte ptr ss : [esp+0x3E], bl
        mov byte ptr ss : [esp+0x3F], bl
        mov byte ptr ss : [esp+0x40], bl
        mov byte ptr ss : [esp+0x41], bl
        cmp dword ptr ds : [edi+0x5C], ebx
        mov dword ptr ss : [esp+0x1058], 3
        lea ecx, ss:[esp+0x2C]
        je public_48cf72
        push 0x732
        call dword ptr ds : [public_5c633c]
        mov ecx, dword ptr ds : [edi+0x5C]
        push ecx
        lea ecx, ss:[esp+0x30]
        call dword ptr ds : [public_5c63d4]
        jmp public_48cf7d
        public_48cf72 : nop
        push 0x741
        call dword ptr ds : [public_5c633c]
        public_48cf7d : nop
        lea ecx, ss:[esp+0x2C]
        call dword ptr ds : [public_5c6338]
        push 0x400
        lea edx, ss:[esp+0x54]
        push edx
        lea ecx, ss:[esp+0x34]
        call public_41c970
        mov ecx, dword ptr ds : [esi+0x434]
        mov eax, dword ptr ds : [ecx]
        push ebx
        lea edx, ss:[esp+0x54]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x440]
        mov eax, dword ptr ds : [ecx]
        push ebx
        push ebx
        push 0x1E
        call dword ptr ds : [eax+0xA8]
        push 0x400
        lea ecx, ss:[esp+0x54]
        push ecx
        lea ecx, ds:[edi+0x44]
        call public_41c970
        mov dl, byte ptr ss : [esp+0x13]
        push 0xC
        mov byte ptr ss : [esp+0x18], dl
        call public_5b7e84
        mov dword ptr ds : [eax], eax
        mov dword ptr ds : [eax+4], eax
        add esp, 4
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ebx
        push 0x9CA4
        lea ecx, ss:[esp+0x48]
        mov byte ptr ss : [esp+0x105C], 4
        call dword ptr ds : [public_5c62b8]
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        mov byte ptr ss : [esp+0x1058], 5
        call dword ptr ds : [edx+0x1C]
        mov dword ptr ss : [esp+0xC], eax
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+4]
        lea edi, ds:[eax+4]
        push ecx
        push eax
        lea ecx, ss:[esp+0x1C]
        mov byte ptr ss : [esp+0x1060], 6
        call public_42a7e0
        mov dword ptr ds : [edi], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0xC]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_46ea00
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 8
        inc ecx
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        cmp ecx, ebx
        mov byte ptr ss : [esp+0x1058], 5
        je public_48d075
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xC], ebx
        public_48d075 : nop
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0x1058], 4
        call dword ptr ds : [public_5c62b4]
        push ebx
        lea ecx, ss:[esp+0x18]
        push ecx
        lea edx, ss:[esp+0x58]
        push edx
        call dword ptr ds : [public_5c71c8]
        add esp, 4
        push eax
        lea eax, ss:[esp+0x5C]
        push eax
        call public_57e2c0
        mov edi, dword ptr ds : [esi+0x438]
        add esp, 0x10
        mov ecx, edi
        call public_57b370
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, edi
        call public_57b3e0
        push ebx
        push ebx
        mov ecx, edi
        call public_5798b0
        mov ecx, esi
        call public_48d140
        mov eax, dword ptr ss : [esp+0x18]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov byte ptr ss : [esp+0x1058], 3
        mov edi, eax
        je public_48d101
        public_48d0e6 : nop
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        push eax
        lea edx, ss:[esp+0x50]
        push edx
        lea ecx, ss:[esp+0x1C]
        call public_46d680
        cmp esi, edi
        jne public_48d0e6
        mov eax, dword ptr ss : [esp+0x18]
        public_48d101 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x18], ebx
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ss : [esp+0x1058], 0xFFFFFFFF
        call dword ptr ds : [public_5c6098]
        public_48d127 : nop
        mov ecx, dword ptr ss : [esp+0x1050]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1050
        ret 
        UNREACHABLE_TRAP(0x48cce0)
    }
}

#undef public_48ce15
#undef public_48cea3
#undef public_48cf72
#undef public_48cf7d
#undef public_48d075
#undef public_48d0e6
#undef public_48d101
#undef public_48d127
