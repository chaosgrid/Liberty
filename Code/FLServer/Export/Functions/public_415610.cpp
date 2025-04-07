#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415610);

#define public_415625 _public_415625
#define public_415634 _public_415634
#define public_415640 _public_415640
#define public_41564a _public_41564a
#define public_41566c _public_41566c
#define public_415673 _public_415673

PROC_DECLARE(0x415610, internal_415610, public_415610);
extern "C" NAKED register_t __cdecl internal_415610()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ss : [esp+8]
        push ebp
        push esi
        push edi
        mov edi, ecx
        cmp dword ptr ds : [edi+8], ebx
        jae public_415625
        call dword ptr ds : [public_41b8d0]
        public_415625 : nop
        mov eax, dword ptr ds : [edi+8]
        mov esi, dword ptr ss : [esp+0x18]
        sub eax, ebx
        cmp eax, esi
        jae public_415634
        mov esi, eax
        public_415634 : nop
        mov ebp, dword ptr ss : [esp+0x20]
        cmp esi, ebp
        mov ecx, esi
        jb public_415640
        mov ecx, ebp
        public_415640 : nop
        mov eax, dword ptr ds : [edi+4]
        test eax, eax
        je public_41564a
        lea eax, ds:[eax+ebx*2]
        public_41564a : nop
        push ecx
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push eax
        call dword ptr ds : [public_41b8fc]
        add esp, 0xC
        test eax, eax
        jne public_415673
        cmp esi, ebp
        jae public_41566c
        pop edi
        pop esi
        pop ebp
        or eax, 0xFFFFFFFF
        pop ebx
        ret 0x10
        public_41566c : nop
        xor eax, eax
        cmp esi, ebp
        setne al
        public_415673 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x415610)
    }
}

#undef public_415625
#undef public_415634
#undef public_415640
#undef public_41564a
#undef public_41566c
#undef public_415673
