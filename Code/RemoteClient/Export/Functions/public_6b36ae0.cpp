#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b347e0);
CLANG_FORWARD_PROC_SYMBOL(public_6b3b480);
CLANG_FORWARD_PROC_SYMBOL(public_6b44e20);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b36b30 _public_6b36b30
#define public_6b36b4c _public_6b36b4c
#define public_6b36b57 _public_6b36b57
#define public_6b36b5f _public_6b36b5f
#define public_6b36b90 _public_6b36b90
#define public_6b36bac _public_6b36bac
#define public_6b36bb7 _public_6b36bb7
#define public_6b36bbf _public_6b36bbf
#define public_6b36bf3 _public_6b36bf3
#define public_6b36c00 _public_6b36c00
#define public_6b36c16 _public_6b36c16
#define public_6b36c30 _public_6b36c30
#define public_6b36c4c _public_6b36c4c
#define public_6b36c57 _public_6b36c57
#define public_6b36c5f _public_6b36c5f
#define public_6b36ca8 _public_6b36ca8
#define public_6b36cc1 _public_6b36cc1

PROC_DECLARE(0x6b36ae0, internal_6b36ae0, public_6b36ae0);
extern "C" NAKED register_t __cdecl internal_6b36ae0()
{
    __asm
    {
        sub esp, 0x10
        lea eax, ss:[esp]
        push eax
        push 0x35
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, dword ptr ds : [ecx+8]
        push 2
        call public_6b3b480
        test eax, eax
        jne public_6b36cc1
        mov edx, dword ptr ss : [esp]
        push ebx
        mov ebx, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [ebx]
        mov dword ptr ds : [edx+0x20], ecx
        movzx eax, byte ptr ds : [ebx+0x3C]
        mov ecx, dword ptr ss : [esp+4]
        push ebp
        push esi
        mov dword ptr ds : [ecx+0x24], eax
        mov esi, dword ptr ds : [ebx+0xC]
        test esi, esi
        mov edx, dword ptr ss : [esp+0xC]
        push edi
        lea ebp, ds:[edx+0x28]
        mov edi, 6
        je public_6b36b5f
        nop 
        public_6b36b30 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b36b4c
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6b36b57
        public_6b36b4c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b36b57 : nop
        mov esi, dword ptr ds : [esi]
        add edi, eax
        test esi, esi
        jne public_6b36b30
        public_6b36b5f : nop
        push edi
        mov dword ptr ss : [ebp], edi
        call public_6b6a134
        mov edx, dword ptr ss : [ebp]
        add esp, 4
        push edx
        push eax
        lea ecx, ds:[ebx+0xC]
        mov dword ptr ss : [ebp+4], eax
        call dword ptr ds : [public_6b6b090]
        mov esi, dword ptr ds : [ebx+0x24]
        test esi, esi
        mov eax, dword ptr ss : [esp+0x10]
        lea edi, ds:[eax+0x30]
        mov ebp, 6
        je public_6b36bbf
        nop 
        public_6b36b90 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b36bac
        xor ecx, ecx
        cmp eax, 0x4E
        sete cl
        dec ecx
        and ecx, 0xFFFFFFF0
        add ecx, 0x17
        mov eax, ecx
        jmp public_6b36bb7
        public_6b36bac : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b36bb7 : nop
        mov esi, dword ptr ds : [esi]
        add ebp, eax
        test esi, esi
        jne public_6b36b90
        public_6b36bbf : nop
        push ebp
        mov dword ptr ds : [edi], ebp
        call public_6b6a134
        mov edx, dword ptr ds : [edi]
        add esp, 4
        push edx
        push eax
        lea ecx, ds:[ebx+0x24]
        mov dword ptr ds : [edi+4], eax
        call dword ptr ds : [public_6b6b090]
        mov eax, dword ptr ds : [ebx+8]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ss : [esp+0x18], edi
        jbe public_6b36ca8
        xor esi, esi
        mov dword ptr ss : [esp+0x14], esi
        jmp public_6b36c00
        public_6b36bf3 : nop
        mov ebx, dword ptr ss : [esp+0x28]
        mov esi, dword ptr ss : [esp+0x14]
        xor edi, edi
        lea ecx, ds:[ecx]
        public_6b36c00 : nop
        push 0xC
        call public_6b6a134
        add esp, 4
        cmp eax, edi
        je public_6b36c16
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [eax+8], edi
        mov edi, eax
        public_6b36c16 : nop
        mov eax, dword ptr ds : [ebx+4]
        mov cl, byte ptr ds : [esi+eax+0x18]
        mov byte ptr ds : [edi], cl
        mov ebx, dword ptr ds : [ebx+4]
        add ebx, esi
        mov esi, dword ptr ds : [ebx]
        test esi, esi
        mov ebp, 6
        je public_6b36c5f
        nop 
        public_6b36c30 : nop
        movzx eax, word ptr ds : [esi+8]
        cmp eax, 0x21
        je public_6b36c4c
        xor edx, edx
        cmp eax, 0x4E
        sete dl
        dec edx
        and edx, 0xFFFFFFF0
        add edx, 0x17
        mov eax, edx
        jmp public_6b36c57
        public_6b36c4c : nop
        mov ecx, dword ptr ds : [esi+4]
        call public_6b347e0
        add eax, 3
        public_6b36c57 : nop
        mov esi, dword ptr ds : [esi]
        add ebp, eax
        test esi, esi
        jne public_6b36c30
        public_6b36c5f : nop
        push ebp
        mov dword ptr ds : [edi+4], ebp
        call public_6b6a134
        mov ecx, dword ptr ds : [edi+4]
        add esp, 4
        push ecx
        push eax
        mov ecx, ebx
        mov dword ptr ds : [edi+8], eax
        call dword ptr ds : [public_6b6b090]
        mov ecx, dword ptr ss : [esp+0x10]
        push edi
        call public_6b44e20
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x18]
        add edx, 0x1C
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ds : [edx+8]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x18], eax
        jb public_6b36bf3
        public_6b36ca8 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ss : [esp+0x28]
        mov edx, dword ptr ds : [edx]
        push edx
        call dword ptr ds : [eax+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6b36cc1 : nop
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6b36ae0)
    }
}

#undef public_6b36b30
#undef public_6b36b4c
#undef public_6b36b57
#undef public_6b36b5f
#undef public_6b36b90
#undef public_6b36bac
#undef public_6b36bb7
#undef public_6b36bbf
#undef public_6b36bf3
#undef public_6b36c00
#undef public_6b36c16
#undef public_6b36c30
#undef public_6b36c4c
#undef public_6b36c57
#undef public_6b36c5f
#undef public_6b36ca8
#undef public_6b36cc1
