#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_627d680);
CLANG_FORWARD_PROC_SYMBOL(public_629a1f0);

#define public_6297692 _public_6297692
#define public_62976c0 _public_62976c0

PROC_DECLARE(0x6297670, internal_6297670, public_6297670);
extern "C" NAKED register_t __cdecl internal_6297670()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi+0x1FC]
        lea esi, ds:[edi+0x1F4]
        or ebp, 0xFFFFFFFF
        cmp eax, ebp
        je public_6297692
        push esi
        call public_627d680
        add esp, 4
        public_6297692 : nop
        xor ebx, ebx
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebp
        mov byte ptr ds : [esi+0xC], 1
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x18], bl
        mov eax, dword ptr ds : [edi+0x218]
        cmp eax, ebp
        lea esi, ds:[edi+0x210]
        je public_62976c0
        push esi
        call public_627d680
        add esp, 4
        public_62976c0 : nop
        mov ecx, edi
        pop edi
        mov dword ptr ds : [esi+4], ebx
        mov dword ptr ds : [esi+8], ebp
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov byte ptr ds : [esi+0x18], bl
        mov byte ptr ds : [esi+0xC], 1
        pop esi
        pop ebp
        pop ebx
        jmp public_629a1f0
        UNREACHABLE_TRAP(0x6297670)
    }
}

#undef public_6297692
#undef public_62976c0
