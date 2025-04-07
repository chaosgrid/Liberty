#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efa740);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6efa757 _public_6efa757
#define public_6efa75f _public_6efa75f
#define public_6efa765 _public_6efa765
#define public_6efa785 _public_6efa785
#define public_6efa793 _public_6efa793
#define public_6efa79e _public_6efa79e

PROC_DECLARE(0x6efa740, internal_6efa740, public_6efa740);
extern "C" NAKED register_t __cdecl internal_6efa740()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        mov al, byte ptr ds : [esi]
        push edi
        mov edi, ecx
        mov byte ptr ds : [edi], al
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        jne public_6efa757
        xor eax, eax
        jmp public_6efa75f
        public_6efa757 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_6efa75f : nop
        test eax, eax
        jge public_6efa765
        xor eax, eax
        public_6efa765 : nop
        lea ecx, ds:[eax*8]
        push ecx
        call public_6fa912a
        mov dword ptr ds : [edi+4], eax
        mov edx, dword ptr ds : [esi+8]
        mov ecx, eax
        mov eax, dword ptr ds : [esi+4]
        add esp, 4
        cmp eax, edx
        je public_6efa79e
        push ebx
        public_6efa785 : nop
        test ecx, ecx
        je public_6efa793
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], ebx
        mov ebx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], ebx
        public_6efa793 : nop
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6efa785
        pop ebx
        public_6efa79e : nop
        mov dword ptr ds : [edi+8], ecx
        mov dword ptr ds : [edi+0xC], ecx
        mov edx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [edi+0x10], edx
        mov eax, edi
        pop edi
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6efa740)
    }
}

#undef public_6efa757
#undef public_6efa75f
#undef public_6efa765
#undef public_6efa785
#undef public_6efa793
#undef public_6efa79e
