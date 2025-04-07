#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eaf9c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1050);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1f30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eafa2a _public_6eafa2a
#define public_6eafa48 _public_6eafa48
#define public_6eafa70 _public_6eafa70
#define public_6eafa7b _public_6eafa7b
#define public_6eafa90 _public_6eafa90
#define public_6eafa9c _public_6eafa9c
#define public_6eafaa8 _public_6eafaa8

PROC_DECLARE(0x6eaf9c0, internal_6eaf9c0, public_6eaf9c0);
extern "C" NAKED register_t __cdecl internal_6eaf9c0()
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
        mov al, byte ptr ss : [ebp+0x35]
        test al, al
        jne public_6eafa48
        mov al, byte ptr ss : [ebp+0x34]
        push edi
        push 0x38
        mov byte ptr ss : [esp+0x14], al
        call public_6fa912a
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x34], dl
        mov byte ptr ds : [edi+0x35], 0
        call public_6eb1f30
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_6eafa2a
        mov ebx, edi
        public_6eafa2a : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_6eb1050
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_6eb1050
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_6eafa48 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_6eafaa8
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        jne public_6eafa7b
        mov edi, edi
        public_6eafa70 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x35]
        test bl, bl
        je public_6eafa70
        public_6eafa7b : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x35]
        test dl, dl
        jne public_6eafa9c
        lea ecx, ds:[ecx]
        public_6eafa90 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x35]
        test dl, dl
        je public_6eafa90
        public_6eafa9c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_6eafaa8 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x6eaf9c0)
    }
}

#undef public_6eafa2a
#undef public_6eafa48
#undef public_6eafa70
#undef public_6eafa7b
#undef public_6eafa90
#undef public_6eafa9c
#undef public_6eafaa8
