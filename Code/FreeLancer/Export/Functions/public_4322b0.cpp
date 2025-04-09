#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4322b0);
CLANG_FORWARD_PROC_SYMBOL(public_433380);
CLANG_FORWARD_PROC_SYMBOL(public_433d50);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_43231a _public_43231a
#define public_432338 _public_432338
#define public_432360 _public_432360
#define public_43236b _public_43236b
#define public_432380 _public_432380
#define public_43238c _public_43238c
#define public_432398 _public_432398

PROC_DECLARE(0x4322b0, internal_4322b0, public_4322b0);
extern "C" NAKED register_t __cdecl internal_4322b0()
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
        mov al, byte ptr ss : [ebp+0x25]
        test al, al
        jne public_432338
        mov al, byte ptr ss : [ebp+0x24]
        push edi
        push 0x28
        mov byte ptr ss : [esp+0x14], al
        call public_5b7e84
        mov ecx, dword ptr ss : [esp+0x18]
        mov dl, byte ptr ss : [esp+0x14]
        mov edi, eax
        lea eax, ss:[ebp+0xC]
        mov dword ptr ds : [edi+4], ecx
        push eax
        lea ecx, ds:[edi+0xC]
        push ecx
        mov byte ptr ds : [edi+0x24], dl
        mov byte ptr ds : [edi+0x25], 0
        call public_433d50
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi], edx
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [edi+8], eax
        mov eax, dword ptr ds : [esi+8]
        add esp, 0xC
        cmp ebx, eax
        jne public_43231a
        mov ebx, edi
        public_43231a : nop
        mov ecx, dword ptr ss : [ebp]
        push edi
        push ecx
        mov ecx, esi
        call public_433380
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ss : [ebp+8]
        push edi
        push edx
        mov ecx, esi
        call public_433380
        mov dword ptr ds : [edi+8], eax
        pop edi
        public_432338 : nop
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [ecx+0x10]
        mov ecx, dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x10], edx
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        cmp eax, ecx
        je public_432398
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        jne public_43236b
        mov edi, edi
        public_432360 : nop
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x25]
        test bl, bl
        je public_432360
        public_43236b : nop
        mov dword ptr ds : [edx], eax
        mov esi, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x25]
        test dl, dl
        jne public_43238c
        lea ecx, ds:[ecx]
        public_432380 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx+8]
        mov dl, byte ptr ds : [eax+0x25]
        test dl, dl
        je public_432380
        public_43238c : nop
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        public_432398 : nop
        mov dword ptr ds : [edx], edx
        mov esi, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x4322b0)
    }
}

#undef public_43231a
#undef public_432338
#undef public_432360
#undef public_43236b
#undef public_432380
#undef public_43238c
#undef public_432398
