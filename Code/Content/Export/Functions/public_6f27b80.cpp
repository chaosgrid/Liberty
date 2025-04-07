#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eea860);
CLANG_FORWARD_PROC_SYMBOL(public_6f49bc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57b00);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c60);
CLANG_FORWARD_PROC_SYMBOL(public_6f57c80);
CLANG_FORWARD_PROC_SYMBOL(public_6f73ac0);

#define public_6f27bb9 _public_6f27bb9
#define public_6f27bfd _public_6f27bfd
#define public_6f27c49 _public_6f27c49
#define public_6f27c64 _public_6f27c64
#define public_6f27c74 _public_6f27c74

PROC_DECLARE(0x6f27b80, internal_6f27b80, public_6f27b80);
extern "C" NAKED register_t __cdecl internal_6f27b80()
{
    __asm
    {
        sub esp, 0x38
        push ebx
        push ebp
        mov ebp, dword ptr ss : [esp+0x44]
        mov eax, dword ptr ss : [ebp]
        push esi
        mov dword ptr ss : [esp+0xC], ecx
        push edi
        mov ecx, ebp
        call dword ptr ds : [eax+4]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb4708
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x30
        mov bl, 1
        mov byte ptr ss : [esp+0x18], 0
        jb public_6f27bb9
        mov eax, 0x2F
        public_6f27bb9 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb4708
        lea edi, ss:[esp+0x18]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x18], 0
        mov ecx, ebp
        mov dword ptr ss : [esp+0x14], eax
        xor esi, esi
        call public_6eea860
        test eax, eax
        je public_6f27bfd
        mov ecx, dword ptr ss : [ebp+0x170]
        push ecx
        lea ecx, ss:[esp+0x18]
        push ecx
        mov ecx, eax
        call public_6f73ac0
        mov esi, eax
        public_6f27bfd : nop
        test esi, esi
        mov dword ptr ss : [esp+0x4C], esi
        je public_6f27c74
        push esi
        call dword ptr ds : [public_6fb34e8]
        add esp, 4
        cmp eax, 0xA
        jne public_6f27c49
        lea edx, ss:[esp+0x4C]
        push edx
        call public_6f49bc0
        mov eax, dword ptr ds : [eax+0x10]
        add esp, 4
        test eax, eax
        je public_6f27c49
        mov ecx, dword ptr ss : [ebp+0x154]
        cmp ecx, dword ptr ds : [eax+0x154]
        jne public_6f27c49
        mov ecx, ebp
        call public_6f57b00
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x38
        ret 4
        public_6f27c49 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [esi+0x114]
        test eax, eax
        jne public_6f27c64
        mov ecx, ebp
        call public_6f57c80
        mov dword ptr ds : [esi+0x114], eax
        public_6f27c64 : nop
        add esi, 0x10C
        push esi
        mov ecx, ebp
        call public_6f57c60
        mov bl, al
        public_6f27c74 : nop
        pop edi
        pop esi
        pop ebp
        mov al, bl
        pop ebx
        add esp, 0x38
        ret 4
        UNREACHABLE_TRAP(0x6f27b80)
    }
}

#undef public_6f27bb9
#undef public_6f27bfd
#undef public_6f27c49
#undef public_6f27c64
#undef public_6f27c74
