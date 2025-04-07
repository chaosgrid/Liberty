#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8910);
CLANG_FORWARD_PROC_SYMBOL(public_6f7c1f0);

#define public_6f7c210 _public_6f7c210
#define public_6f7c232 _public_6f7c232
#define public_6f7c240 _public_6f7c240
#define public_6f7c256 _public_6f7c256

PROC_DECLARE(0x6f7c1f0, internal_6f7c1f0, public_6f7c1f0);
extern "C" NAKED register_t __cdecl internal_6f7c1f0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push ebx
        mov ebx, dword ptr ds : [ecx+8]
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        cmp edi, ebx
        mov dword ptr ss : [esp+0xC], ecx
        mov esi, eax
        je public_6f7c232
        push ebp
        mov ebp, edi
        sub ebp, eax
        mov edi, edi
        public_6f7c210 : nop
        push edi
        mov ecx, esi
        call public_6ef8910
        mov eax, dword ptr ds : [esi+ebp+0x10]
        mov dword ptr ds : [esi+0x10], eax
        add edi, 0x14
        add esi, 0x14
        cmp edi, ebx
        jne public_6f7c210
        mov ecx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x18]
        pop ebp
        public_6f7c232 : nop
        mov ebx, dword ptr ds : [ecx+8]
        cmp esi, ebx
        mov edi, esi
        je public_6f7c256
        nop 
        lea esp, ss:[esp]
        public_6f7c240 : nop
        mov ecx, edi
        call public_6eec8d0
        add edi, 0x14
        cmp edi, ebx
        jne public_6f7c240
        mov ecx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0x14]
        public_6f7c256 : nop
        pop edi
        mov dword ptr ds : [ecx+8], esi
        pop esi
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6f7c1f0)
    }
}

#undef public_6f7c210
#undef public_6f7c232
#undef public_6f7c240
#undef public_6f7c256
