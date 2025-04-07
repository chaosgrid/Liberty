#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63347c0);

#define public_63347d3 _public_63347d3
#define public_63347f1 _public_63347f1
#define public_63347fd _public_63347fd

PROC_DECLARE(0x63347c0, internal_63347c0, public_63347c0);
extern "C" NAKED register_t __cdecl internal_63347c0()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+4]
        push edi
        xor ebx, ebx
        xor edi, edi
        test eax, eax
        jle public_63347fd
        push ebp
        xor ebp, ebp
        public_63347d3 : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [ecx+edi*4]
        push eax
        push edx
        call dword ptr ds : [public_639902c]
        add esp, 8
        test eax, eax
        jne public_63347f1
        mov ebx, dword ptr ds : [esi+0xC]
        add ebx, ebp
        public_63347f1 : nop
        mov eax, dword ptr ds : [esi+4]
        inc edi
        add ebp, 0x48
        cmp edi, eax
        jl public_63347d3
        pop ebp
        public_63347fd : nop
        pop edi
        pop esi
        mov eax, ebx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x63347c0)
    }
}

#undef public_63347d3
#undef public_63347f1
#undef public_63347fd
