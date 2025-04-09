#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_441a40);

#define public_441a60 _public_441a60
#define public_441a76 _public_441a76
#define public_441a85 _public_441a85
#define public_441a87 _public_441a87
#define public_441ac3 _public_441ac3
#define public_441b1f _public_441b1f
#define public_441b79 _public_441b79
#define public_441b87 _public_441b87

PROC_DECLARE(0x441a40, internal_441a40, public_441a40);
extern "C" NAKED register_t __cdecl internal_441a40()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        mov ebx, dword ptr ds : [ecx+0x380]
        mov edx, dword ptr ds : [ebx]
        push esi
        push edi
        xor edi, edi
        xor esi, esi
        cmp edx, ebx
        je public_441b87
        lea ebx, ds:[ebx]
        public_441a60 : nop
        mov al, byte ptr ds : [edx+9]
        test al, al
        lea ecx, ds:[edx+8]
        jne public_441a87
        mov eax, dword ptr ds : [ecx+0x30]
        cmp eax, 6
        jne public_441a76
        mov edi, ecx
        jmp public_441a87
        public_441a76 : nop
        cmp eax, 5
        je public_441a85
        cmp eax, 7
        je public_441a85
        cmp eax, 8
        jne public_441a87
        public_441a85 : nop
        mov esi, ecx
        public_441a87 : nop
        mov edx, dword ptr ds : [edx]
        cmp edx, ebx
        jne public_441a60
        test edi, edi
        je public_441b87
        test esi, esi
        je public_441b87
        mov al, byte ptr ss : [esp+0x1C]
        test al, al
        je public_441b1f
        mov al, byte ptr ds : [esi+0x20]
        test al, al
        je public_441ac3
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        lea edx, ds:[esi+0x24]
        push edx
        mov byte ptr ds : [esi+0x20], 0
        mov eax, dword ptr ds : [ecx]
        push 6
        call dword ptr ds : [eax+0xA8]
        public_441ac3 : nop
        mov ecx, dword ptr ds : [edi+0x18]
        push 0
        push 0
        mov byte ptr ds : [edi], 0
        mov eax, dword ptr ds : [ecx]
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ds : [ecx]
        push 7
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x18]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x18]
        mov byte ptr ds : [esi], 1
        jmp public_441b79
        public_441b1f : nop
        mov ecx, dword ptr ds : [esi+0x18]
        push 0
        push 0
        mov byte ptr ds : [esi], 0
        mov eax, dword ptr ds : [ecx]
        push 2
        call dword ptr ds : [eax+0xA8]
        mov ecx, dword ptr ds : [edi+0x18]
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov edx, dword ptr ds : [ecx]
        push 7
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [esi+0x18]
        mov edx, dword ptr ds : [ecx]
        push 0
        lea eax, ss:[esp+0x10]
        push eax
        push 6
        call dword ptr ds : [edx+0xA8]
        mov ecx, dword ptr ds : [edi+0x18]
        mov byte ptr ds : [edi], 1
        public_441b79 : nop
        mov edx, dword ptr ds : [ecx]
        push 0
        push 1
        push 2
        call dword ptr ds : [edx+0xA8]
        public_441b87 : nop
        pop edi
        pop esi
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x441a40)
    }
}

#undef public_441a60
#undef public_441a76
#undef public_441a85
#undef public_441a87
#undef public_441ac3
#undef public_441b1f
#undef public_441b79
#undef public_441b87
