#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4215b0);
CLANG_FORWARD_PROC_SYMBOL(public_435dd0);
CLANG_FORWARD_PROC_SYMBOL(public_437020);
CLANG_FORWARD_PROC_SYMBOL(public_43ad50);
CLANG_FORWARD_PROC_SYMBOL(public_449c90);
CLANG_FORWARD_PROC_SYMBOL(public_453a40);
CLANG_FORWARD_PROC_SYMBOL(public_454e80);
CLANG_FORWARD_PROC_SYMBOL(public_454eb0);
CLANG_FORWARD_PROC_SYMBOL(public_454f30);
CLANG_FORWARD_PROC_SYMBOL(public_454f80);
CLANG_FORWARD_PROC_SYMBOL(public_456540);

#define public_435de5 _public_435de5
#define public_435df7 _public_435df7
#define public_435e80 _public_435e80
#define public_435e9e _public_435e9e
#define public_435eac _public_435eac
#define public_435ef9 _public_435ef9
#define public_435f13 _public_435f13
#define public_435f46 _public_435f46
#define public_435fb1 _public_435fb1
#define public_435fb3 _public_435fb3
#define public_435fbd _public_435fbd

PROC_DECLARE(0x435dd0, internal_435dd0, public_435dd0);
extern "C" NAKED register_t __cdecl internal_435dd0()
{
    __asm
    {
        sub esp, 0x40
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x50]
        xor ebp, ebp
        xor eax, eax
        cmp esi, ebp
        push edi
        je public_435de5
        mov eax, dword ptr ds : [esi+0x38]
        public_435de5 : nop
        mov ecx, dword ptr ss : [esp+0x58]
        cmp ecx, ebp
        mov dword ptr ss : [esp+0xC], ebp
        je public_435df7
        mov ecx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0xC], ecx
        public_435df7 : nop
        push eax
        mov ecx, offset public_668708
        call public_43ad50
        mov edx, dword ptr ss : [esp+0x5C]
        push edx
        mov ecx, eax
        call public_437020
        cmp eax, ebp
        je public_435fbd
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebp
        je public_435fbd
        push ebp
        push esi
        mov ecx, offset public_66d2d0
        call public_456540
        mov esi, eax
        cmp esi, ebp
        je public_435fbd
        mov dword ptr ss : [esp+0x14], 0
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x10], 0
        mov eax, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x18], 0
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], ecx
        push ebx
        lea ecx, ss:[esp+0x2C]
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x28], edx
        call public_4215b0
        cmp dword ptr ds : [edi+0x21C], ebp
        jle public_435eac
        lea ebx, ds:[edi+0x19C]
        nop 
        public_435e80 : nop
        mov eax, dword ptr ds : [ebx-0x80]
        test eax, eax
        je public_435e9e
        cmp byte ptr ds : [eax], 0
        je public_435e9e
        mov edx, dword ptr ds : [ebx]
        push 0
        lea ecx, ss:[esp+0x24]
        push ecx
        push edx
        push eax
        mov ecx, esi
        call public_454eb0
        public_435e9e : nop
        mov eax, dword ptr ds : [edi+0x21C]
        inc ebp
        add ebx, 4
        cmp ebp, eax
        jl public_435e80
        public_435eac : nop
        mov edx, dword ptr ds : [edi+0x228]
        lea eax, ds:[edi+0x244]
        push eax
        mov eax, dword ptr ds : [edi+0x224]
        lea ecx, ds:[edi+0x22C]
        push ecx
        mov ecx, dword ptr ds : [edi+0x220]
        push edx
        push eax
        push ecx
        mov ecx, esi
        call public_454f30
        mov al, byte ptr ds : [edi+0x14]
        test al, al
        je public_435ef9
        mov edx, dword ptr ss : [esp+0x54]
        push 0
        push edx
        lea ecx, ds:[esi+0x114]
        mov dword ptr ss : [esp+0x64], 1
        call public_453a40
        jmp public_435f46
        public_435ef9 : nop
        mov eax, dword ptr ds : [edi+0x118]
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x5C], 2
        jle public_435f46
        lea ebp, ds:[edi+0x98]
        public_435f13 : nop
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ss : [ebp-0x80]
        mov dword ptr ss : [esp+0x60], ecx
        mov ecx, dword ptr ss : [esp+0x58]
        push eax
        call public_449c90
        mov edx, dword ptr ss : [esp+0x60]
        push edx
        push eax
        lea ecx, ds:[esi+0x114]
        call public_453a40
        mov eax, dword ptr ds : [edi+0x118]
        inc ebx
        add ebp, 4
        cmp ebx, eax
        jl public_435f13
        public_435f46 : nop
        mov eax, dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ds : [esi], eax
        mov byte ptr ds : [esi+6], 1
        mov cl, byte ptr ds : [edi+8]
        mov byte ptr ds : [esi+8], cl
        push edx
        mov ecx, esi
        call public_454e80
        mov ecx, dword ptr ss : [esp+0x64]
        mov edx, dword ptr ss : [esp+0x68]
        xor eax, eax
        mov dword ptr ds : [esi+0x10], eax
        mov dword ptr ds : [esi+0x18], ecx
        mov dword ptr ds : [esi+0x20], eax
        mov byte ptr ds : [esi+0xA], 1
        mov byte ptr ds : [esi+0xB], 1
        mov dword ptr ds : [esi+0x1C], edx
        mov eax, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [esi+0x28], eax
        mov cl, byte ptr ds : [edi+0xA]
        mov eax, dword ptr ss : [esp+0x54]
        mov byte ptr ds : [esi+0x15], cl
        mov edx, dword ptr ds : [edi+0x25C]
        mov dword ptr ds : [esi+0x24], edx
        mov eax, dword ptr ds : [eax+0x300]
        xor cl, cl
        cmp eax, 2
        pop ebx
        je public_435fb1
        cmp eax, 3
        je public_435fb1
        cmp eax, 4
        jne public_435fb3
        public_435fb1 : nop
        mov cl, 1
        public_435fb3 : nop
        mov byte ptr ds : [esi+0x16], cl
        mov ecx, esi
        call public_454f80
        public_435fbd : nop
        pop edi
        pop esi
        pop ebp
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x435dd0)
    }
}

#undef public_435de5
#undef public_435df7
#undef public_435e80
#undef public_435e9e
#undef public_435eac
#undef public_435ef9
#undef public_435f13
#undef public_435f46
#undef public_435fb1
#undef public_435fb3
#undef public_435fbd
