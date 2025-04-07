#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7010);
CLANG_FORWARD_PROC_SYMBOL(public_5b7030);
CLANG_FORWARD_PROC_SYMBOL(public_5b7050);

#define public_5b7071 _public_5b7071
#define public_5b70a5 _public_5b70a5
#define public_5b70c8 _public_5b70c8

PROC_DECLARE(0x5b7050, internal_5b7050, public_5b7050);
extern "C" NAKED register_t __cdecl internal_5b7050()
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
        call public_5b7030
        mov edi, dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ss : [esp+0x28]
        mov ebp, dword ptr ss : [esp+0x20]
        add esp, 4
        xor esi, esi
        public_5b7071 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov ebx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        jne public_5b70a5
        xor ecx, ecx
        xor ebx, ebx
        mov cl, byte ptr ds : [eax+0x48]
        test edi, edi
        setne bl
        cmp ebx, ecx
        jne public_5b70a5
        mov ecx, dword ptr ds : [eax+8]
        cmp ebp, ecx
        jne public_5b70a5
        mov ebx, dword ptr ss : [esp+0x20]
        cmp ebx, dword ptr ds : [eax+0x18]
        jne public_5b70a5
        cmp edx, ecx
        jne public_5b70a5
        cmp edi, dword ptr ds : [eax+0x38]
        je public_5b70c8
        public_5b70a5 : nop
        inc esi
        add eax, 0x4C
        cmp esi, 9
        jl public_5b7071
        push 0
        call public_5b7010
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
        public_5b70c8 : nop
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
        UNREACHABLE_TRAP(0x5b7050)
    }
}

#undef public_5b7071
#undef public_5b70a5
#undef public_5b70c8
