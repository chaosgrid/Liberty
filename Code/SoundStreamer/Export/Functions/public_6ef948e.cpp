#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef948e);
CLANG_FORWARD_PROC_SYMBOL(public_6efa79a);

#define public_6ef94ac _public_6ef94ac
#define public_6ef94d1 _public_6ef94d1
#define public_6ef94da _public_6ef94da
#define public_6ef94fa _public_6ef94fa
#define public_6ef94fe _public_6ef94fe

PROC_DECLARE(0x6ef948e, internal_6ef948e, public_6ef948e);
extern "C" NAKED register_t __cdecl internal_6ef948e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push ecx
        mov eax, dword ptr ss : [ebp+8]
        lea ecx, ds:[eax+1]
        cmp ecx, 0x100
        ja public_6ef94ac
        mov ecx, dword ptr ds : [public_6f0061c]
        movzx eax, word ptr ds : [ecx+eax*2]
        jmp public_6ef94fe
        public_6ef94ac : nop
        mov ecx, eax
        push esi
        mov esi, dword ptr ds : [public_6f0061c]
        sar ecx, 8
        movzx edx, cl
        test byte ptr ds : [esi+edx*2+1], 0x80
        pop esi
        je public_6ef94d1
        and byte ptr ss : [ebp-2], 0
        mov byte ptr ss : [ebp-4], cl
        mov byte ptr ss : [ebp-3], al
        push 2
        jmp public_6ef94da
        public_6ef94d1 : nop
        and byte ptr ss : [ebp-3], 0
        mov byte ptr ss : [ebp-4], al
        push 1
        public_6ef94da : nop
        pop eax
        lea ecx, ss:[ebp+0xA]
        push 1
        push 0
        push 0
        push ecx
        push eax
        lea eax, ss:[ebp-4]
        push eax
        push 1
        call public_6efa79a
        add esp, 0x1C
        test eax, eax
        jne public_6ef94fa
        leave 
        ret 
        public_6ef94fa : nop
        movzx eax, word ptr ss : [ebp+0xA]
        public_6ef94fe : nop
        and eax, dword ptr ss : [ebp+0xC]
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef948e)
    }
}

#undef public_6ef94ac
#undef public_6ef94d1
#undef public_6ef94da
#undef public_6ef94fa
#undef public_6ef94fe
