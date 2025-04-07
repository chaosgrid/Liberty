#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f450a0);

#define public_6f450af _public_6f450af
#define public_6f450b1 _public_6f450b1
#define public_6f45111 _public_6f45111
#define public_6f45138 _public_6f45138

PROC_DECLARE(0x6f450a0, internal_6f450a0, public_6f450a0);
extern "C" NAKED register_t __cdecl internal_6f450a0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        test ebx, ebx
        push esi
        push edi
        je public_6f450af
        lea eax, ds:[ebx+0x28]
        jmp public_6f450b1
        public_6f450af : nop
        xor eax, eax
        public_6f450b1 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        mov esi, ebp
        push eax
        rep movsd
        call public_6f438c0
        mov dword ptr ds : [ebx+0x28], 6
        mov eax, dword ptr ss : [ebp]
        add esp, 0x30
        cmp eax, 6
        jne public_6f45111
        mov eax, dword ptr ss : [ebp+0x2C]
        mov dword ptr ds : [ebx+0x54], eax
        mov ecx, dword ptr ss : [ebp+0x30]
        mov dword ptr ds : [ebx+0x58], ecx
        mov edx, dword ptr ss : [ebp+0x34]
        mov dword ptr ds : [ebx+0x5C], edx
        lea eax, ss:[ebp+0x38]
        mov edx, dword ptr ds : [eax]
        lea ecx, ds:[ebx+0x60]
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx+8], eax
        mov ecx, dword ptr ss : [ebp+0x44]
        mov dword ptr ds : [ebx+0x6C], ecx
        mov edx, dword ptr ss : [ebp+0x48]
        mov dword ptr ds : [ebx+0x70], edx
        jmp public_6f45138
        public_6f45111 : nop
        xor eax, eax
        mov ecx, 0x3F800000
        mov dword ptr ds : [ebx+0x54], eax
        mov dword ptr ds : [ebx+0x58], ecx
        mov dword ptr ds : [ebx+0x5C], ecx
        mov dword ptr ds : [ebx+0x68], eax
        mov dword ptr ds : [ebx+0x64], eax
        mov dword ptr ds : [ebx+0x60], eax
        mov dword ptr ds : [ebx+0x6C], 1
        mov dword ptr ds : [ebx+0x70], 5
        public_6f45138 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ecx, dword ptr ds : [ebx+0x28]
        mov edx, dword ptr ds : [ebx+0x40]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0x10], ecx
        mov ecx, dword ptr ds : [ebx+0x48]
        add edx, eax
        mov eax, dword ptr ds : [ebx+0x44]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x1C], edx
        mov dword ptr ds : [ebx+0x14], eax
        mov dword ptr ds : [ebx+0x18], ecx
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f450a0)
    }
}

#undef public_6f450af
#undef public_6f450b1
#undef public_6f45111
#undef public_6f45138
