#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b347e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b37190 _public_6b37190
#define public_6b371ac _public_6b371ac
#define public_6b371b7 _public_6b371b7
#define public_6b371bf _public_6b371bf
#define public_6b371f1 _public_6b371f1
#define public_6b3720d _public_6b3720d
#define public_6b37218 _public_6b37218
#define public_6b37220 _public_6b37220
#define public_6b3725a _public_6b3725a

PROC_DECLARE(0x6b37150, internal_6b37150, public_6b37150);
extern "C" NAKED register_t __cdecl internal_6b37150()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp]
        push eax
        push 0x1B
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [ecx+8]
        push 1
        call public_6b3b480
        test eax, eax
        jne public_6b3725a
        mov ecx, dword ptr ss : [esp]
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        push esi
        mov esi, dword ptr ss : [ebp]
        test esi, esi
        push edi
        lea ebx, ds:[ecx+0x20]
        mov edi, 6
        je public_6b371bf
        nop 
        lea esp, ss:[esp]
        public_6b37190 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b371ac
        xor edx, edx
        cmp eax, 0x4E
        sete dl
        dec edx
        and edx, 0xFFFFFFF0
        add edx, 0x17
        mov eax, edx
        jmp public_6b371b7
        public_6b371ac : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b371b7 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6b37190
        public_6b371bf : nop
        push edi
        mov dword ptr ds : [ebx], edi
        call public_6b6a134
        mov ecx, dword ptr ds : [ebx]
        add esp, 4
        push ecx
        mov ecx, ebp
        mov ebp, dword ptr ds : [public_6b6b090]
        push eax
        mov dword ptr ds : [ebx+4], eax
        call ebp
        mov eax, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ds : [eax]
        test esi, esi
        mov edx, dword ptr ss : [esp+0x10]
        lea ebx, ds:[edx+0x28]
        mov edi, 6
        je public_6b37220
        public_6b371f1 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b3720d
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6b37218
        public_6b3720d : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b37218 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6b371f1
        public_6b37220 : nop
        push edi
        mov dword ptr ds : [ebx], edi
        call public_6b6a134
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x28]
        add esp, 4
        push edx
        push eax
        mov dword ptr ds : [ebx+4], eax
        call ebp
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [eax+0x30], ecx
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        push eax
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6b3725a : nop
        add esp, 8
        ret 0x10
        UNREACHABLE_TRAP(0x6b37150)
    }
}

#undef public_6b37190
#undef public_6b371ac
#undef public_6b371b7
#undef public_6b371bf
#undef public_6b371f1
#undef public_6b3720d
#undef public_6b37218
#undef public_6b37220
#undef public_6b3725a
