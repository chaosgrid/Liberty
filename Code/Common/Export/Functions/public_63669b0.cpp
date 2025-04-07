#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63666f0);
CLANG_FORWARD_PROC_SYMBOL(public_63669b0);
CLANG_FORWARD_PROC_SYMBOL(public_6366d20);
CLANG_FORWARD_PROC_SYMBOL(public_6367520);

#define public_6366a73 _public_6366a73
#define public_6366a97 _public_6366a97

PROC_DECLARE(0x63669b0, internal_63669b0, public_63669b0);
extern "C" NAKED register_t __cdecl internal_63669b0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x14]
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x24]
        push edi
        lea eax, ds:[ebx+3]
        and eax, 0xFFFFFFFC
        push ecx
        mov dword ptr ds : [esi+0x3C], ebx
        mov ecx, esi
        mov dword ptr ds : [esi+0x40], eax
        call public_63666f0
        xor edi, edi
        mov dword ptr ds : [esi+0x44], edi
        mov dword ptr ds : [esi+0x4C], edi
        mov dword ptr ds : [esi], 0x33D6BF95
        mov dword ptr ds : [esi+4], 0x33D6BF95
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_63a58a0]
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0xB4], ebx
        mov dword ptr ds : [esi+0xBC], ebp
        fstp dword ptr ds : [esi+8]
        mov dword ptr ds : [esi+0x68], edi
        mov dword ptr ds : [esi+0xC], 0x461C4000
        mov edx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [esi+0x90], edx
        mov dword ptr ds : [esi+0x94], edi
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [public_63a5400]
        fstp dword ptr ds : [esi+0x6C]
        mov eax, dword ptr ds : [esi+0x88]
        mov dword ptr ds : [esi+0x18], eax
        mov ecx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [esi+0x98], ecx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+0x40]
        mov dword ptr ds : [esi+0xC0], eax
        mov eax, dword ptr ds : [esi]
        mov dword ptr ds : [esi+0xE0], edx
        mov edx, dword ptr ds : [esi+0x28]
        mov dword ptr ds : [esi+0xB0], eax
        xor eax, eax
        cmp ecx, edi
        mov dword ptr ds : [esi+0xC4], edx
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi+0xB8], ecx
        jle public_6366a97
        mov ebx, dword ptr ss : [esp+0x1C]
        sub ebx, edx
        public_6366a73 : nop
        mov ecx, dword ptr ds : [esi+0x34]
        mov dword ptr ds : [ecx+eax*4], eax
        mov ecx, dword ptr ds : [esi+0x38]
        mov dword ptr ds : [ecx+eax*4], eax
        lea ecx, ds:[edx+eax*4]
        mov dword ptr ds : [ebx+ecx], edi
        fld dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [esi+0x24]
        fchs 
        fstp dword ptr ds : [ecx+eax*4]
        mov ecx, dword ptr ds : [esi+0x40]
        inc eax
        cmp eax, ecx
        jl public_6366a73
        public_6366a97 : nop
        mov eax, dword ptr ss : [esp+0x24]
        mov dword ptr ds : [esi+0x14], edx
        mov edx, dword ptr ss : [esp+0x1C]
        push eax
        mov ecx, esi
        mov dword ptr ds : [esi+0x10], ebp
        mov dword ptr ds : [esi+0x1C], edx
        mov dword ptr ds : [esi+0x58], edi
        mov dword ptr ds : [esi+0x5C], edi
        mov dword ptr ds : [esi+0x60], edi
        mov dword ptr ds : [esi+0x64], edi
        mov dword ptr ds : [esi+0x54], edi
        mov dword ptr ds : [esi+0x50], edi
        call public_6367520
        mov ecx, esi
        call public_6366d20
        mov dword ptr ds : [esi+0xC4], edi
        mov dword ptr ds : [esi+0xC0], edi
        mov dword ptr ds : [esi+0xBC], edi
        mov dword ptr ds : [esi+0xAC], edi
        mov dword ptr ds : [esi+0xA8], edi
        mov dword ptr ds : [esi+0xA4], edi
        mov dword ptr ds : [esi+0xF4], edi
        mov dword ptr ds : [esi+0xF0], edi
        mov dword ptr ds : [esi+0xEC], edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x18
        UNREACHABLE_TRAP(0x63669b0)
    }
}

#undef public_6366a73
#undef public_6366a97
