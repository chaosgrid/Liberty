#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7a4c);
CLANG_FORWARD_PROC_SYMBOL(public_65d7b16);
CLANG_FORWARD_PROC_SYMBOL(public_65d8535);
CLANG_FORWARD_PROC_SYMBOL(public_65d8f61);

#define public_65d7a71 _public_65d7a71
#define public_65d7a74 _public_65d7a74
#define public_65d7a88 _public_65d7a88

PROC_DECLARE(0x65d7a4c, internal_65d7a4c, public_65d7a4c);
extern "C" NAKED register_t __cdecl internal_65d7a4c()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        call public_65d8f61
        mov esi, eax
        cmp dword ptr ds : [esi+0x38], 0
        jne public_65d7a71
        push 0x1A
        call public_65d8535
        mov dword ptr ds : [esi+0x38], eax
        pop ecx
        test eax, eax
        mov eax, offset public_65e60e8
        je public_65d7a74
        public_65d7a71 : nop
        mov eax, dword ptr ds : [esi+0x38]
        public_65d7a74 : nop
        mov esi, dword ptr ss : [esp+0x14]
        mov ebx, eax
        mov ecx, dword ptr ds : [esi+0x18]
        lea edi, ds:[ecx+ecx*2]
        mov ecx, dword ptr ds : [esi+0x10]
        lea ebp, ds:[ecx+ecx*2]
        xor ecx, ecx
        public_65d7a88 : nop
        mov dl, byte ptr ds : [edi+ecx+public_65e1758]
        inc ecx
        mov byte ptr ds : [eax], dl
        mov dl, byte ptr ds : [ecx+ebp+public_65e176f]
        mov byte ptr ds : [eax+4], dl
        inc eax
        cmp ecx, 3
        jl public_65d7a88
        mov byte ptr ds : [eax], 0x20
        add eax, 4
        mov byte ptr ds : [eax], 0x20
        push dword ptr ds : [esi+0xC]
        inc eax
        push eax
        call public_65d7b16
        mov byte ptr ds : [eax], 0x20
        push dword ptr ds : [esi+8]
        inc eax
        push eax
        call public_65d7b16
        mov byte ptr ds : [eax], 0x3A
        push dword ptr ds : [esi+4]
        inc eax
        push eax
        call public_65d7b16
        mov byte ptr ds : [eax], 0x3A
        push dword ptr ds : [esi]
        inc eax
        push eax
        call public_65d7b16
        mov ecx, eax
        push 0x64
        pop edi
        mov byte ptr ds : [ecx], 0x20
        mov eax, dword ptr ds : [esi+0x14]
        cdq 
        idiv edi
        add eax, 0x13
        inc ecx
        push eax
        push ecx
        call public_65d7b16
        mov ecx, eax
        mov eax, dword ptr ds : [esi+0x14]
        push edi
        cdq 
        pop esi
        idiv esi
        push edx
        push ecx
        call public_65d7b16
        add esp, 0x30
        mov byte ptr ds : [eax], 0xA
        and byte ptr ds : [eax+1], 0
        mov eax, ebx
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65d7a4c)
    }
}

#undef public_65d7a71
#undef public_65d7a74
#undef public_65d7a88
