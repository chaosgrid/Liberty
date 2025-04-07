#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b347e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b36a60 _public_6b36a60
#define public_6b36a7c _public_6b36a7c
#define public_6b36a87 _public_6b36a87
#define public_6b36a8f _public_6b36a8f
#define public_6b36acc _public_6b36acc

PROC_DECLARE(0x6b36a20, internal_6b36a20, public_6b36a20);
extern "C" NAKED register_t __cdecl internal_6b36a20()
{
    __asm
    {
        sub esp, 8
        lea eax, ss:[esp]
        push eax
        push 0x45
        mov dword ptr ss : [esp+0xC], ecx
        mov ecx, dword ptr ds : [ecx+8]
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b36acc
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
        je public_6b36a8f
        nop 
        lea esp, ss:[esp]
        public_6b36a60 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b36a7c
        xor edx, edx
        cmp eax, 0x4E
        sete dl
        dec edx
        and edx, 0xFFFFFFF0
        add edx, 0x17
        mov eax, edx
        jmp public_6b36a87
        public_6b36a7c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b36a87 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6b36a60
        public_6b36a8f : nop
        push edi
        mov dword ptr ds : [ebx], edi
        call public_6b6a134
        mov ecx, dword ptr ds : [ebx]
        add esp, 4
        push ecx
        push eax
        mov ecx, ebp
        mov dword ptr ds : [ebx+4], eax
        call dword ptr ds : [public_6b6b090]
        mov edx, dword ptr ss : [ebp+0x18]
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+0x28], edx
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx]
        push eax
        mov eax, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6b36acc : nop
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x6b36a20)
    }
}

#undef public_6b36a60
#undef public_6b36a7c
#undef public_6b36a87
#undef public_6b36a8f
#undef public_6b36acc
