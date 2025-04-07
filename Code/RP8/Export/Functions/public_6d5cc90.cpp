#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5cc30);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc70);
CLANG_FORWARD_PROC_SYMBOL(public_6d5cc90);

#define public_6d5ccb1 _public_6d5ccb1
#define public_6d5cce5 _public_6d5cce5
#define public_6d5cd08 _public_6d5cd08

PROC_DECLARE(0x6d5cc90, internal_6d5cc90, public_6d5cc90);
extern "C" NAKED register_t __cdecl internal_6d5cc90()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        push 0
        mov dword ptr ss : [esp+0x14], ecx
        call public_6d5cc70
        mov edi, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x20]
        add esp, 4
        xor esi, esi
        public_6d5ccb1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov ebx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        jne public_6d5cce5
        xor ecx, ecx
        xor ebx, ebx
        mov cl, byte ptr ds : [eax+0x48]
        test edi, edi
        setne bl
        cmp ebx, ecx
        jne public_6d5cce5
        mov ecx, dword ptr ds : [eax+8]
        cmp ebp, ecx
        jne public_6d5cce5
        mov ebx, dword ptr ss : [esp+0x20]
        cmp ebx, dword ptr ds : [eax+0x18]
        jne public_6d5cce5
        cmp edx, ecx
        jne public_6d5cce5
        cmp edi, dword ptr ds : [eax+0x38]
        je public_6d5cd08
        public_6d5cce5 : nop
        inc esi
        add eax, 0x4C
        cmp esi, 9
        jl public_6d5ccb1
        push 0
        call public_6d5cc30
        mov ecx, dword ptr ss : [esp+0x14]
        add esp, 4
        pop edi
        pop esi
        mov dword ptr ds : [ecx], eax
        pop ebp
        xor al, al
        pop ebx
        pop ecx
        ret 0x14
        public_6d5cd08 : nop
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        mov dword ptr ds : [eax], edx
        pop ebp
        mov al, 1
        pop ebx
        pop ecx
        ret 0x14
        UNREACHABLE_TRAP(0x6d5cc90)
    }
}

#undef public_6d5ccb1
#undef public_6d5cce5
#undef public_6d5cd08
