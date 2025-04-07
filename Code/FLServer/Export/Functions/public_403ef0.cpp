#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403ef0);
CLANG_FORWARD_PROC_SYMBOL(public_4049b0);
CLANG_FORWARD_PROC_SYMBOL(public_4058a0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_403f5a _public_403f5a
#define public_403f78 _public_403f78
#define public_403fa0 _public_403fa0
#define public_403fab _public_403fab
#define public_403fc0 _public_403fc0
#define public_403fcc _public_403fcc
#define public_403fd8 _public_403fd8

PROC_DECLARE(0x403ef0, internal_403ef0, public_403ef0);
extern "C" NAKED register_t __cdecl internal_403ef0()
{
    __asm
    {
        sub esp, 8
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [esi+8]
        mov dword ptr ss : [esp+0x10], eax
        mov al, byte ptr ss : [ebp+0x11]
        test al, al
        jne public_403f78
        mov al, byte ptr ss : [ebp+0x10]
        push edi
        push 0x14
        mov byte ptr ss : [esp+0x14], al
        call public_418a9e
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x10], dl
        mov byte ptr ds : [edi+0x11], 0
        call public_4058a0
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_403f5a
        mov ebx, edi
        public_403f5a : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_4049b0
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_4049b0
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_403f78 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_403fd8
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        jne public_403fab
        mov edi, edi
        public_403fa0 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x11]
        test bl, bl
        je public_403fa0
        public_403fab : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x11]
        test dl, dl
        jne public_403fcc
        lea ecx, ds:[ecx]
        public_403fc0 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x11]
        test dl, dl
        je public_403fc0
        public_403fcc : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_403fd8 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x403ef0)
    }
}

#undef public_403f5a
#undef public_403f78
#undef public_403fa0
#undef public_403fab
#undef public_403fc0
#undef public_403fcc
#undef public_403fd8
