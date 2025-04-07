#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f56db0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57370);
CLANG_FORWARD_PROC_SYMBOL(public_6f57600);

#define public_6f57619 _public_6f57619
#define public_6f57639 _public_6f57639
#define public_6f57641 _public_6f57641
#define public_6f57644 _public_6f57644
#define public_6f57659 _public_6f57659
#define public_6f5765b _public_6f5765b

PROC_DECLARE(0x6f57600, internal_6f57600, public_6f57600);
extern "C" NAKED register_t __cdecl internal_6f57600()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        mov ebp, dword ptr ss : [esp+0x18]
        mov eax, dword ptr ss : [ebp]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        push edi
        xor edi, edi
        cmp esi, eax
        jae public_6f57641
        public_6f57619 : nop
        mov eax, dword ptr ss : [esp+0x18]
        xor ecx, ecx
        mov cl, byte ptr ds : [esi]
        push ebx
        push eax
        push ecx
        call public_6f56db0
        add esp, 0xC
        test eax, eax
        je public_6f57639
        mov eax, dword ptr ss : [ebp]
        inc edi
        inc esi
        cmp esi, eax
        jb public_6f57619
        public_6f57639 : nop
        test edi, edi
        jl public_6f57659
        mov esi, dword ptr ss : [esp+0x14]
        public_6f57641 : nop
        inc ebx
        add esi, edi
        public_6f57644 : nop
        push ebp
        push ebx
        push esi
        call public_6f57370
        add esp, 0xC
        test eax, eax
        jne public_6f5765b
        dec edi
        dec esi
        test edi, edi
        jge public_6f57644
        public_6f57659 : nop
        xor eax, eax
        public_6f5765b : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6f57600)
    }
}

#undef public_6f57619
#undef public_6f57639
#undef public_6f57641
#undef public_6f57644
#undef public_6f57659
#undef public_6f5765b
