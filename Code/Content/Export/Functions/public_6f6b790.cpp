#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6b790);

#define public_6f6b79f _public_6f6b79f
#define public_6f6b7a7 _public_6f6b7a7
#define public_6f6b7c5 _public_6f6b7c5
#define public_6f6b7d0 _public_6f6b7d0
#define public_6f6b7f1 _public_6f6b7f1
#define public_6f6b82d _public_6f6b82d

PROC_DECLARE(0x6f6b790, internal_6f6b790, public_6f6b790);
extern "C" NAKED register_t __cdecl internal_6f6b790()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+8]
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0x18
        push ebx
        push ebp
        push esi
        push edi
        public_6f6b79f : nop
        mov ebx, dword ptr ss : [esp+0x38]
        mov edi, dword ptr ss : [esp+0x34]
        public_6f6b7a7 : nop
        mov ebp, eax
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, edi
        mov esi, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x24], ebp
        jb public_6f6b7c5
        ja public_6f6b7d0
        cmp esi, ebx
        setb cl
        test cl, cl
        je public_6f6b7d0
        public_6f6b7c5 : nop
        add eax, 0xC
        jmp public_6f6b7a7
        lea ebx, ds:[ebx]
        public_6f6b7d0 : nop
        sub edx, 0xC
        mov ebp, edx
        mov ecx, dword ptr ss : [ebp]
        cmp edi, ecx
        mov esi, dword ptr ss : [ebp+4]
        mov ebp, dword ptr ss : [ebp+8]
        mov dword ptr ss : [esp+0x24], ebp
        jb public_6f6b7d0
        ja public_6f6b7f1
        cmp ebx, esi
        setb cl
        test cl, cl
        jne public_6f6b7d0
        public_6f6b7f1 : nop
        cmp edx, eax
        jbe public_6f6b82d
        mov edi, eax
        mov ecx, dword ptr ds : [edi]
        mov esi, dword ptr ds : [edi+4]
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x18], edi
        mov edi, edx
        mov ebp, dword ptr ds : [edi]
        mov ebx, eax
        mov dword ptr ds : [ebx], ebp
        mov ebp, dword ptr ds : [edi+4]
        mov dword ptr ds : [ebx+4], ebp
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ds : [ebx+8], edi
        mov edi, edx
        mov dword ptr ds : [edi], ecx
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edi+4], esi
        mov dword ptr ds : [edi+8], ecx
        add eax, 0xC
        jmp public_6f6b79f
        public_6f6b82d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6f6b790)
    }
}

#undef public_6f6b79f
#undef public_6f6b7a7
#undef public_6f6b7c5
#undef public_6f6b7d0
#undef public_6f6b7f1
#undef public_6f6b82d
