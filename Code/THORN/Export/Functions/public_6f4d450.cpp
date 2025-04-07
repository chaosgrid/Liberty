#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f4d450);

#define public_6f4d46f _public_6f4d46f
#define public_6f4d4aa _public_6f4d4aa
#define public_6f4d4bb _public_6f4d4bb
#define public_6f4d4c0 _public_6f4d4c0

PROC_DECLARE(0x6f4d450, internal_6f4d450, public_6f4d450);
extern "C" NAKED register_t __cdecl internal_6f4d450()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        push ebx
        push esi
        call dword ptr ds : [public_6f5a0c8]
        add esp, 8
        test eax, eax
        jne public_6f4d4c0
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f4d46f : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, esi
        repne scasb
        not ecx
        dec ecx
        cmp ecx, ebp
        je public_6f4d4aa
        mov eax, dword ptr ss : [esp+0x20]
        cmp ecx, eax
        je public_6f4d4bb
        inc ecx
        add ebx, ecx
        mov edx, eax
        add esi, ecx
        sub edx, ecx
        push ebx
        push esi
        sub ebp, ecx
        mov dword ptr ss : [esp+0x28], edx
        call dword ptr ds : [public_6f5a0c8]
        add esp, 8
        test eax, eax
        je public_6f4d46f
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        public_6f4d4aa : nop
        mov edx, dword ptr ss : [esp+0x20]
        xor eax, eax
        cmp ecx, edx
        sete al
        pop edi
        pop esi
        pop ebp
        pop ebx
        dec eax
        ret 
        public_6f4d4bb : nop
        mov eax, 1
        public_6f4d4c0 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f4d450)
    }
}

#undef public_6f4d46f
#undef public_6f4d4aa
#undef public_6f4d4bb
#undef public_6f4d4c0
