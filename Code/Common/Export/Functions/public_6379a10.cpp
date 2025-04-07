#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6343f80);
CLANG_FORWARD_PROC_SYMBOL(public_6379a10);
CLANG_FORWARD_PROC_SYMBOL(public_6379b00);

#define public_6379a50 _public_6379a50
#define public_6379a96 _public_6379a96
#define public_6379ab7 _public_6379ab7
#define public_6379af2 _public_6379af2

PROC_DECLARE(0x6379a10, internal_6379a10, public_6379a10);
extern "C" NAKED register_t __cdecl internal_6379a10()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        push edi
        xor ebx, ebx
        mov dword ptr ds : [esi+0x30], ebx
        mov dword ptr ds : [esi+0x34], ebx
        xor eax, eax
        mov ecx, 0x14
        mov edi, esi
        rep stosd
        mov edi, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [esi], edi
        mov eax, dword ptr ds : [edi]
        push eax
        push 0x18
        mov dword ptr ds : [esi+0x3C], eax
        call public_6343f80
        mov dword ptr ds : [esi+0x38], eax
        mov eax, dword ptr ds : [esi+0x3C]
        add esp, 8
        cmp eax, ebx
        jle public_6379a96
        xor edx, edx
        mov dword ptr ss : [esp+0x18], ebx
        public_6379a50 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ss : [esp+0x18]
        fld dword ptr ds : [eax+ecx+4]
        mov ebp, dword ptr ds : [eax+ecx+8]
        fld dword ptr ds : [eax+ecx]
        add eax, ecx
        mov ecx, dword ptr ds : [esi+0x38]
        add ecx, edx
        mov eax, ebp
        fstp dword ptr ds : [ecx]
        mov dword ptr ds : [ecx+8], eax
        fstp dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [esi+0x38]
        mov dword ptr ss : [esp+0x10], ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx+edx+0x10], esi
        mov eax, dword ptr ds : [esi+0x3C]
        inc ebx
        add ebp, 0x10
        add edx, 0x18
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], ebp
        jl public_6379a50
        xor ebx, ebx
        public_6379a96 : nop
        mov eax, dword ptr ds : [edi+0x10]
        push eax
        push 0xC
        mov dword ptr ds : [esi+0x44], eax
        call public_6343f80
        mov dword ptr ds : [esi+0x40], eax
        mov eax, dword ptr ds : [esi+0x44]
        add esp, 8
        cmp eax, ebx
        jle public_6379af2
        mov dword ptr ss : [esp+0x18], ebx
        xor ebp, ebp
        public_6379ab7 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov edx, ebp
        add edx, ecx
        mov ecx, dword ptr ss : [esp+0x18]
        push esi
        push edx
        add ecx, dword ptr ds : [esi+0x40]
        call public_6379b00
        mov ecx, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [esi+0x44]
        inc ebx
        add ecx, 0xC
        add ebp, 0x20
        cmp ebx, eax
        mov dword ptr ss : [esp+0x18], ecx
        jl public_6379ab7
        pop edi
        mov dword ptr ds : [esi], 0
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        public_6379af2 : nop
        pop edi
        mov dword ptr ds : [esi], ebx
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x6379a10)
    }
}

#undef public_6379a50
#undef public_6379a96
#undef public_6379ab7
#undef public_6379af2
