#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e77e0);

#define public_62e77f6 _public_62e77f6
#define public_62e7812 _public_62e7812

PROC_DECLARE(0x62e77e0, internal_62e77e0, public_62e77e0);
extern "C" NAKED register_t __cdecl internal_62e77e0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebp, ecx
        mov byte ptr ss : [ebp+0x1C], 0
        mov ebx, dword ptr ss : [ebp+0x14]
        mov edx, dword ptr ss : [ebp+0x10]
        mov eax, ebx
        cmp eax, ebx
        je public_62e7812
        push esi
        push edi
        public_62e77f6 : nop
        mov esi, eax
        mov edi, edx
        add eax, 0x88
        mov ecx, 0x22
        add edx, 0x88
        cmp eax, ebx
        rep movsd
        jne public_62e77f6
        pop edi
        pop esi
        public_62e7812 : nop
        mov dword ptr ss : [ebp+0x14], edx
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62e77e0)
    }
}

#undef public_62e77f6
#undef public_62e7812
