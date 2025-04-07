#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed0b60);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0ba0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0bc0);

#define public_6ed0be1 _public_6ed0be1
#define public_6ed0c15 _public_6ed0c15
#define public_6ed0c38 _public_6ed0c38

PROC_DECLARE(0x6ed0bc0, internal_6ed0bc0, public_6ed0bc0);
extern "C" NAKED register_t __cdecl internal_6ed0bc0()
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
        call public_6ed0ba0
        mov edi, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x20]
        add esp, 4
        xor esi, esi
        public_6ed0be1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov ebx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        jne public_6ed0c15
        xor ecx, ecx
        xor ebx, ebx
        mov cl, byte ptr ds : [eax+0x48]
        test edi, edi
        setne bl
        cmp ebx, ecx
        jne public_6ed0c15
        mov ecx, dword ptr ds : [eax+8]
        cmp ebp, ecx
        jne public_6ed0c15
        mov ebx, dword ptr ss : [esp+0x20]
        cmp ebx, dword ptr ds : [eax+0x18]
        jne public_6ed0c15
        cmp edx, ecx
        jne public_6ed0c15
        cmp edi, dword ptr ds : [eax+0x38]
        je public_6ed0c38
        public_6ed0c15 : nop
        inc esi
        add eax, 0x4C
        cmp esi, 9
        jl public_6ed0be1
        push 0
        call public_6ed0b60
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
        public_6ed0c38 : nop
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
        UNREACHABLE_TRAP(0x6ed0bc0)
    }
}

#undef public_6ed0be1
#undef public_6ed0c15
#undef public_6ed0c38
