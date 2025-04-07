#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb82c);
CLANG_FORWARD_PROC_SYMBOL(public_6efba4c);

#define public_6efba74 _public_6efba74
#define public_6efba7f _public_6efba7f
#define public_6efba86 _public_6efba86
#define public_6efbab1 _public_6efbab1
#define public_6efbabe _public_6efbabe
#define public_6efbac5 _public_6efbac5

PROC_DECLARE(0x6efba4c, internal_6efba4c, public_6efba4c);
extern "C" NAKED register_t __cdecl internal_6efba4c()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        push ebx
        mov ebx, offset public_6f00dd0
        xor ecx, ecx
        sub ebx, 0x60
        cmp dword ptr ss : [ebp+0xC], ecx
        je public_6efbac5
        jge public_6efba74
        mov eax, dword ptr ss : [ebp+0xC]
        mov ebx, offset public_6f00f30
        neg eax
        mov dword ptr ss : [ebp+0xC], eax
        sub ebx, 0x60
        public_6efba74 : nop
        cmp dword ptr ss : [ebp+0x10], ecx
        jne public_6efba7f
        mov eax, dword ptr ss : [ebp+8]
        mov word ptr ds : [eax], cx
        public_6efba7f : nop
        cmp dword ptr ss : [ebp+0xC], ecx
        je public_6efbac5
        push esi
        push edi
        public_6efba86 : nop
        mov eax, dword ptr ss : [ebp+0xC]
        add ebx, 0x54
        sar dword ptr ss : [ebp+0xC], 3
        and eax, 7
        cmp eax, ecx
        je public_6efbabe
        lea eax, ds:[eax+eax*2]
        cmp word ptr ds : [ebx+eax*4], 0x8000
        lea esi, ds:[ebx+eax*4]
        jb public_6efbab1
        lea edi, ss:[ebp-0xC]
        movsd 
        movsd 
        movsd 
        dec dword ptr ss : [ebp-0xA]
        lea esi, ss:[ebp-0xC]
        public_6efbab1 : nop
        push esi
        push dword ptr ss : [ebp+8]
        call public_6efb82c
        pop ecx
        pop ecx
        xor ecx, ecx
        public_6efbabe : nop
        cmp dword ptr ss : [ebp+0xC], ecx
        jne public_6efba86
        pop edi
        pop esi
        public_6efbac5 : nop
        pop ebx
        leave 
        ret 
        UNREACHABLE_TRAP(0x6efba4c)
    }
}

#undef public_6efba74
#undef public_6efba7f
#undef public_6efba86
#undef public_6efbab1
#undef public_6efbabe
#undef public_6efbac5
