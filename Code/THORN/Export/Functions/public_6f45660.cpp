#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f438c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f45660);

#define public_6f4566f _public_6f4566f
#define public_6f45671 _public_6f45671
#define public_6f456b0 _public_6f456b0
#define public_6f456b7 _public_6f456b7

PROC_DECLARE(0x6f45660, internal_6f45660, public_6f45660);
extern "C" NAKED register_t __cdecl internal_6f45660()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        test ebx, ebx
        push esi
        push edi
        je public_6f4566f
        lea eax, ds:[ebx+0x28]
        jmp public_6f45671
        public_6f4566f : nop
        xor eax, eax
        public_6f45671 : nop
        mov ebp, dword ptr ss : [esp+0x14]
        sub esp, 0x2C
        mov edi, esp
        mov ecx, 0xB
        mov esi, ebp
        push eax
        rep movsd
        call public_6f438c0
        mov edx, 4
        mov dword ptr ds : [ebx+0x28], edx
        mov eax, dword ptr ss : [ebp]
        add esp, 0x30
        cmp eax, edx
        jne public_6f456b0
        mov eax, dword ptr ss : [ebp+0x2C]
        lea esi, ss:[ebp+0x30]
        lea edi, ds:[ebx+0x58]
        mov ecx, 0x24
        mov dword ptr ds : [ebx+0x54], eax
        rep movsd
        jmp public_6f456b7
        public_6f456b0 : nop
        mov dword ptr ds : [ebx+0x54], 0
        public_6f456b7 : nop
        mov eax, dword ptr ds : [ebx+0x2C]
        mov ecx, dword ptr ds : [ebx+0x40]
        pop edi
        mov dword ptr ds : [ebx+8], eax
        mov dword ptr ds : [ebx+0x10], edx
        mov edx, dword ptr ds : [ebx+0x44]
        add ecx, eax
        mov eax, dword ptr ds : [ebx+0x48]
        pop esi
        pop ebp
        mov dword ptr ds : [ebx+0x1C], ecx
        mov dword ptr ds : [ebx+0x14], edx
        mov dword ptr ds : [ebx+0x18], eax
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f45660)
    }
}

#undef public_6f4566f
#undef public_6f45671
#undef public_6f456b0
#undef public_6f456b7
