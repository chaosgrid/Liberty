#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d77a0);

#define public_65d5888 _public_65d5888
#define public_65d5893 _public_65d5893
#define public_65d58a0 _public_65d58a0
#define public_65d58bb _public_65d58bb
#define public_65d58d2 _public_65d58d2
#define public_65d58d8 _public_65d58d8
#define public_65d58da _public_65d58da
#define public_65d58ee _public_65d58ee

PROC_DECLARE(0x65d5860, internal_65d5860, public_65d5860);
extern "C" NAKED register_t __cdecl internal_65d5860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push ebp
        push esi
        mov ecx, dword ptr ds : [eax+0x100C]
        lea edx, ds:[eax+8]
        push edi
        mov eax, dword ptr ds : [edx+0x1000]
        lea edi, ds:[ecx+edx]
        cmp ecx, eax
        jg public_65d5888
        sub eax, ecx
        xor ebx, ebx
        mov esi, eax
        xor ebp, ebp
        jmp public_65d5893
        public_65d5888 : nop
        mov esi, 0x1000
        mov ebx, edx
        sub esi, ecx
        mov ebp, eax
        public_65d5893 : nop
        test esi, esi
        jne public_65d58a0
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_65d58a0 : nop
        push esi
        push 0xA
        push edi
        call public_65d77a0
        add esp, 0xC
        test eax, eax
        jne public_65d58d8
        test ebp, ebp
        jne public_65d58bb
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_65d58bb : nop
        push ebp
        push 0xA
        push ebx
        call public_65d77a0
        add esp, 0xC
        test eax, eax
        jne public_65d58d2
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_65d58d2 : nop
        sub eax, ebx
        add eax, esi
        jmp public_65d58da
        public_65d58d8 : nop
        sub eax, edi
        public_65d58da : nop
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x1C]
        cmp esi, eax
        jle public_65d58ee
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0xC
        public_65d58ee : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ebx, dword ptr ss : [esp+0x18]
        lea edi, ds:[esi+1]
        mov ecx, dword ptr ds : [eax]
        push edi
        push ebx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov eax, edi
        mov byte ptr ds : [esi+ebx+1], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65d5860)
    }
}

#undef public_65d5888
#undef public_65d5893
#undef public_65d58a0
#undef public_65d58bb
#undef public_65d58d2
#undef public_65d58d8
#undef public_65d58da
#undef public_65d58ee
