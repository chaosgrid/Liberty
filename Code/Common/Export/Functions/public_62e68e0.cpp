#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e68e0);
CLANG_FORWARD_PROC_SYMBOL(public_62ed730);

#define public_62e6917 _public_62e6917
#define public_62e6937 _public_62e6937
#define public_62e693c _public_62e693c

PROC_DECLARE(0x62e68e0, internal_62e68e0, public_62e68e0);
extern "C" NAKED register_t __cdecl internal_62e68e0()
{
    __asm
    {
        mov edx, ecx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx+0x10], ecx
        mov eax, dword ptr ds : [edx+0x38]
        add eax, 8
        mov dword ptr ds : [edx+0x34], ecx
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_62e693c
        add eax, 0xFFFFFFF8
        test eax, eax
        je public_62e693c
        test ecx, ecx
        je public_62e693c
        push ebx
        mov byte ptr ds : [edx+0x50], 0
        mov ebx, dword ptr ds : [edx+0x44]
        push ebp
        mov ebp, dword ptr ds : [edx+0x48]
        mov eax, ebp
        cmp eax, ebp
        je public_62e6937
        push esi
        push edi
        public_62e6917 : nop
        mov esi, eax
        mov edi, ebx
        add eax, 0x88
        mov ecx, 0x22
        add ebx, 0x88
        cmp eax, ebp
        rep movsd
        jne public_62e6917
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        public_62e6937 : nop
        pop ebp
        mov dword ptr ds : [edx+0x48], ebx
        pop ebx
        public_62e693c : nop
        mov dword ptr ss : [esp+4], ecx
        lea ecx, ds:[edx+0x142C]
        jmp public_62ed730
        UNREACHABLE_TRAP(0x62e68e0)
    }
}

#undef public_62e6917
#undef public_62e6937
#undef public_62e693c
